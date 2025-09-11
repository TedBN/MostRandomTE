#include <memory>
#include <random>
#include <array>
#include <fstream>
#include <iostream>
#include <map>

#include "BossRaceMarkerFunctions.h"
#include "FreeRoamFunctions.h"
#include "ListFunctions.h"
#include "GeneralFunctions.h"
#include "NodeConversionFunctions.h"
#include "ProgramDataTypes.h"
#include "XoshiroCpp.hpp"

int main()
{
    //Start menu variables used to decide which races are added to the pool
    std::string answer;
    bool answerGiven = false;

    std::cout << "Welcome to the Track Expansion v0.8.1 randomizer!\n" << std::endl;
    std::cout << "Choose an option:" << std::endl;
    std::cout << "1: Easy install script" << std::endl;
    std::cout << "2: Custom install script" << std::endl;
    std::cout << "3: Instructions" << std::endl;
    std::cout << "4: Exit" << std::endl << std::endl;
    std::cout << ">> ";

    while ( !answerGiven )
    {
        std::cin >> answer;

        if ( answer == "1" || answer == "2" )
        {
            std::ofstream file;
            file.open("TERandomized.nfsms", std::ios_base::app);

            //These pointers for to be used for determining which race bin index vectors to use
            //and the size of WorldRaces, BossRaces and Children fields.
            std::unique_ptr<int> originalNumberOfSonnyRacesPtr(new int(3));
            std::unique_ptr<int> originalNumberOfTazRacesPtr(new int(6));
            std::unique_ptr<int> originalNumberOfVicRacesPtr(new int(7));
            std::unique_ptr<int> originalNumberOfIzzyRacesPtr(new int(7));
            std::unique_ptr<int> originalNumberOfBigLouRacesPtr(new int(8));
            std::unique_ptr<int> originalNumberOfBaronRacesPtr(new int(8));
            std::unique_ptr<int> originalNumberOfEarlRacesPtr(new int(8));
            std::unique_ptr<int> originalNumberOfJewelsRacesPtr(new int(7));
            std::unique_ptr<int> originalNumberOfKazeRacesPtr(new int(10));
            std::unique_ptr<int> originalNumberOfMingRacesPtr(new int(11));
            std::unique_ptr<int> originalNumberOfWebsterRacesPtr(new int(10));
            std::unique_ptr<int> originalNumberOfJVRacesPtr(new int(11));
            std::unique_ptr<int> originalNumberOfRonnieRacesPtr(new int(12));
            std::unique_ptr<int> originalNumberOfBullRacesPtr(new int(12));
            std::unique_ptr<int> originalNumberOfRazorRacesPtr(new int(11));

            //Pointers for the vectors containing races
            std::unique_ptr<std::vector<Circuit>> circuitRaces(new std::vector<Circuit>);
            std::unique_ptr<std::vector<Knockout>> lapKnockoutRaces(new std::vector<Knockout>);
            std::unique_ptr<std::vector<Sprint>> sprintRaces(new std::vector<Sprint>);
            std::unique_ptr<std::vector<Speedtrap>> speedtrapRaces(new std::vector<Speedtrap>);
            std::unique_ptr<std::vector<Drag>> dragRaces(new std::vector<Drag>);
            std::unique_ptr<std::vector<Tollbooth>> tollboothRaces(new std::vector<Tollbooth>);

            //Remaining lists are created here
            std::map<int, std::vector<Opponent>> opponentLists =
            {
                { -1, getListOfScriptedOpponents() },
                { 0, getListOfTierZeroOpponents() },
                { 1, getListOfTierOneOpponents() },
                { 2, getListOfTierTwoOpponents() },
                { 3, getListOfTierThreeOpponents() },
                { 4, getListOfTierFourOpponents() }
            };

            std::array<std::string, 73> presetCarList = getListOfPresetCars();
            std::array<std::string, 46> cars = getListOfCars();
            std::array<std::string, 69> engineSounds = getListOfEngineSounds();

            //Random number generator is created here. Distributions are created when the generator is used
            std::random_device randomDevice;
            XoshiroCpp::Xoshiro256PlusPlus xoshiroNumberGenerator(randomDevice());

            std::vector<FreeRoamZone> randomizedFreeRoamZones = generateRandomFreeRoamZones(xoshiroNumberGenerator);
            randomizedFreeRoamZones = setAvailability(randomizedFreeRoamZones);

            convertCollectorsEditionRaces(std::move(file));
            createSpeedtrapTemplate(std::move(file));
            updateLocalizationTag(std::move(file));

            //Marker setup
            std::vector<MarkerTemplate> performanceMarkerTemplates = setupMarkers(file,
                "performance marker node templates are created",
                createImplementedPerformanceMarkerTemplates(), createUnimplementedPerformanceMarkerTemplates());

            std::vector<MarkerTemplate> visualMarkerTemplates = setupMarkers(file,
                "visual marker node templates are created",
                createImplementedVisualMarkerTemplates(), createUnimplementedVisualMarkerTemplates());

            std::vector<MarkerTemplate> randomMarkerTemplates = setupMarkers(file,
                "random marker node templates are created", createImplementedRandomMarkerTemplates());

            std::vector<MilestoneTemplate> milestoneTemplates = setupMilestones(file,
                    "milestone node templates are created",
                    createImplementedMilestoneTemplates(), createUnimplementedMilestoneTemplates());

            CashMarkerTemplate cashMarkerTemplate = setupRandomCashMarker(file);

            deleteUnneededNodes(file, getListOfExistingPerformanceMarkersToDelete(),
                "performance marker nodes that are not needed from vanilla are deleted");

            deleteUnneededNodes(file, getListOfExistingVisualMarkersToDelete(),
                "visual marker nodes that are not needed from vanilla are deleted");

            deleteUnneededNodes(file, getListOfExistingRandomMarkersToDelete(),
                "random marker nodes that are not needed from vanilla are deleted");

            deleteUnneededNodes(file, getListOfExistingMilestonesToDelete(),
                "milestone nodes that are not needed from vanilla are deleted");

            if ( answer == "1" )
            {
                //Races are added first
                populateRacesCustomizable(originalNumberOfSonnyRacesPtr, originalNumberOfTazRacesPtr,
                 originalNumberOfVicRacesPtr, originalNumberOfIzzyRacesPtr, originalNumberOfBigLouRacesPtr,
                 originalNumberOfBaronRacesPtr, originalNumberOfEarlRacesPtr, originalNumberOfJewelsRacesPtr,
                 originalNumberOfKazeRacesPtr, originalNumberOfMingRacesPtr, originalNumberOfWebsterRacesPtr,
                 originalNumberOfJVRacesPtr, originalNumberOfRonnieRacesPtr, originalNumberOfBullRacesPtr,
                 originalNumberOfRazorRacesPtr, dragRaces, tollboothRaces, circuitRaces, lapKnockoutRaces, sprintRaces,
                 speedtrapRaces, true);

                answerGiven = true;
            }

            else if ( answer == "2" )
            {
                //Track expansion custom install option variables
                bool allTEKnockoutsConvertedToCircuits;
                bool allTESpeedtrapsConvertedToSprints;
                bool maximumTrafficDensity;
                bool copsOnAllTrackExpansionRaces;

                populateRacesCustomizable(originalNumberOfSonnyRacesPtr, originalNumberOfTazRacesPtr,
                 originalNumberOfVicRacesPtr, originalNumberOfIzzyRacesPtr, originalNumberOfBigLouRacesPtr,
                 originalNumberOfBaronRacesPtr, originalNumberOfEarlRacesPtr, originalNumberOfJewelsRacesPtr,
                 originalNumberOfKazeRacesPtr, originalNumberOfMingRacesPtr, originalNumberOfWebsterRacesPtr,
                 originalNumberOfJVRacesPtr, originalNumberOfRonnieRacesPtr, originalNumberOfBullRacesPtr,
                 originalNumberOfRazorRacesPtr, dragRaces, tollboothRaces, circuitRaces, lapKnockoutRaces, sprintRaces,
                 speedtrapRaces, false);

                //Questions are asked about Track Expansion settings when the mod was installed
                allTEKnockoutsConvertedToCircuits =
                        promptUser("\nTrack expansion knockouts converted to circuits? Y/N\n >> ");

                allTESpeedtrapsConvertedToSprints =
                        promptUser("\nTrack expansion speedtraps converted to sprints? Y/N\n >> ");

                maximumTrafficDensity =
                        promptUser("\nTrack expansion race traffic density set to maximum? Y/N\n >> ");

                copsOnAllTrackExpansionRaces =
                        promptUser("\nCops enabled on all track expansion races? Y/N\n >> ");

                answerGiven = true;
            }



            deleteSpeedtrapTemplate(file);

            file.close();

            return 0;
        }

        else if ( answer == "3" )
        {
            std::cout << "\nIf you used the easy install script from Track Expansion, use option 1 to" << std::endl;
            std::cout << "generate a script. There will be no prompts for the easy install." << std::endl;
            std::cout << std::endl;

            std::cout << "If you used the custom install of Track Expansion, use option 2 to" << std::endl;
            std::cout << "generate a script. You will be asked which track packages were installed," << std::endl;
            std::cout << "then what options were used. You will only be asked about extra tracks for a" << std::endl;
            std::cout << "boss if the answer to the base tracks was yes. All vanilla races will be" << std::endl;
            std::cout << "randomized, if any of the options for the Track Expansion tracks were enabled" << std::endl;
            std::cout << "they will take priority over the randomizer. If all the track packages and" << std::endl;
            std::cout << "options match the installation, the generated script will be compatible." << std::endl;
            std::cout << std::endl;

            std::cout << "The script will be created as TERandomized.nfsms. If a file with the same name" << std::endl;
            std::cout << "is in the same directory, this program will add to it. Make sure you have" << std::endl;
            std::cout << "moved out or deleted any old scripts before running the program. After the" << std::endl;
            std::cout << "program is finished running, import the generated script into vlted. There" << std::endl;
            std::cout << "should be no errors." << std::endl;
            std::cout << std::endl;

            std::cout << "It is highly recommended you use a different save file for each randomizer" << std::endl;
            std::cout << "script and back up the GLOBAL folder before applying a randomizer script." << std::endl;
            std::cout << "Avoid using save files for vanilla or other mods, they may become unusable." << std::endl;
            std::cout << "To restore your game, replace the randomized GLOBAL folder with the one you" << std::endl;
            std::cout << "backed up." << std::endl;
            std::cout << std::endl;

            std::cout << "Select another option >> ";
        }

        else if ( answer == "4" ) { return 0; }

        else { std::cout << "\nBad input. Try again >> "; }
    }
}
