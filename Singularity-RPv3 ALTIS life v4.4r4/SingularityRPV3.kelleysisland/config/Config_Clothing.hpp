/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        4: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "faux_press_clothing", "Reporter Clothing", 250, "" },
            { "U_C_Journalist", "Press Clothing", 250, "" },
            { "U_PMC_BrnPolo_BgPants", "PMC Polo 1", 250, "" },
            { "U_PMC_WhtPolo_GrnPants", "PMC Polo 2", 250, "" },
            { "U_PMC_BlkTShirt_DJeans", "PMC Polo 3", 250, "" },
            { "U_PMC_BluTShirt_SJeans", "PMC Polo 4", 250, "" },
            { "U_C_Poloshirt_blue", "Poloshirt Blue", 250, "" },
            { "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 275, "" },
            { "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 150, "" },
            { "U_C_Poloshirt_salmon", "Poloshirt Salmon", 175, "" },
            { "U_C_Poloshirt_stripped", "Poloshirt stripped", 125, "" },
            { "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 350, "" },
            { "U_C_Poor_2", "Rag tagged clothes", 250, "" },
            { "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, "" },
            { "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, "" },
            { "U_IG_Guerilla2_3", "The Outback Rangler", 1200, "" },
            { "vip_clothes", "VIP Civlian", 1200, "" },
            { "U_C_HunterBody_grn", "The Hunters Look", 1500, "" },
            { "U_C_WorkerCoveralls", "Mechanic Coveralls", 2500, "" },
            { "U_OrestesBody", "Surfing On Land", 1100, "" },
            { "U_NikosAgedBody", "Casual Wears", 5000, "" },
            { "TRYK_SUITS_BLK_F", "Tailored BL Suit", 1000, "" },
            { "TRYK_SUITS_BR_F", "Tailored BR Suit", 1000, "" },
            { "TRYK_U_B_Denim_T_BK", "Grey Jeans (Black)", 1000, "" },
            { "TRYK_U_B_Denim_T_WH", "Grey Jeans (White)", 1000, "" },
            { "TRYK_U_B_BLKTAN_CombatUniform", "Black T Tan P", 1000, "" },
            { "TRYK_U_B_PCUGs_BLK", "Blue Jeans Black Hood", 1000, "" },
            { "U_PMC_BluePlaidShirt_BeigeCords", "Blue Plaid Shirt", 1000, "" },
            { "U_PMC_RedPlaidShirt_DenimCords", "Red Plaid Shirt", 1000, "" },
            { "KAEL_SUITS_BR_F12", "Black Suit", 1000, "" },
            { "KAEL_SUITS_BR_F14", "White Suit", 1000, "" },
            { "KAEL_SUITS_BR_F13", "White Suit 2", 1000, "" },
            { "KAEL_SUITS_BR_F7", "Orange Suit", 1000, "" },
            { "KAEL_SUITS_BR_F11", "Purple Suit", 1000, "" },
            { "KAEL_SUITS_BR_F10", "Teal Suit", 1000, "" },
            { "A3LCivPoloUK", "PMC Tactical", 1000, "" },
            { "cg_csgo1", "", 1000, "" },
            { "cg_taylorswift1", "", 1000, { "Fabulous Clothes", "", -1 } },
            { "cg_bb1", "", 1000, { "BB Shirt", "", -1 } },
            { "cg_catvideos1", "Cat Videos Shirt", 1000, "" },
            { "cg_condoms1", "Condom Shirt", 1000, "" },
            { "cg_csgo1", "CSGO Shirt", 1000, "" },
            { "cg_jason1", "Jason Shirt", 1000, "" },
            { "cg_joker1", "Joker Shirt", 1000, "" },
            { "cg_mtv1", "MTV Shirt", 1000, "" },
            { "cg_nike1", "Nike Shirt", 1000, "" },
            { "cg_peanut1", "Peanut Shirt", 1000, "" },
            { "cg_superman1", "Superman Shirt", 1000, "" },
            { "cg_tupac1", "Tupac Shirt", 1000, "" },
            { "cg_got1", "GOT Shirt", 1000, "" },
            { "cg_wow1", "WoW Shirt", 1000, "" },
            { "cg_chickens1", "Chicken Shirt", 1000, "" },
            { "cg_et1", "", 1000, { "ET Shirt", "", -1 } },
            { "cg_hand1", "", 1000, { "Hand Shirt", "", -1 } },
            { "cg_illuminati1", "", 1000, { "Illuminati Shirt", "", -1 } },
            { "cg_steam1", "", 1000, { "Steam Shirt", "", -1 } },
            { "cg_stoned1", "", 1000, { "Stoned Shirt", "", -1 } },
            { "cg_upyours1", "Up Yours Shirt", 1000, "" },
            { "cg_woods1", "Woods Shirt", 1000, "" },
            { "cg_beats1", "Beats Shirt", 1000, "" },
            { "cg_burgerking1", "Burger King Shirt", 1000, "" },
            { "cg_lego1", "Lego Shirt", 1000, "" },
            { "cg_mario1", "Mario Shirt", 1000, "" },
            { "cg_pepsi1", "Pepsi Shirt", 1000, "" },
            { "cg_ea1", "EA Shirt", 1000, "" },
            { "cg_ferrari1", "Ferrari Shirt", 1000, "" },
            { "cg_fightclub1", "Fight Club Shirt", 1000, "" },
            { "cg_gameover1", "Game Over Shirt", 1000, "" },
            { "cg_gamerepeat1", "Game Repeat Shirt", 1000, "" },
            { "cg_homer1", "Homer Shirt", 1000, "" },
            { "cg_kfc1", "KFC Shirt", 1000, "" },
            { "cg_lambo1", "Lambo Shirt", 1000, "" },
            { "cg_lsd1", "LSD Shirt", 1000, "" },
            { "cg_masterrace1", "Master Race Shirt", 1000, "" },
            { "cg_pika1", "Pikachu Shirt", 1000, "" },
            { "cg_turtles1", "Turtles Shirt", 1000, "" },
            { "cg_awesome1", "Awesome Shirt", 1000, "" },
            { "cg_dad1", "Dad Shirt", 1000, "" },
            { "cg_deeznuts1", "Deez Nuts Shirt", 1000, "" },
            { "cg_evolution1", "Evolution Shirt", 1000, "" },
            { "cg_hearts1", "Heart Shirt", 1000, "" },
            { "cg_loading1", "Loading Shirt", 1000, "" },
            { "cg_mayan1", "Mayan Shirt", 1000, "" },
            { "cg_strippers1", "Strippers Shirt", 1000, "" },
            { "A3L_Bikini_Girl", "Bikini", 1000, "" },
            { "A3L_SpookyMummy", "Spooky Mummy Costume", 1000, "" },
            { "A3L_Zombie", "Zombie Costume", 1000, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "faux_press_helmet", "Reporter Helmet", 500, "" },
            { "H_Cap_press", "Press Hat", 500, "" },
            { "H_Bandanna_camo", "Camo Bandanna", 120, "" },
            { "H_Bandanna_surfer", "Surfer Bandanna", 130, "" },
            { "H_Bandanna_gry", "Grey Bandanna", 150, "" },
            { "H_Bandanna_cbr", "", 165, "" },
            { "H_Bandanna_surfer", "", 135, "" },
            { "H_Bandanna_khk", "Khaki Bandanna", 145, "" },
            { "H_Bandanna_sgg", "Sage Bandanna", 160, "" },
            { "H_StrawHat", "Straw Fedora", 225, "" },
            { "H_BandMask_blk", "Hat & Bandanna", 300, "" },
            { "H_Booniehat_tan", "", 425, "" },
            { "H_Hat_blue", "", 310, "" },
            { "H_Cap_pmc_headphones", "", 310, "" },
            { "H_Cap_tan_pmc", "", 310, "" },
            { "H_Hat_brown", "", 276, "" },
            { "H_Hat_checker", "", 340, "" },
            { "H_Hat_grey", "", 280, "" },
            { "H_Hat_tan", "", 265, "" },
            { "H_Cap_blu", "", 150, "" },
            { "H_Cap_grn", "", 150, "" },
            { "H_Cap_grn_BI", "", 150, "" },
            { "H_Cap_oli", "", 150, "" },
            { "H_Cap_red", "", 150, "" },
            { "H_Cap_tan", "", 150, "" },
            { "TRYK_H_Bandana_H", "Ninja Bandana", 1000, "" },
            { "TRYK_H_Bandana_wig", "Ninja Bandana II", 1000, "" },
            { "TRYK_H_EARMUFF", "Ear Protectors", 1000, "" },
            { "TRYK_H_headsetcap_blk", "Black Hat", 1000, "" },
            { "TRYK_H_headsetcap", "White Hat", 1000, "" },
            { "TRYK_H_pakol2", "Mid East Hat", 1000, "" },
            { "TRYK_R_CAP_BLK", "Reverse Black", 1000, "" },
            { "TRYK_R_CAP_TAN", "Reverse Tan", 1000, "" },
            { "TRYK_ESS_CAP_OD", "", 1000, "" },
            { "TRYK_ESS_CAP_tan", "", 1000, "" },
            { "TRYK_H_wig", "Real Hair Wig", 1000, "" },
            { "TRYK_H_woolhat", "Slick Beanie", 1000, "" },
            { "", "", 1000, "" },
            { "A3L_sombrero", "", 1000, "" },
            { "A3L_mexicanhat", "", 1000, "" },
            { "A3L_russianhat", "", 1000, "" },
            { "A3L_Crown", "", 1000, "" },
            { "A3L_longhairblond", "", 1000, "" },
            { "A3L_longhairblack", "", 1000, "" },
            { "A3L_longhairbrown", "", 1000, "" },
            { "A3L_Legoman", "Lego Hat", 1000, "" },
            { "A3L_soa_helmet", "SOA Helmet", 1000, "" },
            { "A3L_gangster_hat", "Gangster Hat", 1000, "" },
            { "A3L_SkateHelmet_green", "Green Skate Helmet", 1000, "" },
            { "Kio_Afro_Hat", "Afro Wig", 1000, "" },
            { "Kio_Capital_Hat", "Top Hat Monacle", 1000, "" },
            { "Kio_No1_Hat", "#1 Hat", 1000, "" },
            { "Kio_Pirate_Hat", "Pirate Hat", 1000, "" },
            { "Masque_Alien1", "", 1000, "" },
            { "Masque_Anonymous", "", 1000, "" },
            { "Masque_Chains", "", 1000, "" },
            { "Payday_GeneralO", "", 1000, "" },
            { "Casque_Moto", "", 1000, "" },
            { "Masque_Clinton", "", 1000, "" },
            { "Masque_speedRunner", "", 1000, "" },
            { "Masque_Unic", "", 1000, "" },
            { "Masque_Aubrey", "", 1000, "" },
            { "Masque_Bonnie", "", 1000, "" },
            { "Masque_Bush", "", 1000, "" },
            { "Masque_Mempo", "", 1000, "" },
            { "Masque_Lincoln", "", 1000, "" },
            { "Masque_Wolfv2", "", 1000, "" },
            { "Masque_archNemesis", "", 1000, "" },
            { "Masque_Arnold", "", 1000, "" },
            { "Masque_Chuck", "", 1000, "" },
            { "Masque_Clover", "", 1000, "" },
            { "Masque_Fish", "", 1000, "" },
            { "Masque_Hockey", "", 1000, "" },
            { "Masque_Metalhead", "", 1000, "" },
            { "Masque_Religieuse", "", 1000, "" },
            { "Masque_Smiley", "", 1000, "" },
            { "Masque_Santa", "", 1000, "" },
            { "Masque_Momie", "", 1000, "" },
            { "Masque_Optimiste", "Optimus", 1000, "" },
            { "Masque_forceAlpha", "", 1000, "" },
            { "Masque_GdG", "", 1000, "" },
            { "Masque_Gombo", "", 1000, "" },
            { "Masque_Lion", "", 1000, "" },
            { "Masque_Orc", "", 1000, "" },
            { "Masque_Mark", "", 1000, "" },
            { "Masque_Macrilleuse", "", 1000, "" },
            { "Masque_Hoxton", "", 1000, "" },
            { "Masque_Incendiaire", "", 1000, "" },
            { "Masque_Dallas", "", 1000, "" },
            { "Kio_Spinning_Hat", "Spinny Hat", 1000, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Shades_Black", "", 25, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 20, "" },
            { "G_Sport_Checkered", "", 20, "" },
            { "G_Sport_Blackyellow", "", 20, "" },
            { "G_Sport_BlackWhite", "", 20, "" },
            { "G_Squares", "", 10, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Combat", "", 55, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_Press_F", "Press Vest", 500, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_AssaultPack_cbr", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 4500, "" },
            { "B_TacticalPack_oli", "", 3500, "" },
            { "B_FieldPack_ocamo", "", 3000, "" },
            { "B_Bergen_sgg", "", 4500, "" },
            { "B_Kitbag_cbr", "", 4500, "" },
            { "B_Carryall_oli", "", 5000, "" },
            { "B_Carryall_khk", "", 5000, "" },
            { "koileagle", "", 5000, "" },
            { "koilgoonsquad", "", 5000, "" },
            { "koilgraf_1", "", 5000, "" },
            { "koilsmashing", "", 5000, "" },
            { "koilsponge_1", "", 5000, "" },
            { "TRYK_B_Coyotebackpack", "", 5000, "" },
            { "cl3_civ_tacticalbelt_black", "", 5000, "" },
            { "cl3_civ_tacticalbelt", "", 5000, "" },
            { "CL3_ParachutePackAmerica", "USA Parachute", 5000, "" },
            { "CL3_ParachutePack", "UK Parachute", 5000, "" },
            { "B_CRRC_backpack", "", 15000, "" }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        license = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "demian2435_police_man_uniform", "UCPD Patrol Uniform", 55, "FETCH_CONST(life_coplevel) >= 1" },
            { "doc_uniform_co", "DOC Uniform", 55, "FETCH_CONST(life_coplevel) >= 1" },
            { "fto_uni", "FTO Uniform", 25, "FETCH_CONST(life_coplevel) >= 1" },
            { "TRYK_U_B_AOR2_OD_CombatUniform", "SWAT Uniform", 55, "FETCH_CONST(life_coplevel) >= 1" },
            { "demian2435_swat_man_uniform", "Riot Uniform", 65, "FETCH_CONST(life_coplevel) >= 1" },
            { "U_007_BIS_Marshall", "Undercover Clothes", 25, "FETCH_CONST(life_coplevel) >= 1" },
            { "demian2435_pilot_uniform", "Pilot Uniform", 55, "FETCH_CONST(life_coplevel) >= 1" },
            { "U_B_Wetsuit", "Police Dive Suit", 25, "FETCH_CONST(life_coplevel) >= 1" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "jamie_pcapblack", "Patrol Cap", 25, "FETCH_CONST(life_coplevel) >= 1" },
            { "rhsusf_opscore_fg", "SWAT Helmet", 25, "FETCH_CONST(life_coplevel) >= 1" },
            { "demian2435_swat_helmet", "Riot Helmet", 25, "FETCH_CONST(life_coplevel) >= 1" },
            { "demian2435_pilot_helmet", "SWAT Pilot Helmet", 25, "FETCH_CONST(life_coplevel) >= 1" },
            { "H_PilotHelmetHeli_B", "Pilot Helmet", 25, "FETCH_CONST(life_coplevel) >= 1" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Aviator", "", 25, "FETCH_CONST(life_coplevel) >= 1" },
            { "G_Shades_Black", "", 25, "FETCH_CONST(life_coplevel) >= 1" },
            { "G_Squares", "", 25, "FETCH_CONST(life_coplevel) >= 1" },
            { "Mask_M50", "SWAT Gas Mask", 25, "FETCH_CONST(life_coplevel) >= 1" },
            { "TRYK_kio_balaclava_BLK_ear", "SWAT Balaclava", 25, "FETCH_CONST(life_coplevel) >= 1" },
            { "G_Diving", "PD Diving Goggles", 25, "FETCH_CONST(life_coplevel) >= 1" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "jamie_black", "Patrol Vest", 500, "FETCH_CONST(life_coplevel) >= 1" },
            { "TCG_swatvest1", "SWAT Vest", 500, "FETCH_CONST(life_coplevel) >= 1" },
            { "Jamie_Sheriff1", "Riot Vest", 500, "FETCH_CONST(life_coplevel) >= 1" },
            { "V_RebreatherB", "Police Rebreather", 500, "FETCH_CONST(life_coplevel) >= 1" },
            { "TCG_UCPD", "Command Vest", 500, "FETCH_CONST(life_coplevel) >= 1" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "AM_PoliceBelt", "Patrol Belt", 800, "FETCH_CONST(life_coplevel) >= 1" },
            { "TRYK_B_Belt_BLK", "SWAT/CRT/Riot Belt", 800, "FETCH_CONST(life_coplevel) >= 1" }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        license = "dive";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_O_Wetsuit", "", 2000, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Diving", "", 500, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_RebreatherIR", "", 5000, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        license = "gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_Rangemaster_belt", "", 4900, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_Rangemaster_belt", "", 1900, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        license = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_Marshal", "Medic Uniform", 500, "" },
            { "A3L_EMT2", "Command Field Uniform", 500, "" },
            { "tryk_u_b_wh_blk_rollup_combatUniform", "Command Uniform 2", 500, "" },
            { "U_I_Wetsuit", "SAR Wetsuit", 500, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_Cap_red", "", 10, "" },
            { "H_Cap_blu", "", 10, "" },
            { "TCG_esuav_helmet", "EMS Flight Helmet", 500, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "A3L_FatHead", "", 500, "" },
            { "G_Diving", "", 25, "" },
            { "G_Aviator", "", 50, "" },
            { "G_Shades_Black", "", 50, "" },
            { "G_Shades_Blue", "", 50, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "cl3_police_vest_pm", "Paramedic Vest", 500, "" },
            { "cl3_police_vest_fd", "Fire Dept Vest", 500, "" },
            { "cl3_police_vest_mr", "Command Vest", 500, "" },
            { "V_RebreatherB", "SAR Rebreather", 500, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "cl3_emt_tacticalbelt_black", "", 500, "" },
            { "cl3_emt_tacticalbelt", "EMS Command Belt", "" }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        license = "rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_IG_Guerilla1_1", "", 5000, {"", "", -1} },
            { "TRYK_U_B_TANOCP_R_CombatUniformTshirt", "", 5000, {"", "", -1} },
            { "TRYK_U_B_Woodland", "", 5000, {"", "", -1} },
            { "TRYK_U_B_AOR2_GRY_R_CombatUniform", "", 5000, {"", "", -1} },
            { "U_I_G_Story_Protagonist_F", "", 5000, "" },
            { "U_I_CombatUniform_shortsleeve", 5000, "" },
            { "U_I_G_resistanceLeader_F", "", 5000, "" },
            { "TRYK_U_B_Woodland", 5000, "" },
            { "TRYK_U_B_ARO2R_CombatUniform", 5000, "" },
            { "TRYK_U_B_fleece", 5000, "" },
            { "TRYK_U_B_MARPAT_Wood", 5000, "" },
            { "TRYK_U_B_3CD_Ranger_BDU", 5000, "" },
            { "TRYK_U_B_TANOCP_R_CombatUniformTshirt", 5000, "" },
            { "TRYK_B_TRYK_OCP_T", 5000, "" },
            { "TRYK_U_B_Wood_PCUs", 5000, "" },
            { "TRYK_U_B_PCUODHs", 5000, "" },
            { "TRYK_U_B_NATO_UCP_CombatUniform", 5000, "" },
            { "TRYK_U_taki_wh", 5000, "" },
            { "TRYK_U_B_PCUHs", 5000, "" },
            { "TRYK_U_B_AOR1_Rollup_CombatUniform", 5000, "" },
            { "TRYK_U_B_AOR2_Rollup_CombatUniform", 5000, "" },
            { "A3LJumperUKBlack", 5000, "" },
            { "U_O_SpecopsUniform_ocamo", "", 5000, "" },
            { "U_O_PilotCoveralls", "", 5000, "" },
            { "TRYK_U_B_NATO_OCPD_CombatUniform", "", 5000, "" },
            { "TRYK_U_B_AOR2_OD_CombatUniform", "", 5000, "" },
            { "U_IG_leader", "Guerilla Leader", 5000, "" },
            { "U_O_GhillieSuit", "", 50000, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_ShemagOpen_tan", "", 850, "" },
            { "H_Shemag_olive", "", 850, "" },
            { "H_ShemagOpen_khk", "", 800, "" },
            { "H_HelmetO_ocamo", "", 2500, "" },
            { "TRYK_H_PASGT_OD", "", 2500, "" },
            { "TRYK_H_PASGT_TAN", "", 2500, "" },
            { "TRYK_H_DELTAHELM_NV", "", 2500, "" },
            { "H_MilCap_oucamo", "", 1200, "" },
            { "H_Watchcap_cbr", "", 1200, "" },
            { "H_Booniehat_GCAMO", "", 1200, "" },
            { "H_Booniehat_mcamo", "", 1200, "" },
            { "H_Bandanna_camo", "", 650, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "Payday_Cagoule", "", 100, "" },
            { "Mask_M40_OD", "", 20000, "" },
            { "G_mas_wpn_wrap_mask_c", "", 100, "" },
            { "TRYK_kio_balaclava_ear", "", 100, "" },
            { "G_Shades_Black", "", 25, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 20, "" },
            { "G_Sport_Checkered", "", 20, "" },
            { "G_Sport_Blackyellow", "", 20, "" },
            { "G_Sport_BlackWhite", "", 20, "" },
            { "G_Squares", "", 10, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Combat", "", 55, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_TacVest_khk", "", 12500, "" },
            { "V_BandollierB_cbr", "", 4500, "" },
            { "V_HarnessOGL_brn", "", 4500, "" },
            { "TRYK_V_PlateCarrier_coyo_L", "", 30000, "" },
            { "TRYK_V_PlateCarrier_Woodland", "", 35000, "" },
            { "V_PlateCarrier1_rgr", "", 35000, "" },
            { "V_PlateCarrier2_rgr", "", 40000, "" },
            { "V_PlateCarrierIA1_dgtl", "", 35000, "" },
            { "V_Chestrig_khk", "", 7500, "" },
            { "V_Chestrig_rgr", "", 7500, "" },
            { "V_I_G_resistanceLeader_F", "", 20000, "" },
            { "V_HarnessO_brn", "", 7500, "" },
            { "rhsusf_iotv_ocp_Grenadier", "", 40000, "" },
            { "rhsusf_spc_marksman", "", 40000, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_AssaultPack_cbr", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 4500, "" },
            { "B_TacticalPack_oli", "", 3500, "" },
            { "B_FieldPack_ocamo", "", 3000, "" },
            { "B_Bergen_sgg", "", 4500, "" },
            { "B_Kitbag_cbr", "", 4500, "" },
            { "B_Carryall_oli", "", 5000, "" },
            { "B_Carryall_khk", "", 5000, "" }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_C_Driver_1_black", "", 1500, "" },
            { "U_C_Driver_1_blue", "", 1500, "" },
            { "U_C_Driver_1_red", "", 1500, "" },
            { "U_C_Driver_1_orange", "", 1500, "" },
            { "U_C_Driver_1_green", "", 1500, "" },
            { "U_C_Driver_1_white", "", 1500, "" },
            { "U_C_Driver_1_yellow", "", 1500, "" },
            { "U_C_Driver_2", "", 3500, "" },
            { "U_C_Driver_1", "", 3600, "" },
            { "U_C_Driver_3", "", 3700, "" },
            { "U_C_Driver_4", "", 3700, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_RacingHelmet_1_black_F", "", 1000, "" },
            { "H_RacingHelmet_1_red_F", "", 1000, "" },
            { "H_RacingHelmet_1_white_F", "", 1000, "" },
            { "H_RacingHelmet_1_blue_F", "", 1000, "" },
            { "H_RacingHelmet_1_yellow_F", "", 1000, "" },
            { "H_RacingHelmet_1_green_F", "", 1000, "" },
            { "H_RacingHelmet_1_F", "", 2500, "" },
            { "H_RacingHelmet_2_F", "", 2500, "" },
            { "H_RacingHelmet_3_F", "", 2500, "" },
            { "H_RacingHelmet_4_F", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" }
        };
    };
};
