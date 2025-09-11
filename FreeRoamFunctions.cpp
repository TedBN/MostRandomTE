//
// Created by Ted on 20/06/2024
//

#include <string>
#include <random>
#include <regex>
#include <utility>
#include "ListFunctions.h"
#include "FreeRoamFunctions.h"
#include "ProgramDataTypes.h"

std::vector<RadiusTrigger> getCluster(const std::vector<std::vector<RadiusTrigger>>& clusters,
    const RadiusTrigger& targetCoordinates)
{
    for ( std::vector cluster : clusters )
    {
        for ( int radiusTriggerIndex = 0; radiusTriggerIndex < static_cast<int>(cluster.size());
              radiusTriggerIndex++ )
        {
            if ( targetCoordinates == cluster[radiusTriggerIndex] )
            {
                cluster.erase(cluster.begin() + radiusTriggerIndex);
                return cluster;
            }
        }
    }

    return {};
}

std::vector<std::string> checkAvailableZones(const std::vector<std::string>& customShopZoneNodeNames,
    const std::vector<std::string>& safehouseZoneNodeNames, const std::vector<std::string>& carLotZoneNodeNames)
{
    std::vector<std::string> availableZones;

    if ( !customShopZoneNodeNames.empty() ) { availableZones.emplace_back("customShop"); }
    if ( !safehouseZoneNodeNames.empty() ) { availableZones.emplace_back("safehouse"); }
    if ( !carLotZoneNodeNames.empty() ) { availableZones.emplace_back("carLot"); }

    return availableZones;
}

std::vector<std::string> getZoneTypesInCluster(const std::vector<FreeRoamZone>& freeRoamZones,
    const RadiusTrigger& originZone)
{
    std::vector<std::string> zoneTypesInCluster;

    for ( FreeRoamZone freeRoamZone : freeRoamZones )
    {
        if ( std::ranges::find(freeRoamZone.adjacencies, originZone) != freeRoamZone.adjacencies.end() )
        {
            if ( std::ranges::find(zoneTypesInCluster, freeRoamZone.zoneType)
                 == zoneTypesInCluster.end() )
            { &zoneTypesInCluster.emplace_back(freeRoamZone.zoneType); }
        }
    }

    return zoneTypesInCluster;
}

std::string rollZoneType(std::vector<std::string> existingZoneTypesInCluster,
    const std::vector<std::string>& availableZones, XoshiroCpp::Xoshiro256PlusPlus randomNumberGenerator)
{
    std::uniform_int_distribution rerollChanceDistribution(0, 100);
    std::uniform_int_distribution zoneTypeIndexDistribution(0, static_cast<int>(availableZones.size() - 1));

    while ( true )
    {
        if ( std::string pickedZone = availableZones[zoneTypeIndexDistribution(randomNumberGenerator)];
            std::ranges::find(existingZoneTypesInCluster, pickedZone) != existingZoneTypesInCluster.end() )
        {
            if ( const int rolledNumber = rerollChanceDistribution(randomNumberGenerator); rolledNumber < 25 )
                { return pickedZone; }
        }

        else
        {
            if ( const int rolledNumber = rerollChanceDistribution(randomNumberGenerator); rolledNumber < 75 )
                { return pickedZone; }
        }
    }
}

