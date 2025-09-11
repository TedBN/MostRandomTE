//
// Created by Ted on 11/05/2024
//

#include <array>
#include <string>
#include <vector>
#include <bits/unique_ptr.h>
#include "ListFunctions.h"
#include "GeneralFunctions.h"
#include "ProgramDataTypes.h"

std::vector<std::string> getListOfSafehouseFreeRoamZones()
{
    std::vector<std::string> safehouseFreeRoamZones;
    safehouseFreeRoamZones.reserve(4);

    safehouseFreeRoamZones = { "menu_gate_safehouse/zone_safehouse_1", "menu_gate_safehouse/zone_safehouse_2",
        "menu_gate_safehouse/zone_safehouse_4", "menu_gate_safehouse/zone_safehouse_5" };

    return safehouseFreeRoamZones;
}

std::vector<std::string> getListOfCustomShopFreeRoamZones()
{
    std::vector<std::string> customShopFreeRoamZones;
    customShopFreeRoamZones.reserve(8);

    customShopFreeRoamZones = { "menu_gate_customshop/zone_customshop_1", "menu_gate_customshop/zone_customshop_2",
        "menu_gate_customshop/zone_customshop_3", "menu_gate_customshop/zone_customshop_4",
        "menu_gate_customshop/zone_customshop_5", "menu_gate_customshop/zone_customshop_6",
        "menu_gate_customshop/zone_customshop_7", "menu_gate_customshop/zone_customshop_8" };

    return customShopFreeRoamZones;
}

std::vector<std::string> getListOfCarLotFreeRoamZones()
{
    std::vector<std::string> carLotFreeRoamZones;
    carLotFreeRoamZones.reserve(4);

    carLotFreeRoamZones = { "menu_gate_carlot/zone_carlot_1", "menu_gate_carlot/zone_carlot_2",
        "menu_gate_carlot/zone_carlot_3", };

    return carLotFreeRoamZones;
}

std::vector<std::pair<RadiusTrigger, PositionMarker>> getFreeRoamZoneCoordinates()
{
    std::vector<std::pair<RadiusTrigger, PositionMarker>> zoneCoordinates;
    zoneCoordinates.reserve(15);

    zoneCoordinates =
    {
        //Car lot coordinates
        std::make_pair(
            RadiusTrigger { "981.6318", "2147.321", "152.2939", "4" },
            PositionMarker { "986.6693", "2149.918", "152.3054", "-27.31243" } ),

        std::make_pair(
            RadiusTrigger { "4204.79", "1257.427", "46.18896", "4" },
            PositionMarker { "4206.655", "1269.722", "45.99024", "-25.45867" } ),

        std::make_pair(
            RadiusTrigger { "1750.89", "512.1406", "90.85645", "4" },
            PositionMarker { "1749.084", "517.2923", "90.7334", "170.7765" } ),

        //Customization shop coordinates
        std::make_pair(
            RadiusTrigger { "698.1821", "4523.472", "214.6646", "6" },
            PositionMarker { "716.1008", "4523.805", "212.8496", "82.59451" } ),

        std::make_pair(
            RadiusTrigger { "1509.355", "2563.893", "157.6162", "7" },
            PositionMarker { "1497.653", "2571.383", "158.8467", "-141.6609" } ),

        std::make_pair(
            RadiusTrigger { "1850.652", "1211.021", "143.5498", "6" },
            PositionMarker { "1842.902", "1215.779", "143.1494", "-127.0229" } ),

        std::make_pair(
            RadiusTrigger { "3595.972", "3627.557", "30.47705", "7" },
            PositionMarker { "3591.582", "3636.861", "30.63086", "34.06722" } ),

        std::make_pair(
            RadiusTrigger { "3497.088", "2011.371", "73.98682", "7" },
            PositionMarker { "3508.649", "2016.714", "72.72363", "108.2595" } ),

        std::make_pair(
            RadiusTrigger { "4246.829", "719.4024", "54.27002", "7" },
            PositionMarker { "4256.169", "718.0107", "54.12597", "-95.68618" } ),

        std::make_pair(
            RadiusTrigger { "3398.796", "-231.7847", "12.44727", "7" },
            PositionMarker { "3398.938", "-223.0549", "12.44238", "4.07827" } ),

        std::make_pair(
            RadiusTrigger { "1064.187", "51.79076", "99.67774", "5" },
            PositionMarker { "1069.119", "42.14526", "99.5957", "34.98735" } ),

        //Safehouse coordinates
        std::make_pair(
            RadiusTrigger { "1777.095", "2503.468", "147.7935", "7" },
            PositionMarker { "1762.762", "2508.818", "147.2841", "-115.4158" } ),

        std::make_pair(
            RadiusTrigger { "4257.524", "78.69839", "9.291016", "7" },
            PositionMarker { "4245.938", "79.00754", "9.711914", "-107.1375" } ),

        std::make_pair(
            RadiusTrigger { "3627.767", "3340.5", "6.772949", "7" },
            PositionMarker { "3623.124", "3355.153", "7.018555", "-27.47683" } ),

        std::make_pair(
            RadiusTrigger { "2328.785", "-66.36417", "90.9668", "7" },
            PositionMarker { "2329.8", "-82.48916", "90.88281", "169.4336" } )
     };

    return zoneCoordinates;
}

std::vector<std::vector<RadiusTrigger>> getClusters()
{
    std::vector<std::vector<RadiusTrigger>> clusters;

    //Rosewood cluster
    std::vector<RadiusTrigger> rosewoodCluster;
    rosewoodCluster.reserve(3);

    rosewoodCluster =
    {
        RadiusTrigger { "1509.355", "2563.893", "157.6162", "7" },
        RadiusTrigger { "1777.095", "2503.468", "147.7935", "7" },
        RadiusTrigger { "981.6318", "2147.321", "152.2939", "4" }
    };

    clusters.push_back(rosewoodCluster);

    //Northern Camden cluster
    std::vector<RadiusTrigger> northernCamdenCluster;
    northernCamdenCluster.reserve(2);

    northernCamdenCluster =
    {
        RadiusTrigger { "3627.767", "3340.5", "6.772949", "7" },
        RadiusTrigger { "3595.972", "3627.557", "30.47705", "7" }
    };

    clusters.push_back(northernCamdenCluster);

    //Southern Camden cluster
    std::vector<RadiusTrigger> southernCamdenCluster;
    southernCamdenCluster.reserve(3);

    southernCamdenCluster =
    {
        RadiusTrigger { "4204.79", "1257.427", "46.18896", "4" },
        RadiusTrigger { "4246.829", "719.4024", "54.27002", "7" },
        RadiusTrigger { "4257.524", "78.69839", "9.291016", "7" }
    };

    clusters.push_back(southernCamdenCluster);

    //Rockport cluster
    std::vector<RadiusTrigger> RockportCluster;
    RockportCluster.reserve(3);

    RockportCluster =
    {
        RadiusTrigger { "2328.785", "-66.36417", "90.9668", "7" },
        RadiusTrigger { "1750.89", "512.1406", "90.85645", "4" },
        RadiusTrigger { "1064.187", "51.79076", "99.67774", "5" }
    };

    clusters.push_back(RockportCluster);

    //Done
    return clusters;
}

//std::vector<>

std::array<std::string, 73> getListOfPresetCars()
{
    return std::array<std::string, 73> { "M3GTRCAREERSTART", "RAZORMUSTANG", "DDAYSUPRA", "OPM_MUSTANG_BOSS",
        "OPM_MUSTANG_VERSION2", "GT_ELISE_ROG", "OPM_WRX_VERSION2", "OPM_RX8_Version3", "OPM_RX8_VERSION2",
        "STARKY_HUTCH_EVO_ROG", "BL15", "BL14", "BL13", "BL12", "BL11", "BL10", "BL9", "BL8", "BL7", "BL6", "BL5",
        "BL4","BL3", "BL2", "E3_DEMO_BMW", "E3_DEMO_RX8", "CASTROLGT", "BONUS_C6R", "BONUS_GT2", "BONUS_SL65",
        "CE_997S", "CE_C6R", "CE_CAMARO", "CE_CORVETTE", "CE_ELISE", "CE_GT2", "CE_GTRSTREET", "CE_SL500", "CE_SL65",
        "CE_SUPRA", "CS_CAR_01", "CS_CAR_02", "CS_CAR_03", "CS_CAR_04", "CS_CAR_05", "CS_CAR_06", "CS_CAR_07",
        "CS_CAR_08", "CS_CAR_09", "CS_CAR_10", "CS_CAR_11", "CS_CAR_12", "CS_CAR_13", "CS_CAR_14", "CS_CAR_15",
        "CS_CAR_16", "CS_CAR_17", "CS_CAR_18", "CS_CAR_19", "CS_CAR_20", "CS_CAR_22", "CS_CAR_24", "CS_CAR_COPGTO",
        "CS_CAR_HENCH", "CS_CAR_26", "CS_CAR_27", "CS_CAR_28", "CS_CAR_29", "CS_CAR_30", "CS_CAR_31", "CS_CAR_32",
        "CS_CAR_33", "CS_CAR_34" };
}

std::array<std::string, 69> getListOfEngineSounds()
{
    return std::array<std::string, 69> { "ac_integ", "am_db9", "aud_s4", "bmw_m3_a", "bmw_m3_c", "bmw_m3_e", "bmw_m5_a",
        "chv_cav_a", "chv_cav_b", "corvette_z06", "corvette_z06_v2", "dodg_viper_a", "dodg_viper_b", "fer_360",
        "for_foc_a", "for_foc_b", "for_mus_a", "for_mus_b", "for_mus_c", "for_mus_gt_a", "for_mus_gt_a_tranny",
        "hon_prel", "hon_s2k_a", "hon_s2k_b", "hon_s2k_c", "hon_s2k_d", "hon_s2k_e", "hum_h1", "inf_g35",
        "lam_diablo", "lam_gallardo", "lam_murc", "lot_elise", "maz_miat", "maz_prot_a", "maz_prot_b", "maz_rx7",
        "maz_rx8", "mbz_cl500", "mbz_cl55", "mbz_sl65", "mbz_slr", "mit_eclip_a", "mit_eclip_b", "nis_240sx",
        "nis_300zx", "nis_350z_a", "nis_350z_b", "nis_sky", "por_911_a", "por_911_b", "por_928", "por_996",
        "por_car_gt", "por_dp6", "por_gt4r", "sub_wrx_a", "sub_wrx_b", "sub_wrx_c", "toy_gts", "toy_gts_low_rpm",
        "trck_log", "tvr_cerb", "tvr_tuscan", "vw_cab", "vw_gti", "vw_jet_m3", "vw_jet_m4", "vw_scir" };
}

std::array<std::string, 46> getListOfCars()
{
    return std::array<std::string, 46> { "911turbo", "911gt2", "997s", "a3", "a4", "bmwm3gtr", "bmwm3gtre46",
        "m3gtre46careerstart", "carreragt", "caymans", "clio", "clk500", "cobaltss", "corvette",
        "cs_c6_copsporthench", "cts", "db9", "eclipsegt", "elise", "fordgt", "gallardo", "gti", "gto",
        "cs_gto_copgto", "imprezawrx", "is300", "lancerevo8", "monaro", "murcielago", "mustanggt",
        "cs_mustang_copsuv", "punto", "rx7", "rx8", "sl500", "sl65", "slr", "supra", "viper", "cs_semi",
        "cs_clio_trafpizza", "cs_clio_traftaxi", "cs_cts_traf_minivan", "cs_cts_traffictruck", "cs_trafcement",
        "cs_trafgarb" };
}

std::array<std::string, 12> getListOfFMVs()
{
    /** Returns a new-style array with the names of the FMVs in the MOVIES folder.
      * To be used with randomizePrologueRaces to randomize intro and outro movies.     */

    return std::array<std::string, 12> { "attract_movie", "ealogo", "psa", "storyfmv_bla134", "storyfmv_bus12",
        "storyfmv_cro06_coh06a", "storyfmv_her136", "storyfmv_pin11", "storyfmv_rac01", "storyfmv_rap30",
        "storyfmv_raz08", "storyfmv_saf25" };
}

std::array<std::string, 43> getListOfMilestoneSpawnPoints()
{
    return std::array<std::string, 43> { "milestones/default_spawn_point", "milestones/bin_15/taggedcarmarker1",
        "milestones/bin_12/taggedcarmarker1", "milestones/bin_08/taggedcarmarker1",
        "speedtraps/bin_15/taggedcarmarker1", "speedtraps/bin_14/taggedcarmarker1",
        "speedtraps/bin_14/taggedcarmarker2", "speedtraps/bin_13/taggedcarmarker1",
        "speedtraps/bin_13/taggedcarmarker2", "speedtraps/bin_12/taggedcarmarker1",
        "speedtraps/bin_12/taggedcarmarker2", "speedtraps/bin_11/taggedcarmarker1",
        "speedtraps/bin_11/taggedcarmarker2", "speedtraps/bin_10/taggedcarmarker1",
        "speedtraps/bin_10/taggedcarmarker2", "speedtraps/bin_10/taggedcarmarker3",
        "speedtraps/bin_09/taggedcarmarker1", "speedtraps/bin_09/taggedcarmarker2",
        "speedtraps/bin_09/taggedcarmarker3", "speedtraps/bin_08/taggedcarmarker1",
        "speedtraps/bin_08/taggedcarmarker2", "speedtraps/bin_08/taggedcarmarker3",
        "speedtraps/bin_07/taggedcarmarker1", "speedtraps/bin_07/taggedcarmarker2",
        "speedtraps/bin_07/taggedcarmarker3", "speedtraps/bin_06/taggedcarmarker1",
        "speedtraps/bin_06/taggedcarmarker2", "speedtraps/bin_06/taggedcarmarker3",
        "speedtraps/bin_05/taggedcarmarker1", "speedtraps/bin_05/taggedcarmarker2",
        "speedtraps/bin_05/taggedcarmarker3", "speedtraps/bin_04/taggedcarmarker1",
        "speedtraps/bin_04/taggedcarmarker2", "speedtraps/bin_04/taggedcarmarker3",
        "speedtraps/bin_03/taggedcarmarker1", "speedtraps/bin_03/taggedcarmarker2",
        "speedtraps/bin_03/taggedcarmarker3", "speedtraps/bin_02/taggedcarmarker1",
        "speedtraps/bin_02/taggedcarmarker2", "speedtraps/bin_02/taggedcarmarker3",
        "speedtraps/bin_01/taggedcarmarker1", "speedtraps/bin_01/taggedcarmarker2",
        "speedtraps/bin_01/taggedcarmarker3" };
}

std::vector<std::string> getListOfExistingPerformanceMarkersToDelete()
{
    return std::vector<std::string> { "race_bin_10/rewards/reward_chassis1",
       "race_bin_09/rewards/reward_induction1", "race_bin_08/rewards/reward_transmission1",
       "race_bin_07/rewards/reward_tires1", "race_bin_06/rewards/reward_chassis1",
       "race_bin_05/rewards/reward_induction1","race_bin_03/rewards/reward_tires1",
       "race_bin_02/rewards/reward_induction1" };
}

std::vector<std::string> getListOfExistingVisualMarkersToDelete()
{
    return std::vector<std::string> { "race_bin_14/rewards/reward_vinyl",
       "race_bin_12/rewards/reward_vinyl1", "race_bin_12/rewards/reward_body1",
       "race_bin_11/rewards/reward_rims1", "race_bin_10/rewards/reward_hood1",
       "race_bin_09/rewards/reward_hud1", "race_bin_09/rewards/reward_hood1",
       "race_bin_08/rewards/reward_spoiler1", "race_bin_08/rewards/reward_body1",
       "race_bin_07/rewards/reward_vinyl1", "race_bin_07/rewards/reward_spoiler1",
       "race_bin_06/rewards/reward_vinyl1", "race_bin_06/rewards/reward_rims1",
       "race_bin_05/rewards/reward_vinyl1", "race_bin_05/rewards/reward_hood1",
       "race_bin_04/rewards/reward_body1", "race_bin_04/rewards/reward_vinyl1",
       "race_bin_03/rewards/reward_roofscoop1", "race_bin_03/rewards/reward_rims1",
       "race_bin_02/rewards/reward_vinyl1", "race_bin_02/rewards/reward_hud1" };
}

std::vector<std::string> getListOfExistingRandomMarkersToDelete()
{
    return std::vector<std::string> { "race_bin_14/rewards/reward_cash_bonus",
       "race_bin_13/rewards/reward_cash_bonus1", "race_bin_13/rewards/reward_cash_bonus2",
       "race_bin_12/rewards/reward_add_impound_box1", "race_bin_11/rewards/reward_cash_bonus1",
       "race_bin_11/rewards/reward_out_of_jail_free1", "race_bin_10/rewards/reward_add_impound_box1",
       "race_bin_10/rewards/reward_out_of_jail_free1", "race_bin_09/rewards/reward_add_impound_box1",
       "race_bin_09/rewards/reward_release_car_from_impound1", "race_bin_08/rewards/reward_add_impound_box1",
       "race_bin_08/rewards/reward_out_of_jail_free1", "race_bin_07/rewards/reward_out_of_jail_free1",
       "race_bin_07/rewards/reward_release_car_from_impound1", "race_bin_06/rewards/reward_out_of_jail_free1",
       "race_bin_06/rewards/reward_cash_bonus1", "race_bin_05/rewards/reward_add_impound_box1",
       "race_bin_05/rewards/reward_out_of_jail_free1", "race_bin_04/rewards/reward_release_car_from_impound1",
       "race_bin_04/rewards/reward_cash_bonus1", "race_bin_03/rewards/reward_add_impound_box1",
       "race_bin_03/rewards/reward_out_of_jail_free1", "race_bin_02/rewards/reward_out_of_jail_free1",
       "race_bin_02/rewards/reward_release_car_from_impound1", "race_bin_15/rewards/reward_pink_slip1",
       "race_bin_14/rewards/reward_pink_slip1", "race_bin_13/rewards/reward_pink_slip1",
       "race_bin_12/rewards/reward_pink_slip1", "race_bin_11/rewards/reward_pink_slip1",
       "race_bin_10/rewards/reward_pink_slip1", "race_bin_09/rewards/reward_pink_slip1",
       "race_bin_08/rewards/reward_pink_slip1", "race_bin_07/rewards/reward_pink_slip1",
       "race_bin_06/rewards/reward_pink_slip1", "race_bin_05/rewards/reward_pink_slip1",
       "race_bin_04/rewards/reward_pink_slip1", "race_bin_03/rewards/reward_pink_slip1",
       "race_bin_15/rewards/reward_cash_bonus1", "race_bin_02/rewards/reward_pink_slip1" };
}

std::vector<MarkerTemplate> createImplementedPerformanceMarkerTemplates()
{
    return std::vector
    {
        MarkerTemplate("templates/rewards/reward_brakes", "race_bin_15/rewards/reward_brakes",
            "reward_brakes", PERFORMANCE_BRAKES),

        MarkerTemplate("templates/rewards/reward_chassis", "race_bin_14/rewards/reward_chassis",
            "reward_chassis", PERFORMANCE_CHASSIS),

        MarkerTemplate("templates/rewards/reward_transmission", "race_bin_13/rewards/reward_transmission1",
            "reward_transmission", PERFORMANCE_TRANSMISSION),

        MarkerTemplate("templates/rewards/reward_induction", "race_bin_12/rewards/reward_induction1",
            "reward_induction", PERFORMANCE_INDUCTION),

        MarkerTemplate("templates/rewards/reward_tires", "race_bin_11/rewards/reward_tires1",
            "reward_tires", PERFORMANCE_TIRES),

        MarkerTemplate("templates/rewards/reward_engine", "race_bin_04/rewards/reward_engine1",
            "reward_engine", PERFORMANCE_ENGINE)
    };
}

std::vector<MarkerTemplate> createImplementedVisualMarkerTemplates()
{
    return std::vector
    {
        MarkerTemplate("templates/rewards/reward_vinyl", "race_bin_15/rewards/reward_vinyl",
            "reward_vinyl", VISUAL_VINYL),

        MarkerTemplate("templates/rewards/reward_rims", "race_bin_15/rewards/reward_rims",
            "reward_rims", VISUAL_RIMS),

        MarkerTemplate("templates/rewards/reward_hood", "race_bin_14/rewards/reward_hood",
            "reward_hood", VISUAL_HOOD),

        MarkerTemplate("templates/rewards/reward_hud", "race_bin_13/rewards/reward_hud1",
            "reward_hud", VISUAL_HUD),

        MarkerTemplate("templates/rewards/reward_body", "race_bin_13/rewards/reward_body1",
            "reward_body", VISUAL_BODY),

        MarkerTemplate("templates/rewards/reward_spoiler", "race_bin_11/rewards/reward_spoiler1",
            "reward_spoiler", VISUAL_SPOILER),

        MarkerTemplate("templates/rewards/reward_roofscoop", "race_bin_10/rewards/reward_roofscoop1",
            "reward_roofscoop", VISUAL_ROOFSCOOP)
    };
}

std::vector<MarkerTemplate> createImplementedRandomMarkerTemplates()
{
    return std::vector
    {
        MarkerTemplate("templates/rewards/reward_out_of_jail_free",
            "race_bin_15/rewards/reward_out_of_jail_free1", "reward_out_of_jail_free",
            RANDOM_OUT_OF_JAIL_FREE),

        MarkerTemplate("templates/rewards/reward_add_impound_box",
            "race_bin_14/rewards/reward_add_impound_box1", "reward_add_impound_box",
            RANDOM_ADD_IMPOUND_BOX),

        MarkerTemplate("templates/rewards/reward_release_car_from_impound",
            "race_bin_12/rewards/reward_release_car_from_impound1", "reward_release_car_from_impound",
            RANDOM_RELEASE_CAR_FROM_IMPOUND),

        MarkerTemplate("templates/rewards/reward_pink_slip", "race_bin_15/rewards/reward_pink_slip1",
            "reward_pink_slip", RANDOM_PINK_SLIP)
    };
}

CashMarkerTemplate createRandomCashMarkerTemplate()
{
    return CashMarkerTemplate("templates/rewards/reward_cash_bonus", "race_bin_15/rewards/reward_cash_bonus1",
        "reward_cash_bonus" );
}

std::vector<UnimplementedMarker> createUnimplementedPerformanceMarkerTemplates()
{ return std::vector { UnimplementedMarker("templates/rewards/reward_nos", "reward_nos", PERFORMANCE_NOS) }; }

std::vector<UnimplementedMarker> createUnimplementedVisualMarkerTemplates()
{ return std::vector { UnimplementedMarker("templates/rewards/reward_paint", "reward_paint", VISUAL_PAINT) }; }

std::vector<std::string> getListOfExistingMilestonesToDelete()
{
    return std::vector<std::string> {  "milestones/bin_01/challenge_1_cops_damaged",
        "milestones/bin_03/challenge_3_cops_damaged", "milestones/bin_04/challenge_4_cops_damaged",
        "milestones/bin_06/challenge_6_cops_damaged", "milestones/bin_08/challenge_8_cops_damaged",
        "milestones/bin_09/challenge_9_cops_damaged", "milestones/bin_12/challenge_12_cops_damaged",
        "milestones/bin_13/challenge_13_cops_damaged", "milestones/bin_01/challenge_1_cops_destroyed",
        "milestones/bin_03/challenge_3_cops_destroyed", "milestones/bin_04/challenge_4_cops_destroyed",
        "milestones/bin_05/challenge_5_cops_destroyed", "milestones/bin_07/challenge_7_cops_destroyed",
        "milestones/bin_09/challenge_9_cops_destroyed", "milestones/bin_10/challenge_10_cops_destroyed",
        "milestones/bin_13/challenge_13_cops_destroyed", "milestones/bin_02/challenge_2_cost_to_state",
        "milestones/bin_04/challenge_4_cost_to_state", "milestones/bin_05/challenge_5_cost_to_state",
        "milestones/bin_07/challenge_7_cost_to_state", "milestones/bin_10/challenge_10_cost_to_state",
        "milestones/bin_11/challenge_11_cost_to_state", "milestones/bin_01/challenge_1_pursuit_evasion_time",
        "milestones/bin_03/challenge_3_pursuit_evasion_time",
        "milestones/bin_05/challenge_5_pursuit_evasion_time",
        "milestones/bin_07/challenge_7_pursuit_evasion_time",
        "milestones/bin_09/challenge_9_pursuit_evasion_time",
        "milestones/bin_12/challenge_12_pursuit_evasion_time",
        "milestones/bin_13/challenge_13_pursuit_evasion_time",
        "milestones/bin_01/challenge_1_pursuit_length", "milestones/bin_02/challenge_2_pursuit_length",
        "milestones/bin_03/challenge_3_pursuit_length", "milestones/bin_06/challenge_6_pursuit_length",
        "milestones/bin_08/challenge_8_pursuit_length", "milestones/bin_10/challenge_10_pursuit_length",
        "milestones/bin_12/challenge_12_pursuit_length", "milestones/bin_02/challenge_2_roadblocks_dodged",
        "milestones/bin_06/challenge_6_roadblocks_dodged", "milestones/bin_07/challenge_7_roadblocks_dodged",
        "milestones/bin_09/challenge_9_roadblocks_dodged", "milestones/bin_10/challenge_10_roadblocks_dodged",
        "milestones/bin_02/challenge_2_tire_spikes_dodged", "milestones/bin_05/challenge_5_tire_spikes_dodged",
        "milestones/bin_06/challenge_6_tire_spikes_dodged", "milestones/bin_04/challenge_4_total_infractions",
        "milestones/bin_08/challenge_8_total_infractions", "milestones/bin_11/challenge_11_total_infractions" };
}

std::vector<MilestoneTemplate> createImplementedMilestoneTemplates()
{
    return std::vector
    {
        MilestoneTemplate("milestones/templates/challenge_total_infractions",
            "milestones/bin_14/challenge_14_total_infractions", "total_infractions", MILESTONE_INFRACTIONS),

        MilestoneTemplate("milestones/templates/challenge_cops_damaged",
            "milestones/bin_15/challenge_15_cops_damaged", "cops_damaged", MILESTONE_TAGS),

        MilestoneTemplate("milestones/templates/challenge_cops_destroyed",
            "milestones/bin_14/challenge_14_cops_destroyed", "cops_destroyed", MILESTONE_BOUNTY),

        MilestoneTemplate("milestones/templates/challenge_cost_to_state",
            "milestones/bin_14/challenge_14_cost_to_state", "cost_to_state", MILESTONE_COST_TO_STATE),

        MilestoneTemplate("milestones/templates/challenge_pursuit_evasion_time",
            "milestones/bin_15/challenge_15_pursuit_evasion_time", "pursuit_evasion_time",
            MILESTONE_PURSUIT_EVASION),

        MilestoneTemplate("milestones/templates/challenge_pursuit_length",
            "milestones/bin_15/challenge_15_pursuit_length", "pursuit_pursuit_length",
            MILESTONE_PURSUIT_LENGTH),

        MilestoneTemplate("milestones/templates/challenge_roadblocks_dodged",
            "milestones/bin_11/challenge_11_roadblocks_dodged", "roadblocks_dodged", MILESTONE_ROADBLOCKS),

        MilestoneTemplate("milestones/templates/challenge_spikes_dodged",
            "milestones/bin_08/challenge_8_tire_spikes_dodged", "spikes_dodged", MILESTONE_SPIKE_STRIPS)
    };
}

std::vector<UnimplementedMilestone> createUnimplementedMilestoneTemplates()
{
    return std::vector
    {
        UnimplementedMilestone("milestones/templates/challenge_cops_destroyed_in_pursuit",
            "cops_destroyed_in_pursuit", MILESTONE_KILLS)
    };
}

std::vector<Opponent> getListOfScriptedOpponents()
{
    //Array with structs is initialized here
    std::vector<Opponent> scriptedOpponents;
    int arrayIndex = 0;

    //Prologue Ronnie
    scriptedOpponents.emplace_back();

    scriptedOpponents[arrayIndex].nodeName = "16_2_2_sprint/ronnie_mccrae";
    scriptedOpponents[arrayIndex].performanceTier = 0;

    scriptedOpponents[arrayIndex].hasMinimumCarPerformanceField = false;
    scriptedOpponents[arrayIndex].hasPresetRideField = true;

    scriptedOpponents[arrayIndex].hasChildrenField = true;
    scriptedOpponents[arrayIndex].hasForceStartPositionField = true;
    scriptedOpponents[arrayIndex].hasRacerNameField = true;

    arrayIndex++;

    //Prologue Bull
    scriptedOpponents.emplace_back();

    scriptedOpponents[arrayIndex].nodeName = "16_2_3_sprint/toru_sato";
    scriptedOpponents[arrayIndex].performanceTier = 0;

    scriptedOpponents[arrayIndex].hasMinimumCarPerformanceField = false;
    scriptedOpponents[arrayIndex].hasPresetRideField = true;

    scriptedOpponents[arrayIndex].hasChildrenField = true;
    scriptedOpponents[arrayIndex].hasRacerNameField = true;

    arrayIndex++;

    //Rog
    scriptedOpponents.emplace_back();

    scriptedOpponents[arrayIndex].nodeName = "16_1_1_circuit/opponent";
    scriptedOpponents[arrayIndex].performanceTier = 0;

    scriptedOpponents[arrayIndex].hasMinimumCarPerformanceField = false;
    scriptedOpponents[arrayIndex].hasPresetRideField = true;

    scriptedOpponents[arrayIndex].hasChildrenField = true;
    scriptedOpponents[arrayIndex].hasForceStartPositionField = true;
    scriptedOpponents[arrayIndex].hasRacerNameField = true;

    arrayIndex++;

    //Sonny
    scriptedOpponents.emplace_back();

    scriptedOpponents[arrayIndex].nodeName = "race_bin_15/tony_ho";
    scriptedOpponents[arrayIndex].performanceTier = 0;

    scriptedOpponents[arrayIndex].hasMinimumCarPerformanceField = false;
    scriptedOpponents[arrayIndex].hasPresetRideField = true;

    scriptedOpponents[arrayIndex].hasCarTypeField = true;

    arrayIndex++;

    //Taz
    scriptedOpponents.emplace_back();

    scriptedOpponents[arrayIndex].nodeName = "race_bin_14/vince_kilic";
    scriptedOpponents[arrayIndex].performanceTier = 0;

    scriptedOpponents[arrayIndex].hasPresetRideField = true;

    arrayIndex++;

    //Vic
    scriptedOpponents.emplace_back();

    scriptedOpponents[arrayIndex].nodeName = "race_bin_13/victor_vasquez";
    scriptedOpponents[arrayIndex].performanceTier = 1;

    scriptedOpponents[arrayIndex].hasPresetRideField = true;

    arrayIndex++;

    //Izzy
    scriptedOpponents.emplace_back();

    scriptedOpponents[arrayIndex].nodeName = "race_bin_12/isabel_diaz";
    scriptedOpponents[arrayIndex].performanceTier = 1;

    scriptedOpponents[arrayIndex].hasPresetRideField = true;

    arrayIndex++;

    //Big Lou
    scriptedOpponents.emplace_back();

    scriptedOpponents[arrayIndex].nodeName = "race_bin_11/lou_park";
    scriptedOpponents[arrayIndex].performanceTier = 1;

    scriptedOpponents[arrayIndex].hasPresetRideField = true;

    arrayIndex++;

    //Baron
    scriptedOpponents.emplace_back();

    scriptedOpponents[arrayIndex].nodeName = "race_bin_10/karl_smit";

    scriptedOpponents[arrayIndex].hasPresetRideField = true;

    arrayIndex++;

    //Earl
    scriptedOpponents.emplace_back();

    scriptedOpponents[arrayIndex].nodeName = "race_bin_09/pierre_dupont";

    scriptedOpponents[arrayIndex].hasPresetRideField = true;

    arrayIndex++;

    //Jewels
    scriptedOpponents.emplace_back();

    scriptedOpponents[arrayIndex].nodeName = "race_bin_08/jade_barrett";

    scriptedOpponents[arrayIndex].hasPresetRideField = true;

    arrayIndex++;

    //Kaze
    scriptedOpponents.emplace_back();

    scriptedOpponents[arrayIndex].nodeName = "race_bin_07/kira_nazakato";

    scriptedOpponents[arrayIndex].hasPresetRideField = true;

    arrayIndex++;

    //Ming
    scriptedOpponents.emplace_back();

    scriptedOpponents[arrayIndex].nodeName = "race_bin_06/hector_domingo";

    scriptedOpponents[arrayIndex].hasPresetRideField = true;

    arrayIndex++;

    //Webster
    scriptedOpponents.emplace_back();

    scriptedOpponents[arrayIndex].nodeName = "race_bin_05/wes_allen";
    scriptedOpponents[arrayIndex].performanceTier = 3;

    scriptedOpponents[arrayIndex].hasPresetRideField = true;

    arrayIndex++;

    //JV
    scriptedOpponents.emplace_back();

    scriptedOpponents[arrayIndex].nodeName = "race_bin_04/joe_vega";
    scriptedOpponents[arrayIndex].performanceTier = 3;

    scriptedOpponents[arrayIndex].hasPresetRideField = true;

    arrayIndex++;

    //Ronnie
    scriptedOpponents.emplace_back();

    scriptedOpponents[arrayIndex].nodeName = "race_bin_03/ronnie_mccrea";
    scriptedOpponents[arrayIndex].performanceTier = 3;

    scriptedOpponents[arrayIndex].hasPresetRideField = true;

    arrayIndex++;

    //Bull
    scriptedOpponents.emplace_back();

    scriptedOpponents[arrayIndex].nodeName = "race_bin_02/toro_sato";
    scriptedOpponents[arrayIndex].performanceTier = 4;

    scriptedOpponents[arrayIndex].hasPresetRideField = true;

    arrayIndex++;

    //Razor
    scriptedOpponents.emplace_back();

    scriptedOpponents[arrayIndex].nodeName = "race_bin_01/razor_callahan";
    scriptedOpponents[arrayIndex].performanceTier = 4;

    scriptedOpponents[arrayIndex].hasPresetRideField = true;

    scriptedOpponents[arrayIndex].hasFECompressionToggleField = true;
    scriptedOpponents[arrayIndex].hasCarTypeField = true;

    //Done
    return scriptedOpponents;
}

std::vector<Opponent> getListOfTierZeroOpponents()
{
    //Array with structs is initialized here
    std::vector<Opponent> tierZeroOpponents;
    int arrayIndex = 0;

    //First regular opponent from Rog circuit
    tierZeroOpponents.emplace_back();

    tierZeroOpponents[arrayIndex].nodeName = "16_1_1_circuit/opponent2";
    tierZeroOpponents[arrayIndex].performanceTier = 0;

    tierZeroOpponents[arrayIndex].hasMinimumCarPerformanceField = false;
    tierZeroOpponents[arrayIndex].hasPresetRideField = true;

    arrayIndex++;

    //Second regular opponent from Rog circuit
    tierZeroOpponents.emplace_back();

    tierZeroOpponents[arrayIndex].nodeName = "16_1_1_circuit/opponent3";
    tierZeroOpponents[arrayIndex].performanceTier = 0;

    tierZeroOpponents[arrayIndex].hasMinimumCarPerformanceField = false;
    tierZeroOpponents[arrayIndex].hasPresetRideField = true;

    arrayIndex++;

    //First regular opponent from Sonny races
    tierZeroOpponents.emplace_back();

    tierZeroOpponents[arrayIndex].nodeName = "race_bin_15/opponent1";
    tierZeroOpponents[arrayIndex].performanceTier = 0;

    tierZeroOpponents[arrayIndex].hasMinimumCarPerformanceField = false;

    tierZeroOpponents[arrayIndex].hasCarTypeField = true;

    arrayIndex++;

    //Second regular opponent from Sonny races
    tierZeroOpponents.emplace_back();

    tierZeroOpponents[arrayIndex].nodeName = "race_bin_15/opponent2";
    tierZeroOpponents[arrayIndex].performanceTier = 0;

    tierZeroOpponents[arrayIndex].hasMinimumCarPerformanceField = false;

    tierZeroOpponents[arrayIndex].hasCarTypeField = true;

    arrayIndex++;

    //Third regular opponent from Sonny races
    tierZeroOpponents.emplace_back();

    tierZeroOpponents[arrayIndex].nodeName = "race_bin_15/opponent3";
    tierZeroOpponents[arrayIndex].performanceTier = 0;

    tierZeroOpponents[arrayIndex].hasMinimumCarPerformanceField = false;

    tierZeroOpponents[arrayIndex].hasCarTypeField = true;

    arrayIndex++;

    //First regular opponent from Taz races
    tierZeroOpponents.emplace_back();

    tierZeroOpponents[arrayIndex].nodeName = "race_bin_14/character1";
    tierZeroOpponents[arrayIndex].performanceTier = 0;

    tierZeroOpponents[arrayIndex].hasMinimumCarPerformanceField = false;

    arrayIndex++;

    //Second regular opponent from Taz races
    tierZeroOpponents.emplace_back();

    tierZeroOpponents[arrayIndex].nodeName = "race_bin_14/character2";
    tierZeroOpponents[arrayIndex].performanceTier = 0;

    tierZeroOpponents[arrayIndex].hasMinimumCarPerformanceField = false;

    arrayIndex++;

    //Third regular opponent from Taz races
    tierZeroOpponents.emplace_back();

    tierZeroOpponents[arrayIndex].nodeName = "race_bin_14/character3";
    tierZeroOpponents[arrayIndex].performanceTier = 0;

    tierZeroOpponents[arrayIndex].hasMinimumCarPerformanceField = false;

    //Done
    return tierZeroOpponents;
}

