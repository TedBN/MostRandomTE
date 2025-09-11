//
// Created by Ted on 12/05/2024
//

#ifndef MOSTRANDOM_GENERALFUNCTIONS_H
#define MOSTRANDOM_GENERALFUNCTIONS_H

#include "ProgramDataTypes.h"

bool promptUser(const std::string&);

int refreshRaceIndex(const std::vector<Circuit>&);
int refreshRaceIndex(const std::vector<Knockout>&);
int refreshRaceIndex(const std::vector<Sprint>&);
int refreshRaceIndex(const std::vector<Speedtrap>&);
int refreshRaceIndex(const std::vector<Drag>&);
int refreshRaceIndex(const std::vector<Tollbooth>&);
Opponent searchForOpponent(const std::string&, const std::vector<Opponent>&);

MarkerType convertStringToMarkerTypeEnum(const std::string&);

#endif //MOSTRANDOM_GENERALFUNCTIONS_H
