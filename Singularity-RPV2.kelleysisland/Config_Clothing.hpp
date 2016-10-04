/*
	ARRAY FORMAT:
		0: STRING (Classname)
		1: STRING (Display Name, leave as "" for default)
		2: SCALAR (Price)
		4: ARRAY (This is for limiting items to certain things)
			0: Variable to read from
			1: Variable Value Type
			2: What to compare to
*/
class Clothing {
	class bruce {
		title = "STR_Shops_C_Bruce";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "faux_press_clothing", "Reporter Clothing", 250, { "", "", -1 } },
			{ "U_C_Journalist", "Press Clothing", 250, { "", "", -1 } },
			{ "U_PMC_BrnPolo_BgPants", "PMC Polo 1", 250, { "", "", -1 } },
			{ "U_PMC_WhtPolo_GrnPants", "PMC Polo 2", 250, { "", "", -1 } },
			{ "U_PMC_BlkTShirt_DJeans", "PMC Polo 3", 250, { "", "", -1 } },
			{ "U_PMC_BluTShirt_SJeans", "PMC Polo 4", 250, { "", "", -1 } },
			{ "U_C_Poloshirt_blue", "Poloshirt Blue", 250, { "", "", -1 } },
			{ "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 275, { "", "", -1 } },
			{ "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 150, { "", "", -1 } },
			{ "U_C_Poloshirt_salmon", "Poloshirt Salmon", 175, { "", "", -1 } },
			{ "U_C_Poloshirt_stripped", "Poloshirt stripped", 125, { "", "", -1 } },
			{ "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 350, { "", "", -1 } },
			{ "U_C_Poor_2", "Rag tagged clothes", 250, { "", "", -1 } },
			{ "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, { "", "", -1 } },
			{ "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, { "", "", -1 } },
			{ "U_IG_Guerilla2_3", "The Outback Rangler", 1200, { "", "", -1 } },
			{ "vip_clothes", "VIP Civlian", 1200, { "", "", -1 } },
			{ "U_C_HunterBody_grn", "The Hunters Look", 1500, { "", "", -1 } },
			{ "U_C_WorkerCoveralls", "Mechanic Coveralls", 2500, { "", "", -1 } },
			{ "U_OrestesBody", "Surfing On Land", 1100, { "", "", -1 } },
			{ "U_NikosAgedBody", "Casual Wears", 5000, { "", "", -1 } },
			{ "TRYK_SUITS_BLK_F", "Tailored BL Suit", 1000, { "", "", -1 } },
			{ "TRYK_SUITS_BR_F", "Tailored BR Suit", 1000, { "", "", -1 } },
			{ "TRYK_U_B_Denim_T_BK", "Grey Jeans (Black)", 1000, { "", "", -1 } },
			{ "TRYK_U_B_Denim_T_WH", "Grey Jeans (White)", 1000, { "", "", -1 } },
			{ "TRYK_U_B_BLKTAN_CombatUniform", "Black T Tan P", 1000, { "", "", -1 } },
			{ "TRYK_U_B_PCUGs_BLK", "Blue Jeans Black Hood", 1000, { "", "", -1 } },
			{ "U_PMC_BluePlaidShirt_BeigeCords", "Blue Plaid Shirt", 1000, { "", "", -1 } },
			{ "U_PMC_RedPlaidShirt_DenimCords", "Red Plaid Shirt", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F12", "Black Suit", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F14", "White Suit", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F13", "White Suit 2", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F7", "Orange Suit", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F11", "Purple Suit", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F10", "Teal Suit", 1000, { "", "", -1 } },
			{ "A3LCivPoloUK", "PMC Tactical", 1000, { "", "", -1 } },
			{ "cg_csgo1", "", 1000, { "", "", -1 } },
			{ "cg_taylorswift1", "", 1000, { "Fabulous Clothes", "", -1 } },
			{ "cg_bb1", "", 1000, { "BB Shirt", "", -1 } },
			{ "cg_catvideos1", "Cat Videos Shirt", 1000, { "", "", -1 } },
			{ "cg_condoms1", "Condom Shirt", 1000, { "", "", -1 } },
			{ "cg_csgo1", "CSGO Shirt", 1000, { "", "", -1 } },
			{ "cg_jason1", "Jason Shirt", 1000, { "", "", -1 } },
			{ "cg_joker1", "Joker Shirt", 1000, { "", "", -1 } },
			{ "cg_mtv1", "MTV Shirt", 1000, { "", "", -1 } },
			{ "cg_nike1", "Nike Shirt", 1000, { "", "", -1 } },
			{ "cg_peanut1", "Peanut Shirt", 1000, { "", "", -1 } },
			{ "cg_superman1", "Superman Shirt", 1000, { "", "", -1 } },
			{ "cg_tupac1", "Tupac Shirt", 1000, { "", "", -1 } },
			{ "cg_got1", "GOT Shirt", 1000, { "", "", -1 } },
			{ "cg_wow1", "WoW Shirt", 1000, { "", "", -1 } },
			{ "cg_chickens1", "Chicken Shirt", 1000, { "", "", -1 } },
			{ "cg_et1", "", 1000, { "ET Shirt", "", -1 } },
			{ "cg_hand1", "", 1000, { "Hand Shirt", "", -1 } },
			{ "cg_illuminati1", "", 1000, { "Illuminati Shirt", "", -1 } },
			{ "cg_steam1", "", 1000, { "Steam Shirt", "", -1 } },
			{ "cg_stoned1", "", 1000, { "Stoned Shirt", "", -1 } },
			{ "cg_upyours1", "Up Yours Shirt", 1000, { "", "", -1 } },
			{ "cg_woods1", "Woods Shirt", 1000, { "", "", -1 } },
			{ "cg_beats1", "Beats Shirt", 1000, { "", "", -1 } },
			{ "cg_burgerking1", "Burger King Shirt", 1000, { "", "", -1 } },
			{ "cg_lego1", "Lego Shirt", 1000, { "", "", -1 } },
			{ "cg_mario1", "Mario Shirt", 1000, { "", "", -1 } },
			{ "cg_pepsi1", "Pepsi Shirt", 1000, { "", "", -1 } },
			{ "cg_ea1", "EA Shirt", 1000, { "", "", -1 } },
			{ "cg_ferrari1", "Ferrari Shirt", 1000, { "", "", -1 } },
			{ "cg_fightclub1", "Fight Club Shirt", 1000, { "", "", -1 } },
			{ "cg_gameover1", "Game Over Shirt", 1000, { "", "", -1 } },
			{ "cg_gamerepeat1", "Game Repeat Shirt", 1000, { "", "", -1 } },
			{ "cg_homer1", "Homer Shirt", 1000, { "", "", -1 } },
			{ "cg_kfc1", "KFC Shirt", 1000, { "", "", -1 } },
			{ "cg_lambo1", "Lambo Shirt", 1000, { "", "", -1 } },
			{ "cg_lsd1", "LSD Shirt", 1000, { "", "", -1 } },
			{ "cg_masterrace1", "Master Race Shirt", 1000, { "", "", -1 } },
			{ "cg_pika1", "Pikachu Shirt", 1000, { "", "", -1 } },
			{ "cg_turtles1", "Turtles Shirt", 1000, { "", "", -1 } },
			{ "cg_awesome1", "Awesome Shirt", 1000, { "", "", -1 } },
			{ "cg_dad1", "Dad Shirt", 1000, { "", "", -1 } },
			{ "cg_deeznuts1", "Deez Nuts Shirt", 1000, { "", "", -1 } },
			{ "cg_evolution1", "Evolution Shirt", 1000, { "", "", -1 } },
			{ "cg_hearts1", "Heart Shirt", 1000, { "", "", -1 } },
			{ "cg_loading1", "Loading Shirt", 1000, { "", "", -1 } },
			{ "cg_mayan1", "Mayan Shirt", 1000, { "", "", -1 } },
			{ "cg_strippers1", "Strippers Shirt", 1000, { "", "", -1 } },
			{ "A3L_Bikini_Girl", "Bikini", 1000, { "", "", -1 } },
			{ "A3L_SpookyMummy", "Spooky Mummy Costume", 1000, { "", "", -1 } },
			{ "A3L_Zombie", "Zombie Costume", 1000, { "", "", -1 } },
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "faux_press_helmet", "Reporter Helmet", 500, { "", "", -1 } },
			{ "H_Cap_press", "Press Hat", 500, { "", "", -1 } },
			{ "H_Bandanna_camo", "Camo Bandanna", 120, { "", "", -1 } },
			{ "H_Bandanna_surfer", "Surfer Bandanna", 130, { "", "", -1 } },
			{ "H_Bandanna_gry", "Grey Bandanna", 150, { "", "", -1 } },
			{ "H_Bandanna_cbr", "", 165, { "", "", -1 } },
			{ "H_Bandanna_surfer", "", 135, { "", "", -1 } },
			{ "H_Bandanna_khk", "Khaki Bandanna", 145, { "", "", -1 } },
			{ "H_Bandanna_sgg", "Sage Bandanna", 160, { "", "", -1 } },
			{ "H_StrawHat", "Straw Fedora", 225, { "", "", -1 } },
			{ "H_BandMask_blk", "Hat & Bandanna", 300, { "", "", -1 } },
			{ "H_Booniehat_tan", "", 425, { "", "", -1 } },
			{ "H_Hat_blue", "", 310, { "", "", -1 } },
			{ "H_Cap_pmc_headphones", "", 310, { "", "", -1 } },
			{ "H_Cap_tan_pmc", "", 310, { "", "", -1 } },
			{ "H_Hat_brown", "", 276, { "", "", -1 } },
			{ "H_Hat_checker", "", 340, { "", "", -1 } },
			{ "H_Hat_grey", "", 280, { "", "", -1 } },
			{ "H_Hat_tan", "", 265, { "", "", -1 } },
			{ "H_Cap_blu", "", 150, { "", "", -1 } },
			{ "H_Cap_grn", "", 150, { "", "", -1 } },
			{ "H_Cap_grn_BI", "", 150, { "", "", -1 } },
			{ "H_Cap_oli", "", 150, { "", "", -1 } },
			{ "H_Cap_red", "", 150, { "", "", -1 } },
			{ "H_Cap_tan", "", 150, { "", "", -1 } },
			{ "TRYK_H_Bandana_H", "Ninja Bandana", 1000, { "", "", -1 } },
			{ "TRYK_H_Bandana_wig", "Ninja Bandana II", 1000, { "", "", -1 } },
			{ "TRYK_H_EARMUFF", "Ear Protectors", 1000, { "", "", -1 } },
			{ "TRYK_H_headsetcap_blk", "Black Hat", 1000, { "", "", -1 } },
			{ "TRYK_H_headsetcap", "White Hat", 1000, { "", "", -1 } },
			{ "TRYK_H_pakol2", "Mid East Hat", 1000, { "", "", -1 } },
			{ "TRYK_R_CAP_BLK", "Reverse Black", 1000, { "", "", -1 } },
			{ "TRYK_R_CAP_TAN", "Reverse Tan", 1000, { "", "", -1 } },
			{ "TRYK_ESS_CAP_OD", "", 1000, { "", "", -1 } },
			{ "TRYK_ESS_CAP_tan", "", 1000, { "", "", -1 } },
			{ "TRYK_H_wig", "Real Hair Wig", 1000, { "", "", -1 } },
			{ "TRYK_H_woolhat", "Slick Beanie", 1000, { "", "", -1 } },
			{ "", "", 1000, { "", "", -1 } },
			{ "A3L_sombrero", "", 1000, { "", "", -1 } },
			{ "A3L_mexicanhat", "", 1000, { "", "", -1 } },
			{ "A3L_russianhat", "", 1000, { "", "", -1 } },
			{ "A3L_Crown", "", 1000, { "", "", -1 } },
			{ "A3L_longhairblond", "", 1000, { "", "", -1 } },
			{ "A3L_longhairblack", "", 1000, { "", "", -1 } },
			{ "A3L_longhairbrown", "", 1000, { "", "", -1 } },
			{ "A3L_Legoman", "Lego Hat", 1000, { "", "", -1 } },
			{ "A3L_soa_helmet", "SOA Helmet", 1000, { "", "", -1 } },
			{ "A3L_gangster_hat", "Gangster Hat", 1000, { "", "", -1 } },
			{ "A3L_SkateHelmet_green", "Green Skate Helmet", 1000, { "", "", -1 } },
			{ "Kio_Afro_Hat", "Afro Wig", 1000, { "", "", -1 } },
			{ "Kio_Capital_Hat", "Top Hat Monacle", 1000, { "", "", -1 } },
			{ "Kio_No1_Hat", "#1 Hat", 1000, { "", "", -1 } },
			{ "Kio_Pirate_Hat", "Pirate Hat", 1000, { "", "", -1 } },
			{ "Masque_Alien1", "", 1000, { "", "", -1 } },
			{ "Masque_Anonymous", "", 1000, { "", "", -1 } },
			{ "Masque_Chains", "", 1000, { "", "", -1 } },
			{ "Payday_GeneralO", "", 1000, { "", "", -1 } },
			{ "Casque_Moto", "", 1000, { "", "", -1 } },
			{ "Masque_Clinton", "", 1000, { "", "", -1 } },
			{ "Masque_speedRunner", "", 1000, { "", "", -1 } },
			{ "Masque_Unic", "", 1000, { "", "", -1 } },
			{ "Masque_Aubrey", "", 1000, { "", "", -1 } },
			{ "Masque_Bonnie", "", 1000, { "", "", -1 } },
			{ "Masque_Bush", "", 1000, { "", "", -1 } },
			{ "Masque_Mempo", "", 1000, { "", "", -1 } },
			{ "Masque_Lincoln", "", 1000, { "", "", -1 } },
			{ "Masque_Wolfv2", "", 1000, { "", "", -1 } },
			{ "Masque_archNemesis", "", 1000, { "", "", -1 } },
			{ "Masque_Arnold", "", 1000, { "", "", -1 } },
			{ "Masque_Chuck", "", 1000, { "", "", -1 } },
			{ "Masque_Clover", "", 1000, { "", "", -1 } },
			{ "Masque_Fish", "", 1000, { "", "", -1 } },
			{ "Masque_Hockey", "", 1000, { "", "", -1 } },
			{ "Masque_Metalhead", "", 1000, { "", "", -1 } },
			{ "Masque_Religieuse", "", 1000, { "", "", -1 } },
			{ "Masque_Smiley", "", 1000, { "", "", -1 } },
			{ "Masque_Santa", "", 1000, { "", "", -1 } },
			{ "Masque_Momie", "", 1000, { "", "", -1 } },
			{ "Masque_Optimiste", "Optimus", 1000, { "", "", -1 } },
			{ "Masque_forceAlpha", "", 1000, { "", "", -1 } },
			{ "Masque_GdG", "", 1000, { "", "", -1 } },
			{ "Masque_Gombo", "", 1000, { "", "", -1 } },
			{ "Masque_Lion", "", 1000, { "", "", -1 } },
			{ "Masque_Orc", "", 1000, { "", "", -1 } },
			{ "Masque_Mark", "", 1000, { "", "", -1 } },
			{ "Masque_Macrilleuse", "", 1000, { "", "", -1 } },
			{ "Masque_Hoxton", "", 1000, { "", "", -1 } },
			{ "Masque_Incendiaire", "", 1000, { "", "", -1 } },
			{ "Masque_Dallas", "", 1000, { "", "", -1 } },
			{ "Kio_Spinning_Hat", "Spinny Hat", 1000, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 100, { "", "", -1 } },
			{ "G_Lady_Mirror", "", 150, { "", "", -1 } },
			{ "G_Lady_Dark", "", 150, { "", "", -1 } },
			{ "G_Lady_Blue", "", 150, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_Press_F", "Press Vest", 500, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 2500, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 4500, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 3500, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 3000, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 4500, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 4500, { "", "", -1 } },
			{ "B_Carryall_oli", "", 5000, { "", "", -1 } },
			{ "B_Carryall_khk", "", 5000, { "", "", -1 } },
			{ "koileagle", "", 5000, { "", "", -1 } },
			{ "koilgoonsquad", "", 5000, { "", "", -1 } },
			{ "koilgraf_1", "", 5000, { "", "", -1 } },
			{ "koilsmashing", "", 5000, { "", "", -1 } },
			{ "koilsponge_1", "", 5000, { "", "", -1 } },
			{ "TRYK_B_Coyotebackpack", "", 5000, { "", "", -1 } },
			{ "cl3_civ_tacticalbelt_black", "", 5000, { "", "", -1 } },
			{ "cl3_civ_tacticalbelt", "", 5000, { "", "", -1 } },
			{ "CL3_ParachutePackAmerica", "USA Parachute", 5000, { "", "", -1 } },
			{ "CL3_ParachutePack", "UK Parachute", 5000, { "", "", -1 } },
			{ "B_CRRC_backpack", "", 15000, { "", "", -1 } }
		};
	};

	class cop {
		title = "STR_Shops_C_Police";
		license = "";
		side = "cop";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "demian2435_police_man_uniform", "UCPD Patrol Uniform", 55, { "", "", -1 } },
			{ "doc_uniform_co", "DOC Uniform", 55, { "", "", -1 } },
			{ "fto_uni", "FTO Uniform", 25, { "", "", -1 } },
			{ "TRYK_U_B_AOR2_OD_CombatUniform", "SWAT Uniform", 55, { "", "", -1 } },
			{ "demian2435_swat_man_uniform", "Riot Uniform", 65, { "", "", -1 } },
			{ "U_007_BIS_Marshall", "Undercover Clothes", 25, { "", "", -1 } },
			{ "demian2435_pilot_uniform", "Pilot Uniform", 55, { "", "", -1 } },
			{ "U_B_Wetsuit", "Police Dive Suit", 25, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "jamie_pcapblack", "Patrol Cap", 25, { "", "", -1 } },
			{ "rhsusf_opscore_fg", "SWAT Helmet", 25, { "", "", -1 } },
			{ "demian2435_swat_helmet", "Riot Helmet", 25, { "", "", -1 } },
			{ "demian2435_pilot_helmet", "SWAT Pilot Helmet", 25, { "", "", -1 } },
			{ "H_PilotHelmetHeli_B", "Pilot Helmet", 25, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Aviator", "", 25, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Squares", "", 25, { "", "", -1 } },
			{ "Mask_M50", "SWAT Gas Mask", 25, { "", "", -1 } },
			{ "TRYK_kio_balaclava_BLK_ear", "SWAT Balaclava", 25, { "", "", -1 } },
			{ "G_Diving", "PD Diving Goggles", 25, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "jamie_black", "Patrol Vest", 500, { "", "", -1 } },
			{ "TCG_swatvest1", "SWAT Vest", 500, { "", "", -1 } },
			{ "Jamie_Sheriff1", "Riot Vest", 500, { "", "", -1 } },
			{ "V_RebreatherB", "Police Rebreather", 500, { "", "", -1 } },
			{ "TCG_UCPD", "Command Vest", 500, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "AM_PoliceBelt", "Patrol Belt", 800, { "", "", -1 } },
			{ "TRYK_B_Belt_BLK", "SWAT/CRT/Riot Belt", 800, { "", "", -1 } }
		};
	};

	class dive {
		title = "STR_Shops_C_Diving";
		license = "dive";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_O_Wetsuit", "", 2000, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Diving", "", 500, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_RebreatherIR", "", 5000, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } }
		};
	};