std::vector<Opponent> getListOfTierOneOpponents()
{
    //Array with structs is initialized here
    std::vector<Opponent> tierOneOpponents;
    int arrayIndex = 0;

    //First regular opponent from Vic races
    tierOneOpponents.emplace_back();

    tierOneOpponents[arrayIndex].nodeName = "race_bin_13/character1";
    tierOneOpponents[arrayIndex].performanceTier = 1;

    arrayIndex++;

    //Second regular opponent from Vic races
    tierOneOpponents.emplace_back();

    tierOneOpponents[arrayIndex].nodeName = "race_bin_13/character2";
    tierOneOpponents[arrayIndex].performanceTier = 1;

    arrayIndex++;

    //Third regular opponent from Vic races
    tierOneOpponents.emplace_back();

    tierOneOpponents[arrayIndex].nodeName = "race_bin_13/character3";
    tierOneOpponents[arrayIndex].performanceTier = 1;

    arrayIndex++;

    //First regular opponent from Izzy races
    tierOneOpponents.emplace_back();

    tierOneOpponents[arrayIndex].nodeName = "race_bin_12/character1";
    tierOneOpponents[arrayIndex].performanceTier = 1;

    arrayIndex++;

    //Second regular opponent from Izzy races
    tierOneOpponents.emplace_back();

    tierOneOpponents[arrayIndex].nodeName = "race_bin_12/character2";
    tierOneOpponents[arrayIndex].performanceTier = 1;

    arrayIndex++;

    //Third regular opponent from Izzy races
    tierOneOpponents.emplace_back();

    tierOneOpponents[arrayIndex].nodeName = "race_bin_12/character3";
    tierOneOpponents[arrayIndex].performanceTier = 1;

    arrayIndex++;

    //First regular opponent from Big Lou races
    tierOneOpponents.emplace_back();

    tierOneOpponents[arrayIndex].nodeName = "race_bin_11/character1";
    tierOneOpponents[arrayIndex].performanceTier = 1;

    arrayIndex++;

    //Second regular opponent from Big Lou races
    tierOneOpponents.emplace_back();

    tierOneOpponents[arrayIndex].nodeName = "race_bin_11/character2";
    tierOneOpponents[arrayIndex].performanceTier = 1;

    arrayIndex++;

    //Third regular opponent from Big Lou races
    tierOneOpponents.emplace_back();

    tierOneOpponents[arrayIndex].nodeName = "race_bin_11/character3";
    tierOneOpponents[arrayIndex].performanceTier = 1;

    //Done
    return tierOneOpponents;
}

std::vector<Opponent> getListOfTierTwoOpponents()
{
    //Array with structs is initialized here
    std::vector<Opponent> tierTwoOpponents;
    int arrayIndex = 0;

    //First regular opponent from Baron races
    tierTwoOpponents.emplace_back();

    tierTwoOpponents[arrayIndex].nodeName = "race_bin_10/character1";

    arrayIndex++;

    //Second regular opponent from Baron races
    tierTwoOpponents.emplace_back();

    tierTwoOpponents[arrayIndex].nodeName = "race_bin_10/character2";

    arrayIndex++;

    //Third regular opponent from Baron races
    tierTwoOpponents.emplace_back();

    tierTwoOpponents[arrayIndex].nodeName = "race_bin_10/character3";

    arrayIndex++;

    //First regular opponent from Earl races
    tierTwoOpponents.emplace_back();

    tierTwoOpponents[arrayIndex].nodeName = "race_bin_09/character1";

    arrayIndex++;

    //Second regular opponent from Earl races
    tierTwoOpponents.emplace_back();

    tierTwoOpponents[arrayIndex].nodeName = "race_bin_09/character2";

    arrayIndex++;

    //Third regular opponent from Earl races
    tierTwoOpponents.emplace_back();

    tierTwoOpponents[arrayIndex].nodeName = "race_bin_09/character3";

    arrayIndex++;

    //First regular opponent from Jewels races
    tierTwoOpponents.emplace_back();

    tierTwoOpponents[arrayIndex].nodeName = "race_bin_08/character1";

    arrayIndex++;

    //Second regular opponent from Jewels races
    tierTwoOpponents.emplace_back();

    tierTwoOpponents[arrayIndex].nodeName = "race_bin_08/character2";

    arrayIndex++;

    //Third regular opponent from Jewels races
    tierTwoOpponents.emplace_back();

    tierTwoOpponents[arrayIndex].nodeName = "race_bin_08/character3";

    arrayIndex++;

    //First regular opponent from Kaze races
    tierTwoOpponents.emplace_back();

    tierTwoOpponents[arrayIndex].nodeName = "race_bin_07/character1";

    arrayIndex++;

    //Second regular opponent from Kaze races
    tierTwoOpponents.emplace_back();

    tierTwoOpponents[arrayIndex].nodeName = "race_bin_07/character2";

    arrayIndex++;

    //Third regular opponent from Kaze races
    tierTwoOpponents.emplace_back();

    tierTwoOpponents[arrayIndex].nodeName = "race_bin_07/character3";

    arrayIndex++;

    //First regular opponent from Ming races
    tierTwoOpponents.emplace_back();

    tierTwoOpponents[arrayIndex].nodeName = "race_bin_06/character1";

    arrayIndex++;

    //Second regular opponent from Ming races
    tierTwoOpponents.emplace_back();

    tierTwoOpponents[arrayIndex].nodeName = "race_bin_06/character2";

    arrayIndex++;

    //Third regular opponent from Ming races
    tierTwoOpponents.emplace_back();

    tierTwoOpponents[arrayIndex].nodeName = "race_bin_06/character3";

    //Done
    return tierTwoOpponents;
}

std::vector<Opponent> getListOfTierThreeOpponents()
{
    //Array with structs is initialized here
    std::vector<Opponent> tierThreeOpponents;
    int arrayIndex = 0;

    //First regular opponent from Webster races
    tierThreeOpponents.emplace_back();

    tierThreeOpponents[arrayIndex].nodeName = "race_bin_05/character1";
    tierThreeOpponents[arrayIndex].performanceTier = 3;

    arrayIndex++;

    //Second regular opponent from Webster races
    tierThreeOpponents.emplace_back();

    tierThreeOpponents[arrayIndex].nodeName = "race_bin_05/character2";
    tierThreeOpponents[arrayIndex].performanceTier = 3;

    arrayIndex++;

    //Third regular opponent from Webster races
    tierThreeOpponents.emplace_back();

    tierThreeOpponents[arrayIndex].nodeName = "race_bin_05/character3";
    tierThreeOpponents[arrayIndex].performanceTier = 3;

    arrayIndex++;

    //First regular opponent from JV races
    tierThreeOpponents.emplace_back();

    tierThreeOpponents[arrayIndex].nodeName = "race_bin_04/character1";
    tierThreeOpponents[arrayIndex].performanceTier = 3;

    arrayIndex++;

    //Second regular opponent from JV races
    tierThreeOpponents.emplace_back();

    tierThreeOpponents[arrayIndex].nodeName = "race_bin_04/character2";
    tierThreeOpponents[arrayIndex].performanceTier = 3;

    arrayIndex++;

    //Third regular opponent from JV races
    tierThreeOpponents.emplace_back();

    tierThreeOpponents[arrayIndex].nodeName = "race_bin_04/character3";
    tierThreeOpponents[arrayIndex].performanceTier = 3;

    arrayIndex++;

    //First regular opponent from Ronnie races
    tierThreeOpponents.emplace_back();

    tierThreeOpponents[arrayIndex].nodeName = "race_bin_03/character1";
    tierThreeOpponents[arrayIndex].performanceTier = 3;

    arrayIndex++;

    //Second regular opponent from Ronnie races
    tierThreeOpponents.emplace_back();

    tierThreeOpponents[arrayIndex].nodeName = "race_bin_03/character2";
    tierThreeOpponents[arrayIndex].performanceTier = 3;

    arrayIndex++;

    //Third regular opponent from Ronnie races
    tierThreeOpponents.emplace_back();

    tierThreeOpponents[arrayIndex].nodeName = "race_bin_03/character3";
    tierThreeOpponents[arrayIndex].performanceTier = 3;

    arrayIndex++;

    //First regular opponent from Bull races
    tierThreeOpponents.emplace_back();

    tierThreeOpponents[arrayIndex].nodeName = "race_bin_02/character1";
    tierThreeOpponents[arrayIndex].performanceTier = 3;

    arrayIndex++;

    //Second regular opponent from Bull races
    tierThreeOpponents.emplace_back();

    tierThreeOpponents[arrayIndex].nodeName = "race_bin_02/character2";
    tierThreeOpponents[arrayIndex].performanceTier = 3;

    arrayIndex++;

    //Third regular opponent from Bull races
    tierThreeOpponents.emplace_back();

    tierThreeOpponents[arrayIndex].nodeName = "race_bin_02/character3";
    tierThreeOpponents[arrayIndex].performanceTier = 3;

    //Done
    return tierThreeOpponents;
}

std::vector<Opponent> getListOfTierFourOpponents()
{
    //Array with structs is initialized here
    std::vector<Opponent> tierFourOpponents;
    int arrayIndex = 0;

    //First regular opponent from Razor races
    tierFourOpponents.emplace_back();

    tierFourOpponents[arrayIndex].nodeName = "race_bin_01/character1";
    tierFourOpponents[arrayIndex].performanceTier = 4;

    arrayIndex++;

    //Second regular opponent from Razor races
    tierFourOpponents.emplace_back();

    tierFourOpponents[arrayIndex].nodeName = "race_bin_01/character2";
    tierFourOpponents[arrayIndex].performanceTier = 4;

    arrayIndex++;

    //Third regular opponent from Razor races
    tierFourOpponents.emplace_back();

    tierFourOpponents[arrayIndex].nodeName = "race_bin_01/character3";
    tierFourOpponents[arrayIndex].performanceTier = 4;

    arrayIndex++;

    //First unused opponent in vanilla
    tierFourOpponents.emplace_back();

    tierFourOpponents[arrayIndex].nodeName = "race_bin_opm/20_1_2_maxcarload/opponent1";
    tierFourOpponents[arrayIndex].performanceTier = 4;

    tierFourOpponents[arrayIndex].hasSkillLevelField = false;
    tierFourOpponents[arrayIndex].hasMinimumCarPerformanceField = false;

    tierFourOpponents[arrayIndex].hasForceStartPositionField = true;
    tierFourOpponents[arrayIndex].hasCarTypeField = true;

    arrayIndex++;

    //Second unused opponent in vanilla
    tierFourOpponents.emplace_back();

    tierFourOpponents[arrayIndex].nodeName = "race_bin_opm/20_1_2_maxcarload/opponent2";
    tierFourOpponents[arrayIndex].performanceTier = 4;

    tierFourOpponents[arrayIndex].hasSkillLevelField = false;
    tierFourOpponents[arrayIndex].hasMinimumCarPerformanceField = false;

    tierFourOpponents[arrayIndex].hasForceStartPositionField = true;
    tierFourOpponents[arrayIndex].hasCarTypeField = true;

    arrayIndex++;

    //Third unused opponent in vanilla
    tierFourOpponents.emplace_back();

    tierFourOpponents[arrayIndex].nodeName = "race_bin_opm/20_1_2_maxcarload/opponent3";
    tierFourOpponents[arrayIndex].performanceTier = 4;

    tierFourOpponents[arrayIndex].hasSkillLevelField = false;
    tierFourOpponents[arrayIndex].hasMinimumCarPerformanceField = false;

    tierFourOpponents[arrayIndex].hasForceStartPositionField = true;
    tierFourOpponents[arrayIndex].hasCarTypeField = true;

    arrayIndex++;

    //Fourth unused opponent in vanilla
    tierFourOpponents.emplace_back();

    tierFourOpponents[arrayIndex].nodeName = "race_bin_opm/20_2_1_rival_race/opponent1";
    tierFourOpponents[arrayIndex].performanceTier = 4;

    tierFourOpponents[arrayIndex].hasMinimumCarPerformanceField = false;
    tierFourOpponents[arrayIndex].hasPresetRideField = true;

    tierFourOpponents[arrayIndex].hasForceStartPositionField = true;
    tierFourOpponents[arrayIndex].hasCarTypeField = true;

    arrayIndex++;

    //Fifth unused opponent in vanilla
    tierFourOpponents.emplace_back();

    tierFourOpponents[arrayIndex].nodeName = "race_bin_opm/20_2_1_rival_race/opponent2";
    tierFourOpponents[arrayIndex].performanceTier = 4;

    tierFourOpponents[arrayIndex].hasMinimumCarPerformanceField = false;
    tierFourOpponents[arrayIndex].hasPresetRideField = true;

    tierFourOpponents[arrayIndex].hasForceStartPositionField = true;
    tierFourOpponents[arrayIndex].hasCarTypeField = true;

    arrayIndex++;

    //Sixth unused opponent in vanilla
    tierFourOpponents.emplace_back();

    tierFourOpponents[arrayIndex].nodeName = "race_bin_opm/20_2_1_rival_race/opponent3";
    tierFourOpponents[arrayIndex].performanceTier = 4;

    tierFourOpponents[arrayIndex].hasMinimumCarPerformanceField = false;
    tierFourOpponents[arrayIndex].hasPresetRideField = true;

    tierFourOpponents[arrayIndex].hasForceStartPositionField = true;
    tierFourOpponents[arrayIndex].hasCarTypeField = true;

    arrayIndex++;

    //Seventh unused opponent in vanilla
    tierFourOpponents.emplace_back();

    tierFourOpponents[arrayIndex].nodeName = "race_bin_opm/20_2_2_habib_test/character1";
    tierFourOpponents[arrayIndex].performanceTier = 4;

    tierFourOpponents[arrayIndex].hasSkillLevelField = false;
    tierFourOpponents[arrayIndex].hasMinimumCarPerformanceField = false;

    //Done
    return tierFourOpponents;
}

std::vector<RaceBin> createRaceBins(const std::vector<Opponent>& scriptedOpponents,
        std::unique_ptr<int> originalNumberOfSonnyRacesPtr, std::unique_ptr<int> originalNumberOfTazRacesPtr,
        std::unique_ptr<int> originalNumberOfVicRacesPtr, std::unique_ptr<int> originalNumberOfIzzyRacesPtr,
        std::unique_ptr<int> originalNumberOfBigLouRacesPtr, std::unique_ptr<int> originalNumberOfBaronRacesPtr,
        std::unique_ptr<int> originalNumberOfEarlRacesPtr, std::unique_ptr<int> originalNumberOfJewelsRacesPtr,
        std::unique_ptr<int> originalNumberOfKazeRacesPtr, std::unique_ptr<int> originalNumberOfMingRacesPtr,
        std::unique_ptr<int> originalNumberOfWebsterRacesPtr, std::unique_ptr<int> originalNumberOfJVRacesPtr,
        std::unique_ptr<int> originalNumberOfRonnieRacesPtr, std::unique_ptr<int> originalNumberOfBullRacesPtr,
        std::unique_ptr<int> originalNumberOfRazorRacesPtr)
{
    std::vector<RaceBin> raceBins;

    //Sonny
    switch(*originalNumberOfSonnyRacesPtr)
    {
        case 3:
            raceBins.emplace_back
            (
                "race_bin_15",
                searchForOpponent("race_bin_15", scriptedOpponents),
                0, 15, 3, 3, 20000, 2, 3, 4, 4, 13, true,
                std::vector<std::string> { "1", "2", "3", "4", "7" }
            );

        break;
        
        default:
            raceBins.emplace_back
            (
                "race_bin_15",
                searchForOpponent("race_bin_15", scriptedOpponents),
                0, 15, 3, 3, 20000, 2, 6, 4, 4, 16, true,
                std::vector<std::string> { "1", "2", "3", "4", "7", "13", "14", "15" }
            );
    }

    //Taz
    switch(*originalNumberOfTazRacesPtr)
    {
        case 6:
            raceBins.emplace_back
            (
                "race_bin_14",
                searchForOpponent("race_bin_14", scriptedOpponents),
                0, 14, 4, 3, 50000, 2, 6, 7, 5, 15, true,
                std::vector<std::string> { "1", "2", "3", "4", "5", "6", "7", "9" }
            );

            break;

        default:
            raceBins.emplace_back
            (
                "race_bin_14",
                searchForOpponent("race_bin_14", scriptedOpponents),
                0, 14, 4, 3, 50000, 2, 10, 7, 5, 19, true,
                std::vector<std::string> { "1", "2", "3", "4", "5", "6", "7", "9",
                    "15", "16", "17", "18" }
            );
    }

    //Vic
    switch(*originalNumberOfVicRacesPtr)
    {
        case 7:
            raceBins.emplace_back
            (
                "race_bin_13",
                searchForOpponent("race_bin_13", scriptedOpponents),
                1, 13, 4, 3, 100000, 2, 7, 8, 5, 16, true,
                std::vector<std::string> { "1", "2", "3", "4", "5", "6", "7", "11", "12" }
            );

            break;

        case 11:
            raceBins.emplace_back
            (
                "race_bin_13",
                searchForOpponent("race_bin_13", scriptedOpponents),
                1, 13, 4, 3, 100000, 2, 11, 8, 5, 20, true,
                std::vector<std::string> { "1", "2", "3", "4", "5", "6", "7", "11",
                    "12", "16", "17", "18", "19" }
            );

            break;

        default:
            raceBins.emplace_back
            (
                "race_bin_13",
                searchForOpponent("race_bin_13", scriptedOpponents),
                1, 13, 4, 3, 100000, 2, 12, 8, 5, 21, true,
                std::vector<std::string> { "1", "2", "3", "4", "5", "6", "7", "11",
                    "12", "16", "17", "18", "19", "20" }
            );
    }

    return raceBins;

    //Izzy
    switch(*originalNumberOfIzzyRacesPtr)
    {
        case 7:
            raceBins.emplace_back
            (
                "race_bin_12",
                searchForOpponent("race_bin_12", scriptedOpponents),
                1, 12, 4, 3, 180000, 2, 7, 8, 5, 17, true,
                std::vector<std::string> { "1", "2", "3", "4", "5", "6", "10", "11", "12" }
            );

            break;

        case 14:
            raceBins.emplace_back
            (
                "race_bin_12",
                searchForOpponent("race_bin_12", scriptedOpponents),
                1, 12, 4, 3, 180000, 2, 14, 8, 5, 24, true,
                std::vector<std::string> { "1", "2", "3", "4", "5", "6", "10", "11",
                    "12", "17", "18", "19", "20", "21", "22", "23" }
            );

            break;

        default:
            raceBins.emplace_back
            (
                "race_bin_12",
                searchForOpponent("race_bin_12", scriptedOpponents),
                1, 12, 4, 3, 180000, 2, 15, 8, 5, 25, true,
                std::vector<std::string> { "1", "2", "3", "4", "5", "6", "7", "9",
                    "15", "16", "17", "18", "19", "20", "21", "22", "23", "24" }
            );
    }

    //Big Lou
    switch(*originalNumberOfBigLouRacesPtr)
    {
        case 8:
            raceBins.emplace_back
            (
                "race_bin_11",
                searchForOpponent("race_bin_11", scriptedOpponents),
                1, 11, 5, 3, 300000, 2, 8, 9, 5, 18, true,
                std::vector<std::string> { "1", "2", "3", "4", "5", "6", "9", "10",
                    "11", "15" }
            );

            break;

        default:
            raceBins.emplace_back
            (
                "race_bin_11",
                searchForOpponent("race_bin_11", scriptedOpponents),
                1, 11, 5, 3, 300000, 2, 17, 9, 5, 27, true,
                std::vector<std::string> { "1", "2", "3", "4", "5", "6", "9", "10", "11",
                    "15", "18", "19", "20", "21", "22", "23", "24", "25", "26" }
            );
    }

    //Baron
    switch(*originalNumberOfBaronRacesPtr)
    {
        case 8:
            raceBins.emplace_back
            (
                "race_bin_10",
                searchForOpponent("race_bin_10", scriptedOpponents),
                1, 10, 5, 4, 500000, 2, 8, 9, 7, 18, true,
                std::vector<std::string> { "1", "2", "3", "4", "5", "9", "10", "11",
                    "12", "16" }
            );

            break;

        case 15:
            raceBins.emplace_back
            (
                "race_bin_10",
                searchForOpponent("race_bin_10", scriptedOpponents),
                1, 10, 5, 4, 500000, 2, 15, 9, 7, 25, true,
                std::vector<std::string> { "1", "2", "3", "4", "5", "9", "10", "11",
                    "12", "16", "17", "18", "19", "20", "21", "22", "23", "24" }
            );

            break;

        default:
            raceBins.emplace_back
            (
                "race_bin_10",
                searchForOpponent("race_bin_10", scriptedOpponents),
                1, 10, 5, 4, 500000, 2, 17, 9, 7, 27, true,
                std::vector<std::string> { "1", "2", "3", "4", "5", "9", "10", "11",
                    "12", "16", "17", "18", "19", "20", "21", "22", "23", "24",
                    "25", "26" }
            );
    }

    //Earl
    switch(*originalNumberOfEarlRacesPtr)
    {
        case 8:
            raceBins.emplace_back
            (
                "race_bin_09",
                searchForOpponent("race_bin_09", scriptedOpponents),
                2, 9, 5, 4, 790000, 2, 8, 9, 7, 18, true,
                std::vector<std::string> { "1", "2", "3", "4", "5", "7", "8", "9",
                    "15", "16" }
            );

            break;

        default:
            raceBins.emplace_back
            (
                "race_bin_09",
                searchForOpponent("race_bin_09", scriptedOpponents),
                2, 9, 5, 4, 790000, 2, 17, 9, 7, 27, true,
                std::vector<std::string> { "1", "2", "3", "4", "5", "7", "8", "9", "15",
                    "16", "18", "19", "20", "21", "22", "23", "24", "25", "26" }
            );
    }

    //Jewels
    switch(*originalNumberOfJewelsRacesPtr)
    {
        case 7:
            raceBins.emplace_back
            (
                "race_bin_08",
                searchForOpponent("race_bin_08", scriptedOpponents),
                2, 8, 5, 4, 1180000, 2, 7, 8, 7, 16, false,
                std::vector<std::string> { "1", "3", "6", "7", "8", "9", "13", "14", "15" }
            );

            break;

        case 17:
            raceBins.emplace_back
            (
                "race_bin_08",
                searchForOpponent("race_bin_08", scriptedOpponents),
                2, 8, 5, 4, 1180000, 2, 17, 8, 7, 24, false,
                std::vector<std::string> { "1", "3", "6", "7", "8", "9", "13", "14", "15",
                    "16", "17", "18", "19", "20", "21", "22", "23", "24", "25" }
            );

            break;

        default:
            raceBins.emplace_back
            (
                "race_bin_08",
                searchForOpponent("race_bin_08", scriptedOpponents),
                2, 8, 5, 4, 1180000, 2, 18, 8, 7, 25, false,
                std::vector<std::string> { "1", "3", "6", "7", "8", "9", "13", "14", "15",
                    "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26" }
            );
    }

    //Kaze
    switch(*originalNumberOfKazeRacesPtr)
    {
        case 10:
            raceBins.emplace_back
            (
                "race_bin_07",
                searchForOpponent("race_bin_07", scriptedOpponents),
                2, 7, 7, 4, 1680000, 2, 10, 11, 7, 20, false,
                std::vector<std::string> { "1", "2", "3", "4", "5", "6", "7", "9", "12",
                    "13", "14", "18" }
            );

            break;

        case 20:
            raceBins.emplace_back
            (
                "race_bin_07",
                searchForOpponent("race_bin_07", scriptedOpponents),
                2, 7, 7, 4, 1680000, 2, 20, 11, 7, 30, false,
                std::vector<std::string> { "1", "2", "3", "4", "5", "6", "7", "9", "12",
                    "13", "14", "18", "20", "21", "22", "23", "24", "25", "26",
                    "27", "28", "29" }
            );

            break;

        default:
            raceBins.emplace_back
            (
                "race_bin_07",
                searchForOpponent("race_bin_07", scriptedOpponents),
                2, 7, 7, 4, 1680000, 2, 23, 11, 7, 33, false,
                std::vector<std::string> { "1", "2", "3", "4", "5", "6", "7", "9", "12",
                    "13", "14", "18", "20", "21", "22", "23", "24", "25", "26",
                    "27", "28", "29", "30", "31", "32" }
            );
    }

    //Ming
    switch(*originalNumberOfMingRacesPtr)
    {
        case 10:
            raceBins.emplace_back
            (
                "race_bin_07",
                searchForOpponent("race_bin_07", scriptedOpponents),
                2, 7, 7, 4, 1680000, 2, 10, 11, 7, 20, false,
                std::vector<std::string> { "1", "2", "3", "4", "5", "6", "7", "9", "12",
                    "13", "14", "18" }
            );

            break;

        case 20:
            raceBins.emplace_back
            (
                "race_bin_07",
                searchForOpponent("race_bin_07", scriptedOpponents),
                2, 7, 7, 4, 1680000, 2, 20, 11, 7, 30, false,
                std::vector<std::string> { "1", "2", "3", "4", "5", "6", "7", "9", "12",
                    "13", "14", "18", "20", "21", "22", "23", "24", "25", "26",
                    "27", "28", "29" }
            );

            break;

        default:
            raceBins.emplace_back
            (
                "race_bin_07",
                searchForOpponent("race_bin_07", scriptedOpponents),
                2, 7, 7, 4, 1680000, 2, 23, 11, 7, 33, false,
                std::vector<std::string> { "1", "2", "3", "4", "5", "6", "7", "9", "12",
                    "13", "14", "18", "20", "21", "22", "23", "24", "25", "26",
                    "27", "28", "29", "30", "31", "32" }
            );
    }

    return raceBins;
}

void createMainSonnyTETracks(std::unique_ptr<std::vector<Circuit>> const &circuitRaces,
        std::unique_ptr<std::vector<Knockout>> const &lapKnockoutRaces,
        std::unique_ptr<std::vector<Sprint>> const &sprintRaces)
{
    //Sonny TE race 1
    circuitRaces->emplace_back();
    int raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_15/15_1_101_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "15_1_101_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_15";

    (*circuitRaces)[raceIndex].totalDistance = 6855;
    (*circuitRaces)[raceIndex].timePerLap = 37.82;
    (*circuitRaces)[raceIndex].lapsInVanilla = 3;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_15_1_101";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1025.94", "2136.73", "152.2");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Sonny TE race 2
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_15/15_2_101_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "15_2_101_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_15";

    (*sprintRaces)[raceIndex].totalDistance = 4475;
    (*sprintRaces)[raceIndex].raceTime = 63.92;
    (*sprintRaces)[raceIndex].startLineType = "narrow";
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 9;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_15_2_101";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("714.15", "3261.58", "199.72");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(4);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "1225.19", "3359.63", "204.5", "20" },
        RadiusTrigger { "754.24", "3476.9", "199.5", "20" },
        RadiusTrigger { "259.12", "3278.5", "189", "15" },
        RadiusTrigger { "484.67", "4188.59", "196.5", "15" }
    };

    (*sprintRaces)[raceIndex].isTERace = true;
    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Sonny TE race 3
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_15/15_3_101_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "15_3_101_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_15";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 8780;
    (*lapKnockoutRaces)[raceIndex].timePerLap = 37.90;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_15_3_101";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1931.3", "1871.5", "149.75");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;
}

void createMainTazTETracks(std::unique_ptr<std::vector<Circuit>> const &circuitRaces,
        std::unique_ptr<std::vector<Knockout>> const &lapKnockoutRaces,
        std::unique_ptr<std::vector<Sprint>> const &sprintRaces,
        std::unique_ptr<std::vector<Speedtrap>> const &speedtrapRaces)
{
    //Taz TE race 1
    lapKnockoutRaces->emplace_back();
    int raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_14/14_3_101_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "14_3_101_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_14";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 7265;
    (*lapKnockoutRaces)[raceIndex].timePerLap = 42.63;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_14_3_101";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("364.32", "2470.35", "166");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Taz TE race 2
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_14/14_2_101_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "14_2_101_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_14";

    (*sprintRaces)[raceIndex].totalDistance = 6055;
    (*sprintRaces)[raceIndex].raceTime = 82.12;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 12;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_14_2_101";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("-63.87", "2840.24", "196.3");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(5);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "521.63", "2517.27", "169.5", "15" },
        RadiusTrigger { "1216.33", "2133.1", "151.5", "15" },
        RadiusTrigger { "1606.68", "2288.94", "146.5", "15" },
        RadiusTrigger { "1164.42", "3041.6", "200.5", "15" },
        RadiusTrigger { "693.32", "3991.51", "213.5", "15" }
    };

    (*sprintRaces)[raceIndex].isTERace = true;
    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Taz TE race 3
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_14/14_1_101_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "14_1_101_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_14";

    (*circuitRaces)[raceIndex].totalDistance = 10580;
    (*circuitRaces)[raceIndex].timePerLap = 67.76;
    (*circuitRaces)[raceIndex].lapsInVanilla = 2;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_14_1_101";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("-340.67", "3879.29", "231");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Taz TE race 4
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_14/14_5_101_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "14_5_101_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_14";

    (*speedtrapRaces)[raceIndex].totalDistance = 4365;
    (*speedtrapRaces)[raceIndex].raceTime = 61.17;
    (*speedtrapRaces)[raceIndex].startLineType = "narrow";

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_speedtrap_14_5_101";
    (*speedtrapRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*speedtrapRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("714.15", "3261.58", "199.72");

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(4);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_14/14_5_101_speedtrap/speedtrap1", "race_bin_14/14_5_101_speedtrap/speedtrap2",
      "race_bin_14/14_5_101_speedtrap/speedtrap3", "race_bin_14/14_5_101_speedtrap/speedtrap4" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates = { { "race_bin_14/14_5_101_speedtrap/wrongway", "10" } };

    (*speedtrapRaces)[raceIndex].isTERace = true;
    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;
}

void createMainVicTETracks(std::unique_ptr<std::vector<Circuit>> const &circuitRaces,
        std::unique_ptr<std::vector<Knockout>> const &lapKnockoutRaces,
        std::unique_ptr<std::vector<Sprint>> const &sprintRaces)
{
    //Vic TE race 1
    circuitRaces->emplace_back();
    int raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_13/13_1_101_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "13_1_101_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_13";

    (*circuitRaces)[raceIndex].totalDistance = 8860;
    (*circuitRaces)[raceIndex].timePerLap = 40.90;
    (*circuitRaces)[raceIndex].lapsInVanilla = 3;
    (*circuitRaces)[raceIndex].startLineType = "narrow";

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_13_1_101";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("819.5", "2451.75", "149.1");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Vic TE race 2
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_13/13_1_102_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "13_1_102_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_13";

    (*circuitRaces)[raceIndex].totalDistance = 9880;
    (*circuitRaces)[raceIndex].timePerLap = 45.10;
    (*circuitRaces)[raceIndex].lapsInVanilla = 3;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_13_1_102";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1980.506", "1724.759", "150.15");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Vic TE race 3
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_13/13_2_101_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "13_2_101_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_13";

    (*sprintRaces)[raceIndex].totalDistance = 6727;
    (*sprintRaces)[raceIndex].raceTime = 102.24;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 11;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_13_2_101";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1984.09", "1942.79", "149.6");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(5);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "1648.6", "2334.9", "150.5", "15" },
        RadiusTrigger { "948.7", "2177.05", "154.5", "15" },
        RadiusTrigger { "787.88", "2778.35", "151.5", "15" },
        RadiusTrigger { "1432.65", "2424.7", "150.5", "15" },
        RadiusTrigger { "1154.9", "3059.25", "199.5", "15" }
    };

    (*sprintRaces)[raceIndex].isTERace = true;
    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Vic TE race 4
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_13/13_3_101_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "13_3_101_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_13";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 8760;
    (*lapKnockoutRaces)[raceIndex].timePerLap = 37.82;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_13_3_101";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("2029.63", "1774.91", "153.05");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;
}

void createExtraVicTETrack(std::unique_ptr<std::vector<Circuit>> const &circuitRaces)
{
    //Vic extra TE race 1
    circuitRaces->emplace_back();
    int raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_13/13_1_103_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "13_1_103_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_13";

    (*circuitRaces)[raceIndex].totalDistance = 7230;
    (*circuitRaces)[raceIndex].timePerLap = 37.77;
    (*circuitRaces)[raceIndex].lapsInVanilla = 3;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_13_1_103";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("349.23", "2494.66", "166.1");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;
}

void createMainIzzyTETracks(std::unique_ptr<std::vector<Circuit>> const &circuitRaces,
        std::unique_ptr<std::vector<Knockout>> const &lapKnockoutRaces,
        std::unique_ptr<std::vector<Sprint>> const &sprintRaces,
        std::unique_ptr<std::vector<Speedtrap>> const &speedtrapRaces)
{
    //Izzy TE race 1
    lapKnockoutRaces->emplace_back();
    int raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_12/12_3_101_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "12_3_101_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_12";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 7480;
    (*lapKnockoutRaces)[raceIndex].timePerLap = 39.80;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_12_3_101";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("3324.15", "3293.36", "21.95");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Izzy TE race 2
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_12/12_3_102_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "12_3_102_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_12";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 8620;
    (*lapKnockoutRaces)[raceIndex].timePerLap = 43.82;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_12_3_102";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("364.23", "2470.13", "166");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Izzy TE race 3
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_12/12_5_101_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "12_5_101_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_12";

    (*speedtrapRaces)[raceIndex].totalDistance = 6620;
    (*speedtrapRaces)[raceIndex].raceTime = 89.88;

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_speedtrap_12_5_101";
    (*speedtrapRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*speedtrapRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("-506.415", "2492.463", "247.7968");

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(5);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_12/12_5_101_speedtrap/speedtrap1", "race_bin_12/12_5_101_speedtrap/speedtrap2",
      "race_bin_12/12_5_101_speedtrap/speedtrap3", "race_bin_12/12_5_101_speedtrap/speedtrap4",
      "race_bin_12/12_5_101_speedtrap/speedtrap5" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates.reserve(3);
    (*speedtrapRaces)[raceIndex].childrenFieldUpdates =
    {
        { "race_bin_12/12_5_101_speedtrap/shortcut1", "6" },
        { "race_bin_12/12_5_101_speedtrap/shortcut2", "7" },
        { "race_bin_12/12_5_101_speedtrap/shortcut3", "8" }
    };

    (*speedtrapRaces)[raceIndex].isTERace = true;
    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Izzy TE race 4
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_12/12_1_101_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "12_1_101_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_12";

    (*circuitRaces)[raceIndex].totalDistance = 10465;
    (*circuitRaces)[raceIndex].timePerLap = 51.72;
    (*circuitRaces)[raceIndex].lapsInVanilla = 3;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_12_1_101";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("3131.5", "1303.55", "76.25");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Izzy TE race 5
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_12/12_1_102_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "12_1_102_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_12";

    (*circuitRaces)[raceIndex].totalDistance = 10680;
    (*circuitRaces)[raceIndex].timePerLap = 66.33;
    (*circuitRaces)[raceIndex].lapsInVanilla = 2;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_12_1_102";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("-342.4", "3928.04", "235.4");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Izzy TE race 6
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_12/12_2_101_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "12_2_101_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_12";

    (*sprintRaces)[raceIndex].totalDistance = 6095;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 13;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_12_2_101";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("4403.57", "585.65", "52");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(6);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "4584.9", "943.12", "40", "15" },
        RadiusTrigger { "4711.6", "530.9", "10.5", "15" },
        RadiusTrigger { "4518.85", "86.58", "4.5", "15" },
        RadiusTrigger { "3693.45", "-326.5", "22.5", "20" },
        RadiusTrigger { "3085.12", "285.16", "12.75", "20" },
        RadiusTrigger { "2701.33", "835.93", "73.5", "15" }
    };

    (*sprintRaces)[raceIndex].isTERace = true;
    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Izzy TE race 7
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_12/12_3_103_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "12_3_103_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_12";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 9920;
    (*lapKnockoutRaces)[raceIndex].timePerLap = 48.84;
    (*lapKnockoutRaces)[raceIndex].startLineType = "narrow";

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_12_3_103";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("3394.9", "559.7", "13");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;
}

void createExtraIzzyTETrack(std::unique_ptr<std::vector<Circuit>> const &circuitRaces)
{
    //Izzy extra TE race 1
    circuitRaces->emplace_back();
    int raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_12/12_1_103_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "12_1_103_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_12";

    (*circuitRaces)[raceIndex].totalDistance = 8040;
    (*circuitRaces)[raceIndex].timePerLap = 33.44;
    (*circuitRaces)[raceIndex].lapsInVanilla = 4;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_12_1_103";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("4165.57", "112.78", "17.8");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;
}

