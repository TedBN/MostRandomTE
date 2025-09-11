//
// Created by Ted on 11/05/2024
//

#ifndef MOSTRANDOM_LISTFUNCTIONS_H
#define MOSTRANDOM_LISTFUNCTIONS_H

#include <memory>
#include "ProgramDataTypes.h"

std::vector<std::string> getListOfSafehouseFreeRoamZones();
std::vector<std::string> getListOfCustomShopFreeRoamZones();
std::vector<std::string> getListOfCarLotFreeRoamZones();
std::vector<std::pair<RadiusTrigger, PositionMarker>> getFreeRoamZoneCoordinates();
std::vector<std::vector<RadiusTrigger>> getClusters();
std::vector<std::string> getListOfExistingPerformanceMarkersToDelete();
std::vector<std::string> getListOfExistingVisualMarkersToDelete();
std::vector<std::string> getListOfExistingRandomMarkersToDelete();
std::vector<MarkerTemplate> createImplementedPerformanceMarkerTemplates();
std::vector<MarkerTemplate> createImplementedVisualMarkerTemplates();
std::vector<MarkerTemplate> createImplementedRandomMarkerTemplates();
CashMarkerTemplate createRandomCashMarkerTemplate();
std::vector<UnimplementedMarker> createUnimplementedPerformanceMarkerTemplates();
std::vector<UnimplementedMarker> createUnimplementedVisualMarkerTemplates();
std::vector<std::string> getListOfExistingMilestonesToDelete();
std::vector<MilestoneTemplate> createImplementedMilestoneTemplates();
std::vector<UnimplementedMilestone> createUnimplementedMilestoneTemplates();
std::vector<Opponent> getListOfScriptedOpponents();
std::vector<Opponent> getListOfTierZeroOpponents();
std::vector<Opponent> getListOfTierOneOpponents();
std::vector<Opponent> getListOfTierTwoOpponents();
std::vector<Opponent> getListOfTierThreeOpponents();
std::vector<Opponent> getListOfTierFourOpponents();
std::array<std::string, 73> getListOfPresetCars();
std::array<std::string, 69> getListOfEngineSounds();
std::array<std::string, 46> getListOfCars();
std::array<std::string, 12> getListOfFMVs();
std::array<std::string, 43> getListOfMilestoneSpawnPoints();

std::vector<RaceBin> createRaceBins(const std::vector<Opponent>&, std::unique_ptr<int>, std::unique_ptr<int>,
        std::unique_ptr<int>, std::unique_ptr<int>, std::unique_ptr<int>, std::unique_ptr<int>, std::unique_ptr<int>,
        std::unique_ptr<int>, std::unique_ptr<int>, std::unique_ptr<int>, std::unique_ptr<int>, std::unique_ptr<int>,
        std::unique_ptr<int>, std::unique_ptr<int>, std::unique_ptr<int>);

void populateRacesCustomizable(std::unique_ptr<int>const &, std::unique_ptr<int> const&,
        std::unique_ptr<int> const&, std::unique_ptr<int> const&, std::unique_ptr<int> const&,
        std::unique_ptr<int> const&, std::unique_ptr<int> const&, std::unique_ptr<int> const&,
        std::unique_ptr<int> const&, std::unique_ptr<int> const&, std::unique_ptr<int> const&,
        std::unique_ptr<int> const&, std::unique_ptr<int> const&, std::unique_ptr<int> const&,
        std::unique_ptr<int> const&, std::unique_ptr<std::vector<Drag>> const&,
        std::unique_ptr<std::vector<Tollbooth>> const &, std::unique_ptr<std::vector<Circuit>> const&,
        std::unique_ptr<std::vector<Knockout>> const&, std::unique_ptr<std::vector<Sprint>> const&,
        std::unique_ptr<std::vector<Speedtrap>> const&, bool);

#endif //MOSTRANDOM_LISTFUNCTIONS_H
