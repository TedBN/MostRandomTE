//
// Created by Ted on 12/05/2024
//

/** Credit to Reputeless for the XoshiroCpp.hpp library, taken from
    https://github.com/Reputeless/Xoshiro-cpp and used under the MIT license.   */

#include <iostream>
#include <string>
#include <vector>
#include "ProgramDataTypes.h"
#include "GeneralFunctions.h"

bool promptUser(const std::string& promptText)
{
    /** Basic function that takes a prompt string to print and asks a question to the user.
      * Made to work with yes/no questions. Returns bool with answer.                           */

    //Variables for user input
    std::string answer;

    //Prompt text is printed to console
    std::cout << promptText;

    //Prompting continues until an answer is given or the console is closed
    while ( true )
    {
        std::cin >> answer;

        if ( answer == "Y" || answer == "y" ) { return true; }
        if ( answer == "N" || answer == "n" ) { return false; }

        std::cout << "\nBad input. Try again >> ";
    }
}

int refreshRaceIndex(const std::vector<Circuit>& currentRaces)
{ return static_cast<int>(currentRaces.size() - 1); }

int refreshRaceIndex(const std::vector<Knockout>& currentRaces)
{ return static_cast<int>(currentRaces.size() - 1); }

int refreshRaceIndex(const std::vector<Sprint>& currentRaces)
{ return static_cast<int>(currentRaces.size() - 1); }

int refreshRaceIndex(const std::vector<Speedtrap>& currentRaces)
{ return static_cast<int>(currentRaces.size() - 1); }

int refreshRaceIndex(const std::vector<Drag>& currentRaces)
{ return static_cast<int>(currentRaces.size() - 1); }

int refreshRaceIndex(const std::vector<Tollbooth>& currentRaces)
{ return static_cast<int>(currentRaces.size() - 1); }

Opponent searchForOpponent(const std::string& nodeName, const std::vector<Opponent>& opponents)
{
    for ( Opponent opponent : opponents )
    { if ( opponent.nodeName == nodeName ) { return opponent; } }

    return {};
}

MarkerType convertStringToMarkerTypeEnum(const std::string& nodeName)
{
    //Performance marker translations
    if ( nodeName == "race_bin_15/rewards/reward_brakes" ) { return PERFORMANCE_BRAKES; }
    if ( nodeName == "race_bin_14/rewards/reward_chassis" ) { return PERFORMANCE_CHASSIS; }
    if ( nodeName == "race_bin_13/rewards/reward_transmission1" ) { return PERFORMANCE_TRANSMISSION; }
    if ( nodeName == "race_bin_12/rewards/reward_induction1" ) { return PERFORMANCE_INDUCTION; }
    if ( nodeName == "race_bin_11/rewards/reward_tires1" ) { return PERFORMANCE_TIRES; }
    if ( nodeName == "race_bin_04/rewards/reward_engine1" ) { return PERFORMANCE_ENGINE; }
    if ( nodeName == "templates/rewards/reward_nos" ) { return PERFORMANCE_NOS; }

    return MARKER_UNSPECIFIED;
}