void createMainBigLouTETracks(std::unique_ptr<std::vector<Circuit>> const &circuitRaces,
        std::unique_ptr<std::vector<Knockout>> const &lapKnockoutRaces,
        std::unique_ptr<std::vector<Sprint>> const &sprintRaces,
        std::unique_ptr<std::vector<Speedtrap>> const &speedtrapRaces)
{
    //Big Lou TE race 1
    lapKnockoutRaces->emplace_back();
    int raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_11/11_3_101_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "11_3_101_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_11";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 9350;
    (*lapKnockoutRaces)[raceIndex].timePerLap = 46.37;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_11_3_101";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("349.23", "2494.66", "166.1");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Big Lou TE race 2
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_11/11_2_101_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "11_2_101_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_11";

    (*sprintRaces)[raceIndex].totalDistance = 6780;
    (*sprintRaces)[raceIndex].raceTime = 100.80;
    (*sprintRaces)[raceIndex].startLineType = "narrow";
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 11;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_11_2_101";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("373.88", "2951.25", "180.25");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(5);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "1154.9", "3059.25", "199.5", "15" },
        RadiusTrigger { "1432.65", "2424.7", "150.5", "15" },
        RadiusTrigger { "787.88", "2778.35", "151.5", "15" },
        RadiusTrigger { "948.7", "2177.05", "154.5", "20" },
        RadiusTrigger { "1648.6", "2334.9", "150.5", "15" }
    };

    (*sprintRaces)[raceIndex].isTERace = true;
    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Big Lou TE race 3
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_11/11_3_102_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "11_3_102_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_11";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 9060;
    (*lapKnockoutRaces)[raceIndex].timePerLap = 49.11;
    (*lapKnockoutRaces)[raceIndex].startLineType = "narrow";

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_11_3_102";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("3972.13", "598.34", "44");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Big Lou TE race 4
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_11/11_1_101_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "11_1_101_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_11";

    (*circuitRaces)[raceIndex].totalDistance = 12020;
    (*circuitRaces)[raceIndex].timePerLap = 57.76;
    (*circuitRaces)[raceIndex].lapsInVanilla = 3;
    (*circuitRaces)[raceIndex].startLineType = "narrow";

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_11_1_101";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("3316.9", "56.4", "12.3");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Big Lou TE race 5
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_11/11_2_102_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "11_2_102_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_11";

    (*sprintRaces)[raceIndex].totalDistance = 7405;
    (*sprintRaces)[raceIndex].raceTime = 106.27;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 10;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_11_2_102";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("3396.28", "1118.93", "73.2");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(4);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "4408.88", "999.69", "64.7", "15" },
        RadiusTrigger { "3780.83", "738.3", "15.7", "20" },
        RadiusTrigger { "3160.12", "1701.9", "105.5", "15" },
        RadiusTrigger { "3631", "2748.05", "9.85", "15" }
    };

    (*sprintRaces)[raceIndex].isTERace = true;
    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Big Lou TE race 6
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_11/11_1_102_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "11_1_102_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_11";

    (*circuitRaces)[raceIndex].totalDistance = 13255;
    (*circuitRaces)[raceIndex].timePerLap = 45.85;
    (*circuitRaces)[raceIndex].lapsInVanilla = 4;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_11_1_102";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("2065.756", "1523.344", "149.7");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Big Lou TE race 7
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_11/11_5_101_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "11_5_101_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_11";

    (*speedtrapRaces)[raceIndex].totalDistance = 7145;
    (*speedtrapRaces)[raceIndex].startLineType = "narrow";

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_speedtrap_11_5_101";
    (*speedtrapRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*speedtrapRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("870.2", "3786", "199");

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(8);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_11/11_5_101_speedtrap/speedtrap1", "race_bin_11/11_5_101_speedtrap/speedtrap2",
      "race_bin_11/11_5_101_speedtrap/speedtrap3", "race_bin_11/11_5_101_speedtrap/speedtrap4",
      "race_bin_11/11_5_101_speedtrap/speedtrap5", "race_bin_11/11_5_101_speedtrap/speedtrap6",
      "race_bin_11/11_5_101_speedtrap/speedtrap7", "race_bin_11/11_5_101_speedtrap/speedtrap8" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates = { { "", "9" } };

    (*speedtrapRaces)[raceIndex].isTERace = true;
    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Big Lou TE race 8
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_11/11_1_103_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "11_1_103_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_11";

    (*circuitRaces)[raceIndex].totalDistance = 9470;
    (*circuitRaces)[raceIndex].timePerLap = 67.31;
    (*circuitRaces)[raceIndex].lapsInVanilla = 2;
    (*circuitRaces)[raceIndex].startLineType = "narrow";

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_11_1_103";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("568.56", "2801.15", "171.45");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Big Lou TE race 9
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_11/11_3_103_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "11_3_103_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_11";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 7485;
    (*lapKnockoutRaces)[raceIndex].timePerLap = 38.54;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_11_3_103";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("3372.63", "3269.5", "19.25");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;
}

void createMainBaronTETracks(std::unique_ptr<std::vector<Circuit>> const &circuitRaces,
        std::unique_ptr<std::vector<Knockout>> const &lapKnockoutRaces,
        std::unique_ptr<std::vector<Sprint>> const &sprintRaces,
        std::unique_ptr<std::vector<Speedtrap>> const &speedtrapRaces)
{
    //Baron TE race 1
    circuitRaces->emplace_back();
    int raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_10/10_1_101_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "10_1_101_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_10";

    (*circuitRaces)[raceIndex].totalDistance = 16225;
    (*circuitRaces)[raceIndex].timePerLap = 75.84;
    (*circuitRaces)[raceIndex].lapsInVanilla = 3;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_10_1_101";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("587.9847", "3292.51", "199.4434");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Baron TE race 2
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_10/10_3_101_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "10_3_101_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_10";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 11222;
    (*lapKnockoutRaces)[raceIndex].timePerLap = 55.75;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_10_3_101";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("3542.06", "2047.77", "68.8");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Baron TE race 3
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_10/10_5_101_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "10_5_101_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_10";

    (*speedtrapRaces)[raceIndex].totalDistance = 6215;

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_speedtrap_10_5_101";
    (*speedtrapRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*speedtrapRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1409.4", "4439.63", "214.2");

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(7);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_10/10_5_101_speedtrap/speedtrap1", "race_bin_10/10_5_101_speedtrap/speedtrap2",
      "race_bin_10/10_5_101_speedtrap/speedtrap3", "race_bin_10/10_5_101_speedtrap/speedtrap4",
      "race_bin_10/10_5_101_speedtrap/speedtrap5", "race_bin_10/10_5_101_speedtrap/speedtrap6",
      "race_bin_10/10_5_101_speedtrap/speedtrap7" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates = { { "", "14" } };

    (*speedtrapRaces)[raceIndex].isTERace = true;
    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Baron TE race 4
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_10/10_3_102_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "10_3_102_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_10";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 9700;
    (*lapKnockoutRaces)[raceIndex].timePerLap = 53.95;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_10_3_102";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("4542.81", "103.06", "4.125");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Baron TE race 5
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_10/10_2_101_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "10_2_101_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_10";

    (*sprintRaces)[raceIndex].totalDistance = 6590;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 10;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_10_2_101";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("2118", "1265.77", "150");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(3);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "1321.13", "1410.66", "127", "25" },
        RadiusTrigger { "1591.32", "2511.14", "151.1", "15" },
        RadiusTrigger { "1165.4", "3039.5", "200", "15" }
    };

    (*sprintRaces)[raceIndex].isTERace = true;
    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Baron TE race 6
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_10/10_1_104_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "10_1_104_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_10";

    (*circuitRaces)[raceIndex].totalDistance = 12920;
    (*circuitRaces)[raceIndex].lapsInVanilla = 2;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_10_1_104";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("3668.25", "1058.22", "57.5");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Baron TE race 7
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_10/10_2_102_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "10_2_102_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_10";

    (*sprintRaces)[raceIndex].totalDistance = 6850;
    (*sprintRaces)[raceIndex].raceTime = 99.83;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 18;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_10_2_102";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1956.05", "1846.8", "150.7");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(6);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "2570.8", "1073", "86.5", "15" },
        RadiusTrigger { "2827.16", "684.27", "47.5", "15" },
        RadiusTrigger { "3407.34", "-217.53", "12.85", "20" },
        RadiusTrigger { "4518.85", "86.58", "4.5", "15" },
        RadiusTrigger { "4711.6", "530.9", "10.5", "15" },
        RadiusTrigger { "4460.18", "873.07", "61.25", "15" }
    };

    (*sprintRaces)[raceIndex].isTERace = true;
    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;
}

void createExtraBaronTETracks(std::unique_ptr<std::vector<Circuit>> const &circuitRaces)
{
    //Baron extra TE race 1
    circuitRaces->emplace_back();
    int raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_10/10_1_102_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "10_1_102_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_10";

    (*circuitRaces)[raceIndex].totalDistance = 9310;
    (*circuitRaces)[raceIndex].timePerLap = 36.47;
    (*circuitRaces)[raceIndex].lapsInVanilla = 4;
    (*circuitRaces)[raceIndex].startLineType = "narrow";

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_10_1_102";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("4408.88", "999.69", "64.2");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Baron extra TE race 2
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_10/10_1_103_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "10_1_103_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_10";

    (*circuitRaces)[raceIndex].totalDistance = 8100;
    (*circuitRaces)[raceIndex].timePerLap = 35.97;
    (*circuitRaces)[raceIndex].lapsInVanilla = 4;
    (*circuitRaces)[raceIndex].startLineType = "narrow";

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_10_1_103";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("520.02", "2520.77", "169");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;
}

void createMainEarlTETracks(std::unique_ptr<std::vector<Circuit>> const &circuitRaces,
        std::unique_ptr<std::vector<Knockout>> const &lapKnockoutRaces,
        std::unique_ptr<std::vector<Sprint>> const &sprintRaces)
{
    //Earl TE race 1
    sprintRaces->emplace_back();
    int raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_09/9_2_101_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "9_2_101_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_09";

    (*sprintRaces)[raceIndex].totalDistance = 6025;
    (*sprintRaces)[raceIndex].startLineType = "narrow";
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 11;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_9_2_101";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("609.4", "2804.4", "168.5");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(4);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "1133.44", "2404.74", "154.7", "15" },
        RadiusTrigger { "1577.26", "2028.65", "144.5", "15" },
        RadiusTrigger { "1626.28", "2311.15", "149", "15" },
        RadiusTrigger { "1162.16", "3045.25", "200", "15" }
    };

    (*sprintRaces)[raceIndex].isTERace = true;
    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Earl TE race 2
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_09/9_1_101_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "9_1_101_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_09";

    (*circuitRaces)[raceIndex].totalDistance = 16310;
    (*circuitRaces)[raceIndex].timePerLap = 75.61;
    (*circuitRaces)[raceIndex].lapsInVanilla = 3;
    (*circuitRaces)[raceIndex].startLineType = "narrow";

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_9_1_101";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("221.6378", "3421.059", "188.3");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Earl TE race 3
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_09/9_1_102_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "9_1_102_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_09";

    (*circuitRaces)[raceIndex].totalDistance = 9450;
    (*circuitRaces)[raceIndex].timePerLap = 52.57;
    (*circuitRaces)[raceIndex].lapsInVanilla = 3;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_9_1_102";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("4165.57", "112.78", "17.8");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Earl TE race 4
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_09/9_2_103_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "9_2_103_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_09";

    (*sprintRaces)[raceIndex].totalDistance = 7135;
    (*sprintRaces)[raceIndex].raceTime = 113.36;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 15;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_9_2_103";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("3390.28", "-326.05", "13.5");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(5);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "4165.57", "112.78", "18.3", "15" },
        RadiusTrigger { "4641.8", "490.16", "18.5", "20" },
        RadiusTrigger { "4460.18", "873.07", "61.3", "15" },
        RadiusTrigger { "3780.65", "999.27", "49", "15" },
        RadiusTrigger { "3131.5", "1303.55", "76.8", "25" }
    };

    (*sprintRaces)[raceIndex].isTERace = true;
    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Earl TE race 5
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_09/9_3_101_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "9_3_101_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_09";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 9900;
    (*lapKnockoutRaces)[raceIndex].timePerLap = 48.67;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_9_3_101";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("3394.7", "567.47", "13");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Earl TE race 6
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_09/9_1_103_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "9_1_103_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_09";

    (*circuitRaces)[raceIndex].totalDistance = 9140;
    (*circuitRaces)[raceIndex].timePerLap = 37.82;
    (*circuitRaces)[raceIndex].lapsInVanilla = 4;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_9_1_103";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("911.04", "2196.57", "154");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Earl TE race 7
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_09/9_2_102_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "9_2_102_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_09";

    (*sprintRaces)[raceIndex].totalDistance = 8210;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 15;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_9_2_102";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("2294.64", "2602.56", "121");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(6);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "2081.88", "3348.87", "156", "15" },
        RadiusTrigger { "1651.72", "3920.77", "176.75", "15" },
        RadiusTrigger { "617.2", "3312.7", "199.5", "15" },
        RadiusTrigger { "-32.6", "3666.77", "223.5", "15" },
        RadiusTrigger { "206.77", "2837.3", "180.5", "15" },
        RadiusTrigger { "1135.58", "2244.77", "154.5", "20" }
    };

    (*sprintRaces)[raceIndex].isTERace = true;
    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Earl TE race 8
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_09/9_3_102_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "9_3_102_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_09";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 16755;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_9_3_102";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("3970.64", "3335.92", "13.25");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Earl TE race 9
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_09/9_1_104_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "9_1_104_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_09";

    (*circuitRaces)[raceIndex].totalDistance = 12525;
    (*circuitRaces)[raceIndex].lapsInVanilla = 3;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_9_1_104";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("3127.51", "953.4", "66.5");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;
}

void createMainJewelsTETracks(std::unique_ptr<std::vector<Circuit>> const &circuitRaces,
        std::unique_ptr<std::vector<Knockout>> const &lapKnockoutRaces,
        std::unique_ptr<std::vector<Sprint>> const &sprintRaces,
        std::unique_ptr<std::vector<Speedtrap>> const &speedtrapRaces)
{
    //Jewels TE race 1
    circuitRaces->emplace_back();
    int raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_08/8_1_101_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "8_1_101_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_08";

    (*circuitRaces)[raceIndex].totalDistance = 10444;
    (*circuitRaces)[raceIndex].timePerLap = 55.93;
    (*circuitRaces)[raceIndex].lapsInVanilla = 3;
    (*circuitRaces)[raceIndex].startLineType = "narrow";

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_8_1_101";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("819.5", "2451.75", "149.1");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Jewels TE race 2
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_08/8_2_101_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "8_2_101_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_08";

    (*sprintRaces)[raceIndex].totalDistance = 7160;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 14;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_8_2_101";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("750.7", "2575.73", "154.25");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(5);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "1126.32", "2441.7", "154.7", "15" },
        RadiusTrigger { "911.04", "2196.57", "154.5", "15" },
        RadiusTrigger { "1867.55", "1934.95", "149.75", "15" },
        RadiusTrigger { "1442.35", "2667.6", "162.5", "15" },
        RadiusTrigger { "1239.14", "3404.37", "205.5", "20" }
    };

    (*sprintRaces)[raceIndex].isTERace = true;
    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Jewels TE race 3
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_08/8_3_101_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "8_3_101_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_08";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 12740;
    (*lapKnockoutRaces)[raceIndex].timePerLap = 64.97;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_8_3_101";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("3435.42", "2020.71", "80.6");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Jewels TE race 4
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_08/8_5_101_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "8_5_101_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_08";

    (*speedtrapRaces)[raceIndex].totalDistance = 7600;
    (*speedtrapRaces)[raceIndex].raceTime = 119.25;
    (*speedtrapRaces)[raceIndex].startLineType = "narrow";

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_speedtrap_8_5_101";
    (*speedtrapRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*speedtrapRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("4519.09", "712.46", "56.1");

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(8);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_08/8_5_101_speedtrap/speedtrap1", "race_bin_08/8_5_101_speedtrap/speedtrap2",
      "race_bin_08/8_5_101_speedtrap/speedtrap3", "race_bin_08/8_5_101_speedtrap/speedtrap4",
      "race_bin_08/8_5_101_speedtrap/speedtrap5", "race_bin_08/8_5_101_speedtrap/speedtrap6",
      "race_bin_08/8_5_101_speedtrap/speedtrap7", "race_bin_08/8_5_101_speedtrap/speedtrap8" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates = { { "", "6" } };

    (*speedtrapRaces)[raceIndex].isTERace = true;
    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Jewels TE race 5
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_08/8_1_105_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "8_1_105_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_08";

    (*circuitRaces)[raceIndex].totalDistance = 18578;
    (*circuitRaces)[raceIndex].lapsInVanilla = 2;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_8_1_105";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1327.66", "2285.07", "145.38");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Jewels TE race 6
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_08/8_5_102_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "8_5_102_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_08";

    (*speedtrapRaces)[raceIndex].totalDistance = 8165;
    (*speedtrapRaces)[raceIndex].raceTime = 117.64;

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_speedtrap_8_5_102";
    (*speedtrapRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*speedtrapRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1363.2", "-838.67", "126.5");

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(9);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_08/8_5_102_speedtrap/speedtrap1", "race_bin_08/8_5_102_speedtrap/speedtrap2",
      "race_bin_08/8_5_102_speedtrap/speedtrap3", "race_bin_08/8_5_102_speedtrap/speedtrap4",
      "race_bin_08/8_5_102_speedtrap/speedtrap5", "race_bin_08/8_5_102_speedtrap/speedtrap6",
      "race_bin_08/8_5_102_speedtrap/speedtrap7", "race_bin_08/8_5_102_speedtrap/speedtrap8",
      "race_bin_08/8_5_102_speedtrap/speedtrap9" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates = { { "", "14" } };

    (*speedtrapRaces)[raceIndex].isTERace = true;
    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Jewels TE race 7
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_08/8_1_102_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "8_1_102_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_08";

    (*circuitRaces)[raceIndex].totalDistance = 10870;
    (*circuitRaces)[raceIndex].timePerLap = 42.62;
    (*circuitRaces)[raceIndex].lapsInVanilla = 4;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_8_1_102";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1188.26", "-22.7", "98.5");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Jewels TE race 8
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_08/8_1_103_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "8_1_103_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_08";

    (*circuitRaces)[raceIndex].totalDistance = 12880;
    (*circuitRaces)[raceIndex].timePerLap = 59.20;
    (*circuitRaces)[raceIndex].lapsInVanilla = 3;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_8_1_103";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("2142.2", "46.37", "92.45");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Jewels TE race 9
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_08/8_2_102_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "8_2_102_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_08";

    (*sprintRaces)[raceIndex].totalDistance = 6955;
    (*sprintRaces)[raceIndex].raceTime = 96.47;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 13;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_8_2_102";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1458.46", "900.98", "114.5");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(4);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "734.8", "75.96", "113.8", "20" },
        RadiusTrigger { "1555.58", "93.8", "93.4", "15" },
        RadiusTrigger { "1198.87", "548.06", "98.6", "20" },
        RadiusTrigger { "1983.1", "-109.84", "102.1", "15" }
    };

    (*sprintRaces)[raceIndex].isTERace = true;
    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Jewels TE race 10
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_08/8_3_102_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "8_3_102_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_08";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 9525;
    (*lapKnockoutRaces)[raceIndex].timePerLap = 46.95;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_8_3_102";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1034.6", "607.1", "119.25");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;
}

void createExtraJewelsTETrack(std::unique_ptr<std::vector<Circuit>> const &circuitRaces)
{
    //Jewels extra TE race 1
    circuitRaces->emplace_back();
    int raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_08/8_1_104_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "8_1_104_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_08";

    (*circuitRaces)[raceIndex].totalDistance = 8645;
    (*circuitRaces)[raceIndex].timePerLap = 33.99;
    (*circuitRaces)[raceIndex].lapsInVanilla = 4;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_8_1_104";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("3119.66", "183.3", "12.18");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;
}

void createMainKazeTETracks(std::unique_ptr<std::vector<Circuit>> const &circuitRaces,
        std::unique_ptr<std::vector<Knockout>> const &lapKnockoutRaces,
        std::unique_ptr<std::vector<Sprint>> const &sprintRaces,
        std::unique_ptr<std::vector<Speedtrap>> const &speedtrapRaces)
{
    //Kaze TE race 1
    circuitRaces->emplace_back();
    int raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_07/7_1_101_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "7_1_101_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_07";

    (*circuitRaces)[raceIndex].totalDistance = 14380;
    (*circuitRaces)[raceIndex].timePerLap = 88.86;
    (*circuitRaces)[raceIndex].lapsInVanilla = 2;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_7_1_101";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("-50.19291", "2836.41", "194.6");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Kaze TE race 2
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_07/7_2_101_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "7_2_101_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_07";

    (*sprintRaces)[raceIndex].totalDistance = 6755;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 12;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_7_2_101";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1469.3", "3744.14", "190");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(4);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "1162.16", "3045.25", "200", "15" },
        RadiusTrigger { "1626.28", "2311.15", "149", "15" },
        RadiusTrigger { "1577.26", "2028.65", "144.5", "15" },
        RadiusTrigger { "1133.44", "2404.74", "154.7", "15" }
    };

    (*sprintRaces)[raceIndex].isTERace = true;
    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Kaze TE race 3
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_07/7_5_101_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "7_5_101_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_07";

    (*speedtrapRaces)[raceIndex].totalDistance = 8610;

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_speedtrap_7_5_101";
    (*speedtrapRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*speedtrapRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("2071.35", "950.85", "122");

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(8);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_07/7_5_101_speedtrap/speedtrap1", "race_bin_07/7_5_101_speedtrap/speedtrap2",
      "race_bin_07/7_5_101_speedtrap/speedtrap3", "race_bin_07/7_5_101_speedtrap/speedtrap4",
      "race_bin_07/7_5_101_speedtrap/speedtrap5", "race_bin_07/7_5_101_speedtrap/speedtrap6",
      "race_bin_07/7_5_101_speedtrap/speedtrap7", "race_bin_07/7_5_101_speedtrap/speedtrap8" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates = { { "", "14" } };

    (*speedtrapRaces)[raceIndex].isTERace = true;
    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Kaze TE race 4
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_07/7_3_102_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "7_3_102_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_07";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 11560;
    (*lapKnockoutRaces)[raceIndex].timePerLap = 52.62;
    (*lapKnockoutRaces)[raceIndex].startLineType = "narrow";

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_7_3_102";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1686.6", "-86.46", "100.8");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Kaze TE race 5
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_07/7_1_102_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "7_1_102_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_07";

    (*circuitRaces)[raceIndex].totalDistance = 14545;
    (*circuitRaces)[raceIndex].timePerLap = 91.34;
    (*circuitRaces)[raceIndex].lapsInVanilla = 2;
    (*circuitRaces)[raceIndex].startLineType = "narrow";

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_7_1_102";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1492.88", "899.3", "113.25");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Kaze TE race 6
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_07/7_2_103_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "7_2_103_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_07";

    (*sprintRaces)[raceIndex].totalDistance = 7645;
    (*sprintRaces)[raceIndex].raceTime = 107.61;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 14;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_7_2_103";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1276.17", "1500.9", "132");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(5);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "1217.68", "772.34", "115.9", "30" },
        RadiusTrigger { "734.8", "75.96", "113.8", "20" },
        RadiusTrigger { "1235.43", "390.32", "105.2", "20" },
        RadiusTrigger { "1802.65", "607.14", "94.9", "15" },
        RadiusTrigger { "2288", "1437.92", "148.5", "15" }
    };

    (*sprintRaces)[raceIndex].isTERace = true;
    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Kaze TE race 7
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_07/7_3_103_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "7_3_103_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_07";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 10605;
    (*lapKnockoutRaces)[raceIndex].timePerLap = 53.93;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_7_3_103";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1278.18", "556.92", "98");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Kaze TE race 8
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_07/7_5_102_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "7_5_102_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_07";

    (*speedtrapRaces)[raceIndex].totalDistance = 7175;
    (*speedtrapRaces)[raceIndex].raceTime = 102.24;

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_speedtrap_7_5_102";
    (*speedtrapRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*speedtrapRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1320.78", "386.5", "104.1");

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(7);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_07/7_5_102_speedtrap/speedtrap1", "race_bin_07/7_5_102_speedtrap/speedtrap2",
      "race_bin_07/7_5_102_speedtrap/speedtrap3", "race_bin_07/7_5_102_speedtrap/speedtrap4",
      "race_bin_07/7_5_102_speedtrap/speedtrap5", "race_bin_07/7_5_102_speedtrap/speedtrap6",
      "race_bin_07/7_5_102_speedtrap/speedtrap7" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates = { { "", "14" } };

    //Kaze TE race 9
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_07/7_2_102_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "7_2_102_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_07";

    (*sprintRaces)[raceIndex].totalDistance = 8275;
    (*sprintRaces)[raceIndex].raceTime = 119.69;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 13;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_7_2_102";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("4148.57", "128.55", "18.2");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(5);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "4166.83", "642.59", "57.7", "15" },
        RadiusTrigger { "4779.28", "317.22", "6", "20" },
        RadiusTrigger { "4242.32", "1326.27", "45.6", "15" },
        RadiusTrigger { "3702.12", "1302.31", "74.5", "15" },
        RadiusTrigger { "3924.85", "2219.9", "38.9", "15" }
    };

    (*sprintRaces)[raceIndex].isTERace = true;
    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Kaze TE race 10
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_07/7_3_101_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "7_3_101_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_07";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 13680;
    (*lapKnockoutRaces)[raceIndex].timePerLap = 68.47;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_7_3_101";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("3668.25", "1058.22", "57.5");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;
}

void createExtraKazeTETracks(std::unique_ptr<std::vector<Circuit>> const &circuitRaces)
{
    //Kaze extra TE race 1
    circuitRaces->emplace_back();
    int raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_07/7_1_103_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "7_1_103_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_07";

    (*circuitRaces)[raceIndex].totalDistance = 8460;
    (*circuitRaces)[raceIndex].timePerLap = 36.15;
    (*circuitRaces)[raceIndex].lapsInVanilla = 4;
    (*circuitRaces)[raceIndex].startLineType = "narrow";

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_7_1_103";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("4460.18", "873.07", "60.75");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Kaze extra TE race 2
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_07/7_1_105_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "7_1_105_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_07";

    (*circuitRaces)[raceIndex].totalDistance = 8675;
    (*circuitRaces)[raceIndex].timePerLap = 40.27;
    (*circuitRaces)[raceIndex].lapsInVanilla = 4;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_7_1_105";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("4374.68", "521.84", "49.2");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Kaze extra TE race 3
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_07/7_1_104_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "7_1_104_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_07";

    (*circuitRaces)[raceIndex].totalDistance = 12895;
    (*circuitRaces)[raceIndex].lapsInVanilla = 2;
    (*circuitRaces)[raceIndex].startLineType = "narrow";

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_7_1_104";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1536", "-508.1", "85.5");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;
}

void createMainMingTETracks(std::unique_ptr<std::vector<Circuit>> const &circuitRaces,
        std::unique_ptr<std::vector<Knockout>> const &lapKnockoutRaces,
        std::unique_ptr<std::vector<Sprint>> const &sprintRaces,
        std::unique_ptr<std::vector<Speedtrap>> const&speedtrapRaces)
{
    //Ming TE race 1
    lapKnockoutRaces->emplace_back();
    int raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_06/6_3_101_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "6_3_101_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_06";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 14755;
    (*lapKnockoutRaces)[raceIndex].timePerLap = 72.19;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_6_3_101";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1539.64", "2067.79", "144.6");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Ming TE race 2
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_06/6_2_101_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "6_2_101_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_06";

    (*sprintRaces)[raceIndex].totalDistance = 7955;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 16;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_6_2_101";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("256.06", "2683.33", "175.475");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(5);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "911.04", "2196.57", "154.5", "15" },
        RadiusTrigger { "1049.78", "2360.32", "154", "15" },
        RadiusTrigger { "171.84", "2831.56", "181.5", "15" },
        RadiusTrigger { "146.6", "3861.12", "189", "15" },
        RadiusTrigger { "496", "4532.9", "231.5", "35" }
    };

    (*sprintRaces)[raceIndex].isTERace = true;
    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Ming TE race 3
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_06/6_1_101_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "6_1_101_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_06";

    (*circuitRaces)[raceIndex].totalDistance = 15420;
    (*circuitRaces)[raceIndex].timePerLap = 103.33;
    (*circuitRaces)[raceIndex].lapsInVanilla = 2;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_6_1_101";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("-59.19287", "3664.572", "225.05" );

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Ming TE race 4
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_06/6_5_101_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "6_5_101_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_06";

    (*speedtrapRaces)[raceIndex].totalDistance = 8240;

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_speedtrap_6_5_101";
    (*speedtrapRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*speedtrapRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("2077.91", "3291.34", "154");

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(7);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_06/6_5_101_speedtrap/speedtrap1", "race_bin_06/6_5_101_speedtrap/speedtrap2",
      "race_bin_06/6_5_101_speedtrap/speedtrap3", "race_bin_06/6_5_101_speedtrap/speedtrap4",
      "race_bin_06/6_5_101_speedtrap/speedtrap5", "race_bin_06/6_5_101_speedtrap/speedtrap6",
      "race_bin_06/6_5_101_speedtrap/speedtrap7" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates = { { "", "9" } };

    (*speedtrapRaces)[raceIndex].isTERace = true;
    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Ming TE race 5
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_06/6_3_103_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "6_3_103_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_06";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 11215;
    (*lapKnockoutRaces)[raceIndex].startLineType = "narrow";

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_6_3_103";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("3631", "2748.05", "9.35");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Ming TE race 6
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_06/6_2_102_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "6_2_102_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_06";

    (*sprintRaces)[raceIndex].totalDistance = 9965;
    (*sprintRaces)[raceIndex].raceTime = 140.21;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 25;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_6_2_102";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("3461.24", "3697.22", "32");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(7);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "2846.23", "3113.91", "61.7", "15" },
        RadiusTrigger { "2480.84", "2510.35", "122.5", "15" },
        RadiusTrigger { "1867.55", "1934.95", "149.75", "15" },
        RadiusTrigger { "2707.73", "862.63", "78", "20" },
        RadiusTrigger { "3127.51", "953.4", "67", "15" },
        RadiusTrigger { "3293.9", "1752.1", "104.93", "15" },
        RadiusTrigger { "3582.9", "1106.7", "63.4", "15" }
    };

    (*sprintRaces)[raceIndex].isTERace = true;
    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Ming TE race 7
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_06/6_3_102_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "6_3_102_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_06";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 16920;
    (*lapKnockoutRaces)[raceIndex].timePerLap = 79.60;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_6_3_102";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("4186.18", "3237.46", "14.7");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Ming TE race 8
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_06/6_5_102_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "6_5_102_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_06";

    (*speedtrapRaces)[raceIndex].totalDistance = 8050;
    (*speedtrapRaces)[raceIndex].raceTime = 114.13;

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_speedtrap_6_5_102";
    (*speedtrapRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*speedtrapRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("3290.19", "1754.15", "104.2");

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(8);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_06/6_5_102_speedtrap/speedtrap1", "race_bin_06/6_5_102_speedtrap/speedtrap2",
      "race_bin_06/6_5_102_speedtrap/speedtrap3", "race_bin_06/6_5_102_speedtrap/speedtrap4",
      "race_bin_06/6_5_102_speedtrap/speedtrap5", "race_bin_06/6_5_102_speedtrap/speedtrap6",
      "race_bin_06/6_5_102_speedtrap/speedtrap7", "race_bin_06/6_5_102_speedtrap/speedtrap8" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates = { { "", "12" } };

    (*speedtrapRaces)[raceIndex].isTERace = true;
    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Ming TE race 9
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_06/6_1_103_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "6_1_103_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_06";

    (*circuitRaces)[raceIndex].totalDistance = 14550;
    (*circuitRaces)[raceIndex].timePerLap = 95.16;
    (*circuitRaces)[raceIndex].lapsInVanilla = 2;
    (*circuitRaces)[raceIndex].startLineType = "narrow";

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_6_1_103";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1659.14", "897.72", "105.95");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Ming TE race 10
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_06/6_1_104_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "6_1_104_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_06";

    (*circuitRaces)[raceIndex].totalDistance = 13820;
    (*circuitRaces)[raceIndex].timePerLap = 87.23;
    (*circuitRaces)[raceIndex].lapsInVanilla = 2;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_6_1_104";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1196.52", "-380.4", "114.9");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Ming TE race 11
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_06/6_2_103_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "6_2_103_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_06";

    (*sprintRaces)[raceIndex].totalDistance = 7340;
    (*sprintRaces)[raceIndex].raceTime = 101.92;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 15;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_6_2_103";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("2821.82", "616.2", "42.75");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(4);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "2027.38", "-144.22", "107.3", "15" },
        RadiusTrigger { "1278.18", "556.92", "98.5", "20" },
        RadiusTrigger { "1553.86", "-94.27", "97", "15" },
        RadiusTrigger { "843.83", "-35.05", "114.25", "20" }
    };

    (*sprintRaces)[raceIndex].isTERace = true;
    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Ming TE race 12
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_06/6_1_105_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "6_1_105_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_06";

    (*circuitRaces)[raceIndex].totalDistance = 10860;
    (*circuitRaces)[raceIndex].lapsInVanilla = 4;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_6_1_105";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1368.06", "-72.56", "96.85");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Ming TE race 13
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_06/6_3_104_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "6_3_104_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_06";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 11250;
    (*lapKnockoutRaces)[raceIndex].timePerLap = 59.70;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_6_3_104";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1329.64", "-298.15", "111.2");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;
}

void createExtraMingTETrack(std::unique_ptr<std::vector<Circuit>> const &circuitRaces)
{
    //Ming extra TE race 1
    circuitRaces->emplace_back();
    int raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_06/6_1_102_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "6_1_102_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_06";

    (*circuitRaces)[raceIndex].totalDistance = 8655;
    (*circuitRaces)[raceIndex].timePerLap = 35.58;
    (*circuitRaces)[raceIndex].lapsInVanilla = 4;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_6_1_102";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("3089", "272.2", "12.15");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;
}

void createMainWebsterTETracks(std::unique_ptr<std::vector<Circuit>> const &circuitRaces,
        std::unique_ptr<std::vector<Knockout>> const &lapKnockoutRaces,
        std::unique_ptr<std::vector<Sprint>> const &sprintRaces,
        std::unique_ptr<std::vector<Speedtrap>> const&speedtrapRaces)
{
    //Webster TE race 1
    lapKnockoutRaces->emplace_back();
    int raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_05/5_3_101_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "5_3_101_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_05";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 14880;
    (*lapKnockoutRaces)[raceIndex].timePerLap = 71.89;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_5_3_101";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1680.97", "1925.27", "145.6");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Webster TE race 2
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_05/5_1_106_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "5_1_106_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_05";

    (*circuitRaces)[raceIndex].totalDistance = 18916;
    (*circuitRaces)[raceIndex].lapsInVanilla = 2;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_5_1_106";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1329.11", "2285.34", "145.3");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Webster TE race 3
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_05/5_2_102_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "5_2_102_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_05";

    (*sprintRaces)[raceIndex].totalDistance = 10315;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 18;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_5_2_102";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1776.8", "2020.5", "148.5");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(5);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "1139.9", "2245.65", "154", "20" },
        RadiusTrigger { "364.32", "2470.35", "166", "15" },
        RadiusTrigger { "-59.2", "3664.57", "225.05", "15" },
        RadiusTrigger { "742.3", "3875.7", "207", "15" },
        RadiusTrigger { "2086.27", "3373.22", "156", "15" }
    };

    (*sprintRaces)[raceIndex].isTERace = true;
    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Webster TE race 4
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_05/5_1_105_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "5_1_105_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_05";

    (*circuitRaces)[raceIndex].totalDistance = 14245;
    (*circuitRaces)[raceIndex].lapsInVanilla = 2;
    (*circuitRaces)[raceIndex].startLineType = "narrow";

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_5_1_105";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("3407.5", "-219.17", "12.4");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Webster TE race 5
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_05/5_2_101_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "5_2_101_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_05";

    (*sprintRaces)[raceIndex].totalDistance = 9170;
    (*sprintRaces)[raceIndex].startLineType = "narrow";
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 25;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_5_2_101";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("3674", "2847.7", "10");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(5);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "3064.83", "2581.08", "41.5", "25" },
        RadiusTrigger { "2480.84", "2510.35", "122.5", "15" },
        RadiusTrigger { "2077.23", "3307.9", "155.2", "15" },
        RadiusTrigger { "1150.8", "3067.72", "199.5", "15" },
        RadiusTrigger { "1216.33", "2133.1", "151.5", "15" }
    };

    (*sprintRaces)[raceIndex].isTERace = true;
    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Webster TE race 6
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_05/5_1_102_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "5_1_102_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_05";

    (*circuitRaces)[raceIndex].totalDistance = 14920;
    (*circuitRaces)[raceIndex].timePerLap = 104.99;
    (*circuitRaces)[raceIndex].lapsInVanilla = 2;
    (*circuitRaces)[raceIndex].startLineType = "narrow";

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_5_1_102";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("2944.44", "259.6", "35.6");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Webster TE race 7
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_05/5_5_101_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "5_5_101_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_05";

    (*speedtrapRaces)[raceIndex].totalDistance = 10900;
    (*speedtrapRaces)[raceIndex].raceTime = 165.36;

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_speedtrap_5_5_101";
    (*speedtrapRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*speedtrapRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("3303.19", "614.03", "5");

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(11);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_05/5_5_101_speedtrap/speedtrap1", "race_bin_05/5_5_101_speedtrap/speedtrap2",
      "race_bin_05/5_5_101_speedtrap/speedtrap3", "race_bin_05/5_5_101_speedtrap/speedtrap4",
      "race_bin_05/5_5_101_speedtrap/speedtrap5", "race_bin_05/5_5_101_speedtrap/speedtrap6",
      "race_bin_05/5_5_101_speedtrap/speedtrap7", "race_bin_05/5_5_101_speedtrap/speedtrap8",
      "race_bin_05/5_5_101_speedtrap/speedtrap9", "race_bin_05/5_5_101_speedtrap/speedtrap10",
      "race_bin_05/5_5_101_speedtrap/speedtrap11" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates = { { "", "19" } };

    (*speedtrapRaces)[raceIndex].isTERace = true;
    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Webster TE race 8
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_05/5_1_101_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "5_1_101_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_05";

    (*circuitRaces)[raceIndex].totalDistance = 13445;
    (*circuitRaces)[raceIndex].timePerLap = 53.80;
    (*circuitRaces)[raceIndex].lapsInVanilla = 4;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_5_1_101";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("3869.09", "457.53", "20.8");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Webster TE race 9
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_05/5_3_102_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "5_3_102_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_05";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 12535;
    (*lapKnockoutRaces)[raceIndex].timePerLap = 72.13;
    (*lapKnockoutRaces)[raceIndex].startLineType = "narrow";

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_5_3_102";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("4408.88", "999.69", "64.2");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Webster TE race 10
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_05/5_2_103_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "5_2_103_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_05";

    (*sprintRaces)[raceIndex].totalDistance = 9070;
    (*sprintRaces)[raceIndex].raceTime = 119.47;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 11;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_5_2_103";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("2581.1", "-325.96", "115");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(5);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "1432.77", "-783", "121", "15" },
        RadiusTrigger { "421.83", "-532.92", "128.5", "35" },
        RadiusTrigger { "734.8", "75.96", "113.8", "20" },
        RadiusTrigger { "1368.06", "-72.56", "97.4", "20" },
        RadiusTrigger { "1233.3", "390.2", "105.5", "20" }
    };

    (*sprintRaces)[raceIndex].isTERace = true;
    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Webster TE race 11
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_05/5_3_103_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "5_3_103_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_05";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 12740;
    (*lapKnockoutRaces)[raceIndex].timePerLap = 65.94;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_5_3_103";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1198.87", "548.06", "98.05");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Webster TE race 12
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_05/5_1_104_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "5_1_104_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_05";

    (*circuitRaces)[raceIndex].totalDistance = 16125;
    (*circuitRaces)[raceIndex].timePerLap = 56.53;
    (*circuitRaces)[raceIndex].lapsInVanilla = 4;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_5_1_104";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1654.06", "768.1", "126.4");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;
}

