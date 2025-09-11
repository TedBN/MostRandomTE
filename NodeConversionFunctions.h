//
// Created by Ted on 20/06/2024
//

#ifndef MOSTRANDOM_NODECONVERSIONFUNCTIONS_H
#define MOSTRANDOM_NODECONVERSIONFUNCTIONS_H

#include "ProgramDataTypes.h"

void convertCollectorsEditionRaces(std::ofstream);
void createSpeedtrapTemplate(std::ofstream);
void updateLocalizationTag(std::ofstream file);

std::vector<MarkerTemplate> setupMarkers(std::ofstream&, const std::string&,
    const std::vector<MarkerTemplate>&, const std::vector<UnimplementedMarker>&);

std::vector<MarkerTemplate> setupMarkers(std::ofstream&, const std::string&, const std::vector<MarkerTemplate>&);
CashMarkerTemplate setupRandomCashMarker(std::ofstream&);

std::vector<MilestoneTemplate> setupMilestones(std::ofstream&, const std::string&,
    const std::vector<MilestoneTemplate>&, const std::vector<UnimplementedMilestone>&);

void deleteUnneededNodes(std::ofstream&, const std::vector<std::string>&, const std::string&);
void deleteSpeedtrapTemplate(std::ofstream& file);

#endif //MOSTRANDOM_NODECONVERSIONFUNCTIONS_H