	class reb {
		title = "STR_Shops_C_Rebel";
		license = "rebel";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_IG_Guerilla1_1", "", 5000, {"", "", -1} },
			{ "TRYK_U_B_TANOCP_R_CombatUniformTshirt", "", 5000, {"", "", -1} },
			{ "TRYK_U_B_Woodland", "", 5000, {"", "", -1} },
			{ "TRYK_U_B_AOR2_GRY_R_CombatUniform", "", 5000, {"", "", -1} },
			{ "U_I_G_Story_Protagonist_F", "", 5000, { "", "", -1 } },
			{ "U_I_CombatUniform_shortsleeve", 5000, { "", "", -1 } },
			{ "U_I_G_resistanceLeader_F", "", 5000, { "", "", -1 } },
			{ "TRYK_U_B_Woodland", 5000, { "", "", -1 } },
			{ "TRYK_U_B_ARO2R_CombatUniform", 5000, { "", "", -1 } },
			{ "TRYK_U_B_fleece", 5000, { "", "", -1 } },
			{ "TRYK_U_B_MARPAT_Wood", 5000, { "", "", -1 } },
			{ "TRYK_U_B_3CD_Ranger_BDU", 5000, { "", "", -1 } },
			{ "TRYK_U_B_TANOCP_R_CombatUniformTshirt", 5000, { "", "", -1 } },
			{ "TRYK_B_TRYK_OCP_T", 5000, { "", "", -1 } },
			{ "TRYK_U_B_Wood_PCUs", 5000, { "", "", -1 } },
			{ "TRYK_U_B_PCUODHs", 5000, { "", "", -1 } },
			{ "TRYK_U_B_NATO_UCP_CombatUniform", 5000, { "", "", -1 } },
			{ "TRYK_U_taki_wh", 5000, { "", "", -1 } },
			{ "TRYK_U_B_PCUHs", 5000, { "", "", -1 } },
			{ "TRYK_U_B_AOR1_Rollup_CombatUniform", 5000, { "", "", -1 } },
			{ "TRYK_U_B_AOR2_Rollup_CombatUniform", 5000, { "", "", -1 } },
			{ "A3LJumperUKBlack", 5000, { "", "", -1 } },
			{ "U_O_SpecopsUniform_ocamo", "", 5000, { "", "", -1 } },
			{ "U_O_PilotCoveralls", "", 5000, { "", "", -1 } },
			{ "TRYK_U_B_NATO_OCPD_CombatUniform", "", 5000, { "", "", -1 } },
			{ "TRYK_U_B_AOR2_OD_CombatUniform", "", 5000, { "", "", -1 } },
			{ "U_IG_leader", "Guerilla Leader", 5000, { "", "", -1 } },
			{ "U_O_GhillieSuit", "", 50000, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_ShemagOpen_tan", "", 850, { "", "", -1 } },
			{ "H_Shemag_olive", "", 850, { "", "", -1 } },
			{ "H_ShemagOpen_khk", "", 800, { "", "", -1 } },
			{ "H_HelmetO_ocamo", "", 2500, { "", "", -1 } },
			{ "TRYK_H_PASGT_OD", "", 2500, { "", "", -1 } },
			{ "TRYK_H_PASGT_TAN", "", 2500, { "", "", -1 } },
			{ "TRYK_H_DELTAHELM_NV", "", 2500, { "", "", -1 } },
			{ "H_MilCap_oucamo", "", 1200, { "", "", -1 } },
			{ "H_Watchcap_cbr", "", 1200, { "", "", -1 } },
			{ "H_Booniehat_GCAMO", "", 1200, { "", "", -1 } },
			{ "H_Booniehat_mcamo", "", 1200, { "", "", -1 } },
			{ "H_Bandanna_camo", "", 650, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "Payday_Cagoule", "", 100, { "", "", -1 } },
			{ "Mask_M40_OD", "", 20000, { "", "", -1 } },
			{ "G_mas_wpn_wrap_mask_c", "", 100, { "", "", -1 } },
			{ "TRYK_kio_balaclava_ear", "", 100, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_TacVest_khk", "", 12500, { "", "", -1 } },
			{ "V_BandollierB_cbr", "", 4500, { "", "", -1 } },
			{ "V_HarnessOGL_brn", "", 4500, { "", "", -1 } },
			{ "TRYK_V_PlateCarrier_coyo_L", "", 30000, { "", "", -1 } },
			{ "TRYK_V_PlateCarrier_Woodland", "", 35000, { "", "", -1 } },
			{ "V_PlateCarrier1_rgr", "", 35000, { "", "", -1 } },
			{ "V_PlateCarrier2_rgr", "", 40000, { "", "", -1 } },
			{ "V_PlateCarrierIA1_dgtl", "", 35000, { "", "", -1 } },
			{ "V_Chestrig_khk", "", 7500, { "", "", -1 } },
			{ "V_Chestrig_rgr", "", 7500, { "", "", -1 } },
			{ "V_I_G_resistanceLeader_F", "", 20000, { "", "", -1 } },
			{ "V_HarnessO_brn", "", 7500, { "", "", -1 } },
			{ "rhsusf_iotv_ocp_Grenadier", "", 40000, { "", "", -1 } },
			{ "rhsusf_spc_marksman", "", 40000, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 2500, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 4500, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 3500, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 3000, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 4500, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 4500, { "", "", -1 } },
			{ "B_Carryall_oli", "", 5000, { "", "", -1 } },
			{ "B_Carryall_khk", "", 5000, { "", "", -1 } }
		};
	};

	class kart {
		title = "STR_Shops_C_Kart";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_C_Driver_1_black", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_white", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_2", "", 3500, { "", "", -1 } },
			{ "U_C_Driver_1", "", 3600, { "", "", -1 } },
			{ "U_C_Driver_3", "", 3700, { "", "", -1 } },
			{ "U_C_Driver_4", "", 3700, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_RacingHelmet_1_black_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_red_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_white_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_blue_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_yellow_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_green_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_F", "", 2500, { "", "", -1 } },
			{ "H_RacingHelmet_2_F", "", 2500, { "", "", -1 } },
			{ "H_RacingHelmet_3_F", "", 2500, { "", "", -1 } },
			{ "H_RacingHelmet_4_F", "", 2500, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } }
		};
	};
};