void createExtraWebsterTETrack(std::unique_ptr<std::vector<Circuit>> const &circuitRaces)
{
    //Webster extra TE race 1
    circuitRaces->emplace_back();
    int raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_05/5_1_103_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "5_1_103_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_05";

    (*circuitRaces)[raceIndex].totalDistance = 17295;
    (*circuitRaces)[raceIndex].timePerLap = 62.61;
    (*circuitRaces)[raceIndex].lapsInVanilla = 4;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_5_1_103";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("3734.9", "-315.44", "20");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;
}

void createMainJVTETracks(std::unique_ptr<std::vector<Circuit>> const &circuitRaces,
        std::unique_ptr<std::vector<Knockout>> const &lapKnockoutRaces,
        std::unique_ptr<std::vector<Sprint>> const &sprintRaces,
        std::unique_ptr<std::vector<Speedtrap>> const&speedtrapRaces)
{
    //JV TE race 1
    sprintRaces->emplace_back();
    int raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_04/4_2_103_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "4_2_103_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_04";

    (*sprintRaces)[raceIndex].totalDistance = 11973;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 22;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_4_2_103";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1575.865", "3795.16", "186.4765");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(8);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "774.62", "3215.03", "199.5", "15" },
        RadiusTrigger { "259.12", "3278.5", "189", "15" },
        RadiusTrigger { "-333.75", "3819.5", "226", "30" },
        RadiusTrigger { "629.02", "4553.28", "221.5", "35" },
        RadiusTrigger { "1650.8", "3922.15", "176.5", "15" },
        RadiusTrigger { "2139.97", "2690.25", "123", "30" },
        RadiusTrigger { "2534.48", "3500.52", "197.5", "35" },
        RadiusTrigger { "2255.29", "4520.42", "237.2275", "30" }
    };

    (*sprintRaces)[raceIndex].isTERace = true;
    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //JV TE race 2
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_04/4_2_101_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "4_2_101_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_04";

    (*sprintRaces)[raceIndex].totalDistance = 8755;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 24;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_4_2_101";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("256.06", "2683.33", "175.475");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(5);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "1216.33", "2133.1", "151.5", "15" },
        RadiusTrigger { "1150.8", "3067.72", "199.5", "15" },
        RadiusTrigger { "2077.23", "3307.9", "155.2", "15" },
        RadiusTrigger { "2480.84", "2510.35", "122.5", "15" },
        RadiusTrigger { "3064.48", "2580.7", "41.5", "25" }
    };

    (*sprintRaces)[raceIndex].isTERace = true;
    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //JV TE race 3
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_04/4_3_101_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "4_3_101_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_04";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 14380;
    (*lapKnockoutRaces)[raceIndex].timePerLap = 71.38;
    (*lapKnockoutRaces)[raceIndex].startLineType = "narrow";

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_4_3_101";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("3439.1", "3195.3", "16.65");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //JV TE race 4
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_04/4_3_104_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "4_3_104_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_04";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 15290;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_4_3_104";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1396.15", "1251.77", "118.4");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //JV TE race 5
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_04/4_5_101_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "4_5_101_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_04";

    (*speedtrapRaces)[raceIndex].totalDistance = 8085;
    (*speedtrapRaces)[raceIndex].raceTime = 127.71;

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_speedtrap_4_5_101";
    (*speedtrapRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*speedtrapRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("-63.87", "2840.24", "196.3");

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(8);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_04/4_5_101_speedtrap/speedtrap1", "race_bin_04/4_5_101_speedtrap/speedtrap2",
      "race_bin_04/4_5_101_speedtrap/speedtrap3", "race_bin_04/4_5_101_speedtrap/speedtrap4",
      "race_bin_04/4_5_101_speedtrap/speedtrap5", "race_bin_04/4_5_101_speedtrap/speedtrap6",
      "race_bin_04/4_5_101_speedtrap/speedtrap7", "race_bin_04/4_5_101_speedtrap/speedtrap8" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates = { { "", "10" } };

    (*speedtrapRaces)[raceIndex].isTERace = true;
    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //JV TE race 6
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_04/4_1_103_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "4_1_103_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_04";

    (*circuitRaces)[raceIndex].totalDistance = 15155;
    (*circuitRaces)[raceIndex].timePerLap = 96.60;
    (*circuitRaces)[raceIndex].lapsInVanilla = 2;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_4_1_103";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1267", "-238.07", "108.15");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //JV TE race 7
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_04/4_3_103_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "4_3_103_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_04";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 15295;
    (*lapKnockoutRaces)[raceIndex].timePerLap = 75.81;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_4_3_103";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1630.82", "1032", "121.7");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //JV TE race 8
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_04/4_3_102_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "4_3_102_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_04";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 13940;
    (*lapKnockoutRaces)[raceIndex].timePerLap = 64.93;
    (*lapKnockoutRaces)[raceIndex].startLineType = "narrow";

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_4_3_102";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1467.7", "385.53", "99");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //JV TE race 9
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_04/4_5_102_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "4_5_102_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_04";

    (*speedtrapRaces)[raceIndex].totalDistance = 9690;
    (*speedtrapRaces)[raceIndex].raceTime = 136.78;

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_speedtrap_4_5_102";
    (*speedtrapRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*speedtrapRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("2225.96", "1379.89", "144.6");

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(9);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_04/4_5_102_speedtrap/speedtrap1", "race_bin_04/4_5_102_speedtrap/speedtrap2",
      "race_bin_04/4_5_102_speedtrap/speedtrap3", "race_bin_04/4_5_102_speedtrap/speedtrap4",
      "race_bin_04/4_5_102_speedtrap/speedtrap5", "race_bin_04/4_5_102_speedtrap/speedtrap6",
      "race_bin_04/4_5_102_speedtrap/speedtrap7", "race_bin_04/4_5_102_speedtrap/speedtrap8",
      "race_bin_04/4_5_102_speedtrap/speedtrap9" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates = { { "", "18" } };

    (*speedtrapRaces)[raceIndex].isTERace = true;
    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //JV TE race 10
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_04/4_1_102_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "4_1_102_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_04";

    (*circuitRaces)[raceIndex].totalDistance = 13960;
    (*circuitRaces)[raceIndex].timePerLap = 101.97;
    (*circuitRaces)[raceIndex].lapsInVanilla = 2;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_4_1_102";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("3407.34", "-217.53", "12.33");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //JV TE race 11
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_04/4_2_104_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "4_2_104_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_04";

    (*sprintRaces)[raceIndex].totalDistance = 7635;
    (*sprintRaces)[raceIndex].raceTime = 106.74;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 11;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_4_2_104";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1339.17", "-307.2", "110");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(5);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "2016.23", "-135.97", "106.7", "15" },
        RadiusTrigger { "2592.8", "-324.48", "115.25", "25" },
        RadiusTrigger { "1686.6", "-86.46", "101.3", "25" },
        RadiusTrigger { "843.83", "-35.05", "114.25", "20" },
        RadiusTrigger { "1522.19", "506.28", "87.5", "15" }
    };

    (*sprintRaces)[raceIndex].isTERace = true;
    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //JV TE race 12
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_04/4_1_104_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "4_1_104_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_04";

    (*circuitRaces)[raceIndex].totalDistance = 18815;
    (*circuitRaces)[raceIndex].timePerLap = 55.90;
    (*circuitRaces)[raceIndex].lapsInVanilla = 4;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_4_1_104";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("2425.8", "597.08", "106.725");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //JV TE race 13
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_04/4_2_102_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "4_2_102_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_04";

    (*sprintRaces)[raceIndex].totalDistance = 9905;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 21;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_4_2_102";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("-63.87", "2840.24", "196.3");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(3);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "1702.43", "2345.77", "150.2", "15" },
        RadiusTrigger { "1988.19", "-113.96", "102.2", "15" },
        RadiusTrigger { "1516.46", "-521.35", "86.5", "15" }
    };

    (*sprintRaces)[raceIndex].isTERace = true;
    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;
}

void createExtraJVTETrack(std::unique_ptr<std::vector<Circuit>> const &circuitRaces)
{
    //JV extra TE race 1
    circuitRaces->emplace_back();
    int raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_04/4_1_101_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "4_1_101_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_04";

    (*circuitRaces)[raceIndex].totalDistance = 15750;
    (*circuitRaces)[raceIndex].timePerLap = 56.43;
    (*circuitRaces)[raceIndex].lapsInVanilla = 4;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_4_1_101";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("3799.4", "-299.65", "16.3");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;
}

void createMainRonnieTETracks(std::unique_ptr<std::vector<Circuit>> const &circuitRaces,
        std::unique_ptr<std::vector<Knockout>> const &lapKnockoutRaces,
        std::unique_ptr<std::vector<Sprint>> const &sprintRaces,
        std::unique_ptr<std::vector<Speedtrap>> const &speedtrapRaces)
{
    //Ronnie TE race 1
    circuitRaces->emplace_back();
    int raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_03/3_1_101_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "3_1_101_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_03";

    (*circuitRaces)[raceIndex].totalDistance = 17910;
    (*circuitRaces)[raceIndex].timePerLap = 110.83;
    (*circuitRaces)[raceIndex].lapsInVanilla = 2;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_3_1_101";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1782", "1994", "148.5");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Ronnie TE race 2
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_03/3_1_102_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "3_1_102_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_03";

    (*circuitRaces)[raceIndex].totalDistance = 17930;
    (*circuitRaces)[raceIndex].timePerLap = 110.30;
    (*circuitRaces)[raceIndex].lapsInVanilla = 2;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_3_1_102";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1857.54", "2069.15", "153");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Ronnie TE race 3
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_03/3_5_101_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "3_5_101_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_03";

    (*speedtrapRaces)[raceIndex].totalDistance = 8770;
    (*speedtrapRaces)[raceIndex].startLineType = "narrow";

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_speedtrap_3_5_101";
    (*speedtrapRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*speedtrapRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("-315.42", "3622.47", "215");

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(8);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_03/3_5_101_speedtrap/speedtrap1", "race_bin_03/3_5_101_speedtrap/speedtrap2",
      "race_bin_03/3_5_101_speedtrap/speedtrap3", "race_bin_03/3_5_101_speedtrap/speedtrap4",
      "race_bin_03/3_5_101_speedtrap/speedtrap5", "race_bin_03/3_5_101_speedtrap/speedtrap6",
      "race_bin_03/3_5_101_speedtrap/speedtrap7", "race_bin_03/3_5_101_speedtrap/speedtrap8" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates = { { "", "13" } };

    (*speedtrapRaces)[raceIndex].isTERace = true;
    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Ronnie TE race 4
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_03/3_5_102_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "3_5_102_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_03";

    (*speedtrapRaces)[raceIndex].totalDistance = 10210;
    (*speedtrapRaces)[raceIndex].raceTime = 138.53;

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_speedtrap_3_5_102";
    (*speedtrapRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*speedtrapRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("2228.28", "2635.31", "121");

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(9);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_03/3_5_102_speedtrap/speedtrap1", "race_bin_03/3_5_102_speedtrap/speedtrap2",
      "race_bin_03/3_5_102_speedtrap/speedtrap3", "race_bin_03/3_5_102_speedtrap/speedtrap4",
      "race_bin_03/3_5_102_speedtrap/speedtrap5", "race_bin_03/3_5_102_speedtrap/speedtrap6",
      "race_bin_03/3_5_102_speedtrap/speedtrap7", "race_bin_03/3_5_102_speedtrap/speedtrap8",
      "race_bin_03/3_5_102_speedtrap/speedtrap9" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates = { { "", "16" } };

    (*speedtrapRaces)[raceIndex].isTERace = true;
    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Ronnie TE race 5
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_03/3_1_103_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "3_1_103_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_03";

    (*circuitRaces)[raceIndex].totalDistance = 17245;
    (*circuitRaces)[raceIndex].timePerLap = 128.87;
    (*circuitRaces)[raceIndex].lapsInVanilla = 2;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_3_1_103";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("4128.95", "1815.82", "17.8");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Ronnie TE race 6
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_03/3_3_101_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "3_3_101_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_03";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 14910;
    (*lapKnockoutRaces)[raceIndex].timePerLap = 77.66;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_3_3_101";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("3582.9", "1106.7", "62.85");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Ronnie TE race 7
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_03/3_2_102_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "3_2_102_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_03";

    (*sprintRaces)[raceIndex].totalDistance = 11065;
    (*sprintRaces)[raceIndex].raceTime = 148.32;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 16;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_3_2_102";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1182.67", "545.94", "99.1");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(5);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "1418.36", "360.93", "99.5", "20" },
        RadiusTrigger { "1557.5", "-94", "96.9", "15" },
        RadiusTrigger { "1536", "-508.1", "86", "15" },
        RadiusTrigger { "365.72", "-13.72", "115.5", "35" },
        RadiusTrigger { "600.92", "-739.39", "130.8", "15" }
    };

    (*sprintRaces)[raceIndex].isTERace = true;
    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Ronnie TE race 8
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_03/3_2_101_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "3_2_101_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_03";

    (*sprintRaces)[raceIndex].totalDistance = 12235;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 36;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_3_2_101";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1070.6", "4442.2", "211");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(5);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "469.9", "4527.9", "231", "25" },
        RadiusTrigger { "24.36", "3678.24", "213.1", "15" },
        RadiusTrigger { "2091.32", "3401.53", "156.75", "15" },
        RadiusTrigger { "2087.22", "2735.58", "126.7", "30" },
        RadiusTrigger { "2118.26", "1272.1", "150.5", "20" }
    };

    (*sprintRaces)[raceIndex].isTERace = true;
    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Ronnie TE race 9
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_03/3_3_104_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "3_3_104_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_03";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 11800;
    (*lapKnockoutRaces)[raceIndex].startLineType = "narrow";

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_3_3_104";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("4808.86", "905.46", "11.35");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Ronnie TE race 10
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_03/3_3_103_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "3_3_103_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_03";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 18545;
    (*lapKnockoutRaces)[raceIndex].timePerLap = 78.48;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_3_3_103";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1267", "-238.07", "108.15");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Ronnie TE race 11
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_03/3_1_104_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "3_1_104_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_03";

    (*circuitRaces)[raceIndex].totalDistance = 16575;
    (*circuitRaces)[raceIndex].timePerLap = 68.58;
    (*circuitRaces)[raceIndex].lapsInVanilla = 3;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_3_1_104";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1368.06", "-72.56", "96.85");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;
}

void createExtraRonnieTETrack(std::unique_ptr<std::vector<Knockout>> const &lapKnockoutRaces)
{
    //Ronnie extra TE race 1
    lapKnockoutRaces->emplace_back();
    int raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_03/3_3_102_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "3_3_102_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_03";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 12685;
    (*lapKnockoutRaces)[raceIndex].timePerLap = 61.98;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_3_3_102";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("2015.9", "973.53", "120.05");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;
}

void createMainBullTETracks(std::unique_ptr<std::vector<Circuit>> const &circuitRaces,
        std::unique_ptr<std::vector<Knockout>> const &lapKnockoutRaces,
        std::unique_ptr<std::vector<Sprint>> const &sprintRaces,
        std::unique_ptr<std::vector<Speedtrap>> const &speedtrapRaces)
{
    //Bull TE race 1
    circuitRaces->emplace_back();
    int raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_02/2_1_101_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "2_1_101_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_02";

    (*circuitRaces)[raceIndex].totalDistance = 17265;
    (*circuitRaces)[raceIndex].timePerLap = 112.72;
    (*circuitRaces)[raceIndex].lapsInVanilla = 2;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_2_1_101";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("-57.80698", "2838.799", "195.8");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Bull TE race 2
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_02/2_1_105_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "2_1_105_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_02";

    (*circuitRaces)[raceIndex].totalDistance = 17280;
    (*circuitRaces)[raceIndex].timePerLap = 113.43;
    (*circuitRaces)[raceIndex].lapsInVanilla = 2;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_2_1_105";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("-50.19291", "2836.41", "194.6");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Bull TE race 3
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_02/2_2_101_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "2_2_101_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_02";

    (*sprintRaces)[raceIndex].totalDistance = 10995;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 24;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_2_2_101";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("877.36", "4531.4", "203");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(7);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "719.8", "3451.38", "199.7", "15" },
        RadiusTrigger { "1165.4", "3039.5", "200", "15" },
        RadiusTrigger { "1129.87", "2424.8", "154.5", "15" },
        RadiusTrigger { "593.86", "2424.77", "164", "15" },
        RadiusTrigger { "1576.45", "2029.62", "144.7", "20" },
        RadiusTrigger { "2037.46", "1089.65", "147.7", "15" },
        RadiusTrigger { "1936.03", "362.3", "91", "15" }
    };

    (*sprintRaces)[raceIndex].isTERace = true;
    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Bull TE race 4
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_02/2_1_102_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "2_1_102_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_02";

    (*circuitRaces)[raceIndex].totalDistance = 18845;
    (*circuitRaces)[raceIndex].timePerLap = 91.29;
    (*circuitRaces)[raceIndex].lapsInVanilla = 3;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_2_1_102";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("3119.66", "183.3", "12.18");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Bull TE race 5
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_02/2_2_102_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "2_2_102_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_02";

    (*sprintRaces)[raceIndex].totalDistance = 8040;
    (*sprintRaces)[raceIndex].raceTime = 113.58;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 21;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_2_2_102";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("3846.77", "2165.83", "38.2");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(5);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "4186.18", "3237.46", "15.2", "20" },
        RadiusTrigger { "3395.1", "3657.06", "33.8", "15" },
        RadiusTrigger { "3295.63", "3306.37", "25", "15" },
        RadiusTrigger { "3567.74", "2336", "28.5", "15" },
        RadiusTrigger { "2950.03", "1956.62", "107.2", "20" }
    };

    (*sprintRaces)[raceIndex].isTERace = true;
    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Bull TE race 6
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_02/2_3_101_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "2_3_101_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_02";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 15780;
    (*lapKnockoutRaces)[raceIndex].timePerLap = 77.24;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_2_3_101";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("3670.64", "-333.8", "22.25");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Bull TE race 7
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_02/2_5_101_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "2_5_101_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_02";

    (*speedtrapRaces)[raceIndex].totalDistance = 8865;
    (*speedtrapRaces)[raceIndex].startLineType = "narrow";

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_speedtrap_2_5_101";
    (*speedtrapRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*speedtrapRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("3608.24", "2978.73", "11");

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(8);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_02/2_5_101_speedtrap/speedtrap1", "race_bin_02/2_5_101_speedtrap/speedtrap2",
      "race_bin_02/2_5_101_speedtrap/speedtrap3", "race_bin_02/2_5_101_speedtrap/speedtrap4",
      "race_bin_02/2_5_101_speedtrap/speedtrap5", "race_bin_02/2_5_101_speedtrap/speedtrap6",
      "race_bin_02/2_5_101_speedtrap/speedtrap7", "race_bin_02/2_5_101_speedtrap/speedtrap8" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates = { { "", "9" } };

    (*speedtrapRaces)[raceIndex].isTERace = true;
    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Bull TE race 8
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_02/2_3_102_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "2_3_102_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_02";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 16495;
    (*lapKnockoutRaces)[raceIndex].timePerLap = 75.69;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_2_3_102";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("2554.06", "8.66", "106.78");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Bull TE race 9
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_02/2_1_103_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "2_1_103_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_02";

    (*circuitRaces)[raceIndex].totalDistance = 17475;
    (*circuitRaces)[raceIndex].timePerLap = 110.58;
    (*circuitRaces)[raceIndex].lapsInVanilla = 2;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_2_1_103";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("2123.9", "310.35", "98.25");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Bull TE race 10
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_02/2_1_104_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "2_1_104_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_02";

    (*circuitRaces)[raceIndex].totalDistance = 20220;
    (*circuitRaces)[raceIndex].timePerLap = 123.88;
    (*circuitRaces)[raceIndex].lapsInVanilla = 2;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_2_1_104";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords = CoordinateSet("1851.66", "-411.17", "96");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Bull TE race 11
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_02/2_3_103_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "2_3_103_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_02";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 13980;
    (*lapKnockoutRaces)[raceIndex].timePerLap = 60.76;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_2_3_103";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("685.1", "-724.2", "118");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Bull TE race 12
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_02/2_2_103_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "2_2_103_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_02";

    (*sprintRaces)[raceIndex].totalDistance = 14285;
    (*sprintRaces)[raceIndex].raceTime = 180.09;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 23;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_2_2_103";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1398.27", "-82.17", "96.4");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(6);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "1838.73", "-170.66", "108.25", "20" },
        RadiusTrigger { "843.83", "-35.05", "114.2", "20" },
        RadiusTrigger { "2123.9", "310.35", "98.8", "20" },
        RadiusTrigger { "615.25", "-198.8", "96", "15" },
        RadiusTrigger { "1163.66", "708.37", "114", "30" },
        RadiusTrigger { "2592.8", "-324.48", "115.25", "25" }
    };

    (*sprintRaces)[raceIndex].isTERace = true;
    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Bull TE race 13
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_02/2_5_102_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "2_5_102_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_02";

    (*speedtrapRaces)[raceIndex].totalDistance = 8260;
    (*speedtrapRaces)[raceIndex].raceTime = 134.54;

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_speedtrap_2_5_102";
    (*speedtrapRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*speedtrapRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("2384.94", "235.2", "92.5");

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(10);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_02/2_5_102_speedtrap/speedtrap1", "race_bin_02/2_5_102_speedtrap/speedtrap2",
      "race_bin_02/2_5_102_speedtrap/speedtrap3", "race_bin_02/2_5_102_speedtrap/speedtrap4",
      "race_bin_02/2_5_102_speedtrap/speedtrap5", "race_bin_02/2_5_102_speedtrap/speedtrap6",
      "race_bin_02/2_5_102_speedtrap/speedtrap7", "race_bin_02/2_5_102_speedtrap/speedtrap8",
      "race_bin_02/2_5_102_speedtrap/speedtrap9", "race_bin_02/2_5_102_speedtrap/speedtrap10" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates = { { "", "8" } };

    (*speedtrapRaces)[raceIndex].isTERace = true;
    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Bull TE race 14
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_02/2_1_106_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "2_1_106_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_02";

    (*circuitRaces)[raceIndex].totalDistance = 18405;
    (*circuitRaces)[raceIndex].lapsInVanilla = 4;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_2_1_106";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("2555.18", "4.8", "107");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;
}

void createMainRazorTETracks(std::unique_ptr<std::vector<Circuit>> const &circuitRaces,
        std::unique_ptr<std::vector<Knockout>> const &lapKnockoutRaces,
        std::unique_ptr<std::vector<Sprint>> const &sprintRaces,
        std::unique_ptr<std::vector<Speedtrap>> const &speedtrapRaces)
{
    //Razor TE race 1
    lapKnockoutRaces->emplace_back();
    int raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_01/1_3_101_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "1_3_101_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_01";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 22475;
    (*lapKnockoutRaces)[raceIndex].timePerLap = 92.96;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_1_3_101";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1276", "1517.8", "132.6");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Razor TE race 2
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_01/1_1_101_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "1_1_101_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_01";

    (*circuitRaces)[raceIndex].totalDistance = 25340;
    (*circuitRaces)[raceIndex].timePerLap = 103.77;
    (*circuitRaces)[raceIndex].lapsInVanilla = 3;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_1_1_101";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1391.893", "3704.417", "194.6963");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Razor TE race 3
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_01/1_2_101_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "1_2_101_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_01";

    (*sprintRaces)[raceIndex].totalDistance = 18220;
    (*sprintRaces)[raceIndex].raceTime = 272.39;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 32;
    (*sprintRaces)[raceIndex].startLineType = "narrow";

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_1_2_101";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("3621.86", "2954.36", "10.5");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(10);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "3293.9", "1752.1", "104.95", "15" },
        RadiusTrigger { "4134.51", "1015.95", "65.5", "15" },
        RadiusTrigger { "4641.77", "167.56", "4.7", "15" },
        RadiusTrigger { "3780.83", "738.3", "15.7", "20" },
        RadiusTrigger { "2820.52", "972.84", "79.5", "15" },
        RadiusTrigger { "2950.03", "1956.62", "107.1", "20" },
        RadiusTrigger { "3372.63", "3269.5", "19.75", "15" },
        RadiusTrigger { "3576.54", "3424.55", "8.5", "15" },
        RadiusTrigger { "4001.4", "2163.67", "26.9", "20" },
        RadiusTrigger { "4587.14", "1122.2", "14", "15" }
    };

    (*sprintRaces)[raceIndex].isTERace = true;
    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Razor TE race 4
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_01/1_3_104_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "1_3_104_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_01";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 22825;
    (*lapKnockoutRaces)[raceIndex].timePerLap = 91.54;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_1_3_104";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1357.85", "1379.66", "124.5");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Razor TE race 5
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_01/1_1_102_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "1_1_102_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_01";

    (*circuitRaces)[raceIndex].totalDistance = 25310;
    (*circuitRaces)[raceIndex].timePerLap = 103.34;
    (*circuitRaces)[raceIndex].lapsInVanilla = 3;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_1_1_102";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1497.35", "3758.21", "188.92");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Razor TE race 6
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_01/1_2_102_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "1_2_102_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_01";

    (*sprintRaces)[raceIndex].totalDistance = 19515;
    (*sprintRaces)[raceIndex].raceTime = 297.64;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 33;
    (*sprintRaces)[raceIndex].startLineType = "narrow";

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_1_2_102";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("4416.16", "977.04", "62");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(10);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "4367.82", "1445.83", "16", "15" },
        RadiusTrigger { "4196.73", "3184.9", "20", "15" },
        RadiusTrigger { "3461.08", "3698.55", "32.5", "15" },
        RadiusTrigger { "3324.15", "3293.36", "22.5", "15" },
        RadiusTrigger { "2938.66", "1970.6", "109.5", "20" },
        RadiusTrigger { "2707.73", "862.63", "78", "20" },
        RadiusTrigger { "3451.83", "294.8", "12.8", "15" },
        RadiusTrigger { "4148.02", "129.02", "18.7", "15" },
        RadiusTrigger { "4137.9", "997.22", "64.5", "15" },
        RadiusTrigger { "3374.94", "1712.7", "103.5", "15" }
    };

    (*sprintRaces)[raceIndex].isTERace = true;
    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Razor TE race 7
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_01/1_1_104_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "1_1_104_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_01";

    (*circuitRaces)[raceIndex].totalDistance = 22100;
    (*circuitRaces)[raceIndex].timePerLap = 161.69;
    (*circuitRaces)[raceIndex].lapsInVanilla = 2;
    (*circuitRaces)[raceIndex].startLineType = "narrow";

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_1_1_104";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("4273.13", "1240.11", "50.55");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Razor TE race 8
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_01/1_5_101_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "1_5_101_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_01";

    (*speedtrapRaces)[raceIndex].totalDistance = 8005;
    (*speedtrapRaces)[raceIndex].raceTime = 126.38;

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_speedtrap_1_5_101";
    (*speedtrapRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*speedtrapRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("2329.23", "2751.12", "136.5");

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(8);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_01/1_5_101_speedtrap/speedtrap1", "race_bin_01/1_5_101_speedtrap/speedtrap2",
      "race_bin_01/1_5_101_speedtrap/speedtrap3", "race_bin_01/1_5_101_speedtrap/speedtrap4",
      "race_bin_01/1_5_101_speedtrap/speedtrap5", "race_bin_01/1_5_101_speedtrap/speedtrap6",
      "race_bin_01/1_5_101_speedtrap/speedtrap7", "race_bin_01/1_5_101_speedtrap/speedtrap8" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates = { { "", "10" } };

    (*speedtrapRaces)[raceIndex].isTERace = true;
    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Razor TE race 9
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_01/1_1_103_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "1_1_103_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_01";

    (*circuitRaces)[raceIndex].totalDistance = 23020;
    (*circuitRaces)[raceIndex].timePerLap = 82.77;
    (*circuitRaces)[raceIndex].lapsInVanilla = 4;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_1_1_103";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("3089.032", "270.1677", "12.15");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Razor TE race 10
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_01/1_1_105_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "1_1_105_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_01";

    (*circuitRaces)[raceIndex].totalDistance = 19470;
    (*circuitRaces)[raceIndex].lapsInVanilla = 4;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_1_1_105";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("3324.15", "3293.36", "21.95");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Razor TE race 11
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_01/1_5_102_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "1_5_102_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_01";

    (*speedtrapRaces)[raceIndex].totalDistance = 14370;
    (*speedtrapRaces)[raceIndex].raceTime = 182.27;

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_speedtrap_1_5_102";
    (*speedtrapRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*speedtrapRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("243.25", "-378.06", "119.7");

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(10);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_01/1_5_102_speedtrap/speedtrap1", "race_bin_01/1_5_102_speedtrap/speedtrap2",
      "race_bin_01/1_5_102_speedtrap/speedtrap3", "race_bin_01/1_5_102_speedtrap/speedtrap4",
      "race_bin_01/1_5_102_speedtrap/speedtrap5", "race_bin_01/1_5_102_speedtrap/speedtrap6",
      "race_bin_01/1_5_102_speedtrap/speedtrap7", "race_bin_01/1_5_102_speedtrap/speedtrap8",
      "race_bin_01/1_5_102_speedtrap/speedtrap9", "race_bin_01/1_5_102_speedtrap/speedtrap10" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates =
    { { "race_bin_01/1_5_102_speedtrap/shortcut14", "23" } };

    (*speedtrapRaces)[raceIndex].isTERace = true;
    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Razor TE race 12
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_01/1_3_102_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "1_3_102_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_01";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 21465;
    (*lapKnockoutRaces)[raceIndex].timePerLap = 88.65;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_1_3_102";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1196.52", "-380.4", "115");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Razor TE race 13
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_01/1_3_103_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "1_3_103_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_01";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 23565;
    (*lapKnockoutRaces)[raceIndex].timePerLap = 100.77;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_1_3_103";
    (*lapKnockoutRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*lapKnockoutRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("2592.8", "-324.48", "114.725");

    (*lapKnockoutRaces)[raceIndex].isTERace = true;
    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Razor TE race 14
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_01/1_1_106_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "1_1_106_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_01";

    (*circuitRaces)[raceIndex].totalDistance = 20220;
    (*circuitRaces)[raceIndex].lapsInVanilla = 2;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_1_1_106";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1733.27", "-173.21", "94.98");

    (*circuitRaces)[raceIndex].isTERace = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;
}

