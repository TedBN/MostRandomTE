//
// Created by Ted on 20/06/2024
//

#ifndef MOSTRANDOM_FREEROAMFUNCTIONS_H
#define MOSTRANDOM_FREEROAMFUNCTIONS_H

#include "ProgramDataTypes.h"
#include "XoshiroCpp.hpp"

std::vector<RadiusTrigger> getCluster(const std::vector<std::vector<RadiusTrigger>>&, const RadiusTrigger&);
std::vector<std::string> checkAvailableZones(const std::vector<std::string>&,
    const std::vector<std::string>&, const std::vector<std::string>&);
std::vector<std::string> getZoneTypesInCluster(const std::vector<FreeRoamZone>&, const RadiusTrigger&);
std::string rollZoneType(std::vector<std::string>, const std::vector<std::string>&, XoshiroCpp::Xoshiro256PlusPlus);
std::vector<FreeRoamZone> generateRandomFreeRoamZones(XoshiroCpp::Xoshiro256PlusPlus);
std::vector<FreeRoamZone> setAvailability(std::vector<FreeRoamZone>);

#endif //MOSTRANDOM_FREEROAMFUNCTIONS_H
