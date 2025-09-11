//
// Created by Ted on 20/06/2024
//

#include <fstream>
#include "NodeConversionFunctions.h"
#include "ListFunctions.h"

void convertCollectorsEditionRaces(std::ofstream file)
{
    //Header for function call
    file << std::string("# converting black edition races to regular races\n");

    file << std::string("delete_field gameplay race_bin_collectors/21_2_2_sprint CollectorsEditionRace\n");
    file << std::string("delete_field gameplay race_bin_collectors/21_2_1_sprint CollectorsEditionRace\n");
    file << std::string("delete_field gameplay race_bin_collectors/21_1_1_circuit CollectorsEditionRace\n");
    file << std::string("add_field gameplay race_bin_collectors/21_1_1_circuit Opponents 3\n");
    file << std::string("add_field gameplay race_bin_collectors/21_2_1_sprint Opponents 3\n");
    file << std::string("add_field gameplay race_bin_collectors/21_2_2_sprint Opponents 3\n");
    file << std::string("update_field gameplay race_bin_collectors gameplayvault gpcore\n\n");
}

void createSpeedtrapTemplate(std::ofstream file)
{
    //Header for function call
    file << std::string("# copy one of the speedtraps to use as a template for race conversions").append("\n");

    file << std::string("copy_node gameplay race_bin_09/9_5_3_speedtrap_race/speedtrap4 speedtrap_template")
            .append("\n\n");
}

void updateLocalizationTag(std::ofstream file)
{
    file << std::string("# updating localization tag for cop kills milestone\n");
    file << std::string("update_field milestonetypes cops_destroyed_in_pursuit LocalizationTag 4\n");
    file << std::string("\n");
}

std::vector<MarkerTemplate> setupMarkers(std::ofstream& file, const std::string& header,
    const std::vector<MarkerTemplate>& implementedMarkers, const std::vector<UnimplementedMarker>& unimplementedMarkers)
{
    file << std::string("# ").append(header).append("\n");

    std::vector<MarkerTemplate> markerTemplates;

    for ( const MarkerTemplate& markerTemplate : implementedMarkers )
    {
        markerTemplate.convertMarkerNodeToTemplate(file);
        markerTemplates.insert(markerTemplates.end(), markerTemplate);
    }

    for ( UnimplementedMarker markerTemplate : unimplementedMarkers )
    {
        markerTemplate.implementMarkerType(file);
        markerTemplates.insert(markerTemplates.end(), markerTemplate.convertToMarkerTemplateData());
    }

    file << std::string("\n");

    return markerTemplates;
}

std::vector<MarkerTemplate> setupMarkers(std::ofstream& file, const std::string& header,
    const std::vector<MarkerTemplate>& implementedMarkers)
{
    file << std::string("# ").append(header).append("\n");

    for ( const MarkerTemplate& markerTemplate : implementedMarkers )
    { markerTemplate.convertMarkerNodeToTemplate(file); }

    file << std::string("\n");

    return implementedMarkers;
}

CashMarkerTemplate setupRandomCashMarker(std::ofstream& file)
{
    file << std::string("# random cash marker node template is created").append("\n");

    CashMarkerTemplate cashMarkerTemplate = createRandomCashMarkerTemplate();
    cashMarkerTemplate.convertMarkerNodeToTemplate(file);

    file << std::string("\n");

    return cashMarkerTemplate;
}

std::vector<MilestoneTemplate> setupMilestones(std::ofstream& file, const std::string& header,
    const std::vector<MilestoneTemplate>& implementedMilestones,
    const std::vector<UnimplementedMilestone>& unimplementedMilestones)
{
    file << std::string("# ").append(header).append("\n");

    std::vector<MilestoneTemplate> milestoneTemplates;

    for ( const MilestoneTemplate& milestoneTemplate : implementedMilestones )
    {
        milestoneTemplate.convertMilestoneNodeToTemplate(file);
        milestoneTemplates.insert(milestoneTemplates.end(), milestoneTemplate);
    }

    for ( UnimplementedMilestone milestoneTemplate : unimplementedMilestones )
    {
        milestoneTemplate.implementMilestoneType(file);
        milestoneTemplates.insert(milestoneTemplates.end(),
            milestoneTemplate.convertToMilestoneTemplateData());
    }

    file << std::string("\n");

    return milestoneTemplates;
}

void deleteUnneededNodes(std::ofstream& file, const std::vector<std::string>& nodes, const std::string& header)
{
    file << std::string("# ").append(header).append("\n");

    for ( const std::string& nodeName : nodes )
    { file << std::string("delete_node gameplay ").append(nodeName).append("\n"); }

    file << std::string("\n");
}

void deleteSpeedtrapTemplate(std::ofstream& file)
{
    file << std::string("# delete the speedtrap template from earlier").append("\n");
    file << std::string("delete_node gameplay speedtrap_template").append("\n\n");
}