void populateRacesCustomizable(std::unique_ptr<int> const &originalNumberOfSonnyRacesPtr,
  std::unique_ptr<int> const &originalNumberOfTazRacesPtr, std::unique_ptr<int> const &originalNumberOfVicRacesPtr,
  std::unique_ptr<int> const &originalNumberOfIzzyRacesPtr, std::unique_ptr<int> const &originalNumberOfBigLouRacesPtr,
  std::unique_ptr<int> const &originalNumberOfBaronRacesPtr, std::unique_ptr<int> const &originalNumberOfEarlRacesPtr,
  std::unique_ptr<int> const &originalNumberOfJewelsRacesPtr, std::unique_ptr<int> const &originalNumberOfKazeRacesPtr,
  std::unique_ptr<int> const &originalNumberOfMingRacesPtr, std::unique_ptr<int> const &originalNumberOfWebsterRacesPtr,
  std::unique_ptr<int> const &originalNumberOfJVRacesPtr, std::unique_ptr<int> const &originalNumberOfRonnieRacesPtr,
  std::unique_ptr<int> const &originalNumberOfBullRacesPtr, std::unique_ptr<int> const &originalNumberOfRazorRacesPtr,
  std::unique_ptr<std::vector<Drag>> const &dragRaces, std::unique_ptr<std::vector<Tollbooth>> const &tollboothRaces,
  std::unique_ptr<std::vector<Circuit>> const &circuitRaces,
  std::unique_ptr<std::vector<Knockout>> const &lapKnockoutRaces,
  std::unique_ptr<std::vector<Sprint>> const &sprintRaces,
  std::unique_ptr<std::vector<Speedtrap>> const &speedtrapRaces, bool easyInstall)
{
    //Maximum possible number of races is reserved
    circuitRaces->reserve(89);
    lapKnockoutRaces->reserve(60);
    sprintRaces->reserve(81);
    speedtrapRaces->reserve(51);
    dragRaces->reserve(11);
    tollboothRaces->reserve(34);

    /**                                     Vanilla races                                           */

    //Sonny race 1
    circuitRaces->emplace_back();
    int raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_15/15_1_1_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "15_1_1_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_15";

    (*circuitRaces)[raceIndex].totalDistance = 6821.787;
    (*circuitRaces)[raceIndex].lapsInVanilla = 2;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_15_1_1";

    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Sonny race 2
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_15/15_2_1_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "15_2_1_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_15";

    (*sprintRaces)[raceIndex].totalDistance = 5555.163;
    (*sprintRaces)[raceIndex].startLineType = "narrow";
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 16;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_15_2_1";

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(4);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "1032.5", "2133.5", "153", "20" },
        RadiusTrigger { "-143.5", "2862", "199", "25" },
        RadiusTrigger { "-152.5", "3642", "223.5", "25" },
        RadiusTrigger { "467", "3349.5", "195.5", "15" }
    };

    (*sprintRaces)[raceIndex].hasIsMarkerRaceField = true;
    (*sprintRaces)[raceIndex].hasIntroMovieField = true;
    (*sprintRaces)[raceIndex].hasEventIconTypeField = true;

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Sonny race 3
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_15/15_3_1_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "15_3_1_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_15";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 8072.063;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_15_3_1";
    (*lapKnockoutRaces)[raceIndex].engageTriggerHasInitiallyUnlockedField = true;

    (*lapKnockoutRaces)[raceIndex].hasNumLapsField = false;
    (*lapKnockoutRaces)[raceIndex].hasKnockoutsPerLapField = true;

    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Sonny boss race 1
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_15/15_1_2_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "15_1_2_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_15";

    (*circuitRaces)[raceIndex].totalDistance = 9071.073;
    (*circuitRaces)[raceIndex].lapsInVanilla = 2;
    (*circuitRaces)[raceIndex].startLineType = "narrow";

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_15_1_2";
    (*circuitRaces)[raceIndex].engageTriggerHasInitiallyUnlockedField = true;

    (*circuitRaces)[raceIndex].hasBossRaceField = true;
    (*circuitRaces)[raceIndex].hasIsMarkerRaceField = true;
    (*circuitRaces)[raceIndex].hasPostRaceActivityField = true;
    (*circuitRaces)[raceIndex].hasRivalBestTimeField = true;

    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Sonny boss race 2
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_15/15_1_1_circuit_reversed";
    (*circuitRaces)[raceIndex].gameplayvault = "15_1_1_circuit_reversed";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_15";

    (*circuitRaces)[raceIndex].totalDistance = 6867.008;
    (*circuitRaces)[raceIndex].lapsInVanilla = 2;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_15_1_1_r";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("468.6606", "4527.372", "230.126");

    (*circuitRaces)[raceIndex].hasBossRaceField = true;
    (*circuitRaces)[raceIndex].hasIsMarkerRaceField = true;
    (*circuitRaces)[raceIndex].hasRewardsForWinnerField = true;
    (*circuitRaces)[raceIndex].hasRivalBestTimeField = true;
    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Taz race 1
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_14/14_1_1_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "14_1_1_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_14";

    (*circuitRaces)[raceIndex].totalDistance = 9093.753;
    (*circuitRaces)[raceIndex].lapsInVanilla = 3;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_14_1_1";

    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Taz race 2
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_14/14_2_1_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "14_2_1_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_14";

    (*sprintRaces)[raceIndex].totalDistance = 8003.206;
    (*sprintRaces)[raceIndex].startLineType = "narrow";
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 16;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_14_2_1";

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(5);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "370.5", "2974", "183", "15" },
        RadiusTrigger { "336", "4132.5", "194", "20" },
        RadiusTrigger { "685.5", "3297.5", "201", "30" },
        RadiusTrigger { "1972.5", "3563.5", "160.5", "30" },
        RadiusTrigger { "2192", "2553", "133", "15" }
    };

    (*sprintRaces)[raceIndex].hasEventIconTypeField = true;

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Taz race 3
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_14/14_2_2_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "14_2_2_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_14";

    (*sprintRaces)[raceIndex].totalDistance = 5961.431;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 14;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_14_2_2";

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(5);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "1160.925", "3048.544", "199.8564", "15" },
        RadiusTrigger { "1513.042", "2528.768", "153.832", "20" },
        RadiusTrigger { "1309.661", "2143.88", "147.9023", "20" },
        RadiusTrigger { "809.5", "2746.5", "150.5", "15" },
        RadiusTrigger { "565.3503", "2315.002", "159.4199", "20" }
    };

    (*sprintRaces)[raceIndex].hasEventIconTypeField = true;

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Taz race 4
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_14/14_3_1_lapknockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "14_3_1_lapknockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_14";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 11878.16;
    (*lapKnockoutRaces)[raceIndex].startLineType = "narrow";

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_14_3_1";

    (*lapKnockoutRaces)[raceIndex].hasNumLapsField = false;
    (*lapKnockoutRaces)[raceIndex].hasEventIconTypeField = true;
    (*lapKnockoutRaces)[raceIndex].hasKnockoutsPerLapField = true;

    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Taz race 5
    tollboothRaces->emplace_back();
    raceIndex = refreshRaceIndex(*tollboothRaces);

    (*tollboothRaces)[raceIndex].raceNode = "race_bin_14/14_4_1_tollbooth";
    (*tollboothRaces)[raceIndex].gameplayvault = "14_4_1_tollbooth";
    (*tollboothRaces)[raceIndex].originalRaceBin = "race_bin_14";

    (*tollboothRaces)[raceIndex].totalDistance = 8200;
    (*tollboothRaces)[raceIndex].startLineType = "tollbooth";

    (*tollboothRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_tollbooth_14_4_1";

    (*tollboothRaces)[raceIndex].hasEventIconTypeField = true;

    //Taz race 6
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_14/14_1_2_cellphone_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "14_1_2_cellphone_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_14";

    (*circuitRaces)[raceIndex].totalDistance = 12012.39;
    (*circuitRaces)[raceIndex].lapsInVanilla = 2;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_14_1_2";

    (*circuitRaces)[raceIndex].hasIsMarkerRaceField = true;

    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Taz boss race 1
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_14/14_2_4_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "14_2_4_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_14";

    (*sprintRaces)[raceIndex].totalDistance = 7809.332;
    (*sprintRaces)[raceIndex].startLineType = "narrow";
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 18;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_14_2_4";
    (*sprintRaces)[raceIndex].engageTriggerHasInitiallyUnlockedField = true;

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(4);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "612.5", "2805", "169.5", "15" },
        RadiusTrigger { "1468", "2302.5", "143.5", "20" },
        RadiusTrigger { "2287.5", "2664.5", "133", "30" },
        RadiusTrigger { "2612", "4230", "259", "35" }
    };

    (*sprintRaces)[raceIndex].hasBossRaceField = true;
    (*sprintRaces)[raceIndex].hasPostRaceActivityField = true;
    (*sprintRaces)[raceIndex].hasRivalBestTimeField = true;
    (*sprintRaces)[raceIndex].hasEventIconTypeField = true;

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Taz boss race 2
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_14/15_2_1_sprint_reverse";
    (*sprintRaces)[raceIndex].gameplayvault = "15_2_1_sprint_reverse";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_14";

    (*sprintRaces)[raceIndex].totalDistance = 6585.659;
    (*sprintRaces)[raceIndex].startLineType = "narrow";
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 16;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_15_2_1_r";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("607.507", "4195.572", "196.3516");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(4);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "567", "3209", "202", "15" },
        RadiusTrigger { "-224.5", "3494.5", "216", "15" },
        RadiusTrigger { "393.5", "2430.5", "165", "20" },
        RadiusTrigger { "1592", "2273.5", "145", "15" }
    };

    (*sprintRaces)[raceIndex].hasBossRaceField = true;
    (*sprintRaces)[raceIndex].hasIsMarkerRaceField = true;
    (*sprintRaces)[raceIndex].hasRewardsForWinnerField = true;
    (*sprintRaces)[raceIndex].hasRivalBestTimeField = true;

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Vic race 1
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_13/13_2_1_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "13_2_1_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_13";

    (*sprintRaces)[raceIndex].totalDistance = 5897.715;
    (*sprintRaces)[raceIndex].startLineType = "narrow";
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 25;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_13_2_1";

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(6);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "588", "3292.5", "200", "20" },
        RadiusTrigger { "356.6913", "3047.893", "189", "15" },
        RadiusTrigger { "595.3471", "2424.04", "164", "15" },
        RadiusTrigger { "1323", "2286", "146.5", "25" },
        RadiusTrigger { "1892", "1910", "150", "20" },
        RadiusTrigger { "1761.553", "1241.2", "141", "20" }
    };

    (*sprintRaces)[raceIndex].hasEventIconTypeField = true;

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Vic race 2
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_13/13_3_1_lap_ko";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "13_3_1_lap_ko";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_13";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 7651.285;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_13_3_1";

    (*lapKnockoutRaces)[raceIndex].hasEventIconTypeField = true;

    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Vic race 3
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_13/13_3_2_lap_ko";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "13_3_2_lap_ko";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_13";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 16436.66;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_knockout_13_3_2";

    (*lapKnockoutRaces)[raceIndex].hasEventIconTypeField = true;
    (*lapKnockoutRaces)[raceIndex].hasKnockoutsPerLapField = true;

    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Vic race 4
    tollboothRaces->emplace_back();
    raceIndex = refreshRaceIndex(*tollboothRaces);

    (*tollboothRaces)[raceIndex].raceNode = "race_bin_13/13_4_1_tollbooth";
    (*tollboothRaces)[raceIndex].gameplayvault = "13_4_1_tollbooth";
    (*tollboothRaces)[raceIndex].originalRaceBin = "race_bin_13";

    (*tollboothRaces)[raceIndex].totalDistance = 8174.225;
    (*tollboothRaces)[raceIndex].startLineType = "tollbooth";

    (*tollboothRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_tollbooth_13_4_1";

    (*tollboothRaces)[raceIndex].hasEventIconTypeField = true;

    //Vic race 5
    tollboothRaces->emplace_back();
    raceIndex = refreshRaceIndex(*tollboothRaces);

    (*tollboothRaces)[raceIndex].raceNode = "race_bin_13/13_4_2_tollbooth";
    (*tollboothRaces)[raceIndex].gameplayvault = "13_4_2_tollbooth";
    (*tollboothRaces)[raceIndex].originalRaceBin = "race_bin_13";

    (*tollboothRaces)[raceIndex].totalDistance = 10094.52;
    (*tollboothRaces)[raceIndex].startLineType = "tollbooth";

    (*tollboothRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_tollbooth_13_4_2";

    (*tollboothRaces)[raceIndex].hasEventIconTypeField = true;

    //Vic race 6
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_13/13_5_1_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "13_5_1_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_13";

    (*speedtrapRaces)[raceIndex].totalDistance = 5371.236;

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_speedtrap_13_5_1";

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(5);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_13/13_5_1_speedtrap/speedtrap1", "race_bin_13/13_5_1_speedtrap/speedtrap2",
      "race_bin_13/13_5_1_speedtrap/speedtrap3", "race_bin_13/13_5_1_speedtrap/speedtrap4",
      "race_bin_13/13_5_1_speedtrap/speedtrap7" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates.reserve(7);
    (*speedtrapRaces)[raceIndex].childrenFieldUpdates =
    {
        { "race_bin_13/13_5_1_speedtrap/checkpoint5", "5" },
        { "race_bin_13/13_5_1_speedtrap/checkpoint6", "6" },
        { "race_bin_13/13_5_1_speedtrap/checkpoint7", "7" },
        { "race_bin_13/13_5_1_speedtrap/checkpoint8", "8" },
        { "race_bin_13/13_5_1_speedtrap/finishline", "9" },
        { "race_bin_13/13_5_1_speedtrap/shortcut2", "10" },
        { "race_bin_13/13_5_1_speedtrap/wrongway", "11" }
    };

    (*speedtrapRaces)[raceIndex].hasEventIconTypeField = true;

    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Vic race 7
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_13/13_5_2_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "13_5_2_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_13";

    (*speedtrapRaces)[raceIndex].totalDistance = 6253.271;

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_speedtrap_13_5_2";

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(6);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_13/13_5_2_speedtrap/speedtrap1", "race_bin_13/13_5_2_speedtrap/speedtrap2",
      "race_bin_13/13_5_2_speedtrap/speedtrap3", "race_bin_13/13_5_2_speedtrap/speedtrap4",
      "race_bin_13/13_5_2_speedtrap/speedtrap5", "race_bin_13/13_5_2_speedtrap/speedtrap6" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates.reserve(6);
    (*speedtrapRaces)[raceIndex].childrenFieldUpdates =
    {
        { "race_bin_13/13_5_2_speedtrap/wrongway", "10" },
        { "race_bin_13/13_5_2_speedtrap/shortcut1", "11" },
        { "race_bin_13/13_5_2_speedtrap/shortcut2", "12" },
        { "race_bin_13/13_5_2_speedtrap/shortcut3", "13" },
        { "race_bin_13/13_5_2_speedtrap/shortcut4", "14" },
        { "race_bin_13/13_5_2_speedtrap/shortcut5", "15" }
    };

    (*speedtrapRaces)[raceIndex].hasIntroMovieField = true;
    (*speedtrapRaces)[raceIndex].hasEventIconTypeField = true;

    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Vic boss race 1
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_13/13_2_3_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "13_2_3_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_13";

    (*sprintRaces)[raceIndex].totalDistance = 8956.968;
    (*sprintRaces)[raceIndex].startLineType = "narrow";
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 24;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_13_2_3";
    (*sprintRaces)[raceIndex].engageTriggerHasInitiallyUnlockedField = true;

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(6);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "1130", "2425", "154", "15" },
        RadiusTrigger { "395.5", "3212.5", "188.5", "15" },
        RadiusTrigger { "1284", "3651", "199.5", "20" },
        RadiusTrigger { "2087.5", "3236.5", "147.5", "15" },
        RadiusTrigger { "2550.194", "1967.421", "106.4493", "15" },
        RadiusTrigger { "2035", "1158", "151.5", "20" }
    };

    (*sprintRaces)[raceIndex].hasBossRaceField = true;
    (*sprintRaces)[raceIndex].hasPostRaceActivityField = true;
    (*sprintRaces)[raceIndex].hasRivalBestTimeField = true;

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Vic boss race 2
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_13/14_2_2_r_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "14_2_2_r_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_13";

    (*sprintRaces)[raceIndex].totalDistance = 5766.682;
    (*sprintRaces)[raceIndex].startLineType = "narrow";
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 15;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_14_2_2_r";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("256.0559", "2683.329", "175.4757");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(4);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "664.5", "2389", "158", "15" },
        RadiusTrigger { "982.5", "2585", "153.5", "15" },
        RadiusTrigger { "1704", "2346", "150.5", "15" },
        RadiusTrigger { "1200.5", "2777", "175", "15" }
    };

    (*sprintRaces)[raceIndex].hasBossRaceField = true;
    (*sprintRaces)[raceIndex].hasIsMarkerRaceField = true;
    (*sprintRaces)[raceIndex].hasRewardsForWinnerField = true;
    (*sprintRaces)[raceIndex].hasRivalBestTimeField = true;

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Izzy race 1
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_12/12_1_1_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "12_1_1_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_12";

    (*circuitRaces)[raceIndex].totalDistance = 10412.57;
    (*circuitRaces)[raceIndex].lapsInVanilla = 2;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_12_1_1";

    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Izzy race 2
    tollboothRaces->emplace_back();
    raceIndex = refreshRaceIndex(*tollboothRaces);

    (*tollboothRaces)[raceIndex].raceNode = "race_bin_12/12_4_1_tollbooth";
    (*tollboothRaces)[raceIndex].gameplayvault = "12_4_1_tollbooth";
    (*tollboothRaces)[raceIndex].originalRaceBin = "race_bin_12";

    (*tollboothRaces)[raceIndex].totalDistance = 7722.34;
    (*tollboothRaces)[raceIndex].startLineType = "tollbooth";

    (*tollboothRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_tollbooth_12_4_1";

    (*tollboothRaces)[raceIndex].hasEventIconTypeField = true;

    //Izzy race 3
    tollboothRaces->emplace_back();
    raceIndex = refreshRaceIndex(*tollboothRaces);

    (*tollboothRaces)[raceIndex].raceNode = "race_bin_12/12_4_2_tollbooth";
    (*tollboothRaces)[raceIndex].gameplayvault = "12_4_2_tollbooth";
    (*tollboothRaces)[raceIndex].originalRaceBin = "race_bin_12";

    (*tollboothRaces)[raceIndex].totalDistance = 7610.701;
    (*tollboothRaces)[raceIndex].startLineType = "tollbooth";

    (*tollboothRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_tollbooth_12_4_2";

    (*tollboothRaces)[raceIndex].hasEventIconTypeField = true;

    //Izzy race 4
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_12/12_5_1_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "12_5_1_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_12";

    (*speedtrapRaces)[raceIndex].totalDistance = 5809.392;
    (*speedtrapRaces)[raceIndex].startLineType = "narrow";

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_speedtrap_12_5_1";

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(5);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_12/12_5_1_speedtrap/speedtrap1", "race_bin_12/12_5_1_speedtrap/speedtrap2",
      "race_bin_12/12_5_1_speedtrap/speedtrap4", "race_bin_12/12_5_1_speedtrap/speedtrap5",
      "race_bin_12/12_5_1_speedtrap/speedtrap6" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates.reserve(6);
    (*speedtrapRaces)[raceIndex].childrenFieldUpdates =
    {
        { "race_bin_12/12_5_1_speedtrap/wrongway", "9" },
        { "race_bin_12/12_5_1_speedtrap/12_5_1_finishline_reverse", "10" },
        { "race_bin_12/12_5_1_speedtrap/12_5_1_startgrid_reverse", "11" },
        { "race_bin_12/12_5_1_speedtrap/shortcut1", "12" },
        { "race_bin_12/12_5_1_speedtrap/shortcut3", "13" },
        { "race_bin_12/12_5_1_speedtrap/shortcut4", "14" }
    };

    (*speedtrapRaces)[raceIndex].hasIntroNISField = false;

    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Izzy race 5
    dragRaces->emplace_back();
    raceIndex = refreshRaceIndex(*dragRaces);

    (*dragRaces)[raceIndex].raceNode = "race_bin_12/12_7_3_drag";
    (*dragRaces)[raceIndex].gameplayvault = "12_7_3_drag";
    (*dragRaces)[raceIndex].originalRaceBin = "race_bin_12";

    (*dragRaces)[raceIndex].totalDistance = 1405.692;

    (*dragRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_drag_12_7_3";

    (*dragRaces)[raceIndex].hasEventIconTypeField = true;

    //Izzy race 6
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_12/13_2_2_r_Sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "13_2_2_r_Sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_12";

    (*sprintRaces)[raceIndex].totalDistance = 6822.75;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 19;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_13_2_2_r";

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(4);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "1483.5", "2162", "144.5", "15" },
        RadiusTrigger { "591", "2290.5", "159", "20" },
        RadiusTrigger { "357", "3047", "189.5", "15" },
        RadiusTrigger { "336", "4132.5", "194", "25" }
    };

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Izzy race 7
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_12/14_2_3_r_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "14_2_3_r_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_12";

    (*sprintRaces)[raceIndex].totalDistance = 8264.796;
    (*sprintRaces)[raceIndex].startLineType = "narrow";
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 17;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_14_2_3_r";

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(5);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "134.5", "2051.5", "219", "20" },
        RadiusTrigger { "1524", "1700.5", "170.5", "30" },
        RadiusTrigger { "2121.5", "2704", "124.5", "30" },
        RadiusTrigger { "1610", "3809", "184.5", "15" },
        RadiusTrigger { "692.5", "4000.5", "214", "20" }
    };

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Izzy boss race 1
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_12/12_2_1_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "12_2_1_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_12";

    (*sprintRaces)[raceIndex].totalDistance = 6124.51;
    (*sprintRaces)[raceIndex].startLineType = "narrow";
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 17;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_12_2_1_sprint";
    (*sprintRaces)[raceIndex].engageTriggerHasInitiallyUnlockedField = true;

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(4);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "4261", "508", "52.5", "15" },
        RadiusTrigger { "4500", "1234.5", "24.5", "20" },
        RadiusTrigger { "4085", "2302", "33", "20" },
        RadiusTrigger { "4168.5", "3301", "15.5", "20" }
    };

    (*sprintRaces)[raceIndex].hasBossRaceField = true;
    (*sprintRaces)[raceIndex].hasIsMarkerRaceField = true;
    (*sprintRaces)[raceIndex].hasPostRaceActivityField = true;
    (*sprintRaces)[raceIndex].hasRivalBestTimeField = true;
    (*sprintRaces)[raceIndex].hasEventIconTypeField = true;

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Izzy boss race 2
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_12/12_1_2_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "12_1_2_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_12";

    (*circuitRaces)[raceIndex].totalDistance = 14270.22;
    (*circuitRaces)[raceIndex].lapsInVanilla = 2;
    (*circuitRaces)[raceIndex].startLineType = "narrow";

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_12_1_2";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1466.443", "3742.286", "189.0587");

    (*circuitRaces)[raceIndex].hasBossRaceField = true;
    (*circuitRaces)[raceIndex].hasIsMarkerRaceField = true;
    (*circuitRaces)[raceIndex].hasRewardsForWinnerField = true;
    (*circuitRaces)[raceIndex].hasRivalBestTimeField = true;

    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Big Lou race 1
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_11/11_2_1_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "11_2_1_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_11";

    (*sprintRaces)[raceIndex].totalDistance = 5532.365;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 20;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_11_2_1";

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(5);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "4385.5", "46", "9", "20" },
        RadiusTrigger { "4337", "597.399", "51", "15" },
        RadiusTrigger { "3711.414", "1046", "54.26367", "20" },
        RadiusTrigger { "3124.5", "1252", "77", "25" },
        RadiusTrigger { "2915", "1999", "114", "30" }
    };

    (*sprintRaces)[raceIndex].hasEventIconTypeField = true;

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Big Lou race 2
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_11/11_1_1_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "11_1_1_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_11";

    (*circuitRaces)[raceIndex].totalDistance = 14873.77;
    (*circuitRaces)[raceIndex].lapsInVanilla = 2;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_11_1_1";

    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Big Lou race 3
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_11/11_5_1_speedtrap_race";
    (*speedtrapRaces)[raceIndex].gameplayvault = "11_5_1_speedtrap_race";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_11";

    (*speedtrapRaces)[raceIndex].totalDistance = 4303.2;

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_speedtrap_11_5_1";

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(5);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_11/11_5_1_speedtrap_race/speedtrap1", "race_bin_11/11_5_1_speedtrap_race/speedtrap2",
      "race_bin_11/11_5_1_speedtrap_race/speedtrap3", "race_bin_11/11_5_1_speedtrap_race/speedtrap4",
      "race_bin_11/11_5_1_speedtrap_race/speedtrap5" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates = { { "race_bin_11/11_5_1_speedtrap_race/wrongway", "12" } };

    (*speedtrapRaces)[raceIndex].hasEventIconTypeField = true;

    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Big Lou race 4
    tollboothRaces->emplace_back();
    raceIndex = refreshRaceIndex(*tollboothRaces);

    (*tollboothRaces)[raceIndex].raceNode = "race_bin_11/11_4_2_tollbooth";
    (*tollboothRaces)[raceIndex].gameplayvault = "11_4_2_tollbooth";
    (*tollboothRaces)[raceIndex].originalRaceBin = "race_bin_11";

    (*tollboothRaces)[raceIndex].totalDistance = 10722.19;
    (*tollboothRaces)[raceIndex].startLineType = "tollbooth";

    (*tollboothRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_tollbooth_11_4_2";

    (*tollboothRaces)[raceIndex].hasEventIconTypeField = true;

    //Big Lou race 5
    tollboothRaces->emplace_back();
    raceIndex = refreshRaceIndex(*tollboothRaces);

    (*tollboothRaces)[raceIndex].raceNode = "race_bin_11/11_4_1_tollbooth";
    (*tollboothRaces)[raceIndex].gameplayvault = "11_4_1_tollbooth";
    (*tollboothRaces)[raceIndex].originalRaceBin = "race_bin_11";

    (*tollboothRaces)[raceIndex].totalDistance = 8819.398;
    (*tollboothRaces)[raceIndex].startLineType = "tollbooth";

    (*tollboothRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_tollbooth_11_4_1";

    (*tollboothRaces)[raceIndex].hasEventIconTypeField = true;

    //Big Lou race 6
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_11/12_2_1_r_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "12_2_1_r_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_11";

    (*sprintRaces)[raceIndex].totalDistance = 6120.327;
    (*sprintRaces)[raceIndex].startLineType = "narrow";
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 19;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/12_2_1_r_engage";

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(6);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "4192", "3208", "17.5", "25" },
        RadiusTrigger { "4085", "2302", "33", "20" },
        RadiusTrigger { "4382.5", "1436", "14", "15" },
        RadiusTrigger { "4795.5", "995.5", "12.5", "20" },
        RadiusTrigger { "4423", "593.5", "52.5", "20" },
        RadiusTrigger { "3843.5", "508", "24", "25" }
    };

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Big Lou race 7
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_11/11_5_2_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "11_5_2_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_11";

    (*speedtrapRaces)[raceIndex].totalDistance = 6222.549;

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_speedtrap_11_5_2";

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(7);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_11/11_5_2_speedtrap/speedtrap1", " race_bin_11/11_5_2_speedtrap/speedtrap2",
      "race_bin_11/11_5_2_speedtrap/speedtrap3", "race_bin_11/11_5_2_speedtrap/speedtrap4",
      "race_bin_11/11_5_2_speedtrap/speedtrap5", "race_bin_11/11_5_2_speedtrap/speedtrap6",
      "race_bin_11/11_5_2_speedtrap/speedtrap7" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates.reserve(7);
    (*speedtrapRaces)[raceIndex].childrenFieldUpdates =
    {
        { "race_bin_11/11_5_2_speedtrap/wrongway", "12" },
        { "race_bin_11/11_5_2_speedtrap/shortcut11", "13" },
        { "race_bin_11/11_5_2_speedtrap/shortcut12", "14" },
        { "race_bin_11/11_5_2_speedtrap/shortcut13", "15" },
        { "race_bin_11/11_5_2_speedtrap/shortcut14", "16" },
        { "race_bin_11/11_5_2_speedtrap/shortcut15", "17" },
        { "race_bin_11/11_5_2_speedtrap/shortcut16", "18" }
    };

    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Big Lou race 8
    dragRaces->emplace_back();
    raceIndex = refreshRaceIndex(*dragRaces);

    (*dragRaces)[raceIndex].raceNode = "race_bin_11/11_7_1_drag";
    (*dragRaces)[raceIndex].gameplayvault = "11_7_1_drag";
    (*dragRaces)[raceIndex].originalRaceBin = "race_bin_11";

    (*dragRaces)[raceIndex].totalDistance = 2732.866;

    (*dragRaces)[raceIndex].engageTriggerName = "/engage/11_7_1_engage";

    (*dragRaces)[raceIndex].hasTrafficLevelField = false;

    //Big Lou boss race 1
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_11/11_1_2_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "11_1_2_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_11";

    (*circuitRaces)[raceIndex].totalDistance = 10937.99;
    (*circuitRaces)[raceIndex].lapsInVanilla = 2;
    (*circuitRaces)[raceIndex].startLineType = "narrow";

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_11_1_2";
    (*circuitRaces)[raceIndex].engageTriggerHasInitiallyUnlockedField = true;

    (*circuitRaces)[raceIndex].hasBossRaceField = true;
    (*circuitRaces)[raceIndex].hasIsMarkerRaceField = true;
    (*circuitRaces)[raceIndex].hasPostRaceActivityField = true;
    (*circuitRaces)[raceIndex].hasRivalBestTimeField = true;

    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Big Lou boss race 2
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_11/12_1_2_r_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "12_1_2_r_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_11";

    (*circuitRaces)[raceIndex].totalDistance = 14255.78;
    (*circuitRaces)[raceIndex].lapsInVanilla = 3;
    (*circuitRaces)[raceIndex].startLineType = "narrow";

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_12_1_2_r";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1498.094", "3757.771", "189.1756");

    (*circuitRaces)[raceIndex].hasBossRaceField = true;
    (*circuitRaces)[raceIndex].hasIsMarkerRaceField = true;
    (*circuitRaces)[raceIndex].hasRewardsForWinnerField = true;
    (*circuitRaces)[raceIndex].hasRivalBestTimeField = true;
    (*circuitRaces)[raceIndex].hasNumLapsField = false;

    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Baron race 1
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_10/10_3_1_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "10_3_1_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_10";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 20812.8;
    (*lapKnockoutRaces)[raceIndex].startLineType = "narrow";

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/10_3_1_engage";

    (*lapKnockoutRaces)[raceIndex].hasNumLapsField = false;
    (*lapKnockoutRaces)[raceIndex].hasEventIconTypeField = true;
    (*lapKnockoutRaces)[raceIndex].hasKnockoutsPerLapField = true;

    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Baron race 2
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_10/10_3_2_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "10_3_2_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_10";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 15418.85;
    (*lapKnockoutRaces)[raceIndex].startLineType = "narrow";

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/10_3_2_engage";

    (*lapKnockoutRaces)[raceIndex].hasKnockoutsPerLapField = true;

    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Baron race 3
    tollboothRaces->emplace_back();
    raceIndex = refreshRaceIndex(*tollboothRaces);

    (*tollboothRaces)[raceIndex].raceNode = "race_bin_10/10_4_2_tollbooth";
    (*tollboothRaces)[raceIndex].gameplayvault = "10_4_2_tollbooth";
    (*tollboothRaces)[raceIndex].originalRaceBin = "race_bin_10";

    (*tollboothRaces)[raceIndex].totalDistance = 9333.036;
    (*tollboothRaces)[raceIndex].startLineType = "tollbooth";

    (*tollboothRaces)[raceIndex].engageTriggerName = "/engage/10_4_2_engage";

    (*tollboothRaces)[raceIndex].hasIntroMovieField = true;
    (*tollboothRaces)[raceIndex].hasEventIconTypeField = true;

    //Baron race 4
    tollboothRaces->emplace_back();
    raceIndex = refreshRaceIndex(*tollboothRaces);

    (*tollboothRaces)[raceIndex].raceNode = "race_bin_10/10_4_1_tollbooth";
    (*tollboothRaces)[raceIndex].gameplayvault = "10_4_1_tollbooth";
    (*tollboothRaces)[raceIndex].originalRaceBin = "race_bin_10";

    (*tollboothRaces)[raceIndex].totalDistance = 9819.097;
    (*tollboothRaces)[raceIndex].startLineType = "tollbooth";

    (*tollboothRaces)[raceIndex].engageTriggerName = "/engage/10_4_1_engage";

    (*tollboothRaces)[raceIndex].hasEventIconTypeField = true;

    //Baron race 5
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_10/11_2_1_r_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "11_2_1_r_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_10";

    (*sprintRaces)[raceIndex].totalDistance = 5226.761;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 18;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/11_2_1_r_engage";

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(6);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "3176.5", "1743", "102.5", "20" },
        RadiusTrigger { "3098", "1073", "66", "25" },
        RadiusTrigger { "3710.265", "1046.2", "54.29004", "20" },
        RadiusTrigger { "4132.485", "705.2825", "56.5", "15" },
        RadiusTrigger { "4690.651", "261.7112", "9.004883", "20" },
        RadiusTrigger { "4143.658", "-150.2335", "16.45215", "25" }
    };

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Baron race 6
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_10/10_2_2_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "10_2_2_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_10";

    (*sprintRaces)[raceIndex].totalDistance = 10365.36;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 29;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/10_2_2_engage";

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(7);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "2546.5", "1086.5", "90.5", "20" },
        RadiusTrigger { "3707.5", "1047.5", "55.5", "25" },
        RadiusTrigger { "4443", "602.5", "54.5", "20" },
        RadiusTrigger { "4501", "1217", "23.5", "25" },
        RadiusTrigger { "3935.5", "2226", "40.5", "25" },
        RadiusTrigger { "3679", "2833.5", "10.5", "15" },
        RadiusTrigger { "2805", "2992.5", "64", "25" }
    };

    (*sprintRaces)[raceIndex].hasIntroMovieField = true;

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Baron race 7
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_10/11_1_2_r_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "11_1_2_r_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_10";

    (*circuitRaces)[raceIndex].totalDistance = 11309.25;
    (*circuitRaces)[raceIndex].lapsInVanilla = 3;
    (*circuitRaces)[raceIndex].startLineType = "narrow";

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/11_1_2_r_engage";

    (*circuitRaces)[raceIndex].hasNumLapsField = false;
    (*circuitRaces)[raceIndex].hasIntroNISField = false;

    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Baron race 8
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_10/11_5_1_r_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "11_5_1_r_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_10";

    (*speedtrapRaces)[raceIndex].totalDistance = 4280.734;
    (*speedtrapRaces)[raceIndex].startLineType = "narrow";

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/11_5_1_r_engage";

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(4);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_10/11_5_1_r_speedtrap/speedtrap1", "race_bin_10/11_5_1_r_speedtrap/speedtrap3",
      "race_bin_10/11_5_1_r_speedtrap/speedtrap4", "race_bin_10/11_5_1_r_speedtrap/speedtrap5" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates = { { "race_bin_10/11_5_1_r_speedtrap/wrongway", "11" } };

    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Baron boss race 1
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_10/10_2_1_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "10_2_1_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_10";

    (*sprintRaces)[raceIndex].totalDistance = 7486.843;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 22;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/10_2_1_engage";
    (*sprintRaces)[raceIndex].engageTriggerHasInitiallyUnlockedField = true;

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(6);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "683.5", "4020", "212.5", "20" },
        RadiusTrigger { "1149.5", "3070", "199.5", "15" },
        RadiusTrigger { "1792.5", "2415", "151.5", "20" },
        RadiusTrigger { "2110.5", "1486", "151.5", "15" },
        RadiusTrigger { "2832", "669.5", "46", "20" },
        RadiusTrigger { "3283.5", "-211", "15.5", "30" }
    };

    (*sprintRaces)[raceIndex].hasBossRaceField = true;
    (*sprintRaces)[raceIndex].hasPostRaceActivityField = true;
    (*sprintRaces)[raceIndex].hasRivalBestTimeField = true;
    (*sprintRaces)[raceIndex].hasEventIconTypeField = true;

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Baron boss race 2
    dragRaces->emplace_back();
    raceIndex = refreshRaceIndex(*dragRaces);

    (*dragRaces)[raceIndex].raceNode = "race_bin_10/10_7_3_drag";
    (*dragRaces)[raceIndex].gameplayvault = "10_7_3_drag";
    (*dragRaces)[raceIndex].originalRaceBin = "race_bin_10";

    (*dragRaces)[raceIndex].totalDistance = 1572.18;

    (*dragRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_drag_10_7_3";
    (*dragRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*dragRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("3284.491", "-159.4646", "23.73438");

    (*dragRaces)[raceIndex].hasBossRaceField = true;
    (*dragRaces)[raceIndex].hasIsMarkerRaceField = true;
    (*dragRaces)[raceIndex].hasRewardsForWinnerField = true;
    (*dragRaces)[raceIndex].hasRivalBestTimeField = true;
    (*dragRaces)[raceIndex].hasTrafficLevelField = false;

    //Earl race 1
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_09/9_1_1_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "9_1_1_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_09";

    (*circuitRaces)[raceIndex].totalDistance = 11856.15;
    (*circuitRaces)[raceIndex].lapsInVanilla = 2;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/9_1_1_engage";

    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Earl race 2
    dragRaces->emplace_back();
    raceIndex = refreshRaceIndex(*dragRaces);

    (*dragRaces)[raceIndex].raceNode = "race_bin_09/9_7_1_drag";
    (*dragRaces)[raceIndex].gameplayvault = "9_7_1_drag";
    (*dragRaces)[raceIndex].originalRaceBin = "race_bin_09";

    (*dragRaces)[raceIndex].totalDistance = 1285.837;

    (*dragRaces)[raceIndex].engageTriggerName = "/engage/9_7_1_engage";

    (*dragRaces)[raceIndex].hasEventIconTypeField = true;

    //Earl race 3
    tollboothRaces->emplace_back();
    raceIndex = refreshRaceIndex(*tollboothRaces);

    (*tollboothRaces)[raceIndex].raceNode = "race_bin_09/9_4_1_tollbooth";
    (*tollboothRaces)[raceIndex].gameplayvault = "9_4_1_tollbooth";
    (*tollboothRaces)[raceIndex].originalRaceBin = "race_bin_09";

    (*tollboothRaces)[raceIndex].totalDistance = 13145.52;
    (*tollboothRaces)[raceIndex].startLineType = "tollbooth";

    (*tollboothRaces)[raceIndex].engageTriggerName = "/engage/9_4_1_engage";

    (*tollboothRaces)[raceIndex].hasEventIconTypeField = true;

    //Earl race 4
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_09/9_5_1_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "9_5_1_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_09";

    (*speedtrapRaces)[raceIndex].totalDistance = 7857.761;
    (*speedtrapRaces)[raceIndex].startLineType = "narrow";

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/9_5_1_engage";

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(6);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_09/9_5_1_speedtrap/speedtrap1", "race_bin_09/9_5_1_speedtrap/speedtrap2",
      "race_bin_09/9_5_1_speedtrap/speedtrap4", "race_bin_09/9_5_1_speedtrap/speedtrap5",
      "race_bin_09/9_5_1_speedtrap/speedtrap6", "race_bin_09/9_5_1_speedtrap/speedtrap7" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates.reserve(5);
    (*speedtrapRaces)[raceIndex].childrenFieldUpdates =
    {
        { "race_bin_09/9_5_1_speedtrap/wrongway", "9" },
        { "race_bin_09/9_5_1_speedtrap/shortcut1", "10" },
        { "race_bin_09/9_5_1_speedtrap/shortcut2", "11" },
        { "race_bin_09/9_5_1_speedtrap/shortcut3", "12" },
        { "race_bin_09/9_5_1_speedtrap/shortcut4", "13" }
    };

    (*speedtrapRaces)[raceIndex].hasEventIconTypeField = true;

    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Earl race 5
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_09/9_5_2_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "9_5_2_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_09";

    (*speedtrapRaces)[raceIndex].totalDistance = 10090.38;
    (*speedtrapRaces)[raceIndex].startLineType = "narrow";

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/9_5_2_engage";

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(7);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_09/9_5_2_speedtrap/speedtrap1", "race_bin_09/9_5_2_speedtrap/speedtrap2",
      "race_bin_09/9_5_2_speedtrap/speedtrap3", "race_bin_09/9_5_2_speedtrap/speedtrap4",
      "race_bin_09/9_5_2_speedtrap/speedtrap5", "race_bin_09/9_5_2_speedtrap/speedtrap6",
      "race_bin_09/9_5_2_speedtrap/speedtrap7" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates.reserve(7);
    (*speedtrapRaces)[raceIndex].childrenFieldUpdates =
    {
        { "race_bin_09/9_5_2_speedtrap/wrongway", "9" },
        { "race_bin_09/9_5_2_speedtrap/shortcut1", "10" },
        { "race_bin_09/9_5_2_speedtrap/shortcut2", "11" },
        { "race_bin_09/9_5_2_speedtrap/shortcut3", "12" },
        { "race_bin_09/9_5_2_speedtrap/shortcut4", "13" },
        { "race_bin_09/9_5_2_speedtrap/shortcut5", "14" },
        { "race_bin_09/9_5_2_speedtrap/shortcut6", "15" }
    };

    (*speedtrapRaces)[raceIndex].hasCopsInRaceField = false;

    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Earl race 6
    tollboothRaces->emplace_back();
    raceIndex = refreshRaceIndex(*tollboothRaces);

    (*tollboothRaces)[raceIndex].raceNode = "race_bin_09/9_4_2_tollbooth";
    (*tollboothRaces)[raceIndex].gameplayvault = "9_4_2_tollbooth";
    (*tollboothRaces)[raceIndex].originalRaceBin = "race_bin_09";

    (*tollboothRaces)[raceIndex].totalDistance = 11871.16;
    (*tollboothRaces)[raceIndex].startLineType = "tollbooth";

    (*tollboothRaces)[raceIndex].engageTriggerName = "/engage/9_4_2_engage";

    //Earl race 7
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_09/12_1_1_r_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "12_1_1_r_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_09";

    (*circuitRaces)[raceIndex].totalDistance = 10394.67;
    (*circuitRaces)[raceIndex].lapsInVanilla = 3;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/12_1_1_r_engage";

    (*circuitRaces)[raceIndex].hasNumLapsField = false;
    (*circuitRaces)[raceIndex].hasTrafficLevelField = false;

    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Earl race 8
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_09/9_3_1_lapknockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "9_3_1_lapknockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_09";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 14941.07;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/9_3_1_engage";

    (*lapKnockoutRaces)[raceIndex].hasNumLapsField = false;
    (*lapKnockoutRaces)[raceIndex].hasTrafficLevelField = false;

    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Earl boss race 1
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_09/9_5_3_speedtrap_race";
    (*speedtrapRaces)[raceIndex].gameplayvault = "9_5_3_speedtrap_race";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_09";

    (*speedtrapRaces)[raceIndex].totalDistance = 5946.058;
    (*speedtrapRaces)[raceIndex].startLineType = "narrow";

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/9_5_3_engage";
    (*speedtrapRaces)[raceIndex].engageTriggerHasInitiallyUnlockedField = true;

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(5);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_09/9_5_3_speedtrap_race/speedtrap1", "race_bin_09/9_5_3_speedtrap_race/speedtrap2",
      "race_bin_09/9_5_3_speedtrap_race/speedtrap3", "race_bin_09/9_5_3_speedtrap_race/speedtrap4",
      "race_bin_09/9_5_3_speedtrap_race/speedtrap6" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates.reserve(8);
    (*speedtrapRaces)[raceIndex].childrenFieldUpdates =
    {
        { "race_bin_09/9_5_3_speedtrap_race/wrongway", "11" },
        { "race_bin_09/9_5_3_speedtrap_race/shortcut1", "12" },
        { "race_bin_09/9_5_3_speedtrap_race/shortcut2", "13" },
        { "race_bin_09/9_5_3_speedtrap_race/shortcut3", "14" },
        { "race_bin_09/9_5_3_speedtrap_race/shortcut4", "15" },
        { "race_bin_09/9_5_3_speedtrap_race/shortcut5", "16" },
        { "race_bin_09/9_5_3_speedtrap_race/shortcut6", "17" },
        { "race_bin_09/9_5_3_speedtrap_race/shortcut7", "18" }
    };

    (*speedtrapRaces)[raceIndex].hasBossRaceField = true;
    (*speedtrapRaces)[raceIndex].hasPostRaceActivityField = true;
    (*speedtrapRaces)[raceIndex].hasRivalBestTimeField = true;

    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Earl boss race 2
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_09/9_2_1_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "9_2_1_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_09";

    (*sprintRaces)[raceIndex].totalDistance = 12978.91;
    (*sprintRaces)[raceIndex].startLineType = "narrow";
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 18;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_circuit_9_2_1";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("4065.047", "2852.6", "23.84376");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(8);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "3649.5", "3576", "35.5", "20" },
        RadiusTrigger { "3107", "2595", "41", "25" },
        RadiusTrigger { "3997.227", "2148.108", "25.69825", "20" },
        RadiusTrigger { "3934.583", "1330.231", "54", "20" },
        RadiusTrigger { "3850.916", "892.6737", "42.5", "20" },
        RadiusTrigger { "4312.198", "357.556", "38", "20" },
        RadiusTrigger { "4402.343", "1019.323", "64", "20" },
        RadiusTrigger { "4793.972", "774.312", "13", "20" }
    };

    (*sprintRaces)[raceIndex].hasBossRaceField = true;
    (*sprintRaces)[raceIndex].hasIsMarkerRaceField = true;
    (*sprintRaces)[raceIndex].hasRewardsForWinnerField = true;
    (*sprintRaces)[raceIndex].hasRivalBestTimeField = true;
    (*sprintRaces)[raceIndex].hasEventIconTypeField = true;

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Jewels race 1
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_08/8_3_1_lap_ko";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "8_3_1_lap_ko";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_08";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 11431.2;
    (*lapKnockoutRaces)[raceIndex].startLineType = "narrow";

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "engage/8_3_1_engage";

    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Jewels race 2
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_08/13_3_1_r_lap_ko";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "13_3_1_r_lap_ko";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_08";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 15005.2;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/13_3_1_r_engage";

    (*lapKnockoutRaces)[raceIndex].hasNumLapsField = false;

    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Jewels race 3
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_08/8_5_1_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "8_5_1_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_08";

    (*speedtrapRaces)[raceIndex].totalDistance = 6122.784;

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/8_5_1_engage";

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(4);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_08/8_5_1_speedtrap/speedtrap1", "race_bin_08/8_5_1_speedtrap/speedtrap2",
      "race_bin_08/8_5_1_speedtrap/speedtrap3", "race_bin_08/8_5_1_speedtrap/speedtrap5" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates.reserve(12);
    (*speedtrapRaces)[raceIndex].childrenFieldUpdates =
    {
        { "race_bin_08/8_5_1_speedtrap/wrongway", "12" },
        { "race_bin_08/8_5_1_speedtrap/8_5_1_finishline_reverse", "13" },
        { "race_bin_08/8_5_1_speedtrap/8_5_1_startgrid_reverse", "14" },
        { "race_bin_08/8_5_1_speedtrap/shortcut1", "15" },
        { "race_bin_08/8_5_1_speedtrap/shortcut2", "16" },
        { "race_bin_08/8_5_1_speedtrap/shortcut3", "17" },
        { "race_bin_08/8_5_1_speedtrap/shortcut4", "18" },
        { "race_bin_08/8_5_1_speedtrap/shortcut5", "19" },
        { "race_bin_08/8_5_1_speedtrap/shortcut6", "20" },
        { "race_bin_08/8_5_1_speedtrap/shortcut7", "21" },
        { "race_bin_08/8_5_1_speedtrap/shortcut8", "22" },
        { "race_bin_08/8_5_1_speedtrap/shortcut9", "23" }
    };

    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Jewels race 4
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_08/8_5_2_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "8_5_2_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_08";

    (*speedtrapRaces)[raceIndex].totalDistance = 9715.128;
    (*speedtrapRaces)[raceIndex].startLineType = "narrow";

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/8_5_2_engage";

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(7);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_08/8_5_2_speedtrap/speedtrap1", "race_bin_08/8_5_2_speedtrap/speedtrap2",
      "race_bin_08/8_5_2_speedtrap/speedtrap3", "race_bin_08/8_5_2_speedtrap/speedtrap4",
      "race_bin_08/8_5_2_speedtrap/speedtrap5", "race_bin_08/8_5_2_speedtrap/speedtrap6",
      "race_bin_08/8_5_2_speedtrap/speedtrap7" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates.reserve(7);
    (*speedtrapRaces)[raceIndex].childrenFieldUpdates =
    {
        { "race_bin_08/8_5_2_speedtrap/wrongway", "9" },
        { "race_bin_08/8_5_2_speedtrap/8_5_2_finishline_reverse", "10" },
        { "race_bin_08/8_5_2_speedtrap/8_5_2_startgrid_reverse", "11" },
        { "race_bin_08/8_5_2_speedtrap/shortcut1", "12" },
        { "race_bin_08/8_5_2_speedtrap/shortcut2", "13" },
        { "race_bin_08/8_5_2_speedtrap/shortcut3", "14" },
        { "race_bin_08/8_5_2_speedtrap/shortcut4", "15" }
    };

    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Jewels race 5
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_08/8_2_2_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "8_2_2_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_08";

    (*sprintRaces)[raceIndex].totalDistance = 10100.05;
    (*sprintRaces)[raceIndex].startLineType = "narrow";
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 19;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/8_2_2_engage";

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(7);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "921.3778", "2191.046", "154.5059", "20" },
        RadiusTrigger { "1698.595", "1829.437", "168.3076", "30" },
        RadiusTrigger { "995.6763", "1721.156", "153.3623", "30" },
        RadiusTrigger { "-417.6116", "2402.144", "243.8887", "30" },
        RadiusTrigger { "-100.0152", "3657.865", "226.5215", "25" },
        RadiusTrigger { "491.0581", "3342.904", "194.8252", "15" },
        RadiusTrigger { "1137", "3092", "199", "20" }
    };

    (*sprintRaces)[raceIndex].hasIntroNISField = false;

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Jewels race 6
    tollboothRaces->emplace_back();
    raceIndex = refreshRaceIndex(*tollboothRaces);

    (*tollboothRaces)[raceIndex].raceNode = "race_bin_08/10_4_2_r_tollbooth";
    (*tollboothRaces)[raceIndex].gameplayvault = "10_4_2_r_tollbooth";
    (*tollboothRaces)[raceIndex].originalRaceBin = "race_bin_08";

    (*tollboothRaces)[raceIndex].totalDistance = 9325.017;
    (*tollboothRaces)[raceIndex].startLineType = "tollbooth";

    (*tollboothRaces)[raceIndex].engageTriggerName = "/engage/10_4_2_r_engage";

    //Jewels race 7
    tollboothRaces->emplace_back();
    raceIndex = refreshRaceIndex(*tollboothRaces);

    (*tollboothRaces)[raceIndex].raceNode = "race_bin_08/9_4_1_r_tollbooth";
    (*tollboothRaces)[raceIndex].gameplayvault = "9_4_1_r_tollbooth";
    (*tollboothRaces)[raceIndex].originalRaceBin = "race_bin_08";

    (*tollboothRaces)[raceIndex].totalDistance = 13145.76;
    (*tollboothRaces)[raceIndex].startLineType = "tollbooth";

    (*tollboothRaces)[raceIndex].engageTriggerName = "/engage/9_4_1_r_tollbooth";

    //Jewels boss race 1
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_08/8_2_1_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "8_2_1_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_08";

    (*sprintRaces)[raceIndex].totalDistance = 12385.85;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 18;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/8_2_1_engage";
    (*sprintRaces)[raceIndex].engageTriggerHasInitiallyUnlockedField = true;

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(7);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "2922.5", "607", "38", "25" },
        RadiusTrigger { "1642", "-83.5", "101", "20" },
        RadiusTrigger { "1802", "576", "93.5", "20" },
        RadiusTrigger { "2066", "1523.5", "150.5", "25" },
        RadiusTrigger { "2127", "2198.5", "164.5", "30" },
        RadiusTrigger { "2446.5", "3432.5", "201", "35" },
        RadiusTrigger { "2008", "4379.5", "244", "35" }
    };

    (*sprintRaces)[raceIndex].hasBossRaceField = true;
    (*sprintRaces)[raceIndex].hasPostRaceActivityField = true;
    (*sprintRaces)[raceIndex].hasRivalBestTimeField = true;
    (*sprintRaces)[raceIndex].hasEventIconTypeField = true;

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Jewels boss race 2
    dragRaces->emplace_back();
    raceIndex = refreshRaceIndex(*dragRaces);

    (*dragRaces)[raceIndex].raceNode = "race_bin_08/8_7_5_drag";
    (*dragRaces)[raceIndex].gameplayvault = "8_7_5_drag";
    (*dragRaces)[raceIndex].originalRaceBin = "race_bin_08";

    (*dragRaces)[raceIndex].totalDistance = 1853.522;

    (*dragRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_drag_8_7_5";
    (*dragRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*dragRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("829.7195", "4407.375", "210.5586");

    (*dragRaces)[raceIndex].hasBossRaceField = true;
    (*dragRaces)[raceIndex].hasIsMarkerRaceField = true;
    (*dragRaces)[raceIndex].hasRewardsForWinnerField = true;
    (*dragRaces)[raceIndex].hasRivalBestTimeField = true;
    (*dragRaces)[raceIndex].hasTrafficLevelField = false;

    //Kaze race 1
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_07/7_2_1_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "7_2_1_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_07";

    (*sprintRaces)[raceIndex].totalDistance = 7965.168;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 16;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/7_2_1_engage";

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(5);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "2361", "3324.5", "206.5", "25" },
        RadiusTrigger { "1849.5", "1951.5", "149.5", "20" },
        RadiusTrigger { "2005.249", "1057.231", "139.9834", "20" },
        RadiusTrigger { "1801.98", "576.4349", "93.01855", "20" },
        RadiusTrigger { "2020", "-138.5", "107.5", "20" }
    };

    (*sprintRaces)[raceIndex].hasEventIconTypeField = true;

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Kaze race 2
    tollboothRaces->emplace_back();
    raceIndex = refreshRaceIndex(*tollboothRaces);

    (*tollboothRaces)[raceIndex].raceNode = "race_bin_07/7_4_3_tollbooth";
    (*tollboothRaces)[raceIndex].gameplayvault = "7_4_3_tollbooth";
    (*tollboothRaces)[raceIndex].originalRaceBin = "race_bin_07";

    (*tollboothRaces)[raceIndex].totalDistance = 9936.27;
    (*tollboothRaces)[raceIndex].startLineType = "tollbooth";

    (*tollboothRaces)[raceIndex].engageTriggerName = "/engage/7_4_3_engage";

    (*tollboothRaces)[raceIndex].hasEventIconTypeField = true;

    //Kaze race 3
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_07/7_5_1_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "7_5_1_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_07";

    (*speedtrapRaces)[raceIndex].totalDistance = 8152.237;
    (*speedtrapRaces)[raceIndex].startLineType = "narrow";

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/7_5_1_engage";

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(6);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_07/7_5_1_speedtrap/speedtrap2", "race_bin_07/7_5_1_speedtrap/speedtrap3",
      "race_bin_07/7_5_1_speedtrap/speedtrap4", "race_bin_07/7_5_1_speedtrap/speedtrap5",
      "race_bin_07/7_5_1_speedtrap/speedtrap6", "race_bin_07/7_5_1_speedtrap/speedtrap7" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates.reserve(12);
    (*speedtrapRaces)[raceIndex].childrenFieldUpdates =
    {
        { "race_bin_07/7_5_1_speedtrap/checkpoint8", "9" },
        { "race_bin_07/7_5_1_speedtrap/checkpoint9", "10" },
        { "race_bin_07/7_5_1_speedtrap/checkpoint10", "11" },
        { "race_bin_07/7_5_1_speedtrap/shortcut1", "12" },
        { "race_bin_07/7_5_1_speedtrap/shortcut2", "13" },
        { "race_bin_07/7_5_1_speedtrap/shortcut3", "14" },
        { "race_bin_07/7_5_1_speedtrap/wrongway", "15" },
        { "race_bin_07/7_5_1_speedtrap/shortcut5", "16" },
        { "race_bin_07/7_5_1_speedtrap/shortcut6", "17" },
        { "race_bin_07/7_5_1_speedtrap/shortcut7", "18" },
        { "race_bin_07/7_5_1_speedtrap/shortcut8", "19" },
        { "race_bin_07/7_5_1_speedtrap/shortcut9", "20" }
    };

    (*speedtrapRaces)[raceIndex].hasEventIconTypeField = true;

    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Kaze race 4
    tollboothRaces->emplace_back();
    raceIndex = refreshRaceIndex(*tollboothRaces);

    (*tollboothRaces)[raceIndex].raceNode = "race_bin_07/7_4_1_tollbooth";
    (*tollboothRaces)[raceIndex].gameplayvault = "7_4_1_tollbooth";
    (*tollboothRaces)[raceIndex].originalRaceBin = "race_bin_07";

    (*tollboothRaces)[raceIndex].totalDistance = 13511.84;
    (*tollboothRaces)[raceIndex].startLineType = "tollbooth";

    (*tollboothRaces)[raceIndex].engageTriggerName = "/engage/7_4_1_engage";

    (*tollboothRaces)[raceIndex].hasEventIconTypeField = true;

    //Kaze race 5
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_07/7_3_1_lap_ko";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "7_3_1_lap_ko";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_07";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 16910.86;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/7_3_1_engage";

    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Kaze race 6
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_07/16_1_1_r_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "16_1_1_r_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_07";

    (*circuitRaces)[raceIndex].totalDistance = 6624.065;
    (*circuitRaces)[raceIndex].lapsInVanilla = 3;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/16_1_1_r_engage";

    (*circuitRaces)[raceIndex].hasNumLapsField = false;

    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Kaze race 7
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_07/8_2_1_r_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "8_2_1_r_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_07";

    (*sprintRaces)[raceIndex].totalDistance = 12366.38;
    (*sprintRaces)[raceIndex].startLineType = "narrow";
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 21;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/8_2_1_r_engage";

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(9);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "1094.084", "4436.212", "215.5", "30" },
        RadiusTrigger { "2542.5", "4526", "262.5", "35" },
        RadiusTrigger { "2434.295", "3422.83", "200", "35" },
        RadiusTrigger { "2126.33", "2197.729", "164.2608", "30" },
        RadiusTrigger { "2080.125", "1218.93", "151.1944", "25" },
        RadiusTrigger { "1559.921", "516.071", "86.68262", "20" },
        RadiusTrigger { "1004.636", "190.2112", "100.7393", "20" },
        RadiusTrigger { "1758.688", "-32.39207", "105.5", "20" },
        RadiusTrigger { "2756", "606", "46.5", "25" }
    };

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Kaze race 8
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_07/7_1_1_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "7_1_1_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_07";

    (*circuitRaces)[raceIndex].totalDistance = 11356.84;
    (*circuitRaces)[raceIndex].lapsInVanilla = 3;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/7_1_1_engage";

    (*circuitRaces)[raceIndex].hasNumLapsField = false;

    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Kaze race 9
    tollboothRaces->emplace_back();
    raceIndex = refreshRaceIndex(*tollboothRaces);

    (*tollboothRaces)[raceIndex].raceNode = "race_bin_07/7_4_2_tollbooth";
    (*tollboothRaces)[raceIndex].gameplayvault = "7_4_2_tollbooth";
    (*tollboothRaces)[raceIndex].originalRaceBin = "race_bin_07";

    (*tollboothRaces)[raceIndex].totalDistance = 10236.27;
    (*tollboothRaces)[raceIndex].startLineType = "tollbooth";

    (*tollboothRaces)[raceIndex].engageTriggerName = "/engage/7_4_2_engage";

    (*tollboothRaces)[raceIndex].hasEventIconTypeField = true;

    //Kaze race 10
    dragRaces->emplace_back();
    raceIndex = refreshRaceIndex(*dragRaces);

    (*dragRaces)[raceIndex].raceNode = "race_bin_07/7_7_4_drag";
    (*dragRaces)[raceIndex].gameplayvault = "7_7_4_drag";
    (*dragRaces)[raceIndex].originalRaceBin = "race_bin_07";

    (*dragRaces)[raceIndex].totalDistance = 1685.069;

    (*dragRaces)[raceIndex].engageTriggerName = "/engage/7_7_4_engage";

    (*dragRaces)[raceIndex].hasTrafficLevelField = false;

    //Kaze boss race 1
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_07/7_2_2_p2p";
    (*sprintRaces)[raceIndex].gameplayvault = "7_2_2_p2p";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_07";

    (*sprintRaces)[raceIndex].totalDistance = 9850.939;
    (*sprintRaces)[raceIndex].startLineType = "narrow";
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 24;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/7_2_2_engage";
    (*sprintRaces)[raceIndex].engageTriggerHasInitiallyUnlockedField = true;

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(5);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "2445.5", "2524", "123", "20" },
        RadiusTrigger { "2500", "1108", "99.5", "25" },
        RadiusTrigger { "2521", "230", "91", "20" },
        RadiusTrigger { "1536", "-95.5", "98.5", "20" },
        RadiusTrigger { "1388", "367.5", "104", "25" }
    };

    (*sprintRaces)[raceIndex].hasBossRaceField = true;
    (*sprintRaces)[raceIndex].hasPostRaceActivityField = true;
    (*sprintRaces)[raceIndex].hasRivalBestTimeField = true;
    (*sprintRaces)[raceIndex].hasEventIconTypeField = true;

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Kaze boss race 2
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_07/7_2_3_p2p";
    (*sprintRaces)[raceIndex].gameplayvault = "7_2_3_p2p";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_07";

    (*sprintRaces)[raceIndex].totalDistance = 10594.62;
    (*sprintRaces)[raceIndex].startLineType = "narrow";
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 21;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_7_2_3";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("330.1035", "3110.219", "188.2231");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(7);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "1242.524", "2137.573", "149.8017", "20" },
        RadiusTrigger { "1980.578", "1741.158", "150.501", "15" },
        RadiusTrigger { "2678.63", "790.3736", "69.21777", "25" },
        RadiusTrigger { "3436", "-333", "15.5", "30" },
        RadiusTrigger { "4325.552", "16.81068", "9.846677", "25" },
        RadiusTrigger { "4819.451", "809.3515", "15.5", "20" },
        RadiusTrigger { "3869", "1105.5", "66.5", "15" }
    };

    (*sprintRaces)[raceIndex].hasBossRaceField = true;
    (*sprintRaces)[raceIndex].hasIsMarkerRaceField = true;
    (*sprintRaces)[raceIndex].hasRewardsForWinnerField = true;
    (*sprintRaces)[raceIndex].hasRivalBestTimeField = true;
    (*sprintRaces)[raceIndex].hasEventIconTypeField = true;

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Ming race 1
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_06/6_2_2_p2p";
    (*sprintRaces)[raceIndex].gameplayvault = "6_2_2_p2p";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_06";

    (*sprintRaces)[raceIndex].totalDistance = 5170.688;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 13;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/6_2_2_engage";

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(4);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "1192.523", "-773.6458", "124.0781", "20" },
        RadiusTrigger { "1779.915", "-24.77111", "104.5", "20" },
        RadiusTrigger { "1761.318", "377.5", "92.89063", "20" },
        RadiusTrigger { "1638.656", "712.4404", "121.8071", "25" }
    };

    (*sprintRaces)[raceIndex].hasIntroMovieField = true;
    (*sprintRaces)[raceIndex].hasEventIconTypeField = true;

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Ming race 2
    tollboothRaces->emplace_back();
    raceIndex = refreshRaceIndex(*tollboothRaces);

    (*tollboothRaces)[raceIndex].raceNode = "race_bin_06/6_4_1_tollbooth";
    (*tollboothRaces)[raceIndex].gameplayvault = "6_4_1_tollbooth";
    (*tollboothRaces)[raceIndex].originalRaceBin = "race_bin_06";

    (*tollboothRaces)[raceIndex].totalDistance = 13009.38;
    (*tollboothRaces)[raceIndex].startLineType = "tollbooth";

    (*tollboothRaces)[raceIndex].engageTriggerName = "/engage/6_4_1_engage";

    (*tollboothRaces)[raceIndex].hasEventIconTypeField = true;

    //Ming race 3
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_06/6_5_1_speedtraprace";
    (*speedtrapRaces)[raceIndex].gameplayvault = "6_5_1_speedtraprace";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_06";

    (*speedtrapRaces)[raceIndex].totalDistance = 8169.598;

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/6_5_1_engage";

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(6);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_06/6_5_1_speedtraprace/speedtrap1", "race_bin_06/6_5_1_speedtraprace/speedtrap2",
      "race_bin_06/6_5_1_speedtraprace/speedtrap3", "race_bin_06/6_5_1_speedtraprace/speedtrap4",
      "race_bin_06/6_5_1_speedtraprace/speedtrap5", "race_bin_06/6_5_1_speedtraprace/speedtrap6" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates.reserve(5);
    (*speedtrapRaces)[raceIndex].childrenFieldUpdates =
    {
        { "race_bin_06/6_5_1_speedtraprace/wrongway", "9" },
        { "race_bin_06/6_5_1_speedtraprace/shortcut1", "10" },
        { "race_bin_06/6_5_1_speedtraprace/shortcut2", "11" },
        { "race_bin_06/6_5_1_speedtraprace/shortcut3", "12" },
        { "race_bin_06/6_5_1_speedtraprace/shortcut5", "13" }
    };

    (*speedtrapRaces)[raceIndex].hasEventIconTypeField = true;

    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Ming race 4
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_06/6_2_1_p2p";
    (*sprintRaces)[raceIndex].gameplayvault = "6_2_1_p2p";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_06";

    (*sprintRaces)[raceIndex].totalDistance = 7311.843;
    (*sprintRaces)[raceIndex].startLineType = "narrow";
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 18;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/6_2_1_engage";

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(4);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "1657.5", "822.5", "124", "30" },
        RadiusTrigger { "1561", "-688.5", "116", "30" },
        RadiusTrigger { "407.5", "-515.5", "133.5", "30" },
        RadiusTrigger { "957", "418.5", "110.5", "20" }
    };

    (*sprintRaces)[raceIndex].hasEventIconTypeField = true;

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Ming race 5
    tollboothRaces->emplace_back();
    raceIndex = refreshRaceIndex(*tollboothRaces);

    (*tollboothRaces)[raceIndex].raceNode = "race_bin_06/6_4_2_tollbooth";
    (*tollboothRaces)[raceIndex].gameplayvault = "6_4_2_tollbooth";
    (*tollboothRaces)[raceIndex].originalRaceBin = "race_bin_06";

    (*tollboothRaces)[raceIndex].totalDistance = 12569.6;
    (*tollboothRaces)[raceIndex].startLineType = "tollbooth";

    (*tollboothRaces)[raceIndex].engageTriggerName = "/engage/6_4_2_engage";

    (*tollboothRaces)[raceIndex].hasEventIconTypeField = true;

    //Ming race 6
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_06/6_3_1_lap_ko";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "6_3_1_lap_ko";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_06";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 11650.45;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/6_3_1_engage";

    (*lapKnockoutRaces)[raceIndex].hasIntroMovieField = true;

    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Ming race 7
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_06/14_3_1_r_lap_ko";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "14_3_1_r_lap_ko";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_06";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 11646.06;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/14_3_1_r_engage";

    (*lapKnockoutRaces)[raceIndex].hasNumLapsField = false;
    (*lapKnockoutRaces)[raceIndex].hasEventIconTypeField = true;
    (*lapKnockoutRaces)[raceIndex].hasKnockoutsPerLapField = true;

    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Ming race 8
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_06/6_2_3_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "6_2_3_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_06";

    (*sprintRaces)[raceIndex].totalDistance = 9120.647;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 17;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/6_2_3_engage";

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(6);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "2119", "-89.5", "105", "20" },
        RadiusTrigger { "1802", "576.5", "93", "20" },
        RadiusTrigger { "2005.249", "1057.231", "139.9834", "20" },
        RadiusTrigger { "1980.5", "1725", "150", "20" },
        RadiusTrigger { "2355.5", "3082", "182.5", "35" },
        RadiusTrigger { "2252.5", "4516", "247.5", "35" }
    };

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Ming race 9
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_06/6_5_3_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "6_5_3_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_06";

    (*speedtrapRaces)[raceIndex].totalDistance = 6242.597;

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/6_5_3_engage";

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(6);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_06/6_5_3_speedtrap/speedtrap1", "race_bin_06/6_5_3_speedtrap/speedtrap2",
      "race_bin_06/6_5_3_speedtrap/speedtrap3", "race_bin_06/6_5_3_speedtrap/speedtrap4",
      "race_bin_06/6_5_3_speedtrap/speedtrap5", "race_bin_06/6_5_3_speedtrap/speedtrap6" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates.reserve(9);
    (*speedtrapRaces)[raceIndex].childrenFieldUpdates =
    {
        { "race_bin_06/6_5_3_speedtrap/wrongway", "12" },
        { "race_bin_06/6_5_3_speedtrap/shortcut1", "13" },
        { "race_bin_06/6_5_3_speedtrap/shortcut2", "14" },
        { "race_bin_06/6_5_3_speedtrap/shortcut3", "15" },
        { "race_bin_06/6_5_3_speedtrap/shortcut4", "16" },
        { "race_bin_06/6_5_3_speedtrap/shortcut5", "17" },
        { "race_bin_06/6_5_3_speedtrap/shortcut6", "18" },
        { "race_bin_06/6_5_3_speedtrap/shortcut7", "19" },
        { "race_bin_06/6_5_3_speedtrap/shortcut8", "20" }
    };

    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Ming race 10
    dragRaces->emplace_back();
    raceIndex = refreshRaceIndex(*dragRaces);

    (*dragRaces)[raceIndex].raceNode = "race_bin_06/7_7_1_r_drag";
    (*dragRaces)[raceIndex].gameplayvault = "7_7_1_r_drag";
    (*dragRaces)[raceIndex].originalRaceBin = "race_bin_06";

    (*dragRaces)[raceIndex].totalDistance = 1223.474;

    (*dragRaces)[raceIndex].engageTriggerName = "/engage/7_7_1_r_engage";

    (*dragRaces)[raceIndex].hasTrafficLevelField = false;

    //Ming race 11
    tollboothRaces->emplace_back();
    raceIndex = refreshRaceIndex(*tollboothRaces);

    (*tollboothRaces)[raceIndex].raceNode = "race_bin_06/7_4_1_r_tollbooth";
    (*tollboothRaces)[raceIndex].gameplayvault = "7_4_1_r_tollbooth";
    (*tollboothRaces)[raceIndex].originalRaceBin = "race_bin_06";

    (*tollboothRaces)[raceIndex].totalDistance = 13511.84;
    (*tollboothRaces)[raceIndex].startLineType = "tollbooth";

    (*tollboothRaces)[raceIndex].engageTriggerName = "/engage/7_4_1_r_engage";

    //Ming boss race 1
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_06/6_1_1_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "6_1_1_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_06";

    (*circuitRaces)[raceIndex].totalDistance = 8091.473;
    (*circuitRaces)[raceIndex].lapsInVanilla = 2;
    (*circuitRaces)[raceIndex].startLineType = "narrow";

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/6_1_1_engage";
    (*circuitRaces)[raceIndex].engageTriggerHasInitiallyUnlockedField = true;

    (*circuitRaces)[raceIndex].hasBossRaceField = true;
    (*circuitRaces)[raceIndex].hasPostRaceActivityField = true;
    (*circuitRaces)[raceIndex].hasRivalBestTimeField = true;

    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Ming boss race 2
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_06/6_5_2_speedtraprace";
    (*speedtrapRaces)[raceIndex].gameplayvault = "6_5_2_speedtraprace";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_06";

    (*speedtrapRaces)[raceIndex].totalDistance = 9897.277;

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_speedtrap_6_5_2";
    (*speedtrapRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*speedtrapRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("3260.248", "3315.301", "29");

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(8);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_06/6_5_2_speedtraprace/speedtrap1", "race_bin_06/6_5_2_speedtraprace/speedtrap2",
      "race_bin_06/6_5_2_speedtraprace/speedtrap3", "race_bin_06/6_5_2_speedtraprace/speedtrap4",
      "race_bin_06/6_5_2_speedtraprace/speedtrap5", "race_bin_06/6_5_2_speedtraprace/speedtrap7",
      "race_bin_06/6_5_2_speedtraprace/speedtrap8", "race_bin_06/6_5_2_speedtraprace/speedtrap6" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates.reserve(6);
    (*speedtrapRaces)[raceIndex].childrenFieldUpdates =
    {
        { "race_bin_06/6_5_2_speedtraprace/wrongway", "10" },
        { "race_bin_06/6_5_2_speedtraprace/shortcut1", "11" },
        { "race_bin_06/6_5_2_speedtraprace/shortcut2", "12" },
        { "race_bin_06/6_5_2_speedtraprace/shortcut3", "13" },
        { "race_bin_06/6_5_2_speedtraprace/shortcut4", "14" },
        { "race_bin_06/6_5_2_speedtraprace/shortcut5", "15" }
    };

    (*speedtrapRaces)[raceIndex].hasBossRaceField = true;
    (*speedtrapRaces)[raceIndex].hasIsMarkerRaceField = true;
    (*speedtrapRaces)[raceIndex].hasRewardsForWinnerField = true;
    (*speedtrapRaces)[raceIndex].hasRivalBestTimeField = true;
    (*speedtrapRaces)[raceIndex].hasIntroMovieField = true;
    (*speedtrapRaces)[raceIndex].hasEventIconTypeField = true;

    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Webster race 1
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_05/5_3_1_lap_ko";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "5_3_1_lap_ko";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_05";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 16676.22;
    (*lapKnockoutRaces)[raceIndex].startLineType = "narrow";

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/5_3_1_engage";

    (*lapKnockoutRaces)[raceIndex].hasNumLapsField = false;

    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Webster race 2
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_05/5_1_1_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "5_1_1_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_05";

    (*circuitRaces)[raceIndex].totalDistance = 13528.04;
    (*circuitRaces)[raceIndex].lapsInVanilla = 2;
    (*circuitRaces)[raceIndex].startLineType = "narrow";

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/5_1_1_engage";

    (*circuitRaces)[raceIndex].hasCopsInRaceField = false;

    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Webster race 3
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_05/5_2_1_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "5_2_1_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_05";

    (*sprintRaces)[raceIndex].totalDistance = 14207.27;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 24;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/5_2_1_engage";

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(10);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "986", "1732.5", "153.5", "25" },
        RadiusTrigger { "-361", "2356.5", "241.5", "20" },
        RadiusTrigger { "-138.5", "3646.5", "223", "20" },
        RadiusTrigger { "633", "4146", "199", "20" },
        RadiusTrigger { "2018.5", "3549.5", "159.5", "20" },
        RadiusTrigger { "1760.5", "2039.5", "148", "35" },
        RadiusTrigger { "1362", "2822", "171.5", "20" },
        RadiusTrigger { "726", "3255.5", "199", "20" },
        RadiusTrigger { "339", "3092.5", "188.5", "20" },
        RadiusTrigger { "546", "2647.5", "166", "20" }
    };

    (*sprintRaces)[raceIndex].hasTrafficLevelField = false;

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Webster race 4
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_05/5_5_1_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "5_5_1_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_05";

    (*speedtrapRaces)[raceIndex].totalDistance = 10505.51;

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/5_5_1_engage";

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(6);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_05/5_5_1_speedtrap/speedtrap1", "race_bin_05/5_5_1_speedtrap/speedtrap2",
      "race_bin_05/5_5_1_speedtrap/speedtrap3", "race_bin_05/5_5_1_speedtrap/speedtrap4",
      "race_bin_05/5_5_1_speedtrap/speedtrap5", "race_bin_05/5_5_1_speedtrap/speedtrap6" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates.reserve(4);
    (*speedtrapRaces)[raceIndex].childrenFieldUpdates =
    {
        { "race_bin_05/5_5_1_speedtrap/wrongway", "10" },
        { "race_bin_05/5_5_1_speedtrap/shortcut1", "11" },
        { "race_bin_05/5_5_1_speedtrap/shortcut2", "12" },
        { "race_bin_05/5_5_1_speedtrap/shortcut3", "13" }
    };

    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Webster race 5
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_05/5_5_2_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "5_5_2_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_05";

    (*speedtrapRaces)[raceIndex].totalDistance = 9007.355;

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/5_5_2_engage";

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(5);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_05/5_5_2_speedtrap/speedtrap1", "race_bin_05/5_5_2_speedtrap/speedtrap2",
      "race_bin_05/5_5_2_speedtrap/speedtrap3", "race_bin_05/5_5_2_speedtrap/speedtrap4",
      "race_bin_05/5_5_2_speedtrap/speedtrap5" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates.reserve(4);
    (*speedtrapRaces)[raceIndex].childrenFieldUpdates =
    {
        { "race_bin_05/5_5_2_speedtrap/wrongway", "10" },
        { "race_bin_05/5_5_2_speedtrap/shortcut1", "11" },
        { "race_bin_05/5_5_2_speedtrap/shortcut2", "12" },
        { "race_bin_05/5_5_2_speedtrap/shortcut3", "13" }
    };

    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Webster race 6
    tollboothRaces->emplace_back();
    raceIndex = refreshRaceIndex(*tollboothRaces);

    (*tollboothRaces)[raceIndex].raceNode = "race_bin_05/5_4_1_tollbooth";
    (*tollboothRaces)[raceIndex].gameplayvault = "5_4_1_tollbooth";
    (*tollboothRaces)[raceIndex].originalRaceBin = "race_bin_05";

    (*tollboothRaces)[raceIndex].totalDistance = 13069.4;
    (*tollboothRaces)[raceIndex].startLineType = "tollbooth";

    (*tollboothRaces)[raceIndex].engageTriggerName = "/engage/5_4_1_engage";

    (*tollboothRaces)[raceIndex].hasCopsInRaceField = false;

    //Webster race 7
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_05/5_5_3_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "5_5_3_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_05";

    (*speedtrapRaces)[raceIndex].totalDistance = 7280.741;

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/5_5_3_engage";

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(5);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_05/5_5_3_speedtrap/speedtrap1", "race_bin_05/5_5_3_speedtrap/speedtrap2",
      "race_bin_05/5_5_3_speedtrap/speedtrap3", "race_bin_05/5_5_3_speedtrap/speedtrap4",
      "race_bin_05/5_5_3_speedtrap/speedtrap5" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates.reserve(11);
    (*speedtrapRaces)[raceIndex].childrenFieldUpdates =
    {
        { "race_bin_05/5_5_3_speedtrap/wrongway", "9" },
        { "race_bin_05/5_5_3_speedtrap/finishline_reverse", "10" },
        { "race_bin_05/5_5_3_speedtrap/startgrid_reverse", "11" },
        { "race_bin_05/5_5_3_speedtrap/shortcut1", "12" },
        { "race_bin_05/5_5_3_speedtrap/shortcut2", "13" },
        { "race_bin_05/5_5_3_speedtrap/shortcut3", "14" },
        { "race_bin_05/5_5_3_speedtrap/shortcut4", "15" },
        { "race_bin_05/5_5_3_speedtrap/shortcut5", "16" },
        { "race_bin_05/5_5_3_speedtrap/shortcut6", "17" },
        { "race_bin_05/5_5_3_speedtrap/shortcut7", "18" },
        { "race_bin_05/5_5_3_speedtrap/shortcut8", "19" }
    };

    (*speedtrapRaces)[raceIndex].hasCopsInRaceField = false;

    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Webster race 8
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_05/5_2_3_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "5_2_3_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_05";

    (*sprintRaces)[raceIndex].totalDistance = 8034.737;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 23;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/5_2_3_engage";

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(4);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "2476.5", "1114.5", "102.5", "20" },
        RadiusTrigger { "3283.5", "-211", "15.5", "30" },
        RadiusTrigger { "4207.5", "79.5", "13.5", "20" },
        RadiusTrigger { "3454.844", "1244.703", "80.45313", "20" }
    };

    (*sprintRaces)[raceIndex].hasCopsInRaceField = false;

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Webster race 9
    tollboothRaces->emplace_back();
    raceIndex = refreshRaceIndex(*tollboothRaces);

    (*tollboothRaces)[raceIndex].raceNode = "race_bin_05/6_4_1_r_tollbooth";
    (*tollboothRaces)[raceIndex].gameplayvault = "6_4_1_r_tollbooth";
    (*tollboothRaces)[raceIndex].originalRaceBin = "race_bin_05";

    (*tollboothRaces)[raceIndex].totalDistance = 12963.74;
    (*tollboothRaces)[raceIndex].startLineType = "tollbooth";

    (*tollboothRaces)[raceIndex].engageTriggerName = "/engage/6_4_1_r_engage";

    //Webster race 10
    tollboothRaces->emplace_back();
    raceIndex = refreshRaceIndex(*tollboothRaces);

    (*tollboothRaces)[raceIndex].raceNode = "race_bin_05/7_4_2_r_tollbooth";
    (*tollboothRaces)[raceIndex].gameplayvault = "7_4_2_r_tollbooth";
    (*tollboothRaces)[raceIndex].originalRaceBin = "race_bin_05";

    (*tollboothRaces)[raceIndex].totalDistance = 10236.27;
    (*tollboothRaces)[raceIndex].startLineType = "tollbooth";

    (*tollboothRaces)[raceIndex].engageTriggerName = "/engage/7_4_2_r_engage";

    (*tollboothRaces)[raceIndex].hasTrafficLevelField = false;

    //Webster boss race 1
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_05/5_2_2_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "5_2_2_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_05";

    (*sprintRaces)[raceIndex].totalDistance = 7891.42;
    (*sprintRaces)[raceIndex].startLineType = "narrow";
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 20;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/5_2_2_engage";
    (*sprintRaces)[raceIndex].engageTriggerHasInitiallyUnlockedField = true;

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(5);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "4338.974", "160.613", "19.49707", "15" },
        RadiusTrigger { "3283.5", "-211", "15.5", "30" },
        RadiusTrigger { "2726.5", "704.5", "55.5", "15" },
        RadiusTrigger { "2082", "1718.5", "162.5", "15" },
        RadiusTrigger { "1509.5", "2534.5", "155", "15" }
    };

    (*sprintRaces)[raceIndex].hasBossRaceField = true;
    (*sprintRaces)[raceIndex].hasPostRaceActivityField = true;
    (*sprintRaces)[raceIndex].hasRivalBestTimeField = true;

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Webster boss race 2
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_05/5_5_4_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "5_5_4_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_05";

    (*speedtrapRaces)[raceIndex].totalDistance = 14204.14;

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_speedtrap_5_5_4";
    (*speedtrapRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*speedtrapRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1032.555", "2133.215", "152.5");

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(7);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_05/5_5_4_speedtrap/speedtrap1", "race_bin_05/5_5_4_speedtrap/speedtrap2",
      "race_bin_05/5_5_4_speedtrap/speedtrap3", "race_bin_05/5_5_4_speedtrap/speedtrap4",
      "race_bin_05/5_5_4_speedtrap/speedtrap5", "race_bin_05/5_5_4_speedtrap/speedtrap6",
      "race_bin_05/5_5_4_speedtrap/speedtrap7" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates.reserve(12);
    (*speedtrapRaces)[raceIndex].childrenFieldUpdates =
    {
        { "race_bin_05/5_5_4_speedtrap/wrongway", "12" },
        { "race_bin_05/5_5_4_speedtrap/shortcut1", "13" },
        { "race_bin_05/5_5_4_speedtrap/shortcut2", "14" },
        { "race_bin_05/5_5_4_speedtrap/shortcut3", "15" },
        { "race_bin_05/5_5_4_speedtrap/shortcut4", "16" },
        { "race_bin_05/5_5_4_speedtrap/shortcut5", "17" },
        { "race_bin_05/5_5_4_speedtrap/shortcut6", "18" },
        { "race_bin_05/5_5_4_speedtrap/shortcut7", "19" },
        { "race_bin_05/5_5_4_speedtrap/shortcut8", "20" },
        { "race_bin_05/5_5_4_speedtrap/shortcut9", "21" },
        { "race_bin_05/5_5_4_speedtrap/shortcut10", "22" },
        { "race_bin_05/5_5_4_speedtrap/shortcut11", "23" }
    };

    (*speedtrapRaces)[raceIndex].hasBossRaceField = true;
    (*speedtrapRaces)[raceIndex].hasPostRaceActivityField = true;
    (*speedtrapRaces)[raceIndex].hasRivalBestTimeField = true;

    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Webster boss race 3
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_05/5_2_1_r_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "5_2_1_r_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_05";

    (*sprintRaces)[raceIndex].totalDistance = 14207.7;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 23;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/engagetrigger_sprint_5_2_1_r";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1032.555", "2133.215", "153");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(7);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "610.6276", "2727.391", "170.9599", "15" },
        RadiusTrigger { "891.5", "3174.5", "204.5", "25" },
        RadiusTrigger { "1564.5", "2242", "145.5", "20" },
        RadiusTrigger { "2078.5", "3283", "154", "15" },
        RadiusTrigger { "629", "4150.5", "198.5", "25" },
        RadiusTrigger { "-356.5", "2973.5", "190", "30" },
        RadiusTrigger { "994.8439", "1723.021", "153.8359", "25" }
    };

    (*sprintRaces)[raceIndex].hasBossRaceField = true;
    (*sprintRaces)[raceIndex].hasIsMarkerRaceField = true;
    (*sprintRaces)[raceIndex].hasRewardsForWinnerField = true;
    (*sprintRaces)[raceIndex].hasRivalBestTimeField = true;

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //JV race 1
    tollboothRaces->emplace_back();
    raceIndex = refreshRaceIndex(*tollboothRaces);

    (*tollboothRaces)[raceIndex].raceNode = "race_bin_04/4_4_1_tollbooth";
    (*tollboothRaces)[raceIndex].gameplayvault = "4_4_1_tollbooth";
    (*tollboothRaces)[raceIndex].originalRaceBin = "race_bin_04";

    (*tollboothRaces)[raceIndex].totalDistance = 12543.73;
    (*tollboothRaces)[raceIndex].startLineType = "tollbooth";

    (*tollboothRaces)[raceIndex].engageTriggerName = "/engage/4_4_1_engage";

    (*tollboothRaces)[raceIndex].hasCopsInRaceField = false;
    (*tollboothRaces)[raceIndex].hasEventIconTypeField = true;

    //JV race 2
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_04/4_1_1_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "4_1_1_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_04";

    (*circuitRaces)[raceIndex].totalDistance = 8550.73;
    (*circuitRaces)[raceIndex].lapsInVanilla = 4;
    (*circuitRaces)[raceIndex].startLineType = "narrow";

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/4_1_1_engage";

    (*circuitRaces)[raceIndex].hasIntroMovieField = true;
    (*circuitRaces)[raceIndex].hasEventIconTypeField = true;

    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //JV race 3
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_04/4_3_1_lapknockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "4_3_1_lapknockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_04";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 15231.44;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/4_3_1_engage";

    (*lapKnockoutRaces)[raceIndex].hasIntroMovieField = true;
    (*lapKnockoutRaces)[raceIndex].hasKnockoutsPerLapField = true;

    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //JV race 4
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_04/4_5_3_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "4_5_3_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_04";

    (*speedtrapRaces)[raceIndex].totalDistance = 12899.23;

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/4_5_3_engage";

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(6);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_04/4_5_3_speedtrap/speedtrap1", "race_bin_04/4_5_3_speedtrap/speedtrap2",
      "race_bin_04/4_5_3_speedtrap/speedtrap3", "race_bin_04/4_5_3_speedtrap/speedtrap4",
      "race_bin_04/4_5_3_speedtrap/speedtrap5", "race_bin_04/4_5_3_speedtrap/speedtrap6" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates.reserve(21);
    (*speedtrapRaces)[raceIndex].childrenFieldUpdates =
    {
        { "race_bin_04/4_5_3_speedtrap/4_5_3_ai_cpt8", "9" },
        { "race_bin_04/4_5_3_speedtrap/4_5_3_ai_cpt9", "10" },
        { "race_bin_04/4_5_3_speedtrap/4_5_3_ai_cpt10", "11" },
        { "race_bin_04/4_5_3_speedtrap/wrongway", "12" },
        { "race_bin_04/4_5_3_speedtrap/startgrid_reverse", "13" },
        { "race_bin_04/4_5_3_speedtrap/finishline_reverse", "14" },
        { "race_bin_04/4_5_3_speedtrap/shortcut1", "15" },
        { "race_bin_04/4_5_3_speedtrap/shortcut2", "16" },
        { "race_bin_04/4_5_3_speedtrap/shortcut3", "17" },
        { "race_bin_04/4_5_3_speedtrap/shortcut4", "18" },
        { "race_bin_04/4_5_3_speedtrap/shortcut5", "19" },
        { "race_bin_04/4_5_3_speedtrap/shortcut6", "20" },
        { "race_bin_04/4_5_3_speedtrap/shortcut7", "21" },
        { "race_bin_04/4_5_3_speedtrap/shortcut8", "22" },
        { "race_bin_04/4_5_3_speedtrap/shortcut9", "23" },
        { "race_bin_04/4_5_3_speedtrap/shortcut10", "24" },
        { "race_bin_04/4_5_3_speedtrap/shortcut11", "25" },
        { "race_bin_04/4_5_3_speedtrap/shortcut12", "26" },
        { "race_bin_04/4_5_3_speedtrap/shortcut13", "27" },
        { "race_bin_04/4_5_3_speedtrap/shortcut14", "28" },
        { "race_bin_04/4_5_3_speedtrap/shortcut15", "29" }
    };

    (*speedtrapRaces)[raceIndex].hasCopsInRaceField = false;
    (*speedtrapRaces)[raceIndex].hasEventIconTypeField = true;

    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //JV race 5
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_04/4_5_1_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "4_5_1_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_04";

    (*speedtrapRaces)[raceIndex].totalDistance = 8075.38;
    (*speedtrapRaces)[raceIndex].startLineType = "narrow";

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/4_5_1_engage";

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(7);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_04/4_5_1_speedtrap/speedtrap1", "race_bin_04/4_5_1_speedtrap/speedtrap2",
      "race_bin_04/4_5_1_speedtrap/speedtrap3", "race_bin_04/4_5_1_speedtrap/speedtrap4",
      "race_bin_04/4_5_1_speedtrap/speedtrap5", "race_bin_04/4_5_1_speedtrap/speedtrap6",
      "race_bin_04/4_5_1_speedtrap/speedtrap7" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates.reserve(8);
    (*speedtrapRaces)[raceIndex].childrenFieldUpdates =
    {
        { "race_bin_04/4_5_1_speedtrap/wrongway", "9" },
        { "race_bin_04/4_5_1_speedtrap/finishline_reverse", "10" },
        { "race_bin_04/4_5_1_speedtrap/startgrid_reverse", "11" },
        { "race_bin_04/4_5_1_speedtrap/shortcut1", "12" },
        { "race_bin_04/4_5_1_speedtrap/shortcut2", "13" },
        { "race_bin_04/4_5_1_speedtrap/shortcut3", "14" },
        { "race_bin_04/4_5_1_speedtrap/shortcut4", "15" },
        { "race_bin_04/4_5_1_speedtrap/shortcut5", "16" }
    };

    (*speedtrapRaces)[raceIndex].hasEventIconTypeField = true;

    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //JV race 6
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_04/5_5_2_r_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "5_5_2_r_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_04";

    (*speedtrapRaces)[raceIndex].totalDistance = 8662.391;

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/5_5_2_r_engage";

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(6);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_04/5_5_2_r_speedtrap/speedtrap1", "race_bin_04/5_5_2_r_speedtrap/speedtrap2",
      "race_bin_04/5_5_2_r_speedtrap/speedtrap3", "race_bin_04/5_5_2_r_speedtrap/speedtrap4",
      "race_bin_04/5_5_2_r_speedtrap/speedtrap5", "race_bin_04/5_5_2_r_speedtrap/speedtrap6" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates.reserve(2);
    (*speedtrapRaces)[raceIndex].childrenFieldUpdates =
    {
        { "race_bin_04/5_5_2_r_speedtrap/wrongway", "10" },
        { "race_bin_04/5_5_2_r_speedtrap/shortcut1", "11" }
    };

    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //JV race 7
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_04/7_2_2_r_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "7_2_2_r_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_04";

    (*sprintRaces)[raceIndex].totalDistance = 9808.976;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 23;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/7_2_2_r_engage";

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(9);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "976.1771", "413.8442", "108.8809", "20" },
        RadiusTrigger { "1584", "184", "94", "25" },
        RadiusTrigger { "1088.5", "161", "99.5", "20" },
        RadiusTrigger { "1721.5", "-152", "96.5", "25" },
        RadiusTrigger { "2576.919", "-338.6137", "115.9219", "30" },
        RadiusTrigger { "2709.72", "598.3825", "52.58887", "25" },
        RadiusTrigger { "2500.232", "1108.753", "98.46289", "20" },
        RadiusTrigger { "2520.698", "1763.646", "112.0498", "30" },
        RadiusTrigger { "2145.47", "2215.343", "160.5527", "30" }
    };

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //JV race 8
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_04/6_3_1_r_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "6_3_1_r_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_04";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 11631.94;
    (*lapKnockoutRaces)[raceIndex].startLineType = "narrow";

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/6_3_1_r_engage";

    (*lapKnockoutRaces)[raceIndex].hasNumLapsField = false;
    (*lapKnockoutRaces)[raceIndex].hasIntroNISField = false;

    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //JV race 9
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_04/9_1_1_r_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "9_1_1_r_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_04";

    (*circuitRaces)[raceIndex].totalDistance = 11371.47;
    (*circuitRaces)[raceIndex].lapsInVanilla = 3;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/9_1_1_r_engage";

    (*circuitRaces)[raceIndex].hasNumLapsField = false;

    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //JV race 10
    tollboothRaces->emplace_back();
    raceIndex = refreshRaceIndex(*tollboothRaces);

    (*tollboothRaces)[raceIndex].raceNode = "race_bin_04/5_4_1_r_tollbooth";
    (*tollboothRaces)[raceIndex].gameplayvault = "5_4_1_r_tollbooth";
    (*tollboothRaces)[raceIndex].originalRaceBin = "race_bin_04";

    (*tollboothRaces)[raceIndex].totalDistance = 12994.22;
    (*tollboothRaces)[raceIndex].startLineType = "tollbooth";

    (*tollboothRaces)[raceIndex].engageTriggerName = "/engage/5_4_1_r_engage";

    //JV race 11
    tollboothRaces->emplace_back();
    raceIndex = refreshRaceIndex(*tollboothRaces);

    (*tollboothRaces)[raceIndex].raceNode = "race_bin_04/7_4_3_r_tollbooth";
    (*tollboothRaces)[raceIndex].gameplayvault = "7_4_3_r_tollbooth";
    (*tollboothRaces)[raceIndex].originalRaceBin = "race_bin_04";

    (*tollboothRaces)[raceIndex].totalDistance = 11894.51;
    (*tollboothRaces)[raceIndex].startLineType = "tollbooth";

    (*tollboothRaces)[raceIndex].engageTriggerName = "/engage/7_4_3_r_engage";

    //JV boss race 1
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_04/4_5_2_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "4_5_2_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_04";

    (*speedtrapRaces)[raceIndex].totalDistance = 7028.006;

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/4_5_2_engage";
    (*speedtrapRaces)[raceIndex].engageTriggerHasInitiallyUnlockedField = true;

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(6);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_04/4_5_2_speedtrap/speedtrap6", "race_bin_04/4_5_2_speedtrap/speedtrap1",
      "race_bin_04/4_5_2_speedtrap/speedtrap2", "race_bin_04/4_5_2_speedtrap/speedtrap3",
      "race_bin_04/4_5_2_speedtrap/speedtrap4", "race_bin_04/4_5_2_speedtrap/speedtrap5" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates.reserve(7);
    (*speedtrapRaces)[raceIndex].childrenFieldUpdates =
    {
        { "race_bin_04/4_5_2_speedtrap/wrongway", "11" },
        { "race_bin_04/4_5_2_speedtrap/shortcut1", "12" },
        { "race_bin_04/4_5_2_speedtrap/shortcut2", "13" },
        { "race_bin_04/4_5_2_speedtrap/shortcut3", "14" },
        { "race_bin_04/4_5_2_speedtrap/shortcut4", "15" },
        { "race_bin_04/4_5_2_speedtrap/shortcut5", "16" },
        { "race_bin_04/4_5_2_speedtrap/shortcut6", "17" }
    };

    (*speedtrapRaces)[raceIndex].hasBossRaceField = true;
    (*speedtrapRaces)[raceIndex].hasPostRaceActivityField = true;
    (*speedtrapRaces)[raceIndex].hasRivalBestTimeField = true;
    (*speedtrapRaces)[raceIndex].hasEventIconTypeField = true;

    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //JV boss race 2
    dragRaces->emplace_back();
    raceIndex = refreshRaceIndex(*dragRaces);

    (*dragRaces)[raceIndex].raceNode = "race_bin_04/4_7_4_drag";
    (*dragRaces)[raceIndex].gameplayvault = "4_7_4_drag";
    (*dragRaces)[raceIndex].originalRaceBin = "race_bin_04";

    (*dragRaces)[raceIndex].totalDistance = 2138.962;

    (*dragRaces)[raceIndex].engageTriggerName = "/engage/4_7_4_engage";
    (*dragRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*dragRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("2133.399", "1456.398", "154.3223");

    (*dragRaces)[raceIndex].hasBossRaceField = true;
    (*dragRaces)[raceIndex].hasIsMarkerRaceField = true;
    (*dragRaces)[raceIndex].hasPostRaceActivityField = true;
    (*dragRaces)[raceIndex].hasRivalBestTimeField = true;
    (*dragRaces)[raceIndex].hasTrafficLevelField = false;

    //JV boss race 3
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_04/4_5_1_r_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "4_5_1_r_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_04";

    (*speedtrapRaces)[raceIndex].totalDistance = 8093.629;

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/4_5_1_r_engage";
    (*speedtrapRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*speedtrapRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("996.0981", "1721.142", "153.9122");

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(4);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_04/4_5_1_r_speedtrap/speedtrap1", "race_bin_04/4_5_1_r_speedtrap/speedtrap2",
      "race_bin_04/4_5_1_r_speedtrap/speedtrap3", "race_bin_04/4_5_1_r_speedtrap/speedtrap4" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates.reserve(6);
    (*speedtrapRaces)[raceIndex].childrenFieldUpdates =
    {
        { "race_bin_04/4_5_1_r_speedtrap/wrongway", "9" },
        { "race_bin_04/4_5_1_r_speedtrap/shortcut1", "10" },
        { "race_bin_04/4_5_1_r_speedtrap/shortcut2", "11" },
        { "race_bin_04/4_5_1_r_speedtrap/shortcut3", "12" },
        { "race_bin_04/4_5_1_r_speedtrap/shortcut4", "13" },
        { "race_bin_04/4_5_1_r_speedtrap/shortcut5", "14" }
    };

    (*speedtrapRaces)[raceIndex].hasBossRaceField = true;
    (*speedtrapRaces)[raceIndex].hasIsMarkerRaceField = true;
    (*speedtrapRaces)[raceIndex].hasRewardsForWinnerField = true;
    (*speedtrapRaces)[raceIndex].hasRivalBestTimeField = true;
    (*speedtrapRaces)[raceIndex].hasIntroNISField = false;

    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Ronnie race 1
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_03/3_2_1_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "3_2_1_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_03";

    (*sprintRaces)[raceIndex].totalDistance = 11219.88;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 10;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/3_2_1_engage";

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(6);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "3163", "3129", "40", "15" },
        RadiusTrigger { "2990", "2480", "43.5", "25" },
        RadiusTrigger { "2527", "1754.5", "114", "30" },
        RadiusTrigger { "2132", "796.5", "131", "15" },
        RadiusTrigger { "1032.5", "126.5", "101.5", "20" },
        RadiusTrigger { "2448", "261.5", "91", "20" }
    };

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Ronnie race 2
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_03/3_3_1_lap_ko";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "3_3_1_lap_ko";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_03";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 28295.89;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/3_3_1_engage";

    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Ronnie race 3
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_03/3_1_1_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "3_1_1_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_03";

    (*circuitRaces)[raceIndex].totalDistance = 13665.87;
    (*circuitRaces)[raceIndex].lapsInVanilla = 4;
    (*circuitRaces)[raceIndex].startLineType = "narrow";

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/3_1_1_engage";

    (*circuitRaces)[raceIndex].hasIntroNISField = false;

    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Ronnie race 4
    tollboothRaces->emplace_back();
    raceIndex = refreshRaceIndex(*tollboothRaces);

    (*tollboothRaces)[raceIndex].raceNode = "race_bin_03/3_4_1_tollbooth";
    (*tollboothRaces)[raceIndex].gameplayvault = "3_4_1_tollbooth";
    (*tollboothRaces)[raceIndex].originalRaceBin = "race_bin_03";

    (*tollboothRaces)[raceIndex].totalDistance = 15530.1;
    (*tollboothRaces)[raceIndex].startLineType = "tollbooth";

    (*tollboothRaces)[raceIndex].engageTriggerName = "/engage/3_4_1_engage";

    (*tollboothRaces)[raceIndex].hasCopsInRaceField = false;

    //Ronnie race 5
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_03/7_2_1_r_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "7_2_1_r_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_03";

    (*sprintRaces)[raceIndex].totalDistance = 8401.769;
    (*sprintRaces)[raceIndex].startLineType = "narrow";
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 14;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/7_2_1_r_engage";

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(5);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "2128.5", "307", "99", "20" },
        RadiusTrigger { "2005", "1057", "140.5", "20" },
        RadiusTrigger { "1881", "1920.5", "150.5", "20" },
        RadiusTrigger { "2355.5", "3082", "182.5", "35" },
        RadiusTrigger { "2623.5", "4393.5", "275", "35" }
    };

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Ronnie race 6
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_03/4_3_1_r_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "4_3_1_r_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_03";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 15369.18;
    (*lapKnockoutRaces)[raceIndex].startLineType = "narrow";

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/4_3_1_r_engage";

    (*lapKnockoutRaces)[raceIndex].hasNumLapsField = false;

    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Ronnie race 7
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_03/3_5_1_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "3_5_1_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_03";

    (*speedtrapRaces)[raceIndex].totalDistance = 14347.09;

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/3_5_1_engage";

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(10);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_03/3_5_1_speedtrap/speedtrap1", "race_bin_03/3_5_1_speedtrap/speedtrap2",
      "race_bin_03/3_5_1_speedtrap/speedtrap3", "race_bin_03/3_5_1_speedtrap/speedtrap4",
      "race_bin_03/3_5_1_speedtrap/speedtrap5", "race_bin_03/3_5_1_speedtrap/speedtrap6",
      "race_bin_03/3_5_1_speedtrap/speedtrap7", "race_bin_03/3_5_1_speedtrap/speedtrap8",
      "race_bin_03/3_5_1_speedtrap/speedtrap9", "race_bin_03/3_5_1_speedtrap/speedtrap10" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates.reserve(7);
    (*speedtrapRaces)[raceIndex].childrenFieldUpdates =
    {
        { "race_bin_03/3_5_1_speedtrap/wrongway", "12" },
        { "race_bin_03/3_5_1_speedtrap/finishline_reverse", "13" },
        { "race_bin_03/3_5_1_speedtrap/startgrid_reverse", "14" },
        { "race_bin_03/3_5_1_speedtrap/shortcut1", "15" },
        { "race_bin_03/3_5_1_speedtrap/shortcut2", "16" },
        { "race_bin_03/3_5_1_speedtrap/shortcut3", "17" },
        { "race_bin_03/3_5_1_speedtrap/shortcut4", "18" }
    };

    (*speedtrapRaces)[raceIndex].hasCopsInRaceField = false;

    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Ronnie race 8
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_03/3_5_2_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "3_5_2_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_03";

    (*speedtrapRaces)[raceIndex].totalDistance = 11199.09;

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/3_5_2_engage";

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(7);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_03/3_5_2_speedtrap/speedtrap1", "race_bin_03/3_5_2_speedtrap/speedtrap2",
      "race_bin_03/3_5_2_speedtrap/speedtrap3", "race_bin_03/3_5_2_speedtrap/speedtrap4",
      "race_bin_03/3_5_2_speedtrap/speedtrap5", "race_bin_03/3_5_2_speedtrap/speedtrap6",
      "race_bin_03/3_5_2_speedtrap/speedtrap7" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates.reserve(14);
    (*speedtrapRaces)[raceIndex].childrenFieldUpdates =
    {
        { "race_bin_03/3_5_2_speedtrap/wrongway", "9" },
        { "race_bin_03/3_5_2_speedtrap/finishline_reverse", "10" },
        { "race_bin_03/3_5_2_speedtrap/startgrid_reverse", "11" },
        { "race_bin_03/3_5_2_speedtrap/shortcut1", "12" },
        { "race_bin_03/3_5_2_speedtrap/shortcut2", "13" },
        { "race_bin_03/3_5_2_speedtrap/shortcut3", "14" },
        { "race_bin_03/3_5_2_speedtrap/shortcut4", "15" },
        { "race_bin_03/3_5_2_speedtrap/shortcut5", "16" },
        { "race_bin_03/3_5_2_speedtrap/shortcut6", "17" },
        { "race_bin_03/3_5_2_speedtrap/shortcut7", "18" },
        { "race_bin_03/3_5_2_speedtrap/shortcut8", "19" },
        { "race_bin_03/3_5_2_speedtrap/shortcut9", "20" },
        { "race_bin_03/3_5_2_speedtrap/shortcut10", "21" },
        { "race_bin_03/3_5_2_speedtrap/shortcut11", "22" }
    };

    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Ronnie race 9
    tollboothRaces->emplace_back();
    raceIndex = refreshRaceIndex(*tollboothRaces);

    (*tollboothRaces)[raceIndex].raceNode = "race_bin_03/3_4_1_r_tollbooth";
    (*tollboothRaces)[raceIndex].gameplayvault = "3_4_1_r_tollbooth";
    (*tollboothRaces)[raceIndex].originalRaceBin = "race_bin_03";

    (*tollboothRaces)[raceIndex].totalDistance = 15853.21;
    (*tollboothRaces)[raceIndex].startLineType = "tollbooth";

    (*tollboothRaces)[raceIndex].engageTriggerName = "/engage/3_4_1_r_engage";

    //Ronnie race 10
    tollboothRaces->emplace_back();
    raceIndex = refreshRaceIndex(*tollboothRaces);

    (*tollboothRaces)[raceIndex].raceNode = "race_bin_03/4_4_1_r_tollbooth";
    (*tollboothRaces)[raceIndex].gameplayvault = "4_4_1_r_tollbooth";
    (*tollboothRaces)[raceIndex].originalRaceBin = "race_bin_03";

    (*tollboothRaces)[raceIndex].totalDistance = 11807.54;
    (*tollboothRaces)[raceIndex].startLineType = "tollbooth";

    (*tollboothRaces)[raceIndex].engageTriggerName = "/engage/4_4_1_r_engage";

    //Ronnie race 11
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_03/4_2_1_r_sprint_race";
    (*sprintRaces)[raceIndex].gameplayvault = "4_2_1_r_sprint_race";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_03";

    (*sprintRaces)[raceIndex].totalDistance = 12113.17;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 21;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/4_2_1_r_engage";

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(6);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "3182", "1812.5", "102", "20" },
        RadiusTrigger { "4538.5", "1123", "15", "20" },
        RadiusTrigger { "4248.5", "1034.5", "63.5", "20" },
        RadiusTrigger { "4327", "54", "10", "20" },
        RadiusTrigger { "3054", "-24.5", "18", "30" },
        RadiusTrigger { "2559", "-6", "112.5", "30" }
    };

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Ronnie race 12
    dragRaces->emplace_back();
    raceIndex = refreshRaceIndex(*dragRaces);

    (*dragRaces)[raceIndex].raceNode = "race_bin_03/3_7_3_drag";
    (*dragRaces)[raceIndex].gameplayvault = "3_7_3_drag";
    (*dragRaces)[raceIndex].originalRaceBin = "race_bin_03";

    (*dragRaces)[raceIndex].totalDistance = 2137.942;

    (*dragRaces)[raceIndex].engageTriggerName = "/engage/3_7_3_engage";

    (*dragRaces)[raceIndex].hasTrafficLevelField = false;

    //Ronnie boss race 1
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_03/3_1_2_r_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "3_1_2_r_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_03";

    (*circuitRaces)[raceIndex].totalDistance = 12610.69;
    (*circuitRaces)[raceIndex].lapsInVanilla = 3;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/3_1_2_r_engage";
    (*circuitRaces)[raceIndex].engageTriggerHasInitiallyUnlockedField = true;

    (*circuitRaces)[raceIndex].hasBossRaceField = true;
    (*circuitRaces)[raceIndex].hasPostRaceActivityField = true;
    (*circuitRaces)[raceIndex].hasRivalBestTimeField = true;
    (*circuitRaces)[raceIndex].hasNumLapsField = false;

    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Ronnie boss race 2
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_03/3_2_2_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "3_2_2_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_03";

    (*sprintRaces)[raceIndex].totalDistance = 8761.866;
    (*sprintRaces)[raceIndex].startLineType = "narrow";
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 14;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/3_2_2_engage";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("4322.66", "338.3622", "34.65527");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(5);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "4045.412", "921.2703", "58.39453", "15" },
        RadiusTrigger { "4643", "1122.5", "11.5", "20" },
        RadiusTrigger { "3723", "1300", "72", "20" },
        RadiusTrigger { "2293.575", "1300.333", "146.0538", "20" },
        RadiusTrigger { "2128.5", "307", "99", "20" }
    };

    (*sprintRaces)[raceIndex].hasBossRaceField = true;
    (*sprintRaces)[raceIndex].hasPostRaceActivityField = true;
    (*sprintRaces)[raceIndex].hasRivalBestTimeField = true;

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Ronnie boss race 3
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_03/3_1_2_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "3_1_2_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_03";

    (*circuitRaces)[raceIndex].totalDistance = 12702;
    (*circuitRaces)[raceIndex].lapsInVanilla = 2;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/3_1_2_engage";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("3090.032", "267.1677", "12.18066");

    (*circuitRaces)[raceIndex].hasBossRaceField = true;
    (*circuitRaces)[raceIndex].hasIsMarkerRaceField = true;
    (*circuitRaces)[raceIndex].hasRewardsForWinnerField = true;
    (*circuitRaces)[raceIndex].hasRivalBestTimeField = true;
    (*circuitRaces)[raceIndex].hasEventIconTypeField = true;

    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Bull race 1
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_02/2_1_1_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "2_1_1_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_02";

    (*circuitRaces)[raceIndex].totalDistance = 22309.38;
    (*circuitRaces)[raceIndex].lapsInVanilla = 2;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/2_1_1_circuit";

    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Bull race 2
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_02/2_1_1_r_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "2_1_1_r_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_02";

    (*circuitRaces)[raceIndex].totalDistance = 22289.91;
    (*circuitRaces)[raceIndex].lapsInVanilla = 3;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/2_1_1_r_engage";

    (*circuitRaces)[raceIndex].hasNumLapsField = false;

    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Bull race 3
    tollboothRaces->emplace_back();
    raceIndex = refreshRaceIndex(*tollboothRaces);

    (*tollboothRaces)[raceIndex].raceNode = "race_bin_02/2_4_1_tollbooth";
    (*tollboothRaces)[raceIndex].gameplayvault = "2_4_1_tollbooth";
    (*tollboothRaces)[raceIndex].originalRaceBin = "race_bin_02";

    (*tollboothRaces)[raceIndex].totalDistance = 14979.71;
    (*tollboothRaces)[raceIndex].startLineType = "tollbooth";

    (*tollboothRaces)[raceIndex].engageTriggerName = "/engage/2_4_1_engage";

    //Bull race 4
    tollboothRaces->emplace_back();
    raceIndex = refreshRaceIndex(*tollboothRaces);

    (*tollboothRaces)[raceIndex].raceNode = "race_bin_02/2_4_2_tollbooth";
    (*tollboothRaces)[raceIndex].gameplayvault = "2_4_2_tollbooth";
    (*tollboothRaces)[raceIndex].originalRaceBin = "race_bin_02";

    (*tollboothRaces)[raceIndex].totalDistance = 19163.5;
    (*tollboothRaces)[raceIndex].startLineType = "tollbooth";

    (*tollboothRaces)[raceIndex].engageTriggerName = "/engage/2_4_2_engage";

    //Bull race 5
    tollboothRaces->emplace_back();
    raceIndex = refreshRaceIndex(*tollboothRaces);

    (*tollboothRaces)[raceIndex].raceNode = "race_bin_02/2_4_3_tollbooth";
    (*tollboothRaces)[raceIndex].gameplayvault = "2_4_3_tollbooth";
    (*tollboothRaces)[raceIndex].originalRaceBin = "race_bin_02";

    (*tollboothRaces)[raceIndex].totalDistance = 21228.82;
    (*tollboothRaces)[raceIndex].startLineType = "tollbooth";

    (*tollboothRaces)[raceIndex].engageTriggerName = "/engage/2_4_3_engage";

    (*tollboothRaces)[raceIndex].hasCopsInRaceField = false;

    //Bull race 6
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_02/2_5_1_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "2_5_1_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_02";

    (*speedtrapRaces)[raceIndex].totalDistance = 9208.651;

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/2_5_1_engage";

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(7);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_02/2_5_1_speedtrap/speedtrap1", "race_bin_02/2_5_1_speedtrap/speedtrap2",
      "race_bin_02/2_5_1_speedtrap/speedtrap3", "race_bin_02/2_5_1_speedtrap/speedtrap4",
      "race_bin_02/2_5_1_speedtrap/speedtrap5", "race_bin_02/2_5_1_speedtrap/speedtrap6",
      "race_bin_02/2_5_1_speedtrap/speedtrap7" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates.reserve(14);
    (*speedtrapRaces)[raceIndex].childrenFieldUpdates =
    {
        { "race_bin_02/2_5_1_speedtrap/wrongway", "11" },
        { "race_bin_02/2_5_1_speedtrap/startgrid_reverse", "12" },
        { "race_bin_02/2_5_1_speedtrap/finishline_reverse", "13" },
        { "race_bin_02/2_5_1_speedtrap/shortcut1", "14" },
        { "race_bin_02/2_5_1_speedtrap/shortcut2", "15" },
        { "race_bin_02/2_5_1_speedtrap/shortcut3", "16" },
        { "race_bin_02/2_5_1_speedtrap/shortcut4", "17" },
        { "race_bin_02/2_5_1_speedtrap/shortcut5", "18" },
        { "race_bin_02/2_5_1_speedtrap/shortcut6", "19" },
        { "race_bin_02/2_5_1_speedtrap/shortcut7", "20" },
        { "race_bin_02/2_5_1_speedtrap/shortcut8", "21" },
        { "race_bin_02/2_5_1_speedtrap/shortcut9", "22" },
        { "race_bin_02/2_5_1_speedtrap/shortcut10", "23" },
        { "race_bin_02/2_5_1_speedtrap/shortcut11", "24" }
    };

    (*speedtrapRaces)[raceIndex].hasCopsInRaceField = false;

    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Bull race 7
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_02/3_2_1_r_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "3_2_1_r_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_02";

    (*sprintRaces)[raceIndex].totalDistance = 11571.09;
    (*sprintRaces)[raceIndex].startLineType = "narrow";
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 20;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/3_2_1_r_engage";

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(7);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "2673.5", "469.5", "70", "20" },
        RadiusTrigger { "1529.5", "-96", "98", "20" },
        RadiusTrigger { "1801.94", "596.3895", "94.05957", "20" },
        RadiusTrigger { "2534.5", "1698", "122", "30" },
        RadiusTrigger { "3120.5", "2600", "41", "25" },
        RadiusTrigger { "2957.5", "2996", "59", "15" },
        RadiusTrigger { "3331", "3618", "40", "15" }
    };

    (*sprintRaces)[raceIndex].hasIntroNISField = false;
    (*sprintRaces)[raceIndex].hasCopsInRaceField = false;

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Bull race 8
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_02/3_3_1_r_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "3_3_1_r_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_02";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 28644.66;

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/3_3_1_r_engage";

    (*lapKnockoutRaces)[raceIndex].hasNumLapsField = false;

    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Bull race 9
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_02/3_3_2_r_knockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "3_3_2_r_knockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_02";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 16029.05;
    (*lapKnockoutRaces)[raceIndex].startLineType = "narrow";

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/3_3_2_r_engage";

    (*lapKnockoutRaces)[raceIndex].hasNumLapsField = false;

    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Bull race 10
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_02/5_1_1_r_Circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "5_1_1_r_Circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_02";

    (*circuitRaces)[raceIndex].totalDistance = 13623.32;
    (*circuitRaces)[raceIndex].lapsInVanilla = 3;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/5_1_1_r_engage";

    (*circuitRaces)[raceIndex].hasNumLapsField = false;

    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Bull race 11
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_02/5_5_1_r_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "5_5_1_r_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_02";

    (*speedtrapRaces)[raceIndex].totalDistance = 11022.94;

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/5_5_1_r_engage";

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(6);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_02/5_5_1_r_speedtrap/speedtrap1", "race_bin_02/5_5_1_r_speedtrap/speedtrap2",
      "race_bin_02/5_5_1_r_speedtrap/speedtrap3", "race_bin_02/5_5_1_r_speedtrap/speedtrap4",
      "race_bin_02/5_5_1_r_speedtrap/speedtrap5", "race_bin_02/5_5_1_r_speedtrap/speedtrap6" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates.reserve(7);
    (*speedtrapRaces)[raceIndex].childrenFieldUpdates =
    {
        { "race_bin_02/5_5_1_r_speedtrap/wrongway", "10" },
        { "race_bin_02/5_5_1_r_speedtrap/shortcut1", "11" },
        { "race_bin_02/5_5_1_r_speedtrap/shortcut2", "12" },
        { "race_bin_02/5_5_1_r_speedtrap/shortcut3", "13" },
        { "race_bin_02/5_5_1_r_speedtrap/shortcut4", "14" },
        { "race_bin_02/5_5_1_r_speedtrap/shortcut5", "15" },
        { "race_bin_02/5_5_1_r_speedtrap/shortcut6", "16" }
    };

    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Bull race 12
    dragRaces->emplace_back();
    raceIndex = refreshRaceIndex(*dragRaces);

    (*dragRaces)[raceIndex].raceNode = "race_bin_02/2_7_1_drag";
    (*dragRaces)[raceIndex].gameplayvault = "2_7_1_drag";
    (*dragRaces)[raceIndex].originalRaceBin = "race_bin_02";

    (*dragRaces)[raceIndex].totalDistance = 2111.561;

    (*dragRaces)[raceIndex].engageTriggerName = "/engage/2_7_1_engage";

    (*dragRaces)[raceIndex].hasTrafficLevelField = false;

    //Bull boss race 1
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_02/3_1_1_r_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "3_1_1_r_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_02";

    (*circuitRaces)[raceIndex].totalDistance = 13595.77;
    (*circuitRaces)[raceIndex].lapsInVanilla = 3;
    (*circuitRaces)[raceIndex].startLineType = "narrow";

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/3_1_1_r_engage";
    (*circuitRaces)[raceIndex].engageTriggerHasInitiallyUnlockedField = true;

    (*circuitRaces)[raceIndex].hasBossRaceField = true;
    (*circuitRaces)[raceIndex].hasPostRaceActivityField = true;
    (*circuitRaces)[raceIndex].hasRivalBestTimeField = true;
    (*circuitRaces)[raceIndex].hasNumLapsField = false;

    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Bull boss race 2
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_02/9_2_2_r_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "9_2_2_r_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_02";

    (*sprintRaces)[raceIndex].totalDistance = 9508.916;
    (*sprintRaces)[raceIndex].startLineType = "narrow";
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 21;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/9_2_2_r_engage";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("2296.511", "1446.748", "147.9756");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(7);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "2805", "2313", "93", "25" },
        RadiusTrigger { "2914.5", "3027", "63.5", "15" },
        RadiusTrigger { "3630.5", "2938.5", "11", "15" },
        RadiusTrigger { "3925", "2220", "39", "25" },
        RadiusTrigger { "4312", "1333", "31.5", "25" },
        RadiusTrigger { "3450", "1238", "80", "20" },
        RadiusTrigger { "4118.835", "724.795", "54.61914", "15" }
    };

    (*sprintRaces)[raceIndex].hasBossRaceField = true;
    (*sprintRaces)[raceIndex].hasPostRaceActivityField = true;
    (*sprintRaces)[raceIndex].hasRivalBestTimeField = true;
    (*sprintRaces)[raceIndex].hasIntroNISField = false;

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Bull boss race 3
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_02/2_2_1_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "2_2_1_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_02";

    (*sprintRaces)[raceIndex].totalDistance = 13470.49;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 22;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/2_2_1_engage";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("2420.7", "444.816", "94.24805");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(10);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "1636", "999.5", "122.5", "25" },
        RadiusTrigger { "1749.5", "2050.5", "147", "30" },
        RadiusTrigger { "921.5", "2191", "155", "20" },
        RadiusTrigger { "220", "2836.5", "180.5", "15" },
        RadiusTrigger { "247.5", "3621", "188.5", "15" },
        RadiusTrigger { "1134.5", "4423.5", "219", "30" },
        RadiusTrigger { "2255.5", "4522", "248.5", "35" },
        RadiusTrigger { "2553.5", "3815.5", "233", "35" },
        RadiusTrigger { "2438", "2528.5", "122.5", "20" },
        RadiusTrigger { "3001.855", "1924.179", "107.1719", "25" }
    };

    (*sprintRaces)[raceIndex].hasBossRaceField = true;
    (*sprintRaces)[raceIndex].hasIsMarkerRaceField = true;
    (*sprintRaces)[raceIndex].hasRewardsForWinnerField = true;
    (*sprintRaces)[raceIndex].hasRivalBestTimeField = true;

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Razor race 1
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_01/1_1_1_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "1_1_1_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_01";

    (*circuitRaces)[raceIndex].totalDistance = 28774.36;
    (*circuitRaces)[raceIndex].lapsInVanilla = 3;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/1_1_1_engage";

    (*circuitRaces)[raceIndex].hasNumLapsField = false;

    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Razor race 2
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_01/1_2_1_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "1_2_1_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_01";

    (*sprintRaces)[raceIndex].totalDistance = 13696.14;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 26;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/1_2_1_engage";

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(9);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "967", "548", "115.5", "20" },
        RadiusTrigger { "1454.829", "1348.722", "125.8047", "20" },
        RadiusTrigger { "1980.506", "1724.759", "150.2153", "20" },
        RadiusTrigger { "2043.5", "2885.5", "142", "30" },
        RadiusTrigger { "1466.443", "3742.286", "190", "20" },
        RadiusTrigger { "698", "3988.483", "214", "20" },
        RadiusTrigger { "341.5", "3085.5", "188", "20" },
        RadiusTrigger { "-342", "3938", "236", "25" },
        RadiusTrigger { "468.6606", "4527.372", "231", "25" }
    };

    (*sprintRaces)[raceIndex].hasBossRaceField = true;

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Razor race 3
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_01/1_2_2_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "1_2_2_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_01";

    (*sprintRaces)[raceIndex].totalDistance = 11902.98;
    (*sprintRaces)[raceIndex].startLineType = "narrow";
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 30;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/1_2_2_engage";

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(10);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "4054.582", "2925", "30.08105", "20" },
        RadiusTrigger { "3558", "2053.5", "68", "20" },
        RadiusTrigger { "3643.443", "1306.033", "81.2998", "20" },
        RadiusTrigger { "4229.982", "1262.5", "47", "20" },
        RadiusTrigger { "4700.5", "545", "9.671875", "20" },
        RadiusTrigger { "4329", "23", "9", "20" },
        RadiusTrigger { "3713.5", "-320.5", "21", "20" },
        RadiusTrigger { "3106.605", "-32", "13.61719", "25" },
        RadiusTrigger { "2640", "759", "63", "25" },
        RadiusTrigger { "2302", "1297.5", "146", "20" }
    };

    (*sprintRaces)[raceIndex].hasIntroNISField = false;
    (*sprintRaces)[raceIndex].hasCopsInRaceField = false;

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Razor race 4
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_01/1_2_4_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "1_2_4_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_01";

    (*sprintRaces)[raceIndex].totalDistance = 9106.788;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 25;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/1_2_4_engage";

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(4);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "2564", "308", "86.5", "20" },
        RadiusTrigger { "1227.5", "784.5", "116", "25" },
        RadiusTrigger { "337.2456", "-46.02396", "115.9004", "25" },
        RadiusTrigger { "1209.5", "-784", "125.5", "15" }
    };

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Razor race 5
    lapKnockoutRaces->emplace_back();
    raceIndex = refreshRaceIndex(*lapKnockoutRaces);

    (*lapKnockoutRaces)[raceIndex].raceNode = "race_bin_01/1_3_1_lapknockout";
    (*lapKnockoutRaces)[raceIndex].gameplayvault = "1_3_1_lapknockout";
    (*lapKnockoutRaces)[raceIndex].originalRaceBin = "race_bin_01";

    (*lapKnockoutRaces)[raceIndex].totalDistance = 18671.18;
    (*lapKnockoutRaces)[raceIndex].startLineType = "narrow";

    (*lapKnockoutRaces)[raceIndex].engageTriggerName = "/engage/1_3_1_engage";

    (*lapKnockoutRaces)[raceIndex].hasNumLapsField = false;

    (*lapKnockoutRaces)[raceIndex].canBeConvertedToCircuit = true;

    //Razor race 6
    tollboothRaces->emplace_back();
    raceIndex = refreshRaceIndex(*tollboothRaces);

    (*tollboothRaces)[raceIndex].raceNode = "race_bin_01/1_4_1_tollbooth";
    (*tollboothRaces)[raceIndex].gameplayvault = "1_4_1_tollbooth";
    (*tollboothRaces)[raceIndex].originalRaceBin = "race_bin_01";

    (*tollboothRaces)[raceIndex].totalDistance = 25022.18;
    (*tollboothRaces)[raceIndex].startLineType = "tollbooth";

    (*tollboothRaces)[raceIndex].engageTriggerName = "/engage/1_4_1_engage";

    (*tollboothRaces)[raceIndex].hasCopsInRaceField = false;

    //Razor race 7
    tollboothRaces->emplace_back();
    raceIndex = refreshRaceIndex(*tollboothRaces);

    (*tollboothRaces)[raceIndex].raceNode = "race_bin_01/1_4_2_tollbooth";
    (*tollboothRaces)[raceIndex].gameplayvault = "1_4_2_tollbooth";
    (*tollboothRaces)[raceIndex].originalRaceBin = "race_bin_01";

    (*tollboothRaces)[raceIndex].totalDistance = 32094.55;
    (*tollboothRaces)[raceIndex].startLineType = "tollbooth";

    (*tollboothRaces)[raceIndex].engageTriggerName = "/engage/1_4_2_engage";

    //Razor race 8
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_01/1_5_1_speedtraprace";
    (*speedtrapRaces)[raceIndex].gameplayvault = "1_5_1_speedtraprace";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_01";

    (*speedtrapRaces)[raceIndex].totalDistance = 7729.419;

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/1_5_1_engage";

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(7);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_01/1_5_1_speedtraprace/speedtrap1", "race_bin_01/1_5_1_speedtraprace/speedtrap2",
      "race_bin_01/1_5_1_speedtraprace/speedtrap3", "race_bin_01/1_5_1_speedtraprace/speedtrap4",
      "race_bin_01/1_5_1_speedtraprace/speedtrap5", "race_bin_01/1_5_1_speedtraprace/speedtrap6",
      "race_bin_01/1_5_1_speedtraprace/speedtrap7" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates.reserve(10);
    (*speedtrapRaces)[raceIndex].childrenFieldUpdates =
    {
        { "race_bin_01/1_5_1_speedtraprace/1_5_1_ai_cp8", "9" },
        { "race_bin_01/1_5_1_speedtraprace/wrongway", "10" },
        { "race_bin_01/1_5_1_speedtraprace/startgrid_reverse", "11" },
        { "race_bin_01/1_5_1_speedtraprace/finishline_reverse", "12" },
        { "race_bin_01/1_5_1_speedtraprace/shortcut1", "13" },
        { "race_bin_01/1_5_1_speedtraprace/shortcut2", "14" },
        { "race_bin_01/1_5_1_speedtraprace/shortcut3", "15" },
        { "race_bin_01/1_5_1_speedtraprace/shortcut4", "16" },
        { "race_bin_01/1_5_1_speedtraprace/shortcut5", "17" },
        { "race_bin_01/1_5_1_speedtraprace/shortcut6", "18" }
    };

    (*speedtrapRaces)[raceIndex].hasBossRaceField = true;
    (*speedtrapRaces)[raceIndex].hasCopsInRaceField = false;

    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Razor race 9
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_01/1_5_3_speedtrap";
    (*speedtrapRaces)[raceIndex].gameplayvault = "1_5_3_speedtrap";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_01";

    (*speedtrapRaces)[raceIndex].totalDistance = 11897.79;

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/1_5_3_engage";

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(9);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_01/1_5_3_speedtrap/speedtrap1", "race_bin_01/1_5_3_speedtrap/speedtrap2",
      "race_bin_01/1_5_3_speedtrap/speedtrap3", "race_bin_01/1_5_3_speedtrap/speedtrap4",
      "race_bin_01/1_5_3_speedtrap/speedtrap5", "race_bin_01/1_5_3_speedtrap/speedtrap6",
      "race_bin_01/1_5_3_speedtrap/speedtrap7", "race_bin_01/1_5_3_speedtrap/speedtrap8",
      "race_bin_01/1_5_3_speedtrap/speedtrap9" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates.reserve(20);
    (*speedtrapRaces)[raceIndex].childrenFieldUpdates =
    {
        { "race_bin_01/1_5_3_speedtrap/wrongway", "9" },
        { "race_bin_01/1_5_3_speedtrap/startgrid_reverse", "10" },
        { "race_bin_01/1_5_3_speedtrap/finishline_reverse", "11" },
        { "race_bin_01/1_5_3_speedtrap/shortcut1", "12" },
        { "race_bin_01/1_5_3_speedtrap/shortcut2", "13" },
        { "race_bin_01/1_5_3_speedtrap/shortcut3", "14" },
        { "race_bin_01/1_5_3_speedtrap/shortcut4", "15" },
        { "race_bin_01/1_5_3_speedtrap/shortcut5", "16" },
        { "race_bin_01/1_5_3_speedtrap/shortcut6", "17" },
        { "race_bin_01/1_5_3_speedtrap/shortcut7", "18" },
        { "race_bin_01/1_5_3_speedtrap/shortcut8", "19" },
        { "race_bin_01/1_5_3_speedtrap/shortcut9", "20" },
        { "race_bin_01/1_5_3_speedtrap/shortcut10", "21" },
        { "race_bin_01/1_5_3_speedtrap/shortcut11", "22" },
        { "race_bin_01/1_5_3_speedtrap/shortcut12", "23" },
        { "race_bin_01/1_5_3_speedtrap/shortcut13", "24" },
        { "race_bin_01/1_5_3_speedtrap/shortcut14", "25" },
        { "race_bin_01/1_5_3_speedtrap/shortcut15", "26" },
        { "race_bin_01/1_5_3_speedtrap/shortcut16", "27" },
        { "race_bin_01/1_5_3_speedtrap/shortcut17", "28" }
    };

    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Razor race 10
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_01/2_2_1_r_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "2_2_1_r_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_01";

    (*sprintRaces)[raceIndex].totalDistance = 13429.91;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 25;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/2_2_1_r_engage";

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(11);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "2915", "1999", "113.5", "30" },
        RadiusTrigger { "2445", "2524", "122", "20" },
        RadiusTrigger { "2553.405", "3815.501", "233", "35" },
        RadiusTrigger { "2552.619", "4515.849", "262.5", "35" },
        RadiusTrigger { "1106.951", "4431.651", "215", "30" },
        RadiusTrigger { "161.5", "3839", "189", "20" },
        RadiusTrigger { "220", "2836.5", "180", "15" },
        RadiusTrigger { "527.1174", "2340.25", "161.623", "20" },
        RadiusTrigger { "1771.045", "2027.657", "149", "30" },
        RadiusTrigger { "1637.671", "1000.336", "122.5", "30" },
        RadiusTrigger { "2314.857", "932.5", "133", "20" }
    };

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Razor race 11
    tollboothRaces->emplace_back();
    raceIndex = refreshRaceIndex(*tollboothRaces);

    (*tollboothRaces)[raceIndex].raceNode = "race_bin_01/2_4_3_r_tollbooth";
    (*tollboothRaces)[raceIndex].gameplayvault = "2_4_3_r_tollbooth";
    (*tollboothRaces)[raceIndex].originalRaceBin = "race_bin_01";

    (*tollboothRaces)[raceIndex].totalDistance = 17295.39;
    (*tollboothRaces)[raceIndex].startLineType = "tollbooth";

    (*tollboothRaces)[raceIndex].engageTriggerName = "/engage/2_4_3_r_engage";

    //Razor boss race 1
    speedtrapRaces->emplace_back();
    raceIndex = refreshRaceIndex(*speedtrapRaces);

    (*speedtrapRaces)[raceIndex].raceNode = "race_bin_01/1_5_2_speedtraprace";
    (*speedtrapRaces)[raceIndex].gameplayvault = "1_5_2_speedtraprace";
    (*speedtrapRaces)[raceIndex].originalRaceBin = "race_bin_01";

    (*speedtrapRaces)[raceIndex].totalDistance = 9668.276;
    (*speedtrapRaces)[raceIndex].startLineType = "narrow";

    (*speedtrapRaces)[raceIndex].engageTriggerName = "/engage/1_5_2_engage";
    (*speedtrapRaces)[raceIndex].engageTriggerHasInitiallyUnlockedField = true;

    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes.reserve(10);
    (*speedtrapRaces)[raceIndex].existingSpeedtrapNodes =
    { "race_bin_01/1_5_2_speedtraprace/speedtrap1", "race_bin_01/1_5_2_speedtraprace/speedtrap2",
      "race_bin_01/1_5_2_speedtraprace/speedtrap3", "race_bin_01/1_5_2_speedtraprace/speedtrap4",
      "race_bin_01/1_5_2_speedtraprace/speedtrap5", "race_bin_01/1_5_2_speedtraprace/speedtrap6",
      "race_bin_01/1_5_2_speedtraprace/speedtrap7", "race_bin_01/1_5_2_speedtraprace/speedtrap8",
      "race_bin_01/1_5_2_speedtraprace/speedtrap9", "race_bin_01/1_5_2_speedtraprace/speedtrap10" };

    (*speedtrapRaces)[raceIndex].childrenFieldUpdates = { { "race_bin_01/1_5_2_speedtraprace/wrongway", "9" } };

    (*speedtrapRaces)[raceIndex].hasBossRaceField = true;
    (*speedtrapRaces)[raceIndex].hasPostRaceActivityField = true;
    (*speedtrapRaces)[raceIndex].hasRivalBestTimeField = true;
    (*speedtrapRaces)[raceIndex].hasIntroMovieField = true;
    (*speedtrapRaces)[raceIndex].hasDDayRaceField = true;

    (*speedtrapRaces)[raceIndex].canBeConvertedToSprint = true;

    //Razor boss race 2
    dragRaces->emplace_back();
    raceIndex = refreshRaceIndex(*dragRaces);

    (*dragRaces)[raceIndex].raceNode = "race_bin_01/1_7_3_drag";
    (*dragRaces)[raceIndex].gameplayvault = "1_7_3_drag";
    (*dragRaces)[raceIndex].originalRaceBin = "race_bin_01";

    (*dragRaces)[raceIndex].totalDistance = 1498.91;

    (*dragRaces)[raceIndex].engageTriggerName = "/engage/1_7_3_engage";
    (*dragRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*dragRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1856.957", "-408.0294", "111.5947");

    (*dragRaces)[raceIndex].hasBossRaceField = true;
    (*dragRaces)[raceIndex].hasPostRaceActivityField = true;
    (*dragRaces)[raceIndex].hasRivalBestTimeField = true;
    (*dragRaces)[raceIndex].hasTrafficLevelField = false;

    //Razor boss race 3
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_01/4_2_1_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "4_2_1_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_01";

    (*sprintRaces)[raceIndex].totalDistance = 11992.69;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 19;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/4_2_1_engage";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1545.087", "-705.7032", "114.9922");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(7);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "2644", "341.5", "85.5", "25" },
        RadiusTrigger { "3283.5", "-211", "15.5", "30" },
        RadiusTrigger { "4342.5", "179", "22", "20" },
        RadiusTrigger { "4061.5", "937", "60", "15" },
        RadiusTrigger { "4636.5", "1123", "12", "20" },
        RadiusTrigger { "3574", "1316.5", "80.5", "25" },
        RadiusTrigger { "2633", "2236", "108", "25" }
    };

    (*sprintRaces)[raceIndex].hasBossRaceField = true;
    (*sprintRaces)[raceIndex].hasPostRaceActivityField = true;
    (*sprintRaces)[raceIndex].hasRivalBestTimeField = true;
    (*sprintRaces)[raceIndex].hasTrafficLevelField = false;

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Razor boss race 4
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_01/1_1_2_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "1_1_2_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_01";

    (*circuitRaces)[raceIndex].totalDistance = 16663.59;
    (*circuitRaces)[raceIndex].lapsInVanilla = 3;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/1_1_2_engage";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1391.893", "3704.417", "194.6963");

    (*circuitRaces)[raceIndex].hasBossRaceField = true;
    (*circuitRaces)[raceIndex].hasPostRaceActivityField = true;
    (*circuitRaces)[raceIndex].hasRivalBestTimeField = true;
    (*circuitRaces)[raceIndex].hasNumLapsField = false;

    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Razor boss race 5
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_01/1_2_3_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "1_2_3_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_01";

    (*sprintRaces)[raceIndex].totalDistance = 16032.83;
    (*sprintRaces)[raceIndex].startLineType = "narrow";
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 23;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/1_2_3_engage";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1571.265", "3793.1", "186.8916");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(7);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "588.5", "4548.5", "223.5", "20" },
        RadiusTrigger { "-26", "3667.5", "222", "15" },
        RadiusTrigger { "588", "3292.5", "199.5", "15" },
        RadiusTrigger { "1433", "2497.5", "157.5", "15" },
        RadiusTrigger { "1989", "2045.5", "144", "20" },
        RadiusTrigger { "2808.5", "973.5", "79", "20" },
        RadiusTrigger { "4132.5", "1024.5", "66", "15" }
    };

    (*sprintRaces)[raceIndex].hasBossRaceField = true;
    (*sprintRaces)[raceIndex].hasPostRaceActivityField = true;
    (*sprintRaces)[raceIndex].hasRivalBestTimeField = true;
    (*sprintRaces)[raceIndex].hasIntroNISField = false;

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Prologue Rog race
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "16_1_1_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "16_1_1_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "gpcore";

    (*circuitRaces)[raceIndex].totalDistance = 4416.043;
    (*circuitRaces)[raceIndex].lapsInVanilla = 2;

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/16_1_1_engage";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1650.307", "384.4418", "93.79443");

    (*circuitRaces)[raceIndex].hasPostRaceActivityField = true;
    (*circuitRaces)[raceIndex].hasIntroMovieField = true;
    (*circuitRaces)[raceIndex].hasPlayerCarTypeField = true;
    (*circuitRaces)[raceIndex].hasDDayRaceField = true;
    (*circuitRaces)[raceIndex].hasRaceLengthField = false;

    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Prologue Ronnie race
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "16_2_2_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "16_2_2_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "gpcore";

    (*sprintRaces)[raceIndex].totalDistance = 3031;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 14;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/16_2_2_engage";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1043.669", "104.663", "101.4483");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(3);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "1803", "618.5", "96", "15" },
        RadiusTrigger { "2139", "1294.5", "149", "20" },
        RadiusTrigger { "2713.5", "886", "83.5", "20" }
    };

    (*sprintRaces)[raceIndex].hasPostRaceActivityField = true;
    (*sprintRaces)[raceIndex].hasIntroMovieField = true;
    (*sprintRaces)[raceIndex].hasPlayerCarTypeField = true;
    (*sprintRaces)[raceIndex].hasEventIconTypeField = true;
    (*sprintRaces)[raceIndex].hasDDayRaceField = true;
    (*sprintRaces)[raceIndex].hasRaceLengthField = false;

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Prologue Bull race
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "16_2_3_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "16_2_3_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "gpcore";

    (*sprintRaces)[raceIndex].totalDistance = 3230;
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 22;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/16_2_3_engage";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("2818.152", "615.9679", "42.8418");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(3);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "2327.5", "929.5", "134", "20" },
        RadiusTrigger { "1658", "26.5", "99", "20" },
        RadiusTrigger { "1051", "445.5", "107", "25" }
    };

    (*sprintRaces)[raceIndex].hasRewardsForWinnerField = true;
    (*sprintRaces)[raceIndex].hasPostRaceActivityField = true;
    (*sprintRaces)[raceIndex].hasIntroMovieField = true;
    (*sprintRaces)[raceIndex].hasPlayerCarTypeField = true;
    (*sprintRaces)[raceIndex].hasEventIconTypeField = true;
    (*sprintRaces)[raceIndex].hasDDayRaceField = true;
    (*sprintRaces)[raceIndex].hasRaceLengthField = false;

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Black edition race 1
    circuitRaces->emplace_back();
    raceIndex = refreshRaceIndex(*circuitRaces);

    (*circuitRaces)[raceIndex].raceNode = "race_bin_collectors/21_1_1_circuit";
    (*circuitRaces)[raceIndex].gameplayvault = "21_1_1_circuit";
    (*circuitRaces)[raceIndex].originalRaceBin = "race_bin_collectors";

    (*circuitRaces)[raceIndex].totalDistance = 15919.88;
    (*circuitRaces)[raceIndex].lapsInVanilla = 3;
    (*circuitRaces)[raceIndex].startLineType = "narrow";

    (*circuitRaces)[raceIndex].engageTriggerName = "/engage/21_1_1_engage";
    (*circuitRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*circuitRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("2592.81", "-324.4814", "114.7715");

    (*circuitRaces)[raceIndex].hasNumLapsField = false;
    (*circuitRaces)[raceIndex].hasCopsInRaceField = false;

    (*circuitRaces)[raceIndex].canBeConvertedToKnockout = true;

    //Black edition race 2
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_collectors/21_2_2_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "21_2_2_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_collectors";

    (*sprintRaces)[raceIndex].totalDistance = 27163.09;
    (*sprintRaces)[raceIndex].startLineType = "narrow";
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 16;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/21_2_2_engage";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("1149.266", "4408.48", "213.8545");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(10);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "2507.224", "3868.502", "232.2305", "30" },
        RadiusTrigger { "2848.753", "2409.61", "76.70801", "20" },
        RadiusTrigger { "3708.155", "3490.401", "25.28125", "15" },
        RadiusTrigger { "4329", "1515.5", "21.5", "15" },
        RadiusTrigger { "4342.854", "180.237", "21.33691", "15" },
        RadiusTrigger { "2664", "353", "84", "15" },
        RadiusTrigger { "361.916", "-468.2354", "126.165", "25" },
        RadiusTrigger { "1460", "1193", "117", "20" },
        RadiusTrigger { "-566.2511", "2677.333", "230.3691", "20" },
        RadiusTrigger { "389.8765", "4514.552", "234.1826", "25" }
    };

    (*sprintRaces)[raceIndex].hasIntroNISField = false;
    (*sprintRaces)[raceIndex].hasCopsInRaceField = false;

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;

    //Black edition race 3
    sprintRaces->emplace_back();
    raceIndex = refreshRaceIndex(*sprintRaces);

    (*sprintRaces)[raceIndex].raceNode = "race_bin_collectors/21_2_1_sprint";
    (*sprintRaces)[raceIndex].gameplayvault = "21_2_1_sprint";
    (*sprintRaces)[raceIndex].originalRaceBin = "race_bin_collectors";

    (*sprintRaces)[raceIndex].totalDistance = 6066.774;
    (*sprintRaces)[raceIndex].startLineType = "narrow";
    (*sprintRaces)[raceIndex].sizeOfChildrenField = 9;

    (*sprintRaces)[raceIndex].engageTriggerName = "/engage/21_2_1_engage";
    (*sprintRaces)[raceIndex].hasEngageTriggerInVanilla = false;
    (*sprintRaces)[raceIndex].engageTriggerCoords =
        CoordinateSet("4347.913", "204.7836", "23.82129");

    (*sprintRaces)[raceIndex].speedtrapsToCreate.reserve(4);
    (*sprintRaces)[raceIndex].speedtrapsToCreate =
    {
        RadiusTrigger { "3402.981", "-179.9392", "12.4834", "15" },
        RadiusTrigger { "3363.5", "790", "19.5", "15" },
        RadiusTrigger { "3923", "957.5", "58", "15" },
        RadiusTrigger { "2952.474", "1035.983", "67.19727", "20" }
    };

    (*sprintRaces)[raceIndex].hasCopsInRaceField = false;

    (*sprintRaces)[raceIndex].canBeConvertedToSpeedtrap = true;


    /**                                 Track Expansion races                                  */

    //Extra packages are excluded with easy install
    if ( easyInstall )
    {
        createMainSonnyTETracks(circuitRaces, lapKnockoutRaces, sprintRaces);
        *originalNumberOfSonnyRacesPtr += 3;

        createMainTazTETracks(circuitRaces, lapKnockoutRaces, sprintRaces, speedtrapRaces);
        *originalNumberOfTazRacesPtr += 4;

        createMainVicTETracks(circuitRaces, lapKnockoutRaces, sprintRaces);
        *originalNumberOfVicRacesPtr += 4;

        createMainIzzyTETracks(circuitRaces, lapKnockoutRaces, sprintRaces, speedtrapRaces);
        *originalNumberOfIzzyRacesPtr += 7;

        createMainBigLouTETracks(circuitRaces, lapKnockoutRaces, sprintRaces, speedtrapRaces);
        *originalNumberOfBigLouRacesPtr += 9;

        createMainBaronTETracks(circuitRaces, lapKnockoutRaces, sprintRaces, speedtrapRaces);
        *originalNumberOfBaronRacesPtr += 7;

        createMainEarlTETracks(circuitRaces, lapKnockoutRaces, sprintRaces);
        *originalNumberOfEarlRacesPtr += 9;

        createMainJewelsTETracks(circuitRaces, lapKnockoutRaces, sprintRaces, speedtrapRaces);
        *originalNumberOfJewelsRacesPtr += 10;

        createMainKazeTETracks(circuitRaces, lapKnockoutRaces, sprintRaces, speedtrapRaces);
        *originalNumberOfKazeRacesPtr += 10;

        createMainMingTETracks(circuitRaces, lapKnockoutRaces,sprintRaces, speedtrapRaces);
        *originalNumberOfMingRacesPtr += 13;

        createMainWebsterTETracks(circuitRaces, lapKnockoutRaces, sprintRaces, speedtrapRaces);
        *originalNumberOfWebsterRacesPtr += 12;

        createMainJVTETracks(circuitRaces, lapKnockoutRaces, sprintRaces, speedtrapRaces);
        *originalNumberOfJVRacesPtr += 13;

        createMainRonnieTETracks(circuitRaces, lapKnockoutRaces, sprintRaces, speedtrapRaces);
        *originalNumberOfRonnieRacesPtr += 11;

        createMainBullTETracks(circuitRaces, lapKnockoutRaces, sprintRaces, speedtrapRaces);
        *originalNumberOfBullRacesPtr += 14;

        createMainRazorTETracks(circuitRaces, lapKnockoutRaces, sprintRaces, speedtrapRaces);
        *originalNumberOfRazorRacesPtr += 14;
    }

    //User is prompted for all packages with a custom installation. Extra packages can only be installed if the
    //main package for that blacklist member is also installed
    else
    {
        if ( promptUser("\nAdd Sonny tracks? Y/N\n>> ") )
        {
            createMainSonnyTETracks(circuitRaces, lapKnockoutRaces, sprintRaces);
            *originalNumberOfSonnyRacesPtr += 3;
        }

        if ( promptUser("\nAdd Taz tracks? Y/N\n>> ") )
        {
            createMainTazTETracks(circuitRaces, lapKnockoutRaces, sprintRaces, speedtrapRaces);
            *originalNumberOfTazRacesPtr += 4;
        }

        if ( promptUser("\nAdd Vic tracks? Y/N \n>> ") )
        {
            createMainVicTETracks(circuitRaces, lapKnockoutRaces, sprintRaces);
            *originalNumberOfVicRacesPtr += 4;

            if ( promptUser("\nAdd extra Vic track? Y/N\n>> ") )
            {
                createExtraVicTETrack(circuitRaces);
                *originalNumberOfVicRacesPtr += 1;
            }
        }

        if ( promptUser("\nAdd Izzy tracks? Y/N \n>> ") )
        {
            createMainIzzyTETracks(circuitRaces, lapKnockoutRaces, sprintRaces, speedtrapRaces);
            *originalNumberOfIzzyRacesPtr += 8;

            if ( promptUser("\nAdd extra Izzy track? Y/N\n>> ") )
            {
                createExtraIzzyTETrack(circuitRaces);
                *originalNumberOfIzzyRacesPtr += 1;
            }
        }

        if ( promptUser("\nAdd Big Lou tracks? Y/N\n>> ") )
        {
            createMainBigLouTETracks(circuitRaces, lapKnockoutRaces, sprintRaces, speedtrapRaces);
            *originalNumberOfBigLouRacesPtr += 9;
        }

        if ( promptUser("\nAdd Baron tracks? Y/N\n>> ") )
        {
            createMainBaronTETracks(circuitRaces, lapKnockoutRaces, sprintRaces, speedtrapRaces);
            *originalNumberOfBaronRacesPtr += 7;

            if ( promptUser("\nAdd extra Baron tracks? Y/N\n>> ") )
            {
                createExtraBaronTETracks(circuitRaces);
                *originalNumberOfBaronRacesPtr += 2;
            }
        }

        if ( promptUser("\nAdd Earl tracks? Y/N\n>> ") )
        {
            createMainEarlTETracks(circuitRaces, lapKnockoutRaces, sprintRaces);
            *originalNumberOfEarlRacesPtr += 9;
        }

        if ( promptUser("\nAdd Jewels tracks? Y/N\n>> ") )
        {
            createMainJewelsTETracks(circuitRaces, lapKnockoutRaces, sprintRaces, speedtrapRaces);
            *originalNumberOfJewelsRacesPtr += 10;

            if ( promptUser("\nAdd extra Jewels track? Y/N\n>> ") )
            {
                createExtraJewelsTETrack(circuitRaces);
                *originalNumberOfJewelsRacesPtr += 1;
            }
        }

        if ( promptUser("\nAdd Kaze tracks? Y/N\n>> ") )
        {
            createMainKazeTETracks(circuitRaces, lapKnockoutRaces, sprintRaces, speedtrapRaces);
            *originalNumberOfKazeRacesPtr += 10;

            if ( promptUser("\nAdd extra Kaze tracks? Y/N\n>> ") )
            {
                createExtraKazeTETracks(circuitRaces);
                *originalNumberOfKazeRacesPtr += 3;
            }
        }

        if ( promptUser("\nAdd Ming tracks? Y/N\n>> ") )
        {
            createMainMingTETracks(circuitRaces, lapKnockoutRaces,sprintRaces, speedtrapRaces);
            *originalNumberOfMingRacesPtr += 13;

            if ( promptUser("\nAdd extra Ming track? Y/N\n>> ") )
            {
                createExtraMingTETrack(circuitRaces);
                *originalNumberOfMingRacesPtr += 1;
            }
        }

        if ( promptUser("\nAdd Webster tracks? Y/N\n>> ") )
        {
            createMainWebsterTETracks(circuitRaces, lapKnockoutRaces, sprintRaces, speedtrapRaces);
            *originalNumberOfWebsterRacesPtr += 12;

            if ( promptUser("\nAdd extra Webster track? Y/N\n>> ") )
            {
                createExtraWebsterTETrack(circuitRaces);
                *originalNumberOfWebsterRacesPtr += 1;
            }
        }

        if ( promptUser("\nAdd JV tracks? Y/N\n>> ") )
        {
            createMainJVTETracks(circuitRaces, lapKnockoutRaces, sprintRaces, speedtrapRaces);
            *originalNumberOfJVRacesPtr += 13;

            if ( promptUser("\nAdd extra JV track? Y/N\n>> ") )
            {
                createExtraJVTETrack(circuitRaces);
                *originalNumberOfJVRacesPtr += 1;
            }
        }

        if ( promptUser("\nAdd Ronnie tracks? Y/N\n>> ") )
        {
            createMainRonnieTETracks(circuitRaces, lapKnockoutRaces, sprintRaces, speedtrapRaces);
            *originalNumberOfRonnieRacesPtr += 11;

            if ( promptUser("\nAdd extra Ronnie track? Y/N\n>> ") )
            {
                createExtraRonnieTETrack(lapKnockoutRaces);
                *originalNumberOfRonnieRacesPtr += 1;
            }
        }

        if ( promptUser("\nAdd Bull tracks? Y/N\n>> ") )
        {
            createMainBullTETracks(circuitRaces, lapKnockoutRaces, sprintRaces, speedtrapRaces);
            *originalNumberOfBullRacesPtr += 14;
        }

        if ( promptUser("\nAdd Razor tracks? Y/N\n>> ") )
        {
            createMainRazorTETracks(circuitRaces, lapKnockoutRaces, sprintRaces, speedtrapRaces);
            *originalNumberOfRazorRacesPtr += 14;
        }
    }
}
