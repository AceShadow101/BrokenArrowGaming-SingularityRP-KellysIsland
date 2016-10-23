class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: ARRAY (This is for limiting items to certain things)
    *            0: Variable to read from
    *            1: Variable Value Type (SCALAR / BOOL /EQUAL)
    *            2: What to compare to (-1 = Check Disabled)
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", "" },
            { "A3L_Cooper_concept_black", "" },
            { "A3L_Cooper_concept_blue", "" },
            { "Mrshounka_a3_smart_civ_noir", "" },
            { "Mrshounka_a3_smart_civ_bleu", "" },
            { "civ_crown_black", "" },
            { "civ_crown_blue", "" },
            { "civ_crown_gray", "" },
            { "Mrshounka_twingo_p_noir", "" },
            { "Mrshounka_twingo_p_bf", "" },
            { "Mrshounka_twingo_p_g", "" },
            { "IVORY_PRIUS", "" },
            { "Mrshounka_corbillard_c_noir", "" },
            { "Mrshounka_corbillard_c_bleufonce", "" },
            { "Mrshounka_corbillard_c_violet", "" },
            { "Mrshounka_corbillard_c_orange", "" },
            { "Mrshounka_golfvi_noir", "" },
            { "Mrshounka_golfvi_bleufonce", "" },
            { "Mrshounka_golfvi_rouge", "" },
            { "Mrshounka_golfvi_jaune", "" },
            { "Mrshounka_golfvi_orange", "" },
            { "Mrshounka_subaru08_noir", "" },
            { "Mrshounka_subaru08_bleufonce", "" },
            { "Mrshounka_subaru08_grise", "" },
            { "Mrshounka_subaru08_jaune", "" },
            { "Mrshounka_subaru08_rouge", "" },
            { "MG_Honda_Civic_TypeR_04_Black", "" },
            { "MG_Honda_Civic_TypeR_04_Blue", "" },
            { "MG_Honda_Civic_TypeR_04_Red", "" },
            { "MG_Honda_Civic_TypeR_04_Silver", "" },
            { "MG_Honda_Civic_TypeR_04_Yellow", "" },
            { "MG_Honda_Civic_TypeR_04_Green", "" },
            { "MG_Honda_Civic_TypeR_04_White", "" },
            { "MG_Honda_Civic_TypeR_04_Pink", "" },
            { "MG_Honda_Civic_TypeR_04_Purple", "" },
            { "MG_Honda_Civic_TypeR_04_Whitecamo", "" },
            { "ivory_wrx", "" },
            { "ivory_evox", "" },
            { "ivory_r34", "" },
            { "ivory_supra", "" },
            { "ivory_supra_topsecret", "" },
            { "ivory_isf", "" },
            { "beetle_bleufonce", "" },
            { "beetle_bleupetrole", "" },
            { "beetle_red", "" },
            { "beetle_violet", "" },
            { "beetle_white", "" },
            { "beetle_psycha", "" },
            { "beetle_psycha1", "" },
            { "beetle_coci", "" },
            { "beetle_camo", "" },
            { "shounka_buggy_noir", "" },
            { "shounka_buggy_rouge", "" },
            { "shounka_buggy_bleufonce", "" },
            { "shounka_buggy_violet", "" },
            { "Mrshounka_Vandura_civ_noir", "" },
            { "ivory_elise", "" }

        };
    };

    class bike_car {
        side = "civ";
        vehicles[] = {
            { "Mrshounka_ducati_p_noir", "" },
            { "Mrshounka_ducati_p_bf", "" },
            { "Mrshounka_ducati_p_r", "" },
            { "Mrshounka_ducati_p_j", "" },
            { "Mrshounka_yamaha_p_noir", "" },
            { "Mrshounka_yamaha_p_bf", "" },
            { "Mrshounka_yamaha_p_r", "" },
            { "Mrshounka_yamaha_p_j", "" }
        };
    };

    class exotic_car {
        side = "civ";
        vehicles[] = {
            { "Mrshounka_Bowler_c_noir", "" },
            { "Mrshounka_Bowler_c_bleufonce", "" },
            { "Mrshounka_Bowler_c_rouge", "" },
            { "Mrshounka_Bowler_c_jaune", "" },
            { "Mrshounka_Bowler_c_orange", "" },
            { "Mrshounka_Bowler_c_violet", "" },
            { "Mrshounka_a3_gtr_civ_noir", "" },
            { "Mrshounka_a3_gtr_civ_bleu", "" },
            { "S_Vantage_Red", "" },
            { "S_Vantage_Black", "" },
            { "S_Vantage_Blue", "" },
            { "S_Vantage_Yellow", "" },
            { "Tal_Maserati_Red", "" },
            { "Tal_Maserati_Lime", "" },
            { "Tal_Maserati_Black", "" },
            { "Tal_Maserati_Purple", "" },
            { "Jonzie_Viper", "" },
            { "ivory_c", "" },
            { "IVORY_REV", "" },
            { "ivory_lfa", "" },
            { "ivory_lp560", "" },
            { "MG_Audi_R8_11_Black", "" },
            { "MG_Audi_R8_11_Blue", "" },
            { "MG_Audi_R8_11_Red", "" },
            { "MG_Audi_R8_11_Silver", "" },
            { "MG_Audi_R8_11_Yellow", "" },
            { "MG_Audi_R8_11_Green", "" },
            { "MG_Audi_R8_11_White", "" },
            { "MG_Audi_R8_11_Pink", "" },
            { "MG_Audi_R8_11_Purple", "" },
            { "ivory_f1", "" },
            { "ivory_mp4", "" },
            { "Mrshounka_pagani_c_noir", "" },
            { "Mrshounka_pagani_c_rouge", "" },
            { "Mrshounka_pagani_c_jaune", "" },
            { "Mrshounka_agera_p_noir", "" },
            { "Mrshounka_agera_p_bleu", "" },
            { "Mrshounka_agera_p_jaune", "" },
            { "urbanized_lp700_pink", "" },
            { "urbanized_lp700_orange", "" },
            { "urbanized_lp700_lime", "" },
            { "urbanized_lp700_blue", "" },
            { "urbanized_lp700_purple", "" },
            { "urbanized_lp700_red", "" },
            { "urbanized_lp700_white", "" },
            { "urbanized_lp700_yellow", "" },
            { "urbanized_LaFerrari_pink", "" },
            { "urbanized_LaFerrari_purple", "" },
            { "urbanized_LaFerrari_red", "" },
            { "urbanized_LaFerrari_white", "" },
            { "urbanized_LaFerrari_yellow", "" },
            { "urbanized_LaFerrari_black", "" },
            { "urbanized_LaFerrari_blue", "" },
            { "urbanized_LaFerrari_darkred", "" },
            { "urbanized_LaFerrari_hotpink", "" },
            { "urbanized_LaFerrari_lime", "" },
            { "urbanized_LaFerrari_orange", "" },
            { "urbanized_LaFerrari_black_S", "" },
            { "urbanized_LaFerrari_blue_S", "" },
            { "urbanized_LaFerrari_lime_S", "" },
            { "Mrshounka_lykan_c_noir", "" },
            { "Mrshounka_lykan_c_jaune", "" },
            { "Mrshounka_lykan_c_rouge", "" },
            { "Mrshounka_lykan_c_grise", "" },
            { "ivory_veyron", "" }
        };
    };

    class german_car {
            side = "civ";
            vehicles[] = {
                { "Mrshounka_Touareg_noir", "" },
                { "Mrshounka_Touareg_rouge", "" },
                { "Mrshounka_Touareg_jaune", "" },
                { "ivory_gti", "" },
                { "ivory_rs4", "" },
                { "Mrshounka_bmwm1_civ_noir", "" },
                { "Mrshounka_bmwm1_civ_bleufonce", "" },
                { "Mrshounka_bmwm1_civ_rouge", "" },
                { "Mrshounka_bmwm1_civ_grise", "" },
                { "Mrshounka_bmwm1_civ_orange", "" },
                { "ivory_e36", "" },
                { "ivory_m3", "" },
                { "Mrshounka_bmwm6_noir", "" },
                { "Mrshounka_bmwm6_bleufonce", "" },
                { "Mrshounka_bmwm6_rouge", "" },
                { "Mrshounka_bmwm6_jaune", "" },
                { "Mrshounka_bmwm6_grise", "" },
                { "Mrshounka_cayenne_p_noir", "" },
                { "Mrshounka_cayenne_p_jaune", "" },
                { "Mrshounka_cayenne_p_rouge", "" },
                { "Mrshounka_cayenne_p_grise", "" },
                { "shounka_a3_rs5_civ_rouge", "" },
                { "shounka_a3_rs5_civ_noir", "" },
                { "shounka_a3_rs5_civ_bleufonce", "" },
                { "shounka_a3_rs5_civ_jaune", "" },
                { "shounka_a3_rs5_civ_grise", "" },
                { "shounka_rs6_grise", "" },
                { "shounka_rs6_noir", "" },
                { "shounka_rs6_jaune", "" },
                { "shounka_rs6_bleufonce", "" },
                { "Mrshounka_c63_2015_noir", "" },
                { "Mrshounka_c63_2015_mat_n", "" },
                { "Mrshounka_c63_2015_rouge", "" },
                { "Mrshounka_c63_2015_jaune", "" },
                { "urbanized_g65_yellow", "" },
                { "urbanized_g65_white", "" },
                { "urbanized_g65_red", "" },
                { "urbanized_g65_purple", "" },
                { "urbanized_g65_black", "" },
                { "urbanized_g65_blue", "" },
                { "urbanized_g65_lime", "" },
                { "urbanized_g65_orange", "" },
                { "urbanized_g65_pink", "" },
                { "shounka_clk_noir", "" },
                { "shounka_clk_rouge", "" },
                { "shounka_clk_jaune", "" },
                { "shounka_porsche911_noir", "" },
                { "shounka_porsche911_jaune", "" },
                { "shounka_porsche911_rouge", "" },
                { "shounka_porsche911_bleufonce", "" },
                { "S_PorscheRS_Black", "" },
                { "S_PorscheRS_White", "" },
                { "S_PorscheRS_Yellow", "" }
            };
        };

        class italian_car {
            side = "civ";
            vehicles[] = {
                { "Mrshounka_Alfa_Romeo_noir", "" },
                { "Mrshounka_Alfa_Romeo_bleufonce", "" },
                { "Mrshounka_Alfa_Romeo_rouge", "" },
                { "Mrshounka_Alfa_Romeo_jaune", "" },
                { "Mrshounka_Alfa_Romeo_orange", "" },
                { "Mrshounka_Alfa_Romeo_grise", "" },
                { "shounka_f430_spider_noir", "" },
                { "shounka_f430_spider_jaune", "" },
                { "shounka_f430_spider_rouge", "" },
                { "shounka_f430_spider_violet", "" },
                { "urbanized_granturismo_orange", "" },
                { "urbanized_granturismo_purple", "" },
                { "urbanized_granturismo_white", "" },
                { "urbanized_granturismo_yellow", "" },
                { "urbanized_granturismo_black", "" },
                { "urbanized_granturismo_blue", "" },
                { "urbanized_granturismo_darkred", "" },
                { "urbanized_granturismo_hotpink", "" },
                { "urbanized_granturismo_lime", "" },
                { "Mrshounka_veneno_c_noir", "" },
                { "Mrshounka_veneno_c_bleu", "" },
                { "Mrshounka_veneno_c_jaune", "" }
            };
        };

        class american_car {
            side = "civ";
            vehicles[] = {
                { "Mrshounka_jeep_blinde_noir", "" },
                { "Mrshounka_jeep_blinde_noir_mat", "" },
                { "Mrshounka_jeep_blinde_rouge", "" },
                { "Mrshounka_jeep_blinde_rouge_mat", "" },
                { "Mrshounka_jeep_blinde_blanc", "" },
                { "Mrshounka_hummer_civ_noir", "" },
                { "Mrshounka_hummer_civ_bleufonce", "" },
                { "Mrshounka_hummer_civ_jaune", "" },
                { "Mrshounka_hummer_civ_rouge", "" },
                { "shounka_h2_rouge", "" },
                { "shounka_h2_noir", "" },
                { "shounka_h2_jaune", "" },
                { "shounka_transam_noir", "" },
                { "shounka_transam_rouge", "" },
                { "shounka_transam_jaune", "" },
                { "Mrshounka_mustang_noir", "" },
                { "Mrshounka_mustang_mat_n", "" },
                { "Mrshounka_mustang_rouge", "" },
                { "Mrshounka_mustang_jaune", "" },
                { "Mrshounka_mustang_orange", "" },
                { "Mrshounka_a3_dodge15_civ_noir", "" },
                { "Mrshounka_a3_dodge15_civ_bleu", "" },
                { "Mrshounka_a3_dodge15_civ_rouge", "" },
                { "Mrshounka_a3_dodge15_civ_jaune", "" },
                { "Mrshounka_a3_dodge15_civ_rose", "" },
                { "Mrshounka_a3_dodge15_civ_grise", "" },
                { "Mrshounka_a3_dodge15_civ_violet", "" },
                { "Mrshounka_a3_dodge15_civ_orange", "" },
                { "A3L_Camaro", "" },
                { "Mrshounka_raptor_noir", "" },
                { "Mrshounka_raptor_rouge", "" },
                { "Mrshounka_raptor_jaune", "" },
                { "Mrshounka_raptor_grise", "" },
                { "Mrshounka_raptor_violet", "" },
                { "shounka_avalanche_noir", "" },
                { "shounka_avalanche_grise", "" },
                { "shounka_avalanche_rouge", "" },
                { "shounka_avalanche_jaune", "" },
                { "Mrshounka_cherokee_mat", "" },
                { "Mrshounka_cherokee_bleu", "" },
                { "Mrshounka_cherokee_bleu_mat", "" },
                { "Mrshounka_cherokee_blanc_mat", "" },
                { "Mrshounka_cherokee_rouge_mat", "" },
                { "Mrshounka_raptor2_noir", "" },
                { "Mrshounka_raptor2_rouge", "" },
                { "Mrshounka_raptor2_jaune", "" },
                { "Mrshounka_raptor2_grise", "" },
                { "Mrshounka_raptor2_violet", "" },
                { "A3L_F350Black", "" },
                { "ivory_suburban", "" },
                { "shounka_gt_noir", "" },
                { "shounka_gt_rouge", "" },
                { "shounka_gt_jaune", "" },
                { "shounka_gt_grise", "" },
                { "shounka_gt_violet", "" },
                { "shounka_monsteur_violet", "" },
                { "shounka_monsteur_grise", "" },
                { "shounka_monsteur_bleufonce", "" },
                { "shounka_monsteur_noir", "" },
                { "shounka_monsteur_jaune", "" },
                { "shounka_monsteur_rose", "" }
            };
        };

        class commercial_car {
            side = "civ";
            vehicles[] = {
                { "A3L_EscortTaxi", "" },
                { "ivory_190e_taxi", "" },
                { "ivory_rs4_taxi", "" },
                { "shounka_limo_civ_noir", "" },
                { "shounka_limo_civ_violet", "" }
            };
        };

        class classic_car {
            side = "civ";
            vehicles[] = {
                { "Mrshounka_lincoln_noir", "" },
                { "Mrshounka_lincoln_bleufonce", "" },
                { "Mrshounka_lincoln_rouge", "" },
                { "Mrshounka_lincoln_violet", "" },
                { "SAL_77TRANSAMCiv", "" },
                { "ADM_1969_Charger", "" },
                { "SAL_IROCCivBlack", "" },
                { "SAL_IROCCivSilver", "" },
                { "SAL_IROCCivRed", "" },
                { "SAL_IROCCivBlue", "" },
                { "SIG_SuperBeeB", "" },
                { "SIG_SuperBeeY", "" },
                { "SIG_SuperBeeM", "" },
                { "SIG_Roadrunner", "" },
                { "SIG_Hubcaps", "" },
                { "SIG_Hcodes", "" },
                { "SIG_Magnums", "" },
                { "ivory_gt500", "" },
                { "mrshounka_92_civ_noir", "" },
                { "mrshounka_92_civ_bleufonce", "" },
                { "mrshounka_92_civ_rouge", "" },
                { "mrshounka_92_civ_jaune", "" },
                { "mrshounka_92_civ_rose", "" },
                { "mrshounka_92_civ_grise", "" },
                { "mrshounka_92_civ_violet", "" },
                { "mrshounka_92_civ_orange", "" },
                { "Mrshounka_mercedes_190_p_orange", "" },
                { "Mrshounka_mercedes_190_p_rouge", "" },
                { "Mrshounka_mercedes_190_p_noir", "" },
                { "Mrshounka_mercedes_190_p_violet", "" },
                { "urbanized_67Mustang_orange", "" },
                { "urbanized_67Mustang_darkred", "" },
                { "urbanized_67Mustang_white", "" },
                { "urbanized_67Mustang_black", "" },
                { "urbanized_67Mustang_blue", "" },
                { "urbanized_427_black", "" },
                { "urbanized_427_blue", "" },
                { "urbanized_427_orange", "" },
                { "urbanized_427_pink", "" },
                { "urbanized_427_red", "" },
                { "urbanized_427_white", "" },
                { "urbanized_427_yellow", "" },
                { "urbanized_427_wed", "" }
            };
        };

    class kart_shop {
        side = "civ";
        vehicles[] = {
            { "C_Kart_01_Blu_F", "" },
            { "C_Kart_01_Fuel_F", "" },
            { "C_Kart_01_Red_F", "" },
            { "C_Kart_01_Vrana_F", "" }
        };
    };

    class civ_truck {
        side = "civ";
        vehicles[] = {
            { "ivory_tractor", "" },
            { "ivory_tractor2", "" },
            { "A3L_Bus", "" },
            { "A3L_Towtruck", "" },
            { "shounka_a3_spr_civ_noir", "" },
            { "Jonzie_Transit", "" },
            { "MG_AA_Tow_Truck_Black", "" },
            { "shounka_a3_brinks_noir", "" },
            { "shounka_a3_brinks_bleufonce", "" },
            { "Jonzie_Superliner", "" },
            { "Jonzie_Curtain", "" },
            { "MG_AA_Tow_Truck_Black", "" }
        };
    };

    class civ_air {
        side = "civ";
        vehicles[] = {
            { "sab_FAAllegro", "" },
            { "sab_FAAllegro_2", "" },
            { "sab_FAAllegro_3", "" },
            { "sab_FAAllegro_4", "" },
            { "sab_FAAllegro_5", "" },
            { "C_Heli_light_01_red_F", "" },
            { "C_Heli_light_01_blue_F", "" },
            { "sab_l19", "" },
            { "sab_l19_2", "" },
            { "sab_l19_3", "" },
            { "sab_RobinDR400", "" },
            { "sab_RobinDR400_2", "" },
            { "sab_RobinDR400_3", "" },
            { "sab_RobinDR400_4", "" },
            { "sab_RobinDR400_5", "" },
            { "sab_piper", "" },
            { "sab_piper2", "" },
            { "sab_piper3", "" },
            { "sab_piper4", "" },
            { "sab_piper5", "" },
            { "c_plane_civil_01_F", "" },
            { "I_c_plane_civil_01_F", "" },
            { "c_plane_civil_01_racing_F", "" },
            { "sab_camel_pro", "" },
            { "dezkit_b206_hs", "" },
            { "dezkit_b206_ls", "" },
            { "dezkit_b206_fl", "" },
            { "dezkit_b206_news", "" },
            { "I_Heli_light_03_unarmed_F", "" },
            { "sab_aeroc", "" },
            { "sab_aeroc_2", "" },
            { "sab_aeroc_3", "" },
            { "ARMSCor_A109_Civ", "" },
            { "sab_do228", "" },
            { "sab_do228_2", "" },
            { "sab_do228_3_1", "" },
            { "sab_do228_3_2", "" },
            { "sab_do228_4", "" },
            { "sab_do228_5", "" },
            { "sab_panther", "" },
            { "sab_fiat4", "" },
            { "sab_fiat5", "" },
            { "sab_alphajet12", "" },
            { "sab_alphajet10", "" },
            { "sab_alphajet13", "" },
            { "sab_alphajet9", "" },
            { "sab_alphajet11", "" }
        };
    };

     class civ_ship {
        side = "civ";
        vehicles[] = {
            { "C_Rubberboat", "" },
            { "A3L_JetSki_Yellow", "" },
            { "C_Boat_Civil_01_F", "" },
            { "A3L_Ship", "" },
            { "burnes_mk10_1", "" },
        };
    };

    class reb_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", "" },
            { "B_G_Offroad_01_F", "" },
            { "C_Heli_light_01_digital_F", "" },
            { "I_G_Van_01_fuel_F", "" },
            { "I_G_Van_01_transport_F", "" }
        };
    };

    class med_shop {
        side = "med";
        vehicles[] = {
            { "cg_stretcher", "" },
            { "A3L_CVPILBFD", "" },
            { "Ambulance", "" },
            { "ivory_suburban_ems", "" },
            { "HI_ExplorerEMS", "" },
            { "ivory_wrx_med_ems", "" },
            { "A3l_Charger_EMS_Fast", "" },
            { "A3L_LadderTruck", "" }
        };
    };

    class med_air {
        side = "med";
        vehicles[] = {
            { "C_Heli_light_01_elliptical_F", "" },
            { "dezkit_b206_rescue", "" },
            { "dezkit_b206_ems", "" },
            { "UH1H_Medevac", "" },
            { "ARMSCor_A109LUH_I", "" },
            { "ivory_wrx_med_ems", "" },
            { "USAF_HH60GMED", "" },
            { "O_Heli_Light_02_unarmed_F", "" }
        };
    };

    class med_air_hs {
        side = "med";
        vehicles[] = {
            { "C_Heli_Light_01_elliptical_F", "" }
        };
    };

    class med_air_hs {
        side = "med";
        vehicles[] = {
            { "B_Lifeboat", "" },
            { "C_Boat_Civil_01_rescue_F", "" },
            { "B_SDV_01_F", "" }


        };
    };

    class cop_car {
        side = "cop";
        vehicles[] = {
            { "Aus_PD", "FETCH_CONST(life_coplevel) >= 2" },
            { "A3L_TaurusFPBLBCSO", "FETCH_CONST(life_coplevel) >= 2" },
            { "A3L_TaurusCO2", "FETCH_CONST(life_coplevel) >= 2" },
            { "DAR_ImpalaPolice", "FETCH_CONST(life_coplevel) >= 3" },
            { "A3L_Charger_HWP", "FETCH_CONST(life_coplevel) >= 4" },
            { "DAR_TahoePolice", "FETCH_CONST(life_coplevel) >= 4" },
            { "DAR_ExplorerPolice", "FETCH_CONST(life_coplevel) >= 5" },
            { "Aus_UC", "FETCH_CONST(life_coplevel) >= 5" },
            { "Aus_UC_gray", "FETCH_CONST(life_coplevel) >= 5" },
            { "Aus_UC_blue", "FETCH_CONST(life_coplevel) >= 5" },
            { "urbanized_ctsv_uc1", "FETCH_CONST(life_coplevel) >= 5" },
            { "urbanized_ctsv_uc2", "FETCH_CONST(life_coplevel) >= 5" },
            { "urbanized_ctsv_uc3", "FETCH_CONST(life_coplevel) >= 5" },
            { "DAR_ExplorerPoliceStealth", "FETCH_CONST(life_coplevel) >= 5" },
            { "A3L_ChargerUC_Black_New", "FETCH_CONST(life_coplevel) >= 5" },
            { "A3L_ChargerUC_Blue_New", "FETCH_CONST(life_coplevel) >= 5" },
            { "A3L_ChargerUC_white_New", "FETCH_CONST(life_coplevel) >= 5" },
            { "urbanized_g65_uc1", "FETCH_CONST(life_coplevel) >= 6" },
            { "urbanized_g65_uc3", "FETCH_CONST(life_coplevel) >= 6" },
            { "demian2435_swat_hunter", "FETCH_CONST(life_coplevel) >= 6" },
            { "shounka_a3_suburbangign", "FETCH_CONST(life_coplevel) >= 6" },
            { "urbanized_g65_uc2", "FETCH_CONST(life_coplevel) >= 7" },
            { "urbanized_LP700_P", "FETCH_CONST(life_coplevel) >= 7" },

        };
    };

    class cop_air {
        side = "cop";
        vehicles[] = {

          { "C_Heli_light_01_sheriff_F", "FETCH_CONST(life_coplevel) >= 5" },
          { "B_Heli_light_01_F", "FETCH_CONST(life_coplevel) >= 5" },
          { "O_Heli_Light_02_unarmed_F", "FETCH_CONST(life_coplevel) >= 5" },
          { "UH1N_Black", "FETCH_CONST(life_coplevel) >= 5" },
          { "dezkit_b206_fbi", "FETCH_CONST(life_coplevel) >= 5" },
          { "ARMSCor_A109LUH_B", "FETCH_CONST(life_coplevel) >= 5" }
        };
    };

    class cop_airhq {
        side = "cop";
        vehicles[] = {

          { "C_Heli_light_01_sheriff_F", "FETCH_CONST(life_coplevel) >= 5" },
          { "O_Heli_Light_02_unarmed_F", "FETCH_CONST(life_coplevel) >= 5" },
          { "dezkit_b206_fbi", "FETCH_CONST(life_coplevel) >= 5" },
          { "ARMSCor_A109LUH_B", "FETCH_CONST(life_coplevel) >= 5" }
        };
    };

    class cop_ship {
        side = "cop";
        vehicles[] = {
            { "B_Boat_Transport_01_F", "" },
            { "O_G_Boat_Transport_02_F", "" },
            { "C_Boat_Civil_01_police_F", "" },
            { "b_SDV_01_F", "" }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: ARRAY (license required)
    *         Ex: { "driver", "" , "" , "" } //civilian, west, independent, east
    *         licenses[] = { {"CIV"}, {"COP"}, {"MEDIC"}, {"EAST"} };
    *    Textures config follows { Texture Name, side, {texture(s)path}}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    /*Normal Cars*/

    class B_Quadbike_01_F {
        vItemSpace = 0;
        conditions = "";
        price = 2500;
        textures[] = {};
    };

    class A3L_Cooper_concept_black {
        vItemSpace = 20;
        conditions = "";
        price = 7000;
        textures[] = {};
    };

    class A3L_Cooper_concept_blue {
        vItemSpace = 20;
        conditions = "";
        price = 7000;
        textures[] = {};
    };

    class Mrshounka_a3_smart_civ_noir {
        vItemSpace = 40;
        conditions = "";
        price = 7000;
        textures[] = {};
    };

    class Mrshounka_a3_smart_civ_bleu {
        vItemSpace = 40;
        conditions = "";
        price = 7000;
        textures[] = {};
    };

    class civ_crown_black {
        vItemSpace = 60;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

    class civ_crown_blue {
        vItemSpace = 60;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

    class civ_crown_gray {
        vItemSpace = 60;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

    class Mrshounka_twingo_p_noir {
        vItemSpace = 40;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

    class Mrshounka_twingo_p_bf {
        vItemSpace = 40;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

    class Mrshounka_twingo_p_g {
        vItemSpace = 40;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

    class IVORY_PRIUS {
        vItemSpace = 60;
        conditions = "";
        price = 17000;
        textures[] = {};
    };

    class Mrshounka_corbillard_c_noir {
        vItemSpace = 60;
        conditions = "";
        price = 18000;
        textures[] = {};
    };

    class Mrshounka_corbillard_c_bleufonce {
        vItemSpace = 60;
        conditions = "";
        price = 18000;
        textures[] = {};
    };

    class Mrshounka_corbillard_c_violet {
        vItemSpace = 60;
        conditions = "";
        price = 18000;
        textures[] = {};
    };

    class Mrshounka_corbillard_c_orange {
        vItemSpace = 60;
        conditions = "";
        price = 18000;
        textures[] = {};
    };

    class Mrshounka_golfvi_noir {
        vItemSpace = 60;
        conditions = "";
        price = 18000;
        textures[] = {};
    };

    class Mrshounka_golfvi_bleufonce {
        vItemSpace = 60;
        conditions = "";
        price = 18000;
        textures[] = {};
    };

    class Mrshounka_golfvi_rouge {
        vItemSpace = 60;
        conditions = "";
        price = 18000;
        textures[] = {};
    };

    class Mrshounka_golfvi_jaune {
        vItemSpace = 60;
        conditions = "";
        price = 18000;
        textures[] = {};
    };

    class Mrshounka_golfvi_orange {
        vItemSpace = 60;
        conditions = "";
        price = 18000;
        textures[] = {};
    };

    class Mrshounka_subaru08_noir {
        vItemSpace = 60;
        conditions = "";
        price = 23000;
        textures[] = {};
    };

    class Mrshounka_subaru08_bleufonce {
        vItemSpace = 60;
        conditions = "";
        price = 23000;
        textures[] = {};
    };

    class Mrshounka_subaru08_grise {
        vItemSpace = 60;
        conditions = "";
        price = 23000;
        textures[] = {};
    };

    class Mrshounka_subaru08_jaune {
        vItemSpace = 60;
        conditions = "";
        price = 23000;
        textures[] = {};
    };

    class Mrshounka_subaru08_rouge {
        vItemSpace = 60;
        conditions = "";
        price = 23000;
        textures[] = {};
    };

    class MG_Honda_Civic_TypeR_04_Black {
        vItemSpace = 60;
        conditions = "";
        price = 23000;
        textures[] = {};
    };

    class MG_Honda_Civic_TypeR_04_Blue {
        vItemSpace = 60;
        conditions = "";
        price = 23000;
        textures[] = {};
    };

    class MG_Honda_Civic_TypeR_04_Red {
        vItemSpace = 60;
        conditions = "";
        price = 23000;
        textures[] = {};
    };

    class MG_Honda_Civic_TypeR_04_Silver {
        vItemSpace = 60;
        conditions = "";
        price = 23000;
        textures[] = {};
    };

    class MG_Honda_Civic_TypeR_04_Yellow {
        vItemSpace = 60;
        conditions = "";
        price = 23000;
        textures[] = {};
    };

    class MG_Honda_Civic_TypeR_04_Green {
        vItemSpace = 60;
        conditions = "";
        price = 23000;
        textures[] = {};
    };

    class MG_Honda_Civic_TypeR_04_White {
        vItemSpace = 60;
        conditions = "";
        price = 23000;
        textures[] = {};
    };

    class MG_Honda_Civic_TypeR_04_Pink {
        vItemSpace = 60;
        conditions = "";
        price = 23000;
        textures[] = {};
    };

    class MG_Honda_Civic_TypeR_04_Purple {
        vItemSpace = 60;
        conditions = "";
        price = 23000;
        textures[] = {};
    };

    class MG_Honda_Civic_TypeR_04_Whitecamo {
        vItemSpace = 60;
        conditions = "";
        price = 23000;
        textures[] = {};
    };

    class ivory_wrx {
        vItemSpace = 20;
        conditions = "";
        price = 23000;
        textures[] = {};
    };

    class ivory_evox {
        vItemSpace = 60;
        conditions = "";
        price = 23000;
        textures[] = {};
    };

    class ivory_r34 {
        vItemSpace = 60;
        conditions = "";
        price = 23000;
        textures[] = {};
    };

    class ivory_supra {
        vItemSpace = 60;
        conditions = "";
        price = 23000;
        textures[] = {};
    };

    class ivory_supra_topsecret {
        vItemSpace = 60;
        conditions = "";
        price = 27000;
        textures[] = {};
    };

    class ivory_isf {
        vItemSpace = 60;
        conditions = "";
        price = 32000;
        textures[] = {};
    };

    class beetle_bleufonce {
        vItemSpace = 60;
        conditions = "";
        price = 33000;
        textures[] = {};
    };

    class beetle_bleupetrole {
        vItemSpace = 60;
        conditions = "";
        price = 33000;
        textures[] = {};
    };

    class beetle_red {
        vItemSpace = 60;
        conditions = "";
        price = 33000;
        textures[] = {};
    };

    class beetle_violet {
        vItemSpace = 60;
        conditions = "";
        price = 33000;
        textures[] = {};
    };

    class beetle_white {
        vItemSpace = 60;
        conditions = "";
        price = 33000;
        textures[] = {};
    };

    class beetle_psycha {
        vItemSpace = 60;
        conditions = "";
        price = 33000;
        textures[] = {};
    };

    class beetle_psycha1 {
        vItemSpace = 60;
        conditions = "";
        price = 33000;
        textures[] = {};
    };

    class beetle_coci {
        vItemSpace = 60;
        conditions = "";
        price = 33000;
        textures[] = {};
    };

    class beetle_camo {
        vItemSpace = 60;
        conditions = "";
        price = 33000;
        textures[] = {};
    };

    class shounka_buggy_noir {
        vItemSpace = 60;
        conditions = "";
        price = 33000;
        textures[] = {};
    };

    class shounka_buggy_rouge {
        vItemSpace = 60;
        conditions = "";
        price = 33000;
        textures[] = {};
    };

    class shounka_buggy_bleufonce {
        vItemSpace = 60;
        conditions = "";
        price = 33000;
        textures[] = {};
    };

    class shounka_buggy_violet {
        vItemSpace = 60;
        conditions = "";
        price = 33000;
        textures[] = {};
    };

    class Mrshounka_Vandura_civ_noir {
        vItemSpace = 60;
        conditions = "";
        price = 60000;
        textures[] = {};
    };

    class ivory_elise {
        vItemSpace = 20;
        conditions = "";
        price = 70000;
        textures[] = {};
    };

/*Bikes*/

    class Mrshounka_ducati_p_noir {
        vItemSpace = 0;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

    class Mrshounka_ducati_p_bf {
        vItemSpace = 0;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

    class Mrshounka_ducati_p_r {
        vItemSpace = 0;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

    class Mrshounka_ducati_p_j {
        vItemSpace = 0;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

    class Mrshounka_yamaha_p_noir {
        vItemSpace = 0;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

    class Mrshounka_yamaha_p_bf {
        vItemSpace = 0;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

    class Mrshounka_yamaha_p_r {
        vItemSpace = 0;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

    class Mrshounka_yamaha_p_j {
        vItemSpace = 0;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

/*Exotic Cars*/

    class Mrshounka_Bowler_c_noir {
        vItemSpace = 80;
        conditions = "";
        price = 28000;
        textures[] = {};
    };

    class Mrshounka_Bowler_c_bleufonce {
        vItemSpace = 80;
        conditions = "";
        price = 28000;
        textures[] = {};
    };

    class Mrshounka_Bowler_c_rouge {
        vItemSpace = 80;
        conditions = "";
        price = 28000;
        textures[] = {};
    };

    class Mrshounka_Bowler_c_jaune {
        vItemSpace = 80;
        conditions = "";
        price = 28000;
        textures[] = {};
    };

    class Mrshounka_Bowler_c_orange {
        vItemSpace = 80;
        conditions = "";
        price = 28000;
        textures[] = {};
    };

    class Mrshounka_Bowler_c_violet {
        vItemSpace = 60;
        conditions = "";
        price = 28000;
        textures[] = {};
    };

    class Mrshounka_a3_gtr_civ_noir {
        vItemSpace = 60;
        conditions = "";
        price = 48000;
        textures[] = {};
    };

    class Mrshounka_a3_gtr_civ_bleu {
        vItemSpace = 60;
        conditions = "";
        price = 48000;
        textures[] = {};
    };

    class S_Vantage_Red {
        vItemSpace = 60;
        conditions = "";
        price = 68000;
        textures[] = {};
    };

    class S_Vantage_Black {
        vItemSpace = 60;
        conditions = "";
        price = 68000;
        textures[] = {};
    };

    class S_Vantage_Blue {
        vItemSpace = 60;
        conditions = "";
        price = 68000;
        textures[] = {};
    };

    class S_Vantage_Yellow {
        vItemSpace = 60;
        conditions = "";
        price = 68000;
        textures[] = {};
    };

    class Tal_Maserati_Red {
        vItemSpace = 60;
        conditions = "";
        price = 68000;
        textures[] = {};
    };

    class Tal_Maserati_Lime {
        vItemSpace = 60;
        conditions = "";
        price = 68000;
        textures[] = {};
    };

    class Tal_Maserati_Black {
        vItemSpace = 60;
        conditions = "";
        price = 68000;
        textures[] = {};
    };

    class Tal_Maserati_Purple {
        vItemSpace = 60;
        conditions = "";
        price = 68000;
        textures[] = {};
    };

    class Jonzie_Viper {
        vItemSpace = 20;
        conditions = "";
        price = 70000;
        textures[] = {};
    };

    class ivory_c {
        vItemSpace = 60;
        conditions = "";
        price = 70000;
        textures[] = {};
    };

    class IVORY_REV {
        vItemSpace = 60;
        conditions = "";
        price = 110000;
        textures[] = {};
    };

    class ivory_lfa {
        vItemSpace = 20;
        conditions = "";
        price = 110000;
        textures[] = {};
    };

    class ivory_lp560 {
        vItemSpace = 60;
        conditions = "";
        price = 150000;
        textures[] = {};
    };

    class MG_Audi_R8_11_Black {
        vItemSpace = 60;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

    class MG_Audi_R8_11_Blue {
        vItemSpace = 60;
        conditions = "";
        price = 160000;
        textures[] = {};
    };

    class MG_Audi_R8_11_Red {
        vItemSpace = 60;
        conditions = "";
        price = 160000;
        textures[] = {};
    };

    class MG_Audi_R8_11_Silver {
        vItemSpace = 60;
        conditions = "";
        price = 160000;
        textures[] = {};
    };

    class MG_Audi_R8_11_Yellow {
        vItemSpace = 60;
        conditions = "";
        price = 160000;
        textures[] = {};
    };

    class MG_Audi_R8_11_Green {
        vItemSpace = 60;
        conditions = "";
        price = 160000;
        textures[] = {};
    };

    class MG_Audi_R8_11_White {
        vItemSpace = 60;
        conditions = "";
        price = 160000;
        textures[] = {};
    };

    class MG_Audi_R8_11_Pink {
        vItemSpace = 60;
        conditions = "";
        price = 160000;
        textures[] = {};
    };

    class MG_Audi_R8_11_Purple {
        vItemSpace = 60;
        conditions = "";
        price = 160000;
        textures[] = {};
    };

    class ivory_f1 {
        vItemSpace = 20;
        conditions = "";
        price = 200000;
        textures[] = {};
    };

    class ivory_mp4 {
        vItemSpace = 20;
        conditions = "";
        price = 210000;
        textures[] = {};
    };

    class Mrshounka_pagani_c_noir {
        vItemSpace = 20;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

    class Mrshounka_pagani_c_rouge {
        vItemSpace = 20;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

    class Mrshounka_pagani_c_jaune {
        vItemSpace = 20;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

    class Mrshounka_agera_p_noir {
        vItemSpace = 20;
        conditions = "";
        price = 900000;
        textures[] = {};
    };

    class Mrshounka_agera_p_bleu {
        vItemSpace = 20;
        conditions = "";
        price = 900000;
        textures[] = {};
    };

    class Mrshounka_agera_p_jaune {
        vItemSpace = 20;
        conditions = "";
        price = 900000;
        textures[] = {};
    };

    class urbanized_lp700_pink {
        vItemSpace = 20;
        conditions = "";
        price = 900000;
        textures[] = {};
    };

    class urbanized_lp700_orange {
        vItemSpace = 20;
        conditions = "";
        price = 900000;
        textures[] = {};
    };

    class urbanized_lp700_lime {
        vItemSpace = 20;
        conditions = "";
        price = 900000;
        textures[] = {};
    };

    class urbanized_lp700_blue {
        vItemSpace = 20;
        conditions = "";
        price = 900000;
        textures[] = {};
    };

    class urbanized_lp700_purple {
        vItemSpace = 20;
        conditions = "";
        price = 900000;
        textures[] = {};
    };

    class urbanized_lp700_red {
        vItemSpace = 20;
        conditions = "";
        price = 900000;
        textures[] = {};
    };

    class urbanized_lp700_white {
        vItemSpace = 20;
        conditions = "";
        price = 900000;
        textures[] = {};
    };

    class urbanized_lp700_yellow {
        vItemSpace = 20;
        conditions = "";
        price = 900000;
        textures[] = {};
    };

    class urbanized_LaFerrari_pink {
        vItemSpace = 20;
        conditions = "";
        price = 950000;
        textures[] = {};
    };

    class urbanized_LaFerrari_purple {
        vItemSpace = 20;
        conditions = "";
        price = 950000;
        textures[] = {};
    };

    class urbanized_LaFerrari_red {
        vItemSpace = 20;
        conditions = "";
        price = 950000;
        textures[] = {};
    };

    class urbanized_LaFerrari_white {
        vItemSpace = 20;
        conditions = "";
        price = 950000;
        textures[] = {};
    };

    class urbanized_LaFerrari_yellow {
        vItemSpace = 20;
        conditions = "";
        price = 950000;
        textures[] = {};
    };

    class urbanized_LaFerrari_black {
        vItemSpace = 20;
        conditions = "";
        price = 950000;
        textures[] = {};
    };

    class urbanized_LaFerrari_blue {
        vItemSpace = 20;
        conditions = "";
        price = 950000;
        textures[] = {};
    };

    class urbanized_LaFerrari_darkred {
        vItemSpace = 20;
        conditions = "";
        price = 950000;
        textures[] = {};
    };

    class urbanized_LaFerrari_hotpink {
        vItemSpace = 20;
        conditions = "";
        price = 950000;
        textures[] = {};
    };

    class urbanized_LaFerrari_lime {
        vItemSpace = 20;
        conditions = "";
        price = 950000;
        textures[] = {};
    };

    class urbanized_LaFerrari_black_S {
        vItemSpace = 20;
        conditions = "";
        price = 970000;
        textures[] = {};
    };

    class urbanized_LaFerrari_blue_S {
        vItemSpace = 20;
        conditions = "";
        price = 970000;
        textures[] = {};
    };

    class urbanized_LaFerrari_lime_S {
        vItemSpace = 20;
        conditions = "";
        price = 970000;
        textures[] = {};
    };

    class Mrshounka_lykan_c_noir {
        vItemSpace = 20;
        conditions = "";
        price = 1000000;
        textures[] = {};
    };

    class Mrshounka_lykan_c_jaune {
        vItemSpace = 20;
        conditions = "";
        price = 1000000;
        textures[] = {};
    };

    class Mrshounka_lykan_c_rouge {
        vItemSpace = 20;
        conditions = "";
        price = 1000000;
        textures[] = {};
    };

    class Mrshounka_lykan_c_grise {
        vItemSpace = 20;
        conditions = "";
        price = 1000000;
        textures[] = {};
    };

    class ivory_veyron {
        vItemSpace = 20;
        conditions = "";
        price = 2000000;
        textures[] = {};
    };

/*German Cars*/

    class Mrshounka_Touareg_noir {
        vItemSpace = 80;
        conditions = "";
        price = 29000;
        textures[] = {};
    };

    class Mrshounka_Touareg_rouge {
        vItemSpace = 80;
        conditions = "";
        price = 29000;
        textures[] = {};
    };

    class Mrshounka_Touareg_jaune {
        vItemSpace = 80;
        conditions = "";
        price = 29000;
        textures[] = {};
    };

    class ivory_gti {
        vItemSpace = 40;
        conditions = "";
        price = 29000;
        textures[] = {};
    };

    class ivory_rs4 {
        vItemSpace =60;
        conditions = "";
        price = 32000;
        textures[] = {};
    };

    class Mrshounka_bmwm1_civ_noir {
        vItemSpace = 60;
        conditions = "";
        price = 32000;
        textures[] = {};
    };

    class Mrshounka_bmwm1_civ_bleufonce {
        vItemSpace = 60;
        conditions = "";
        price = 32000;
        textures[] = {};
    };

    class Mrshounka_bmwm1_civ_rouge {
        vItemSpace = 60;
        conditions = "";
        price = 32000;
        textures[] = {};
    };

    class Mrshounka_bmwm1_civ_grise {
        vItemSpace = 60;
        conditions = "";
        price = 32000;
        textures[] = {};
    };

    class Mrshounka_bmwm1_civ_orange {
        vItemSpace = 60;
        conditions = "";
        price = 32000;
        textures[] = {};
    };

    class ivory_e36 {
        vItemSpace = 60;
        conditions = "";
        price = 32000;
        textures[] = {};
    };

    class ivory_m3 {
        vItemSpace = 60;
        conditions = "";
        price = 37000;
        textures[] = {};
    };

    class Mrshounka_bmwm6_noir {
        vItemSpace = 60;
        conditions = "";
        price = 38000;
        textures[] = {};
    };

    class Mrshounka_bmwm6_bleufonce {
        vItemSpace = 60;
        conditions = "";
        price = 38000;
        textures[] = {};
    };

    class Mrshounka_bmwm6_rouge {
        vItemSpace = 60;
        conditions = "";
        price = 38000;
        textures[] = {};
    };

    class Mrshounka_bmwm6_jaune {
        vItemSpace = 60;
        conditions = "";
        price = 38000;
        textures[] = {};
    };

    class Mrshounka_bmwm6_grise {
        vItemSpace = 60;
        conditions = "";
        price = 38000;
        textures[] = {};
    };

    class Mrshounka_cayenne_p_noir {
        vItemSpace = 80;
        conditions = "";
        price = 38000;
        textures[] = {};
    };

    class Mrshounka_cayenne_p_jaune {
        vItemSpace = 80;
        conditions = "";
        price = 38000;
        textures[] = {};
    };

    class Mrshounka_cayenne_p_rouge {
        vItemSpace = 80;
        conditions = "";
        price = 38000;
        textures[] = {};
    };

    class Mrshounka_cayenne_p_grise {
        vItemSpace = 80;
        conditions = "";
        price = 38000;
        textures[] = {};
    };

    class shounka_a3_rs5_civ_rouge {
        vItemSpace = 60;
        conditions = "";
        price = 38000;
        textures[] = {};
    };

    class shounka_a3_rs5_civ_noir {
        vItemSpace = 60;
        conditions = "";
        price = 38000;
        textures[] = {};
    };

    class shounka_a3_rs5_civ_bleufonce {
        vItemSpace = 60;
        conditions = "";
        price = 38000;
        textures[] = {};
    };

    class shounka_a3_rs5_civ_jaune {
        vItemSpace = 60;
        conditions = "";
        price = 38000;
        textures[] = {};
    };

    class shounka_a3_rs5_civ_grise {
        vItemSpace = 60;
        conditions = "";
        price = 38000;
        textures[] = {};
    };

    class shounka_rs6_grise {
        vItemSpace = 70;
        conditions = "";
        price = 38000;
        textures[] = {};
    };

    class shounka_rs6_noir {
        vItemSpace = 70;
        conditions = "";
        price = 38000;
        textures[] = {};
    };

    class shounka_rs6_jaune {
        vItemSpace = 70;
        conditions = "";
        price = 38000;
        textures[] = {};
    };

    class shounka_rs6_bleufonce {
        vItemSpace = 70;
        conditions = "";
        price = 38000;
        textures[] = {};
    };

    class Mrshounka_c63_2015_noir {
        vItemSpace = 20;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

    class Mrshounka_c63_2015_mat_n {
        vItemSpace = 20;
        conditions = "";
        price = 48000;
        textures[] = {};
    };

    class Mrshounka_c63_2015_rouge {
        vItemSpace = 20;
        conditions = "";
        price = 48000;
        textures[] = {};
    };

    class Mrshounka_c63_2015_jaune {
        vItemSpace = 20;
        conditions = "";
        price = 48000;
        textures[] = {};
    };

    class urbanized_g65_yellow {
        vItemSpace = 80;
        conditions = "";
        price = 48000;
        textures[] = {};
    };

    class urbanized_g65_white {
        vItemSpace = 80;
        conditions = "";
        price = 48000;
        textures[] = {};
    };

    class urbanized_g65_red {
        vItemSpace = 80;
        conditions = "";
        price = 48000;
        textures[] = {};
    };

    class urbanized_g65_purple {
        vItemSpace = 80;
        conditions = "";
        price = 48000;
        textures[] = {};
    };

    class urbanized_g65_black {
        vItemSpace = 80;
        conditions = "";
        price = 48000;
        textures[] = {};
    };

    class urbanized_g65_blue {
        vItemSpace = 80;
        conditions = "";
        price = 48000;
        textures[] = {};
    };

    class urbanized_g65_lime {
        vItemSpace = 80;
        conditions = "";
        price = 48000;
        textures[] = {};
    };

    class urbanized_g65_orange {
        vItemSpace = 80;
        conditions = "";
        price = 48000;
        textures[] = {};
    };

    class urbanized_g65_pink {
        vItemSpace = 80;
        conditions = "";
        price = 48000;
        textures[] = {};
    };

    class shounka_clk_noir {
        vItemSpace = 20;
        conditions = "";
        price = 48000;
        textures[] = {};
    };

    class shounka_clk_rouge {
        vItemSpace = 20;
        conditions = "";
        price = 48000;
        textures[] = {};
    };

    class shounka_clk_jaune {
        vItemSpace = 20;
        conditions = "";
        price = 48000;
        textures[] = {};
    };

    class shounka_porsche911_noir {
        vItemSpace = 20;
        conditions = "";
        price = 68000;
        textures[] = {};
    };

    class shounka_porsche911_jaune {
        vItemSpace = 20;
        conditions = "";
        price = 68000;
        textures[] = {};
    };

    class shounka_porsche911_rouge {
        vItemSpace = 20;
        conditions = "";
        price = 68000;
        textures[] = {};
    };

    class shounka_porsche911_bleufonce {
        vItemSpace = 20;
        conditions = "";
        price = 68000;
        textures[] = {};
    };

    class S_PorscheRS_Black {
        vItemSpace = 20;
        conditions = "";
        price = 88000;
        textures[] = {};
    };

    class S_PorscheRS_White {
        vItemSpace = 20;
        conditions = "";
        price = 88000;
        textures[] = {};
    };

    class S_PorscheRS_Yellow {
        vItemSpace = 20;
        conditions = "";
        price = 88000;
        textures[] = {};
    };

    class Mrshounka_Alfa_Romeo_noir {
        vItemSpace = 60;
        conditions = "";
        price = 21000;
        textures[] = {};
    };

    class Mrshounka_Alfa_Romeo_bleufonce {
        vItemSpace = 60;
        conditions = "";
        price = 21000;
        textures[] = {};
    };

    class Mrshounka_Alfa_Romeo_rouge {
        vItemSpace = 60;
        conditions = "";
        price = 21000;
        textures[] = {};
    };

    class Mrshounka_Alfa_Romeo_jaune {
        vItemSpace = 60;
        conditions = "";
        price = 21000;
        textures[] = {};
    };

    class Mrshounka_Alfa_Romeo_orange {
        vItemSpace = 60;
        conditions = "";
        price = 21000;
        textures[] = {};
    };

    class Mrshounka_Alfa_Romeo_grise {
        vItemSpace = 60;
        conditions = "";
        price = 21000;
        textures[] = {};
    };

    class shounka_f430_spider_noir {
        vItemSpace = 20;
        conditions = "";
        price = 121000;
        textures[] = {};
    };

    class shounka_f430_spider_jaune {
        vItemSpace = 20;
        conditions = "";
        price = 121000;
        textures[] = {};
    };

    class shounka_f430_spider_rouge {
        vItemSpace = 20;
        conditions = "";
        price = 121000;
        textures[] = {};
    };

    class shounka_f430_spider_violet {
        vItemSpace = 20;
        conditions = "";
        price = 121000;
        textures[] = {};
    };

    class urbanized_granturismo_orange {
        vItemSpace = 20;
        conditions = "";
        price = 121000;
        textures[] = {};
    };

    class urbanized_granturismo_purple {
        vItemSpace = 20;
        conditions = "";
        price = 121000;
        textures[] = {};
    };

    class urbanized_granturismo_white {
        vItemSpace = 20;
        conditions = "";
        price = 121000;
        textures[] = {};
    };

    class urbanized_granturismo_yellow {
        vItemSpace = 20;
        conditions = "";
        price = 121000;
        textures[] = {};
    };

    class urbanized_granturismo_black {
        vItemSpace = 20;
        conditions = "";
        price = 121000;
        textures[] = {};
    };

    class urbanized_granturismo_blue {
        vItemSpace = 20;
        conditions = "";
        price = 121000;
        textures[] = {};
    };

    class urbanized_granturismo_darkred {
        vItemSpace = 20;
        conditions = "";
        price = 121000;
        textures[] = {};
    };

    class urbanized_granturismo_hotpink {
        vItemSpace = 20;
        conditions = "";
        price = 121000;
        textures[] = {};
    };

    class urbanized_granturismo_lime {
        vItemSpace = 20;
        conditions = "";
        price = 121000;
        textures[] = {};
    };

    class Mrshounka_veneno_c_noir {
        vItemSpace = 20;
        conditions = "";
        price = 1500000;
        textures[] = {};
    };

    class Mrshounka_veneno_c_bleu {
        vItemSpace = 20;
        conditions = "";
        price = 1500000;
        textures[] = {};
    };

    class Mrshounka_veneno_c_jaune {
        vItemSpace = 20;
        conditions = "";
        price = 1500000;
        textures[] = {};
    };

/*American Car*/

    class Mrshounka_jeep_blinde_noir {
        vItemSpace = 60;
        conditions = "";
        price = 22000;
        textures[] = {};
    };

    class Mrshounka_jeep_blinde_noir_mat {
        vItemSpace = 60;
        conditions = "";
        price = 22000;
        textures[] = {};
    };

    class Mrshounka_jeep_blinde_rouge {
        vItemSpace = 60;
        conditions = "";
        price = 22000;
        textures[] = {};
    };

    class Mrshounka_jeep_blinde_rouge_mat {
        vItemSpace = 60;
        conditions = "";
        price = 22000;
        textures[] = {};
    };

    class Mrshounka_jeep_blinde_blanc {
        vItemSpace = 60;
        conditions = "";
        price = 22000;
        textures[] = {};
    };

    class Mrshounka_hummer_civ_noir {
        vItemSpace = 80;
        conditions = "";
        price = 27000;
        textures[] = {};
    };

    class Mrshounka_hummer_civ_bleufonce {
        vItemSpace = 80;
        conditions = "";
        price = 27000;
        textures[] = {};
    };

    class Mrshounka_hummer_civ_jaune {
        vItemSpace = 80;
        conditions = "";
        price = 27000;
        textures[] = {};
    };

    class Mrshounka_hummer_civ_rouge {
        vItemSpace = 80;
        conditions = "";
        price = 27000;
        textures[] = {};
    };

    class shounka_h2_rouge {
        vItemSpace = 80;
        conditions = "";
        price = 27000;
        textures[] = {};
    };

    class shounka_h2_noir {
        vItemSpace = 80;
        conditions = "";
        price = 27000;
        textures[] = {};
    };

    class shounka_h2_jaune {
        vItemSpace = 80;
        conditions = "";
        price = 27000;
        textures[] = {};
    };

    class shounka_transam_noir {
        vItemSpace = 60;
        conditions = "";
        price = 27000;
        textures[] = {};
    };

    class shounka_transam_rouge {
        vItemSpace = 60;
        conditions = "";
        price = 27000;
        textures[] = {};
    };

    class shounka_transam_jaune {
        vItemSpace = 60;
        conditions = "";
        price = 27000;
        textures[] = {};
    };

    class Mrshounka_mustang_noir {
        vItemSpace = 40;
        conditions = "";
        price = 30000;
        textures[] = {};
    };

    class Mrshounka_mustang_mat_n {
        vItemSpace = 40;
        conditions = "";
        price = 30000;
        textures[] = {};
    };

    class Mrshounka_mustang_rouge {
        vItemSpace = 40;
        conditions = "";
        price = 30000;
        textures[] = {};
    };

    class Mrshounka_mustang_jaune {
        vItemSpace = 40;
        conditions = "";
        price = 30000;
        textures[] = {};
    };

    class Mrshounka_mustang_orange {
        vItemSpace = 40;
        conditions = "";
        price = 30000;
        textures[] = {};
    };

    class Mrshounka_a3_dodge15_civ_noir {
        vItemSpace = 60;
        conditions = "";
        price = 30000;
        textures[] = {};
    };

    class Mrshounka_a3_dodge15_civ_bleu {
        vItemSpace = 60;
        conditions = "";
        price = 30000;
        textures[] = {};
    };

    class Mrshounka_a3_dodge15_civ_rouge {
        vItemSpace = 60;
        conditions = "";
        price = 30000;
        textures[] = {};
    };

    class Mrshounka_a3_dodge15_civ_jaune {
        vItemSpace = 60
        conditions = "";
        price = 30000;
        textures[] = {};
    };

    class Mrshounka_a3_dodge15_civ_rose {
        vItemSpace = 60;
        conditions = "";
        price = 30000;
        textures[] = {};
    };

    class Mrshounka_a3_dodge15_civ_grise {
        vItemSpace = 60;
        conditions = "";
        price = 30000;
        textures[] = {};
    };

    class Mrshounka_a3_dodge15_civ_violet {
        vItemSpace = 60;
        conditions = "";
        price = 30000;
        textures[] = {};
    };

    class Mrshounka_a3_dodge15_civ_orange {
        vItemSpace = 60;
        conditions = "";
        price = 30000;
        textures[] = {};
    };

    class A3L_Camaro {
        vItemSpace = 40;
        conditions = "";
        price = 30000;
        textures[] = {};
    };

    class Mrshounka_raptor_noir {
        vItemSpace = 80;
        conditions = "";
        price = 32000;
        textures[] = {};
    };

    class Mrshounka_raptor_rouge {
        vItemSpace = 80;
        conditions = "";
        price = 32000;
        textures[] = {};
    };

    class Mrshounka_raptor_jaune {
        vItemSpace = 80;
        conditions = "";
        price = 32000;
        textures[] = {};
    };

    class Mrshounka_raptor_grise {
        vItemSpace = 80;
        conditions = "";
        price = 32000;
        textures[] = {};
    };

    class Mrshounka_raptor_violet {
        vItemSpace = 80;
        conditions = "";
        price = 32000;
        textures[] = {};
    };

    class shounka_avalanche_noir {
        vItemSpace = 70;
        conditions = "";
        price = 32000;
        textures[] = {};
    };

    class shounka_avalanche_grise {
        vItemSpace = 70;
        conditions = "";
        price = 32000;
        textures[] = {};
    };

    class shounka_avalanche_rouge {
        vItemSpace = 70;
        conditions = "";
        price = 32000;
        textures[] = {};
    };

    class shounka_avalanche_jaune {
        vItemSpace = 70;
        conditions = "";
        price = 32000;
        textures[] = {};
    };

    class Mrshounka_cherokee_mat {
        vItemSpace = 80;
        conditions = "";
        price = 32000;
        textures[] = {};
    };

    class Mrshounka_cherokee_bleu {
        vItemSpace = 80;
        conditions = "";
        price = 32000;
        textures[] = {};
    };

    class Mrshounka_cherokee_bleu_mat {
        vItemSpace = 80;
        conditions = "";
        price = 32000;
        textures[] = {};
    };

    class Mrshounka_cherokee_blanc_mat {
        vItemSpace = 80;
        conditions = "";
        price = 32000;
        textures[] = {};
    };

    class Mrshounka_cherokee_rouge_mat {
        vItemSpace = 80;
        conditions = "";
        price = 32000;
        textures[] = {};
    };

    class Mrshounka_raptor2_noir {
        vItemSpace = 80;
        conditions = "";
        price = 35000;
        textures[] = {};
    };

    class Mrshounka_raptor2_rouge {
        vItemSpace = 80;
        conditions = "";
        price = 35000;
        textures[] = {};
    };

    class Mrshounka_raptor2_jaune {
        vItemSpace = 80;
        conditions = "";
        price = 35000;
        textures[] = {};
    };

    class Mrshounka_raptor2_grise {
        vItemSpace = 80;
        conditions = "";
        price = 35000;
        textures[] = {};
    };

    class Mrshounka_raptor2_violet {
        vItemSpace = 80;
        conditions = "";
        price = 35000;
        textures[] = {};
    };

    class A3L_F350Black {
        vItemSpace = 100;
        conditions = "";
        price = 60000;
        textures[] = {};
    };

    class ivory_suburban {
        vItemSpace = 100;
        conditions = "";
        price = 60000;
        textures[] = {};
    };

    class shounka_gt_noir {
        vItemSpace = 20;
        conditions = "";
        price = 135000;
        textures[] = {};
    };

    class shounka_gt_rouge {
        vItemSpace = 20;
        conditions = "";
        price = 135000;
        textures[] = {};
    };

    class shounka_gt_jaune {
        vItemSpace = 20;
        conditions = "";
        price = 135000;
        textures[] = {};
    };

    class shounka_gt_grise {
        vItemSpace = 20;
        conditions = "";
        price = 135000;
        textures[] = {};
    };

    class shounka_gt_violet {
        vItemSpace = 20;
        conditions = "";
        price = 135000;
        textures[] = {};
    };

    class shounka_monsteur_violet {
        vItemSpace = 50;
        conditions = "";
        price = 335000;
        textures[] = {};
    };

    class shounka_monsteur_grise {
        vItemSpace = 50;
        conditions = "";
        price = 335000;
        textures[] = {};
    };

    class shounka_monsteur_bleufonce {
        vItemSpace = 50;
        conditions = "";
        price = 335000;
        textures[] = {};
    };

    class shounka_monsteur_noir {
        vItemSpace = 50;
        conditions = "";
        price = 335000;
        textures[] = {};
    };

    class shounka_monsteur_jaune {
        vItemSpace = 50;
        conditions = "";
        price = 335000;
        textures[] = {};
    };

    class shounka_monsteur_rose {
        vItemSpace = 50;
        conditions = "";
        price = 335000;
        textures[] = {};
    };

/*Commerical Car*/

    class A3L_EscortTaxi {
        vItemSpace = 60;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

    class ivory_190e_taxi {
        vItemSpace = 60;
        conditions = "";
        price = 20000;
        textures[] = {};
    };

    class ivory_rs4_taxi {
        vItemSpace = 60;
        conditions = "";
        price = 25000;
        textures[] = {};
    };

    class shounka_limo_civ_noir {
        vItemSpace = 60;
        conditions = "";
        price = 43000;
        textures[] = {};
    };

    class shounka_limo_civ_violet {
        vItemSpace = 60;
        conditions = "";
        price = 43000;
        textures[] = {};
    };

/*Classic Car*/

    class Mrshounka_lincoln_noir {
        vItemSpace = 65;
        conditions = "";
        price = 18000;
        textures[] = {};
    };

    class Mrshounka_lincoln_bleufonce {
        vItemSpace = 65;
        conditions = "";
        price = 18000;
        textures[] = {};
    };

    class Mrshounka_lincoln_rouge {
        vItemSpace = 65;
        conditions = "";
        price = 18000;
        textures[] = {};
    };

    class Mrshounka_lincoln_violet {
        vItemSpace = 65;
        conditions = "";
        price = 18000;
        textures[] = {};
    };

    class SAL_77TRANSAMCiv {
        vItemSpace = 30;
        conditions = "";
        price = 27000;
        textures[] = {};
    };

    class ADM_1969_Charger {
        vItemSpace = 60;
        conditions = "";
        price = 27000;
        textures[] = {};
    };

    class SAL_IROCCivBlack {
        vItemSpace = 30;
        conditions = "";
        price = 27000;
        textures[] = {};
    };

    class SAL_IROCCivSilver {
        vItemSpace = 30;
        conditions = "";
        price = 27000;
        textures[] = {};
    };

    class SAL_IROCCivRed {
        vItemSpace = 30;
        conditions = "";
        price = 27000;
        textures[] = {};
    };

    class SAL_IROCCivBlue {
        vItemSpace = 30;
        conditions = "";
        price = 27000;
        textures[] = {};
    };

    class SIG_SuperBeeB {
        vItemSpace = 60;
        conditions = "";
        price = 27000;
        textures[] = {};
    };

    class SIG_SuperBeeY {
        vItemSpace = 60;
        conditions = "";
        price = 27000;
        textures[] = {};
    };

    class SIG_SuperBeeM {
        vItemSpace = 60;
        conditions = "";
        price = 27000;
        textures[] = {};
    };

    class SIG_Roadrunner {
        vItemSpace = 60;
        conditions = "";
        price = 27000;
        textures[] = {};
    };

    class SIG_Roadrunner {
        vItemSpace = 60;
        conditions = "";
        price = 27000;
        textures[] = {};
    };

    class SIG_Hcodes {
        vItemSpace = 20;
        conditions = "";
        price = 27000;
        textures[] = {};
    };

    class SIG_Magnums {
        vItemSpace = 60;
        conditions = "";
        price = 27000;
        textures[] = {};
    };

    class ivory_gt500 {
        vItemSpace = 20;
        conditions = "";
        price = 27000;
        textures[] = {};
    };

    class mrshounka_92_civ_noir {
        vItemSpace = 20;
        conditions = "";
        price = 28000;
        textures[] = {};
    };

    class mrshounka_92_civ_bleufonce {
        vItemSpace = 20;
        conditions = "";
        price = 28000;
        textures[] = {};
    };

    class mrshounka_92_civ_rouge {
        vItemSpace = 20;
        conditions = "";
        price = 28000;
        textures[] = {};
    };

    class mrshounka_92_civ_jaune {
        vItemSpace = 20;
        conditions = "";
        price = 28000;
        textures[] = {};
    };

    class mrshounka_92_civ_rose {
        vItemSpace = 20;
        conditions = "";
        price = 28000;
        textures[] = {};
    };

    class mrshounka_92_civ_grise {
        vItemSpace = 20;
        conditions = "";
        price = 28000;
        textures[] = {};
    };

    class mrshounka_92_civ_violet {
        vItemSpace = 20;
        conditions = "";
        price = 28000;
        textures[] = {};
    };

    class mrshounka_92_civ_orange {
        vItemSpace = 20;
        conditions = "";
        price = 28000;
        textures[] = {};
    };

    class Mrshounka_mercedes_190_p_orange {
        vItemSpace = 60;
        conditions = "";
        price = 28000;
        textures[] = {};
    };

    class Mrshounka_mercedes_190_p_rouge {
        vItemSpace = 60;
        conditions = "";
        price = 28000;
        textures[] = {};
    };

    class Mrshounka_mercedes_190_p_noir {
        vItemSpace = 60;
        conditions = "";
        price = 28000;
        textures[] = {};
    };

    class Mrshounka_mercedes_190_p_violet {
        vItemSpace = 60;
        conditions = "";
        price = 28000;
        textures[] = {};
    };

    class urbanized_67Mustang_orange {
        vItemSpace = 20;
        conditions = "";
        price = 30000;
        textures[] = {};
    };

    class urbanized_67Mustang_darkred {
        vItemSpace = 20;
        conditions = "";
        price = 30000;
        textures[] = {};
    };

    class urbanized_67Mustang_white {
        vItemSpace = 20;
        conditions = "";
        price = 30000;
        textures[] = {};
    };

    class urbanized_67Mustang_black {
        vItemSpace = 20;
        conditions = "";
        price = 30000;
        textures[] = {};
    };

    class urbanized_67Mustang_blue {
        vItemSpace = 20;
        conditions = "";
        price = 30000;
        textures[] = {};
    };

    class urbanized_427_black {
        vItemSpace = 20;
        conditions = "";
        price = 75000;
        textures[] = {};
    };

    class urbanized_427_blue {
        vItemSpace = 20;
        conditions = "";
        price = 75000;
        textures[] = {};
    };

    class urbanized_427_orange {
        vItemSpace = 20;
        conditions = "";
        price = 75000;
        textures[] = {};
    };

    class urbanized_427_pink {
        vItemSpace = 20;
        conditions = "";
        price = 75000;
        textures[] = {};
    };

    class urbanized_427_red {
        vItemSpace = 20;
        conditions = "";
        price = 75000;
        textures[] = {};
    };

    class urbanized_427_white {
        vItemSpace = 20;
        conditions = "";
        price = 75000;
        textures[] = {};
    };

    class urbanized_427_yellow {
        vItemSpace = 20;
        conditions = "";
        price = 75000;
        textures[] = {};
    };

    class urbanized_427_wed {
        vItemSpace = 20;
        conditions = "";
        price = 85000;
        textures[] = {};
    };

/*Kart Shop*/

    class C_Kart_01_Blu_F {
        vItemSpace = 0;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

    class C_Kart_01_Fuel_F {
        vItemSpace = 0;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

    class C_Kart_01_Red_F {
        vItemSpace = 0;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

    class C_Kart_01_Vrana_F {
        vItemSpace = 0;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

/*Med Shop*/

    class cg_stretcher {
        vItemSpace = 60;
        conditions = "";
        price = 5;
        textures[] = {};
    };

    class A3L_CVPILBFD {
        vItemSpace = 60;
        conditions = "";
        price = 1000;
        textures[] = {};
    };

    class Ambulance {
        vItemSpace = 60;
        conditions = "";
        price = 1000;
        textures[] = {};
    };

    class ivory_suburban_ems {
        vItemSpace = 60;
        conditions = "";
        price = 1000;
        textures[] = {};
    };

    class HI_ExplorerEMS {
        vItemSpace = 60;
        conditions = "";
        price = 1000;
        textures[] = {};
    };

    class ivory_wrx_med_ems {
        vItemSpace = 60;
        conditions = "";
        price = 1000;
        textures[] = {};
    };

    class A3L_LadderTruck {
        vItemSpace = 60;
        conditions = "";
        price = 1000;
        textures[] = {};
    };

    class A3l_Charger_EMS_Fast {
        vItemSpace = 60;
        conditions = "";
        price = 1000;
        textures[] = {};
    };

/*Med Ship*/

    class B_Lifeboat {
        vItemSpace = 60;
        conditions = "";
        price = 1000;
        textures[] = {};
    };

    class C_Boat_Civil_01_rescue_F {
        vItemSpace = 60;
        conditions = "";
        price = 1000;
        textures[] = {};
    };

    class B_SDV_01_F {
        vItemSpace = 60;
        conditions = "";
        price = 1000;
        textures[] = {};
    };

/*Med Air HS*/

    class C_Heli_Light_01_elliptical_F {
        vItemSpace = 80;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

/*Med Air*/

    class C_Heli_light_01_elliptical_F {
        vItemSpace = 80;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

    class dezkit_b206_rescue {
        vItemSpace = 80;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

    class dezkit_b206_ems {
        vItemSpace = 80;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

    class UH1H_Medevac {
        vItemSpace = 80;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

    class ARMSCor_A109LUH_I {
        vItemSpace = 80;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

    class USAF_HH60GMED {
        vItemSpace = 80;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 80;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

/*Civ Truck*/

    class ivory_tractor {
        vItemSpace = 50;
        conditions = "";
        price = 7000;
        textures[] = {};
    };

    class ivory_tractor2 {
        vItemSpace = 50;
        conditions = "";
        price = 7000;
        textures[] = {};
    };

    class A3L_Bus {
        vItemSpace = 60;
        conditions = "";
        price = 60000;
        textures[] = {};
    };

    class A3L_Towtruck {
        vItemSpace = 60;
        conditions = "";
        price = 60000;
        textures[] = {};
    };

    class shounka_a3_spr_civ_noir {
        vItemSpace = 120;
        conditions = "";
        price = 60000;
        textures[] = {};
    };

    class Jonzie_Transit {
        vItemSpace = 120;
        conditions = "";
        price = 100000;
        textures[] = {};
    };

    class MG_AA_Tow_Truck_Black {
        vItemSpace = 120;
        conditions = "";
        price = 200000;
        textures[] = {};
    };

    class shounka_a3_brinks_noir {
        vItemSpace = 120;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

    class shounka_a3_brinks_bleufonce {
        vItemSpace = 120;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

    class MG_AA_Tow_Truck_Black {
        vItemSpace = 120;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

    class Jonzie_Western {
        vItemSpace = 60;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

    class Jonzie_Superliner {
        vItemSpace = 60;
        conditions = "";
        price = 280000;
        textures[] = {};
    };

    class Jonzie_Curtain {
        vItemSpace = 60;
        conditions = "";
        price = 350000;
        textures[] = {};
    };

/*Rebel Car*/

    class B_Quadbike_01_F {
        vItemSpace = 20;
        conditions = "";
        price = 2500;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 20;
        conditions = "";
        price = 20000;
        textures[] = {};
    };

    class C_Heli_light_01_digital_F {
        vItemSpace = 20;
        conditions = "";
        price = 325000;
        textures[] = {};
    };

    class I_G_Van_01_fuel_F {
        vItemSpace = 20;
        conditions = "";
        price = 25000;
        textures[] = {};
    };

    class I_G_Van_01_transport_F {
        vItemSpace = 20;
        conditions = "";
        price = 25000;
        textures[] = {};
    };

/*Cop Car*/

    class Aus_PD {
        vItemSpace = 80;
        conditions = "";
        price = 1000;
        textures[] = {};
    };

    class A3L_TaurusFPBLBCSO {
        vItemSpace = 80;
        conditions = "";
        price = 1000;
        textures[] = {};
    };

    class A3L_TaurusCO2 {
        vItemSpace = 80;
        conditions = "";
        price = 1000;
        textures[] = {};
    };

    class DAR_ImpalaPolice {
        vItemSpace = 80;
        conditions = "";
        price = 1000;
        textures[] = {};
    };

    class A3L_Charger_HWP {
        vItemSpace = 80;
        conditions = "";
        price = 2000;
        textures[] = {};
    };

    class DAR_TahoePolice {
        vItemSpace = 80;
        conditions = "";
        price = 68000;
        textures[] = {};
    };

    class DAR_ExplorerPolice {
        vItemSpace = 80;
        conditions = "";
        price = 3000;
        textures[] = {};
    };

    class Aus_UC {
        vItemSpace = 80;
        conditions = "";
        price = 1000;
        textures[] = {};
    };

    class Aus_UC_gray {
        vItemSpace = 80;
        conditions = "";
        price = 1000;
        textures[] = {};
    };

    class Aus_UC_blue {
        vItemSpace = 80;
        conditions = "";
        price = 1000;
        textures[] = {};
    };

    class urbanized_ctsv_uc1 {
        vItemSpace = 80;
        conditions = "";
        price = 1000;
        textures[] = {};
    };

    class urbanized_ctsv_uc2 {
        vItemSpace = 80;
        conditions = "";
        price = 1000;
        textures[] = {};
    };

    class urbanized_ctsv_uc3 {
        vItemSpace = 80;
        conditions = "";
        price = 1000;
        textures[] = {};
    };

    class DAR_ExplorerPoliceStealth {
        vItemSpace = 80;
        conditions = "";
        price = 3000;
        textures[] = {};
    };

    class A3L_ChargerUC_Black_New {
        vItemSpace = 80;
        conditions = "";
        price = 2000;
        textures[] = {};
    };

    class A3L_ChargerUC_Blue_New {
        vItemSpace = 80;
        conditions = "";
        price = 2000;
        textures[] = {};
    };

    class A3L_ChargerUC_white_New {
        vItemSpace = 80;
        conditions = "";
        price = 2000;
        textures[] = {};
    };

    class urbanized_g65_uc1 {
        vItemSpace = 80;
        conditions = "";
        price = 2000;
        textures[] = {};
    };

    class urbanized_g65_uc3 {
        vItemSpace = 80;
        conditions = "";
        price = 2000;
        textures[] = {};
    };

    class demian2435_swat_hunter {
        vItemSpace = 80;
        conditions = "";
        price = 6000;
        textures[] = {};
    };

    class shounka_a3_suburbangign {
        vItemSpace = 80;
        conditions = "";
        price = 6000;
        textures[] = {};
    };

    class urbanized_g65_uc2 {
        vItemSpace = 80;
        conditions = "";
        price = 2000;
        textures[] = {};
    };

    class urbanized_LP700_P {
        vItemSpace = 80;
        conditions = "";
        price = 8000;
        textures[] = {};
    };

/*Civ Air*/

    class sab_FAAllegro {
        vItemSpace = 40;
        conditions = "";
        price = 50000;
        textures[] = {};
    };

    class sab_FAAllegro_2 {
        vItemSpace = 40;
        conditions = "";
        price = 50000;
        textures[] = {};
    };

    class sab_FAAllegro_3 {
        vItemSpace = 40;
        conditions = "";
        price = 50000;
        textures[] = {};
    };

    class sab_FAAllegro_4 {
        vItemSpace = 40;
        conditions = "";
        price = 50000;
        textures[] = {};
    };

    class sab_FAAllegro_5 {
        vItemSpace = 40;
        conditions = "";
        price = 50000;
        textures[] = {};
    };

    class C_Heli_light_01_red_F {
        vItemSpace = 80;
        conditions = "";
        price = 60000;
        textures[] = {};
    };

    class C_Heli_light_01_blue_F {
        vItemSpace = 80;
        conditions = "";
        price = 60000;
        textures[] = {};
    };

    class sab_l19 {
        vItemSpace = 50;
        conditions = "";
        price = 60000;
        textures[] = {};
    };

    class sab_l19_2 {
        vItemSpace = 50;
        conditions = "";
        price = 60000;
        textures[] = {};
    };

    class sab_l19_3 {
        vItemSpace = 50;
        conditions = "";
        price = 60000;
        textures[] = {};
    };

    class sab_RobinDR400 {
        vItemSpace = 50;
        conditions = "";
        price = 80000;
        textures[] = {};
    };

    class sab_RobinDR400_2 {
        vItemSpace = 50;
        conditions = "";
        price = 80000;
        textures[] = {};
    };

    class sab_RobinDR400_3 {
        vItemSpace = 50;
        conditions = "";
        price = 80000;
        textures[] = {};
    };

    class sab_RobinDR400_4 {
        vItemSpace = 50;
        conditions = "";
        price = 80000;
        textures[] = {};
    };

    class sab_RobinDR400_5 {
        vItemSpace = 50;
        conditions = "";
        price = 80000;
        textures[] = {};
    };

    class sab_piper {
        vItemSpace = 65;
        conditions = "";
        price = 80000;
        textures[] = {};
    };

    class sab_piper2 {
        vItemSpace = 65;
        conditions = "";
        price = 80000;
        textures[] = {};
    };

    class sab_piper3 {
        vItemSpace = 65;
        conditions = "";
        price = 80000;
        textures[] = {};
    };

    class sab_piper4 {
        vItemSpace = 65;
        conditions = "";
        price = 80000;
        textures[] = {};
    };

    class sab_piper5 {
        vItemSpace = 65;
        conditions = "";
        price = 80000;
        textures[] = {};
    };

    class c_plane_civil_01_F {
        vItemSpace = 75;
        conditions = "";
        price = 95000;
        textures[] = {};
    };

    class I_c_plane_civil_01_F {
        vItemSpace = 75;
        conditions = "";
        price = 95000;
        textures[] = {};
    };

    class c_plane_civil_01_racing_F {
        vItemSpace = 75;
        conditions = "";
        price = 100000;
        textures[] = {};
    };

    class sab_camel_pro {
        vItemSpace = 30;
        conditions = "";
        price = 100000;
        textures[] = {};
    };

    class dezkit_b206_hs {
        vItemSpace = 100;
        conditions = "";
        price = 150000;
        textures[] = {};
    };

    class dezkit_b206_ls {
        vItemSpace = 100;
        conditions = "";
        price = 150000;
        textures[] = {};
    };

    class dezkit_b206_fl {
        vItemSpace = 100;
        conditions = "";
        price = 170000;
        textures[] = {};
    };

    class dezkit_b206_news {
        vItemSpace = 100;
        conditions = "";
        price = 180000;
        textures[] = {};
    };

    class I_Heli_light_03_unarmed_F {
        vItemSpace = 150;
        conditions = "";
        price = 200000;
        textures[] = {};
    };

    class sab_aeroc {
        vItemSpace = 200;
        conditions = "";
        price = 200000;
        textures[] = {};
    };

    class sab_aeroc_2 {
        vItemSpace = 200;
        conditions = "";
        price = 200000;
        textures[] = {};
    };

    class sab_aeroc_3 {
        vItemSpace = 200;
        conditions = "";
        price = 200000;
        textures[] = {};
    };

    class ARMSCor_A109_Civ {
        vItemSpace = 150;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

    class sab_do228 {
        vItemSpace = 260;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

    class sab_do228_2 {
        vItemSpace = 260;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

    class sab_do228_3_1 {
        vItemSpace = 260;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

    class sab_do228_3_2 {
        vItemSpace = 260;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

    class sab_do228_4 {
        vItemSpace = 260;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

    class sab_do228_5 {
        vItemSpace = 260;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 300;
        conditions = "";
        price = 800000;
        textures[] = {};
    };

    class sab_panther {
        vItemSpace = 30;
        conditions = "";
        price = 1000000;
        textures[] = {};
    };

    class sab_fiat4 {
        vItemSpace = 30;
        conditions = "";
        price = 1200000;
        textures[] = {};
    };

    class sab_fiat5 {
        vItemSpace = 30;
        conditions = "";
        price = 1200000;
        textures[] = {};
    };

    class sab_alphajet9 {
        vItemSpace = 30;
        conditions = "";
        price = 1500000;
        textures[] = {};
    };

    class sab_alphajet10 {
        vItemSpace = 30;
        conditions = "";
        price = 1500000;
        textures[] = {};
    };

    class sab_alphajet11 {
        vItemSpace = 30;
        conditions = "";
        price = 1500000;
        textures[] = {};
    };

    class sab_alphajet12 {
        vItemSpace = 30;
        conditions = "";
        price = 1500000;
        textures[] = {};
    };

    class sab_alphajet13 {
        vItemSpace = 30;
        conditions = "";
        price = 1500000;
        textures[] = {};
    };

/*Cop Air*/

    class C_Heli_light_01_sheriff_F {
        vItemSpace = 60;
        conditions = "";
        price = 35000;
        textures[] = {};
    };

    class B_Heli_light_01_F {
        vItemSpace = 60;
        conditions = "";
        price = 40000;
        textures[] = {};
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 60;
        conditions = "";
        price = 40000;
        textures[] = {};
    };

    class UH1N_Black {
        vItemSpace = 60;
        conditions = "";
        price = 40000;
        textures[] = {};
    };

    class dezkit_b206_fbi {
        vItemSpace = 60;
        conditions = "";
        price = 40000;
        textures[] = {};
    };

    class ARMSCor_A109LUH_B {
        vItemSpace = 60;
        conditions = "";
        price = 40000;
        textures[] = {};
    };

/*Cop Air HQ*/

    class C_Heli_light_01_sheriff_F {
        vItemSpace = 60;
        conditions = "";
        price = 35000;
        textures[] = {};
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 60;
        conditions = "";
        price = 40000;
        textures[] = {};
    };

    class dezkit_b206_fbi {
        vItemSpace = 60;
        conditions = "";
        price = 40000;
        textures[] = {};
    };

    class ARMSCor_A109LUH_B {
        vItemSpace = 60;
        conditions = "";
        price = 40000;
        textures[] = {};
    };

/*Cop Ship*/

    class B_Boat_Transport_01_F {
        vItemSpace = 60;
        conditions = "";
        price = 3000;
        textures[] = {};
    };

    class O_G_Boat_Transport_02_F {
        vItemSpace = 60;
        conditions = "";
        price = 3000;
        textures[] = {};
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 60;
        conditions = "";
        price = 3000;
        textures[] = {};
    };

    class b_SDV_01_F {
        vItemSpace = 60;
        conditions = "";
        price = 3000;
        textures[] = {};
    };

/*Civ Ship*/

    class C_Rubberboat {
        vItemSpace = 20;
        conditions = "";
        price = 68000;
        textures[] = {};
    };

    class A3L_JetSki_Yellow {
        vItemSpace = 20;
        conditions = "";
        price = 1000;
        textures[] = {};
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 60;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

    class A3L_Ship {
        vItemSpace = 40;
        conditions = "";
        price = 35000;
        textures[] = {};
    };

    class burnes_mk10_1 {
        vItemSpace = 50;
        conditions = "";
        price = 500000;
        textures[] = {};
    };

/*
To edit another information in this classes you can use this exemple.
class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
    vItemSpace = 40;
    price = ;
};
will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
*/
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Red_F  : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

    class B_Quadbike_01_F {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 2500;
        textures[] = {
            { "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            } },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            } },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            } },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            } },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            } },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            } },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            } },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 250;
        conditions = "license_civ_trucking";
        price = 100000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 200;
        conditions = "license_civ_trucking";
        price = 75000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 300;
        conditions = "license_civ_trucking";
        price = 250000;
        textures[] = {};
    };

    class C_Hatchback_01_F {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 9500;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 30000;
        textures[] = {
            { "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
            { "Police", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
            } }
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 100;
        conditions = "license_civ_driver";
        price = 45000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 150;
        conditions = "license_civ_trucking";
        price = 60000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class B_MRAP_01_F {
        vItemSpace = 65;
        conditions = "";
        price = 30000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

     class B_Heli_Light_01_stripped_F {
        vItemSpace = 90;
        conditions = "";
        price = 275000;
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 90;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 245000;
        textures[] = {
            { "Police", "cop", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            } },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            } },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

    class C_Heli_Light_01_civil_F : B_Heli_Light_01_F {
        vItemSpace = 75;
        price = 245000;
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 210;
        conditions = "license_civ_pilot || {license_med_mAir}";
        price = 750000;
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            } },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

    class B_SDV_01_F {
        vItemSpace = 50;
        conditions = "license_civ_boat || {license_cop_cg}";
        price = 150000;
        textures[] = {};
    };

        class C_Van_01_fuel_F {
        vItemSpace = 20;
        vFuelSpace = 19500;
        conditions = "license_civ_trucking";
        price = 120000;
        textures[] = {
            { "White", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
            } },
            { "Red", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
            } }
        };
    };

    class I_Truck_02_fuel_F {
        vItemSpace = 40;
        vFuelSpace = 42000;
        conditions = "license_civ_trucking";
        price = 200000;
        textures[] = {
            { "White", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_fuel_co.paa"
            } }
        };
    };

    class B_Truck_01_fuel_F {
        vItemSpace = 50;
        vFuelSpace = 50000;
        conditions = "license_civ_trucking";
        price = 250000;
        textures[] = {};
    };
};