std::vector<FreeRoamZone> generateRandomFreeRoamZones(XoshiroCpp::Xoshiro256PlusPlus randomNumberGenerator)
{
    //Initialize all data
    std::vector<std::string> safehouseZoneNodeNames = getListOfSafehouseFreeRoamZones();
    std::vector<std::string> customShopZoneNodeNames = getListOfCustomShopFreeRoamZones();
    std::vector<std::string> carLotZoneNodeNames = getListOfCarLotFreeRoamZones();

    std::vector<std::pair<RadiusTrigger, PositionMarker>> zoneCoordinates = getFreeRoamZoneCoordinates();
    const std::vector<std::vector<RadiusTrigger>> clusters = getClusters();

    int numberOfAvailableFreeRoamZones = static_cast<int>(safehouseZoneNodeNames.size() +
        static_cast<int>(customShopZoneNodeNames.size()) + static_cast<int>(carLotZoneNodeNames.size()));

    std::vector<FreeRoamZone> freeRoamZonesToRandomize;
    for ( int zoneIndex = 0; zoneIndex < numberOfAvailableFreeRoamZones; zoneIndex++ )
        { freeRoamZonesToRandomize.emplace_back(); }

    //Variables for running the main loop
    std::vector<int> safehouseIndexes;
    std::vector<int> carLotIndexes;

    for ( int zoneIndex = 0; zoneIndex < static_cast<int>(freeRoamZonesToRandomize.size()); zoneIndex++ )
    {
        std::uniform_int_distribution freeRoamZoneDistribution(0, numberOfAvailableFreeRoamZones - 1);
        const int pickedPair = freeRoamZoneDistribution(randomNumberGenerator);

        freeRoamZonesToRandomize[zoneIndex].zoneCoordinates = zoneCoordinates[pickedPair].first;
        freeRoamZonesToRandomize[zoneIndex].respawnCoordinates = zoneCoordinates[pickedPair].second;

        freeRoamZonesToRandomize[zoneIndex].adjacencies = getCluster
        (clusters, freeRoamZonesToRandomize[zoneIndex].zoneCoordinates);

        std::vector<std::string> availableZones = checkAvailableZones
        (customShopZoneNodeNames, safehouseZoneNodeNames, carLotZoneNodeNames);

        const std::vector<std::string> zoneTypesInCluster = getZoneTypesInCluster
        (freeRoamZonesToRandomize, freeRoamZonesToRandomize[zoneIndex].zoneCoordinates);

        freeRoamZonesToRandomize[zoneIndex].zoneType = rollZoneType
        (zoneTypesInCluster, availableZones, randomNumberGenerator);

        if ( freeRoamZonesToRandomize[zoneIndex].zoneType == "customShop" )
        {
            freeRoamZonesToRandomize[zoneIndex].nodeName = customShopZoneNodeNames.back();
            customShopZoneNodeNames.pop_back();
        }

        else if ( freeRoamZonesToRandomize[zoneIndex].zoneType == "safehouse" )
        {
            freeRoamZonesToRandomize[zoneIndex].nodeName = safehouseZoneNodeNames.back();
            safehouseZoneNodeNames.pop_back();
            safehouseIndexes.push_back(zoneIndex);
        }

        else if ( freeRoamZonesToRandomize[zoneIndex].zoneType == "carLot" )
        {
            freeRoamZonesToRandomize[zoneIndex].nodeName = carLotZoneNodeNames.back();
            carLotZoneNodeNames.pop_back();
            carLotIndexes.push_back(zoneIndex);
        }

        numberOfAvailableFreeRoamZones--;
        zoneCoordinates.erase(zoneCoordinates.begin() + pickedPair);
    }

    std::uniform_int_distribution prologueSafehouseIndexDistribution
    (0, static_cast<int>(safehouseIndexes.size()) - 1);

    freeRoamZonesToRandomize[safehouseIndexes[prologueSafehouseIndexDistribution(
        randomNumberGenerator)]].usedInPrologue = true;

    std::uniform_int_distribution prologueCarLotIndexDistribution
    (0, static_cast<int>(carLotIndexes.size()) - 1);

    freeRoamZonesToRandomize[carLotIndexes[prologueCarLotIndexDistribution(
        randomNumberGenerator)]].usedInPrologue = true;

    return freeRoamZonesToRandomize;
}

std::vector<FreeRoamZone> setAvailability(std::vector<FreeRoamZone> freeRoamZones)
{
    std::vector<FreeRoamZone> updatedFreeRoamZones = std::move(freeRoamZones);

    for ( FreeRoamZone freeRoamZone : updatedFreeRoamZones) { freeRoamZone.binIndex = 15; }

    return updatedFreeRoamZones;
}
