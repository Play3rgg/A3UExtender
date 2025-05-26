class Templates 
{
    

    
    class Base;
    
    // ************************************** RHS Factions *******************************************************

    class RHS_Base : Base
    {
        requiredAddons[] = {"rhsgref_main", "rhssaf_c_vehicles", "rhs_c_tanks", "RHS_US_A2Port_Armor"};
        basepath = QPATHTOFOLDER(Templates\RHS);
        logo = "\rhsusf\addons\rhsusf_main\data\rhs_logo_ca.paa";
        priority = 30;
        equipFlags[] = {"specialRHS"};
    };

    class RHS_CDF : RHS_Base
    {
        side = "Occ";
        flagTexture = "\rhsgref\addons\rhsgref_main\data\Flags\flag_cdf_co.paa";
        name = "RHS CDF";
        file = "RHS_AI_CDF";
        maps[] = {"cup_chernarus_A3", "brf_sumava"};
        climate[] = {"temperate", "arctic"};
        description = $STR_A3AP_setupFactionsTab_cdf;
    };

    class RHS_AFRF : RHS_Base
    {
        side = "Inv";
        flagTexture = "rhsafrf\addons\rhs_main\data\flag_rus_co.paa";
        logo = "rhsafrf\addons\rhs_main\data\rhs_logo_ca.paa";
        name = "RHS AFRF";
        file = "RHS_AI_AFRF";
        description = $STR_A3AP_setupFactionsTab_aegis_afrf;
    };

    class RHS_US_Army_Arid : RHS_Base
    {
        side = "Occ";
        flagTexture = "rhsusf\addons\rhsusf_main\data\flag_us_co.paa";
        name = "RHS US Army Arid";
        file = "RHS_AI_US_Army_Arid";
        description = $STR_A3AP_setupFactionsTab_usaf;
        climate[] = {"arid"};
    };
    class RHS_US_Army_Temperate : RHS_US_Army_Arid
    {
        name = "RHS US Army Temperate";
        file = "RHS_AI_US_Army_Temperate";
        climate[] = {"temperate","tropical","arctic"};
    };

    class RHS_USMC_Arid : RHS_Base
    {
        side = "Occ";
        flagTexture = "rhsusf\addons\rhsusf_main\data\flag_us_co.paa";
        name = "RHS USMC Arid";
        file = "RHS_AI_USMC_Arid";
        description = $STR_A3AP_setupFactionsTab_usmc;
        climate[] = {"arid"};
    };
    class RHS_USMC_Temperate : RHS_USMC_Arid
    {
        name = "RHS USMC Temperate";
        file = "RHS_AI_USMC_Temperate";
        climate[] = {"temperate","tropical","arctic"};
    };
	
    class RHS_SAF : RHS_Base
    {
	    side = "Inv";
	    flagTexture = "rhssaf\addons\rhssaf_main\data\flags\flag_serbia_co.paa";
        name = "RHS SAF";
        file = "RHS_AI_SAF";
    };

	class GSB2022_Occ: RHS_Base
    {  
        requiredAddons[] = {"rhsgref_main", "rhssaf_c_vehicles", "rhs_c_tanks", "RHS_US_A2Port_Armor", "gsb_rhs_22_infantry"}; 
        side = "Occ";
        flagTexture = "\gsb_rhs_22_main\DATA\flags\flag_marker_gsb_22_co.paa";
        name = "RHS GSB 2022";
        file = "RHS_AI_GSB";
        description = "Mix of Western and Eastern Assets.";
    };

    // ***************************** 3CB BAF *****************************

    class 3CBBAF_Base
    {
        requiredAddons[] = {"UK3CB_BAF_Weapons","UK3CB_BAF_Vehicles","UK3CB_BAF_Units_Common","UK3CB_BAF_Equipment","rhsgref_main"};
        //requiredAddons[] = {"UK3CB_BAF_Units_Common"};              // has weapons/equipment/vehicles dependencies
        basepath = QPATHTOFOLDER(Templates\3CBBAF);
        logo = "\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_Ammo\data\ui\logo_small_3cb_ca.paa";
        priority = 50;
    };

    class 3CBBAF_Arid : 3CBBAF_Base
    {
        side = "Occ";
        flagTexture = "\A3\Data_F\Flags\flag_uk_co.paa";
        name = "3CB BAF Arid";
        file = "3CB_AI_BAF_Arid";
        climate[] = {"arid"};
    };
    class 3CBBAF_Arctic : 3CBBAF_Arid
    {
        name = "3CB BAF Arctic";
        file = "3CB_AI_BAF_Arctic";
        climate[] = {"arctic"};
    };
    class 3CBBAF_Temperate : 3CBBAF_Arid
    {
        name = "3CB BAF Temperate";
        file = "3CB_AI_BAF_Temperate";
        climate[] = {"temperate"};
    };
    class 3CBBAF_Tropical : 3CBBAF_Arid
    {
        name = "3CB BAF Tropical";
        file = "3CB_AI_BAF_Tropical";
        climate[] = {"tropical"};
    };
    
    // **************************** 3CB Factions ******************

    class 3CBF_Base : Base
    {
        requiredAddons[] = {"UK3CB_Factions_Vehicles_SUV"};
        logo = "UK3CB_Factions\addons\UK3CB_Factions_Common\editor\logo_3cb_ca.paa";
        basepath = QPATHTOFOLDER(Templates\3CBF);
        priority = 40;
        equipFlags[] = {"specialRHS"};
    };

    class 3CBF_LDF : 3CBF_Base
    {
        side = "Occ";
        flagTexture = "a3\data_f_enoch\flags\flag_enoch_co.paa";
        name = "3CBF LDF";
        file = "3CBF_AI_LDF";
        description = $STR_A3AP_setupFactionsTab_ldf;
        climate[] = {"temperate"};
        maps[] = {"Enoch"};
    };

    class 3CBF_CDF : 3CBF_Base
    {
        side = "Occ";
        flagTexture = "\UK3CB_Factions\addons\UK3CB_Factions_CHC\Flag\CHC_flag_co.paa";
        name = "3CBF CDF";
        file = "3CBF_AI_CDF";
        description = $STR_A3AP_setupFactionsTab_cdf;
        climate[] = {"temperate"};
        maps[] = {"cup_chernarus_A3", "brf_sumava", "chernarus", "chernarus_summer", "Chernarus_Winter"};
    };

    class 3CBF_HIDF : 3CBF_Base
    {
        side = "Occ";
        flagTexture = "a3\data_f_exp\flags\flag_tanoa_co.paa";
        name = "3CBF HIDF";
        file = "3CBF_AI_HIDF";
        description = $STR_A3AP_setupFactionsTab_hil;
        maps[] = {"tanoa"};
        climate[] = {"tropical"};
    };

    class 3CBF_AAF : 3CBF_Base
    {
        side = "Occ";
        flagTexture = "a3\data_f\flags\flag_aaf_co.paa";
        name = "3CBF AAF";
        file = "3CBF_AI_AAF";
        maps[] = {"altis", "malden"};
        climate[] = {"arid"};
        description = $STR_A3AP_setupFactionsTab_aaf_3cbf;
    };

    class 3CBF_TKA : 3CBF_Base
    {
        side = "Occ";
        flagTexture = "\UK3CB_Factions\addons\UK3CB_Factions_TKA\Flag\tka_flag_co.paa";
        name = "3CBF TKA";
        file = "3CBF_AI_TKA";
        maps[] = {"takistan", "SefrouRamal"};
        climate[] = {"arid"};
        description = $STR_A3AP_setupFactionsTab_tka;
    };

    class 3CBF_MDF : 3CBF_AAF
    {
        flagTexture = "uk3cb_factions\addons\uk3cb_factions_mdf\flag\mal_flag_co.paa";
        name = "3CB Malden Defence Force";
        file = "3CBF_AI_MDF";
        maps[] = {"malden"};
        climate[] = {"arid"};
        description = "";
    };

    class 3CBF_KRG : 3CBF_MDF
    {
        flagTexture = "uk3cb_factions\addons\uk3cb_factions_krg\flag\krg_flag_co.paa";
        name = "3CB Karzeghistan Guard";
        file = "3CBF_AI_KRG";
        climate[] = {"arid"};
    };

    class 3CBF_ARD : 3CBF_Base
    {
        side = "Inv";
        flagTexture = "\UK3CB_Factions\addons\UK3CB_Factions_ARD\Flag\ARD_flag_co.paa";
        name = "3CBF ARD";
        file = "3CBF_AI_ARD";
        maps[] = {"takistan", "SefrouRamal"};
        climate[] = {"arid"};
        description = $STR_A3AP_setupFactionsTab_ard;
    };

    class 3CBF_AFRF : 3CBF_Base
    {
        side = "Inv";
        flagTexture = "rhsafrf\addons\rhs_main\data\flag_rus_co.paa";
        name = "3CBF AFRF";
        file = "3CBF_AI_AFRF";
        climate[] = {"arid","temperate","tropical","arctic"};
        description = $STR_A3AP_setupFactionsTab_aegis_afrf;
    };

    class 3CBF_CSAT : 3CBF_AFRF
    {
        flagTexture = "A3\Data_F\Flags\Flag_CSAT_CO.paa";
        name = "3CBF CSAT";
        file = "3CBF_AI_CSAT";
        climate[] = {"arid", "temperate"}; // This is the "classic" CSAT. While temperate has its own template I still think this should be an option by default
        description = $STR_A3AP_setupFactionsTab_csat;
    };
    class 3CBF_CSAT_Winter : 3CBF_CSAT
    {
        name = "3CBF CSAT Winter";
        file = "3CBF_AI_CSAT_Winter";
        climate[] = {"arctic"};
    };
    class 3CBF_CSAT_Temperate : 3CBF_CSAT
    {
        name = "3CBF CSAT Temperate";
        file = "3CBF_AI_CSAT_Temperate";
        climate[] = {"temperate"};
    };
    class 3CBF_CSAT_Tropical : 3CBF_CSAT
    {
        name = "3CBF CSAT Tropical";
        file = "3CBF_AI_CSAT_Tropical";
        climate[] = {"tropical"};
    };

    class 3CBF_ION : 3CBF_AFRF
    {
        flagTexture = "uk3cb_factions\addons\uk3cb_factions_ion\flag\ion_flag_co.paa";
        name = "3CB ION Temperate";
        file = "3CBF_AI_ION";
        climate[] = {"temperate", "tropical"};
        description = "";
    };
    class 3CBF_ION_Arid : 3CBF_ION
    {
        name = "3CB ION Arid";
        file = "3CBF_AI_ION_Arid";
        climate[] = {"arid"};
    };
    class 3CBF_ION_Arctic : 3CBF_ION
    {
        name = "3CB ION Arctic";
        file = "3CBF_AI_ION_Arctic";
        climate[] = {"arctic"};
    };

    class 3CBF_US_Army_Arid : 3CBF_Base
    {
        side = "Occ";
        flagTexture = "a3\data_f\flags\flag_us_co.paa";
        name = "3CBF US Army Arid";
        file = "3CBF_AI_US_Army_Arid";
        description = $STR_A3AP_setupFactionsTab_usaf;
        climate[] = {"arid"};
    };
    class 3CBF_US_Army_Temperate : 3CBF_US_Army_Arid
    {
        name = "3CBF US Army Temperate";
        file = "3CBF_AI_US_Army_Temperate";
        climate[] = {"temperate","tropical","arctic"};
    };

    class 3CBF_USMC_Arid : 3CBF_Base
    {
        side = "Occ";
        flagTexture = "\UK3CB_Factions\addons\UK3CB_Factions_CW_US\Flag\cw_US_Marines_flag_co.paa";
        name = "3CBF USMC Arid";
        file = "3CBF_AI_USMC_Arid";
        description = $STR_A3AP_setupFactionsTab_usmc;
        climate[] = {"arid"};
    };
    class 3CBF_USMC_Temperate : 3CBF_USMC_Arid
    {
        name = "3CBF USMC Temperate";
        file = "3CBF_AI_USMC_Temperate";
        climate[] = {"temperate","tropical","arctic"};
    };

    class 3CBF_SOV_CW : 3CBF_Base
    {
        priority = 39;
        side = "Inv";
        flagTexture = "\UK3CB_Factions\addons\UK3CB_Factions_CW_SOV\Flag\cw_sov_flag_co.paa";
        name = "3CBF Red Army (Cold War)";
        file = "3CBF_AI_SOV_CW";
        description = $STR_A3AP_setupFactionsTab_ra;
        equipFlags[] = {"specialRHS", "coldWar"};
    };

    class 3CBF_US_Army_CW : 3CBF_Base
    {
        priority = 39;
        side = "Occ";
        flagTexture = "a3\data_f\flags\flag_us_co.paa";
        name = "3CBF US Army (Cold War)";
        file = "3CBF_AI_US_Army_CW";
        description = $STR_A3AP_setupFactionsTab_us_cw;
        equipFlags[] = {"specialRHS", "coldWar"};
    };

    // ***************************** CUP *****************************

    class CUP_Base
    {
        requiredAddons[] = {"CUP_Creatures_People_Civil_Russia", "CUP_BaseConfigs", "CUP_AirVehicles_Core"};        // units, weapons, vehicles
        //requiredAddons[] = {"CUP_AirVehicles_Core"};        // vehicles requires units & weapons
        basepath = QPATHTOFOLDER(Templates\CUP);
        logo = "\CUP\Creatures\People\CUP_Creatures_People_Core\ui\logo_cup_ca_small.paa";
        priority = 60;
    };

    class CUP_ACR_Arid : CUP_Base
    {
        side = "Occ";
        flagTexture = "cup\baseconfigs\cup_baseconfigs\data\flags\flag_cz_co.paa";
        name = "CUP ACR Arid";
        file = "CUP_AI_ACR_Arid";
        climate[] = {"arid"};
    };
    class CUP_ACR_Temperate : CUP_ACR_Arid
    {
        name = "CUP ACR Temperate";
        file = "CUP_AI_ACR_Temperate";
        climate[] = {"temperate","tropical","arctic"};
    };

    class CUP_AFRF_Arid : CUP_Base
    {
        side = "Inv";
        flagTexture = "\CUP\BaseConfigs\CUP_BaseConfigs\data\Flags\flag_rus_co.paa";
        name = "CUP AFRF Arid";
        file = "CUP_AI_AFRF_Arid";
        climate[] = {"arid"};
        description = $STR_A3AP_setupFactionsTab_aegis_afrf;
    };
    class CUP_AFRF_Temperate : CUP_AFRF_Arid
    {
        name = "CUP AFRF Temperate";
        file = "CUP_AI_AFRF_Temperate";
        climate[] = {"temperate","tropical"};
    };
    class CUP_AFRF_Arctic : CUP_AFRF_Arid
    {
        name = "CUP AFRF Arctic";
        file = "CUP_AI_AFRF_Arctic";
        climate[] = {"arctic"};
    };

    class CUP_NATO_Temperate : CUP_Base
    {
        side = "Occ";
        flagTexture = "\A3\Data_F\Flags\Flag_NATO_CO.paa";
        name = "CUP NATO Temperate";
        file = "CUP_AI_NATO_Temperate";
    };

    class CUP_BAF_Arid : CUP_Base
    {
        side = "Occ";
        flagTexture = "\A3\Data_F\Flags\flag_uk_co.paa";
        name = "CUP BAF Arid";
        file = "CUP_AI_BAF_Arid";
        climate[] = {"arid"};
    };
    class CUP_BAF_Temperate : CUP_BAF_Arid
    {
        name = "CUP BAF Temperate";
        file = "CUP_AI_BAF_Temperate";
        climate[] = {"temperate","tropical","arctic"};
    };

    class CUP_CDF_Arctic : CUP_Base
    {
        side = "Occ";
        flagTexture = "cup\baseconfigs\cup_baseconfigs\data\flags\flag_cdf_co.paa";
        name = "CUP CDF Arctic";
        file = "CUP_AI_CDF_Arctic";
        climate[] = {"arctic"};
        maps[] = {"chernarus_winter"};
        description = $STR_A3AP_setupFactionsTab_cdf;
    };
    class CUP_CDF_Temperate : CUP_CDF_Arctic
    {
        name = "CUP CDF Temperate";
        file = "CUP_AI_CDF_Temperate";
        climate[] = {"temperate"};
        maps[] = {"chernarus_summer","chernarus"};
    };

    class CUP_RACS_Arid : CUP_Base
    {
        side = "Occ";
        flagTexture = "\CUP\BaseConfigs\CUP_BaseConfigs\data\Flags\flag_racs_co.paa";
        name = "CUP RACS Arid";
        file = "CUP_AI_RACS_Arid";
        climate[] = {"arid"};
        maps[] = {"sara"};
    };
    class CUP_RACS_Tropical : CUP_RACS_Arid
    {
        name = "CUP RACS Tropical";
        file = "CUP_AI_RACS_Tropical";
        climate[] = {"tropical"};
        maps[] = {"tanoa"};
    };

    class CUP_SLA : CUP_Base
    {
        side = "Inv";
        flagTexture = "\CUP\BaseConfigs\CUP_BaseConfigs\data\Flags\flag_sla_co.paa";
        name = "CUP SLA";
        file = "CUP_AI_SLA_Temperate";          // Sahrani is a bit weird
        climate[] = {"arid","temperate"};
        maps[] = {"sara"};
    };

    class CUP_TKA : CUP_Base
    {
        side = "Occ";
        flagTexture = "\CUP\BaseConfigs\CUP_BaseConfigs\data\Flags\flag_tka_co.paa";
        name = "CUP TKA";
        file = "CUP_AI_TKA_Arid";
        climate[] = {"arid"};
        maps[] = {"takistan","kunduz"};
    };

    class CUP_USAF_Arid : CUP_Base
    {
        side = "Inv";
        flagTexture = "a3\data_f\flags\flag_us_co.paa";
        name = "CUP US Army Arid";
        file = "CUP_AI_US_Army_Arid";
        climate[] = {"arid"};
        description = $STR_A3AP_setupFactionsTab_usaf;
    };
    class CUP_USAF_Temperate : CUP_USAF_Arid
    {
        name = "CUP US Army Temperate";
        file = "CUP_AI_US_Army_Temperate";
        climate[] = {"temperate","tropical","arctic"};
    };

    class CUP_USMC_Arid : CUP_Base
    {
        side = "Inv";
        flagTexture = "a3\data_f\flags\flag_us_co.paa";
        name = "CUP USMC Arid";
        file = "CUP_AI_US_Marine_Arid";
        climate[] = {"arid"};
        description = $STR_A3AP_setupFactionsTab_usmc;
    };
    class CUP_USMC_Temperate : CUP_USMC_Arid
    {
        name = "CUP USMC Temperate";
        file = "CUP_AI_US_Marine_Temperate";
        climate[] = {"temperate","tropical","arctic"};
    };

    class CUP_ION_Arid : CUP_Base
    {
        side = "Occ";
        flagTexture = "\A3\Data_F\Flags\flag_ion_CO.paa";
        name = "CUP ION Arid";
        file = "CUP_AI_ION_Arid";
        climate[] = {"arid","temperate","tropical"};
    };
    class CUP_ION_Temperate : CUP_ION_Arid
    {
        name = "CUP ION Arctic";
        file = "CUP_AI_ION_Arctic";
        climate[] = {"arctic"};
    };

    class CUP_BW_Arid : CUP_Base
    {
        side = "Occ";
        flagTexture = "cup\baseconfigs\cup_baseconfigs\data\flags\flag_ger_co.paa";
        name = "CUP BW Arid";
        file = "CUP_AI_BW_Arid";
        climate[] = {"arid"};
    };
        class CUP_BW_Temperate : CUP_BW_Arid
    {
        name = "CUP BW Temperate";
        file = "CUP_AI_BW_Temperate";
        climate[] = {"arctic","temperate","tropical"};
    };
        class CUP_HIL : CUP_Base
    {
        side = "Occ";
        flagTexture = "a3\data_f_exp\flags\flag_tanoa_co.paa";
        name = "CUP HIL";
        file = "CUP_AI_HIL";
        climate[] = {"temperate","tropical"};
    };
    
	
    class LDF_Base : CUP_Base
    {
        requiredAddons[] = {"CUP_Creatures_People_Civil_Russia", "CUP_BaseConfigs", "CUP_AirVehicles_Core", "Flex_CUP_LDF_Faction"};        // units, weapons, vehicles
        //requiredAddons[] = {"CUP_AirVehicles_Core"};        // vehicles requires units & weapons
        priority = 61;
    };
	
    class CUP_LDF : LDF_Base
    {
        side = "Occ";
        flagTexture = "a3\data_f_enoch\flags\flag_enoch_co.paa";
        name = "CUP LDF";
        file = "CUP_AI_LDF";
    };
    class HAFM_Base : CUP_Base
    {
        requiredAddons[] = {"CUP_Creatures_People_Civil_Russia", "CUP_BaseConfigs", "CUP_AirVehicles_Core", "HAFM_Acc"};
        priority = 61;
	};
    //CUP NorAF
    class NorAF_Base : CUP_Base
    {
        requiredAddons[] = {"CUP_Creatures_People_Civil_Russia", "CUP_BaseConfigs", "CUP_AirVehicles_Core", "Flex_CUP_NOR_Faction"};        // units, weapons, vehicles
        //requiredAddons[] = {"CUP_AirVehicles_Core"};        // vehicles requires units & weapons
        priority = 61;
    };

    class CUP_HAFM : HAFM_Base
    {
        side = "Occ";
        flagTexture = "\A3\ui_f\data\map\markers\flags\Greece_ca.paa";
        name = "CUP HAFM";
        file = "CUP_AI_HAFM";
	};
    class CUP_NorAF_Temperate : NorAF_Base
    {
        side = "Occ";
        flagTexture = "\A3\ui_f\data\map\markers\flags\Norway_ca.paa";
        name = "CUP NorAF Temperate";
        file = "CUP_AI_NorAF_Temperate";
        climate[] = {"temperate","tropical"};
    };

    class CUP_NorAF_Arctic : CUP_NorAF_Temperate
    {
        name = "CUP NorAF Arctic";
        file = "CUP_AI_NorAF_Arctic";
        climate[] = {"arctic"};
    };

    class EST_Base : CUP_Base
    {
        requiredAddons[] = {"CUP_Creatures_People_Civil_Russia", "CUP_BaseConfigs", "CUP_AirVehicles_Core", "Estraria_Army", "DEGA_Vehicles_V22", "BVC_Facewear"};
        priority = 61;
    };
	
    class CUP_EST : EST_Base
    {
        side = "Occ";
        flagTexture = "\EST_Markers\Data\Marker_EST.paa";
        name = "CUP EST";
        file = "CUP_AI_EST";
    };


    // REB - RIV - CIV just to fix weird errors

    // CUP

    class CUP_TKM : CUP_Base
    {
        side = "Reb";
        flagTexture = "\CUP\BaseConfigs\CUP_BaseConfigs\data\Flags\flag_tka_co.paa";
        name = "CUP TKM";
        file = "CUP_Reb_TKM";
    };
    class CUP_Reb : CUP_Base
    {
        side = "Reb";
        flagTexture = "cup\baseconfigs\cup_baseconfigs\data\flags\flag_napa_co.paa";
        name = "CUP NAPA";
        file = "CUP_Reb_NAPA";
        description = $STR_A3AP_setupFactionsTab_napa_3cbf;
    };
    class CUP_Reb_EM : CUP_Reb
    {
        name = "Eastern Loyalists";
        flagTexture = QPATHTOFOLDER(Templates\CUP\images\flag_old_soviet_co.paa);
        file = "CUP_Reb_EM";
        description = "A generic militarized militia using surplus or outdated Soviet technology. Loyal to the East. Consider this a more forgiving start than most.";
    };
    class CUP_Reb_WM : CUP_Reb
    {
        name = "Western Loyalists";
        flagTexture = QPATHTOFOLDER(Templates\CUP\images\flag_old_nato_co.paa);
        file = "CUP_Reb_WM";
        description = "A generic militarized militia using surplus or outdated NATO technology. Loyal to the West. Consider this a more forgiving start than most.";
    };
    class CUP_TKC : CUP_Base
    {
        side = "Civ";
        flagTexture = "\CUP\BaseConfigs\CUP_BaseConfigs\data\Flags\flag_tka_co.paa";
        name = "CUP TKC";
        file = "CUP_Civ_TKC";
    };
    class CUP_Civ : CUP_Base
    {
        side = "Civ";
        flagTexture = "\CUP\BaseConfigs\CUP_BaseConfigs\data\Flags\flag_chernarus_co.paa";
        name = "CUP CHC";
        file = "CUP_Civ_CHC";
    };
    class CUP_CHDKZ : CUP_Base
    {
        side = "Riv";
        flagTexture = "\CUP\BaseConfigs\CUP_BaseConfigs\data\Flags\flag_chdkz_co.paa";
        name = "CUP CHDKZ";
        file = "CUP_Riv_CHDKZ";
        description = $STR_A3AP_setupFactionsTab_chdkz;
    };
    class CUP_LRI : CUP_Base
    {
        side = "Reb";
        flagTexture = QPATHTOFOLDER(Templates\CUP\flag_LRI_co.paa);
        name = "CUP LRI";
        file = "CUP_Reb_LRI";
        description = $STR_A3AP_setupFactionsTab_CUP_LRI;
    };

    // RHS

    class RHS_Civ : RHS_Base
    {
        side = "Civ";
        flagTexture = "a3\data_f\flags\flag_fia_co.paa";
        logo = "rhsgref\addons\rhsgref_main\data\rhs_logo_ca.paa";
        name = "RHS";
        file = "RHS_Civ";
    };

    // Aegis 

    class Aegis_Base : Base
    {
        requiredAddons[] = {"Weapons_1_F_lxWS","A3_Aegis_Armor_F_Aegis_APC_Tracked_02", "A3_Atlas_Armor_F_Atlas_APC_Tracked_02", "A3_Opf_Armor_F_Opf_APC_Tracked_02"};
        logo = "A3_Aegis\data_f_aegis\logos\arma3_aegis_logo_ca.paa";
        basepath = QPATHTOFOLDER(Templates\Aegis); //the path to the template folder
        priority = 20;
        equipFlags[] = {"vanilla"};
    };

    class Aegis_AUKUS_Arid : Aegis_Base
    {
        side = "Occ";
        flagTexture = "\A3\Data_F\Flags\flag_uk_CO.paa";
        name = "Aegis AUKUS Arid";
        file = "Aegis_AI_AUKUS_Arid";
        climate[] = {"arid"};
        description = $STR_A3AP_setupFactionsTab_aegis_aukus;
    };
    class Aegis_AUKUS_Temperate : Aegis_AUKUS_Arid
    {
        name = "Aegis AUKUS Temperate";
        file = "Aegis_AI_AUKUS_Temperate";
        climate[] = {"temperate"};
    };
    class Aegis_AUKUS_Tropical : Aegis_AUKUS_Arid
    {
        name = "Aegis AUKUS Tropical";
        file = "Aegis_AI_AUKUS_Tropical";
        climate[] = {"tropical"};
    };

    class Aegis_AFRF_Arid : Aegis_Base
    {
        side = "Inv";
        flagTexture = "\A3_Aegis\Data_F_Aegis\Flags\flag_RUS_CO.paa";
        name = "Aegis AFRF Arid";
        file = "Aegis_AI_AFRF_Arid";
        climate[] = {"arid"};
        description = $STR_A3AP_setupFactionsTab_aegis_afrf;
    };

    class Aegis_AFRF_Temperate : Aegis_Base
    {
        side = "Inv";
        flagTexture = "\A3_Aegis\Data_F_Aegis\Flags\flag_RUS_CO.paa";
        name = "Aegis AFRF Temperate";
        file = "Aegis_AI_AFRF_Temperate";
        climate[] = {"temperate"};
        description = $STR_A3AP_setupFactionsTab_aegis_afrf;
    };

    class Aegis_AAF : Aegis_Base
    {
        side = "Occ";
        flagTexture = "a3\data_f\flags\flag_aaf_co.paa";
        name = "Aegis AAF";
        file = "Aegis_AI_AAF";
        maps[] = {"altis", "malden"};
        climate[] = {"arid"};
        description = $STR_A3AP_setupFactionsTab_aaf;
    };

    class Aegis_CSAT_Arid : Aegis_Base
    {
        side = "Inv";
        flagTexture = "A3\Data_F\Flags\Flag_CSAT_CO.paa";
        name = "Aegis CSAT Arid";
        file = "Aegis_AI_CSAT_Arid";
        climate[] = {"arid", "arctic"};
        description = $STR_A3AP_setupFactionsTab_csat;
    };
    class Aegis_CSAT_Temperate : Aegis_CSAT_Arid
    {
        name = "Aegis CSAT Temperate";
        file = "Aegis_AI_CSAT_Temperate";
        climate[] = {"temperate"};
    };

    class Aegis_NATO_Arid : Aegis_Base
    {
        side = "Occ";
        flagTexture = "\A3\Data_F\Flags\Flag_NATO_CO.paa";
        name = "Aegis NATO Arid";
        file = "Aegis_AI_NATO_Arid";
        climate[] = {"arid"};
        description = $STR_A3AP_setupFactionsTab_nato;
    };
    class Aegis_NATO_Temperate : Aegis_NATO_Arid
    {
        name = "Aegis NATO Temperate";
        file = "Aegis_AI_NATO_Temperate";
        climate[] = {"temperate"};
    };
    class Aegis_NATO_Tropical : Aegis_NATO_Arid
    {
        name = "Aegis NATO Tropical";
        file = "Aegis_AI_NATO_Tropical";
        climate[] = {"tropical"};
    };

    class Aegis_FIA : Aegis_Base
    {
        side = "Reb";
        flagTexture = "a3\data_f\flags\flag_fia_co.paa";
        name = "Aegis FIA";
        file = "Aegis_Reb_FIA";
        climate[] = {"arid"};
        description = $STR_A3AP_setupFactionsTab_fia;
    };

    class Aegis_SDK : Aegis_Base
    {
        side = "Reb";
        flagTexture = "\A3\Data_F_Exp\Flags\flag_SYND_CO.paa";
        name = "Aegis SDK";
        file = "Aegis_Reb_SDK";
        climate[] = {"tropical"};
        description = $STR_A3AP_setupFactionsTab_sdk;
    };

    class Aegis_LM : Aegis_Base
    {
        side = "Reb";
        flagTexture = "\A3_Aegis\Data_F_Aegis\Flags\flag_Looters_CO.paa";
        name = "Aegis LM";
        file = "Aegis_Reb_LM";
        climate[] = {"temperate"};
        description = $STR_A3AP_setupFactionsTab_lm;
    };

    class Aegis_CHDKZ : Aegis_Base
    {
        side = "Riv";
        flagTexture = "A3_Opf\Data_F_Opf\Flags\flag_ChDKZ_CO.paa";
        name = "Aegis CHDKZ";
        file = "Aegis_Riv_CHDKZ";
        description = $STR_A3AP_setupFactionsTab_chdkz;
    };

    class Aegis_Ion : Aegis_Base
    {
        side = "Riv";
        flagTexture = "A3_Aegis\Data_F_Aegis\Flags\flag_ION_CO.paa";
        name = "Aegis Ion PMC";
        file = "Aegis_Riv_Ion";
        description = $STR_A3AP_setupFactionsTab_ion;
    };

    class Aegis_Civ : Aegis_Base
    {
        side = "Civ";
        flagTexture = "\A3\Data_F\Flags\Flag_Altis_CO.paa";
        name = "Aegis";
        file = "Aegis_Civ";
        description = $STR_A3AP_setupFactionsTab_vanilla_civ;
    };

    class 3CBF_FIA : 3CBF_Base
    {
        side = "Reb";
        flagTexture = "a3\data_f\flags\flag_fia_co.paa";
        name = "3CBF FIA";
        file = "3CBF_Reb_FIA";
        description = $STR_A3AP_setupFactionsTab_fia_3cbf;
    };

    class 3CBF_NAPA : 3CBF_Base
    {
        side = "Reb";
        flagTexture = "\UK3CB_Factions\addons\UK3CB_Factions_NAP\Flag\nap_flag_co.paa";
        name = "3CBF NAPA";
        file = "3CBF_Reb_NAPA";
        description = $STR_A3AP_setupFactionsTab_napa_3cbf;
    };

    class 3CBF_CCM : 3CBF_Base
    {
        side = "Reb";
        flagTexture = "\UK3CB_Factions\addons\UK3CB_Factions_CCM\Flag\ccm_o_flag_co.paa";
        name = "3CBF CCM";
        file = "3CBF_Reb_CCM";
        description = $STR_A3AP_setupFactionsTab_ccm_3cbf;
    };

    class 3CBF_TKM : 3CBF_Base
    {
        side = "Reb";
        flagTexture = "uk3cb_factions\addons\uk3cb_factions_tkm\flag\tkm_b_flag_co.paa";
        name = "3CBF TKM";
        file = "3CBF_Reb_TKM";
        maps[] = {"takistan", "SefrouRamal"};
        description = $STR_A3AP_setupFactionsTab_tkm_3cbf;
    };

    class 3CBF_Reb_ION : 3CBF_CCM
    {
        flagTexture = "uk3cb_factions\addons\uk3cb_factions_ion\flag\ion_flag_co.paa";
        name = "3CBF ION";
        file = "3CBF_Reb_ION";
        description = "";
    };

    class 3CBF_CHDKZ : 3CBF_Base
    {
        side = "Riv";
        flagTexture = "\rhsgref\addons\rhsgref_main\data\flag_chdkz_co.paa";
        name = "3CBF CHDKZ";
        file = "3CBF_Riv_CHDKZ";
        description = $STR_A3AP_setupFactionsTab_chdkz;
    };

    class 3CBF_CHDKZ_CW : 3CBF_CHDKZ
    {
        name = "3CBF CHDKZ (Cold War)";
        file = "3CBF_Riv_CHDKZ_CW";
        priority = 39;
    };

    class 3CBF_TI : 3CBF_Base
    {
        side = "Riv";
        flagTexture = "\UK3CB_Factions\addons\UK3CB_Factions_TKC\Flag\tkc_flag_co.paa";
        name = "3CBF TI";
        file = "3CBF_Riv_TI";
        maps[] = {"takistan", "SefrouRamal"};
        climate[] = {"arid"};
        description = $STR_A3AP_setupFactionsTab_ti;
    };

    class 3CBF_CHC : 3CBF_Base
    {
        side = "Civ";
        flagTexture = "\UK3CB_Factions\addons\UK3CB_Factions_CHC\Flag\CHC_flag_co.paa";
        name = "3CBF Eastern European";
        file = "3CBF_Civ_CHC";
        description = $STR_A3AP_setupFactionsTab_easterneuropean;
        climate[] = {"temperate"};
    };

    class 3CBF_A : 3CBF_Base
    {
        side = "Civ";
        flagTexture = "\UK3CB_Factions\addons\UK3CB_Factions_ADC\Flag\ADC_flag_co.paa";
        name = "3CBF Arid";
        file = "3CBF_Civ_A";
        description = $STR_A3AP_setupFactionsTab_a;
        climate[] = {"arid"};
    };

    class 3CBF_TKC: 3CBF_Base
    {
        side = "Civ";
        flagTexture = "\UK3CB_Factions\addons\UK3CB_Factions_TKA\Flag\tka_flag_co.paa";
        name = "3CBF Takistan";
        file = "3CBF_Civ_TKC";
        climate[] = {"arid"};
        maps[] = {"takistan", "SefrouRamal"};
        description = $STR_A3AP_setupFactionsTab_takistan;
    };



};

