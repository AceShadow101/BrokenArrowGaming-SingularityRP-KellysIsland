class CarShops {
	/*
		Format:
		{ Classname, rental price, license required, { varname, >= value } }

		{ varname, >= value} this is a "level" requirement mainly used by cops and rebels, do not fill this in if you are not utilizing it.
	*/
	class civ_car {
		side = "civ";
		vehicles[] = {
			{ "B_Quadbike_01_F", 2500, "" }, 
			{ "A3L_Cooper_concept_black", 7000, "driver" }, 
			{ "A3L_Cooper_concept_blue", 7000, "driver" },
			{ "Mrshounka_a3_smart_civ_noir", 7000, "driver" },
			{ "Mrshounka_a3_smart_civ_bleu", 7000, "driver" },
			{ "civ_crown_black", 15000, "driver" },
			{ "civ_crown_blue", 15000, "driver" },
			{ "civ_crown_gray", 15000, "driver" },
			{ "Mrshounka_twingo_p_noir", 15000, "driver" },
			{ "Mrshounka_twingo_p_bf", 15000, "driver" },
			{ "Mrshounka_twingo_p_g", 15000, "driver" },
			{ "IVORY_PRIUS", 17000, "driver" },
			{ "Mrshounka_corbillard_c_noir", 17000, "driver" },
			{ "Mrshounka_corbillard_c_bleufonce", 17000, "driver" },
			{ "Mrshounka_corbillard_c_violet", 17000, "driver" },
			{ "Mrshounka_corbillard_c_orange", 17000, "driver" },
			{ "Mrshounka_golfvi_noir", 18000, "driver" },
			{ "Mrshounka_golfvi_bleufonce", 18000, "driver" },
			{ "Mrshounka_golfvi_rouge", 18000, "driver" },
			{ "Mrshounka_golfvi_jaune", 18000, "driver" },
			{ "Mrshounka_golfvi_orange", 18000, "driver" },
			{ "Mrshounka_subaru08_noir", 23000, "driver" },
			{ "Mrshounka_subaru08_bleufonce", 23000, "driver" },
			{ "Mrshounka_subaru08_grise", 23000, "driver" },
			{ "Mrshounka_subaru08_jaune", 23000, "driver" },
			{ "Mrshounka_subaru08_rouge", 23000, "driver" },
			{ "MG_Honda_Civic_TypeR_04_Black", 23000, "driver" },
			{ "MG_Honda_Civic_TypeR_04_Blue", 23000, "driver" },
			{ "MG_Honda_Civic_TypeR_04_Red", 23000, "driver" },
			{ "MG_Honda_Civic_TypeR_04_Silver", 23000, "driver" },
			{ "MG_Honda_Civic_TypeR_04_Yellow", 23000, "driver" },
			{ "MG_Honda_Civic_TypeR_04_Green", 23000, "driver" },
			{ "MG_Honda_Civic_TypeR_04_White", 23000, "driver" },
			{ "MG_Honda_Civic_TypeR_04_Pink", 23000, "driver" },
			{ "MG_Honda_Civic_TypeR_04_Purple", 23000, "driver" },
			{ "MG_Honda_Civic_TypeR_04_Whitecamo", 23000, "driver" },
			{ "ivory_wrx", 23000, "driver" },
			{ "ivory_evox", 23000, "driver" },
			{ "ivory_r34", 23000, "driver" },
			{ "ivory_supra", 23000, "driver" },
			{ "ivory_supra_topsecret", 27000, "driver" },
			{ "ivory_isf", 32000, "driver" },
			{ "beetle_bleufonce", 33000, "driver" },
			{ "beetle_bleupetrole", 33000, "driver" },
			{ "beetle_red", 33000, "driver" },
			{ "beetle_violet", 33000, "driver" },
			{ "beetle_white", 33000, "driver" },
			{ "beetle_psycha", 33000, "driver" },
			{ "beetle_psycha1", 33000, "driver" },
			{ "beetle_coci", 33000, "driver" },
			{ "beetle_camo", 33000, "driver" },
			{ "shounka_buggy_noir", 33000, "driver" },
			{ "shounka_buggy_rouge", 33000, "driver" },
			{ "shounka_buggy_bleufonce", 33000, "driver" },
			{ "shounka_buggy_violet", 33000, "driver" },
			{ "Mrshounka_Vandura_civ_noir", 60000, "driving" },
			{ "ivory_elise", 70000, "driving" }
		};
	};
	
	class bike_car {
		side = "civ";
		vehicles[] = {
			{ "Mrshounka_ducati_p_noir", 15000, "driver" }, 
			{ "Mrshounka_ducati_p_bf", 15000, "driver" }, 
			{ "Mrshounka_ducati_p_r", 15000, "driver" }, 
			{ "Mrshounka_ducati_p_j", 15000, "driver" }, 
			{ "Mrshounka_yamaha_p_noir", 15000, "driver" }, 
			{ "Mrshounka_yamaha_p_bf", 15000, "driver" }, 
			{ "Mrshounka_yamaha_p_r", 15000, "driver" }, 
			{ "Mrshounka_yamaha_p_j", 15000, "driver" }
		};
	};
	
	class exotic_car {
		side = "civ";
		vehicles[] = {
			{ "Mrshounka_Bowler_c_noir", 28000, "driver" }, 
			{ "Mrshounka_Bowler_c_bleufonce", 28000, "driver" }, 
			{ "Mrshounka_Bowler_c_rouge", 28000, "driver" }, 
			{ "Mrshounka_Bowler_c_jaune", 28000, "driver" }, 
			{ "Mrshounka_Bowler_c_orange", 28000, "driver" }, 
			{ "Mrshounka_Bowler_c_violet", 28000, "driver" }, 
			{ "Mrshounka_a3_gtr_civ_noir", 48000, "driver" }, 
			{ "Mrshounka_a3_gtr_civ_bleu", 48000, "driver" }, 
			{ "S_Vantage_Red", 68000, "driver" }, 
			{ "S_Vantage_Black", 68000, "driver" },
			{ "S_Vantage_Blue", 68000, "driver" },
			{ "S_Vantage_Yellow", 68000, "driver" },
			{ "Tal_Maserati_Red", 68000, "driver" }, 
			{ "Tal_Maserati_Lime", 68000, "driver" }, 
			{ "Tal_Maserati_Black", 68000, "driver" },
			{ "Tal_Maserati_Purple", 68000, "driver" }, 
			{ "Jonzie_Viper", 70000, "driver" }, 
			{ "ivory_c", 70000, "driver" }, 
			{ "IVORY_REV", 110000, "driver" }, 
			{ "ivory_lfa", 110000, "driver" },
			{ "ivory_lp560",150000, "driver" },
			{ "MG_Audi_R8_11_Black",160000, "driver" },
			{ "MG_Audi_R8_11_Blue",160000, "driver" },
			{ "MG_Audi_R8_11_Red",160000, "driver" },
			{ "MG_Audi_R8_11_Silver",160000, "driver" },
			{ "MG_Audi_R8_11_Yellow",160000, "driver" },
			{ "MG_Audi_R8_11_Green",160000, "driver" },
			{ "MG_Audi_R8_11_White",160000, "driver" },
			{ "MG_Audi_R8_11_Pink",160000, "driver" },
			{ "MG_Audi_R8_11_Purple",160000, "driver" },
			{ "ivory_f1", 200000, "driver" },  
			{ "ivory_mp4", 210000, "driver" },
			{ "Mrshounka_pagani_c_noir", 250000, "driver" }, 
			{ "Mrshounka_pagani_c_rouge", 250000, "driver" }, 
			{ "Mrshounka_pagani_c_jaune", 250000, "driver" }, 
			{ "Mrshounka_agera_p_noir", 900000, "driver" }, 
			{ "Mrshounka_agera_p_bleu", 900000, "driver" }, 
			{ "Mrshounka_agera_p_jaune", 900000, "driver" },
			{ "urbanized_lp700_pink", 900000, "driver" },
			{ "urbanized_lp700_orange", 900000, "driver" },
			{ "urbanized_lp700_lime", 900000, "driver" },
			{ "urbanized_lp700_blue", 900000, "driver" },
			{ "urbanized_lp700_purple", 900000, "driver" },
			{ "urbanized_lp700_red", 900000, "driver" },
			{ "urbanized_lp700_white", 900000, "driver" },
			{ "urbanized_lp700_yellow", 900000, "driver" },
			{ "urbanized_LaFerrari_pink", 950000, "driver" },
			{ "urbanized_LaFerrari_purple", 950000, "driver" },
			{ "urbanized_LaFerrari_red", 950000, "driver" },
			{ "urbanized_LaFerrari_white", 950000, "driver" },
			{ "urbanized_LaFerrari_yellow", 950000, "driver" },
			{ "urbanized_LaFerrari_black", 950000, "driver" },
			{ "urbanized_LaFerrari_blue", 950000, "driver" },
			{ "urbanized_LaFerrari_darkred", 950000, "driver" },
			{ "urbanized_LaFerrari_hotpink", 950000, "driver" },
			{ "urbanized_LaFerrari_lime", 950000, "driver" },
			{ "urbanized_LaFerrari_orange", 950000, "driver" },
			{ "urbanized_LaFerrari_black_S", 970000, "driver" },
			{ "urbanized_LaFerrari_blue_S", 970000, "driver" },
			{ "urbanized_LaFerrari_lime_S", 970000, "driver" },
			{ "Mrshounka_lykan_c_noir", 1000000, "driver" },
			{ "Mrshounka_lykan_c_jaune", 1000000, "driver" },
			{ "Mrshounka_lykan_c_rouge", 1000000, "driver" },
			{ "Mrshounka_lykan_c_grise", 1000000, "driver" },
			{ "ivory_veyron", 2000000, "driver" }
		};
	};
	
	class german_car {
		side = "civ";
		vehicles[] = {
			{ "Mrshounka_Touareg_noir", 29000, "driver" }, 
			{ "Mrshounka_Touareg_rouge", 29000, "driver" }, 
			{ "Mrshounka_Touareg_jaune", 29000, "driver" }, 
			{ "ivory_gti", 29000, "driver" }, 
			{ "ivory_rs4", 32000, "driver" },
			{ "Mrshounka_bmwm1_civ_noir", 32000, "driver" },
			{ "Mrshounka_bmwm1_civ_bleufonce", 32000, "driver" },
			{ "Mrshounka_bmwm1_civ_rouge", 32000, "driver" },
			{ "Mrshounka_bmwm1_civ_grise", 32000, "driver" },
			{ "Mrshounka_bmwm1_civ_orange", 32000, "driver" },
			{ "ivory_e36", 32000, "driver" },
			{ "ivory_m3", 37000, "driver" },
			{ "Mrshounka_bmwm6_noir", 38000, "driver" },
			{ "Mrshounka_bmwm6_bleufonce", 38000, "driver" },
			{ "Mrshounka_bmwm6_rouge", 38000, "driver" },
			{ "Mrshounka_bmwm6_jaune", 38000, "driver" },
			{ "Mrshounka_bmwm6_grise", 38000, "driver" },
			{ "Mrshounka_cayenne_p_noir", 38000, "driver" },
			{ "Mrshounka_cayenne_p_jaune", 38000, "driver" },
			{ "Mrshounka_cayenne_p_rouge", 38000, "driver" },
			{ "Mrshounka_cayenne_p_grise", 38000, "driver" },
			{ "shounka_a3_rs5_civ_rouge", 38000, "driver" },
			{ "shounka_a3_rs5_civ_noir", 38000, "driver" },
			{ "shounka_a3_rs5_civ_bleufonce", 38000, "driver" },
			{ "shounka_a3_rs5_civ_jaune", 38000, "driver" },
			{ "shounka_a3_rs5_civ_grise", 38000, "driver" },
			{ "shounka_rs6_grise", 38000, "driver" },
			{ "shounka_rs6_noir", 38000, "driver" },
			{ "shounka_rs6_jaune", 38000, "driver" },
			{ "shounka_rs6_bleufonce", 38000, "driver" },
			{ "Mrshounka_c63_2015_noir", 48000, "driver" },
			{ "Mrshounka_c63_2015_mat_n", 48000, "driver" },
			{ "Mrshounka_c63_2015_rouge", 48000, "driver" },
			{ "Mrshounka_c63_2015_jaune", 48000, "driver" },
			{ "urbanized_g65_yellow", 48000, "driver" },
			{ "urbanized_g65_white", 48000, "driver" },
			{ "urbanized_g65_red", 48000, "driver" },
			{ "urbanized_g65_purple", 48000, "driver" },
			{ "urbanized_g65_black", 48000, "driver" },
			{ "urbanized_g65_blue", 48000, "driver" },
			{ "urbanized_g65_lime", 48000, "driver" },
			{ "urbanized_g65_orange", 48000, "driver" },
			{ "urbanized_g65_pink", 48000, "driver" },
			{ "shounka_clk_noir", 48000, "driver" },
			{ "shounka_clk_rouge", 48000, "driver" },
			{ "shounka_clk_jaune", 48000, "driver" },
			{ "shounka_porsche911_noir", 68000, "driver" },
			{ "shounka_porsche911_jaune", 68000, "driver" },
			{ "shounka_porsche911_rouge", 68000, "driver" },
			{ "shounka_porsche911_bleufonce", 68000, "driver" },
			{ "S_PorscheRS_Black", 88000, "driver" },
			{ "S_PorscheRS_White", 88000, "driver" },
			{ "S_PorscheRS_Yellow", 88000, "driver" }
		};
	};
	
	class italian_car {
		side = "civ";
		vehicles[] = {
			{ "Mrshounka_Alfa_Romeo_noir", 21000, "driver" }, 
			{ "Mrshounka_Alfa_Romeo_bleufonce", 21000, "driver" }, 
			{ "Mrshounka_Alfa_Romeo_rouge", 21000, "driver" }, 
			{ "Mrshounka_Alfa_Romeo_jaune", 21000, "driver" }, 
			{ "Mrshounka_Alfa_Romeo_orange", 21000, "driver" }, 
			{ "Mrshounka_Alfa_Romeo_grise", 21000, "driver" }, 
			{ "shounka_f430_spider_noir", 121000, "driver" }, 
			{ "shounka_f430_spider_jaune", 121000, "driver" }, 
			{ "shounka_f430_spider_rouge", 121000, "driver" }, 
			{ "shounka_f430_spider_violet", 121000, "driver" }, 
			{ "urbanized_granturismo_orange", 121000, "driver" }, 
			{ "urbanized_granturismo_purple", 121000, "driver" }, 
			{ "urbanized_granturismo_white", 121000, "driver" }, 
			{ "urbanized_granturismo_yellow", 121000, "driver" }, 
			{ "urbanized_granturismo_black", 121000, "driver" }, 
			{ "urbanized_granturismo_blue", 121000, "driver" }, 
			{ "urbanized_granturismo_darkred", 121000, "driver" }, 
			{ "urbanized_granturismo_hotpink", 121000, "driver" }, 
			{ "urbanized_granturismo_lime", 121000, "driver" }, 
			{ "Mrshounka_veneno_c_noir", 1500000, "driver" },
			{ "Mrshounka_veneno_c_bleu", 1500000, "driver" },
			{ "Mrshounka_veneno_c_jaune", 1500000, "driver" }
		};
	};

	
	class american_car {
		side = "civ";
		vehicles[] = {
			{ "Mrshounka_jeep_blinde_noir", 22000, "driver" }, 
			{ "Mrshounka_jeep_blinde_noir_mat", 22000, "driver" }, 
			{ "Mrshounka_jeep_blinde_rouge", 22000, "driver" }, 
			{ "Mrshounka_jeep_blinde_rouge_mat", 22000, "driver" }, 
			{ "Mrshounka_jeep_blinde_blanc", 22000, "driver" }, 
			{ "Mrshounka_hummer_civ_noir", 27000, "driver" }, 
			{ "Mrshounka_hummer_civ_bleufonce", 27000, "driver" }, 
			{ "Mrshounka_hummer_civ_jaune", 27000, "driver" }, 
			{ "Mrshounka_hummer_civ_rouge", 27000, "driver" }, 
			{ "shounka_h2_rouge", 27000, "driver" }, 
			{ "shounka_h2_noir", 27000, "driver" },
			{ "shounka_h2_jaune", 27000, "driver" },
			{ "shounka_transam_noir", 27000, "driver" }, 
			{ "shounka_transam_rouge", 27000, "driver" }, 
			{ "shounka_transam_jaune", 27000, "driver" },
			{ "Mrshounka_mustang_noir", 30000, "driver" },
			{ "Mrshounka_mustang_mat_n", 30000, "driver" },
			{ "Mrshounka_mustang_rouge", 30000, "driver" },
			{ "Mrshounka_mustang_jaune", 30000, "driver" },
			{ "Mrshounka_mustang_orange", 30000, "driver" },
			{ "Mrshounka_a3_dodge15_civ_noir", 30000, "driver" }, 
			{ "Mrshounka_a3_dodge15_civ_bleu", 30000, "driver" }, 
			{ "Mrshounka_a3_dodge15_civ_rouge", 30000, "driver" }, 
			{ "Mrshounka_a3_dodge15_civ_jaune", 30000, "driver" }, 
			{ "Mrshounka_a3_dodge15_civ_rose", 30000, "driver" }, 
			{ "Mrshounka_a3_dodge15_civ_grise", 30000, "driver" }, 
			{ "Mrshounka_a3_dodge15_civ_violet", 30000, "driver" }, 
			{ "Mrshounka_a3_dodge15_civ_orange", 30000, "driver" },
			{ "A3L_Camaro", 30000, "driver" },
			{ "Mrshounka_raptor_noir", 32000, "driver" }, 
			{ "Mrshounka_raptor_rouge", 32000, "driver" },
			{ "Mrshounka_raptor_jaune", 32000, "driver" },
			{ "Mrshounka_raptor_grise", 32000, "driver" },
			{ "Mrshounka_raptor_violet", 32000, "driver" },
			{ "shounka_avalanche_noir", 32000, "driver" }, 
			{ "shounka_avalanche_grise", 32000, "driver" }, 
			{ "shounka_avalanche_rouge", 32000, "driver" }, 
			{ "shounka_avalanche_jaune", 32000, "driver" }, 
			{ "Mrshounka_cherokee_mat", 32000, "driver" }, 
			{ "Mrshounka_cherokee_bleu", 32000, "driver" }, 
			{ "Mrshounka_cherokee_bleu_mat", 32000, "driver" }, 
			{ "Mrshounka_cherokee_blanc_mat", 32000, "driver" }, 
			{ "Mrshounka_cherokee_rouge_mat", 32000, "driver" }, 
			{ "Mrshounka_raptor2_noir", 35000, "driver" },
			{ "Mrshounka_raptor2_rouge", 35000, "driver" },
			{ "Mrshounka_raptor2_jaune", 35000, "driver" },
			{ "Mrshounka_raptor2_grise", 35000, "driver" },
			{ "Mrshounka_raptor2_violet", 35000, "driver" },
			{ "A3L_F350Black", 60000, "driver" },
			{ "ivory_suburban", 60000, "driver" },
			{ "shounka_gt_noir", 135000, "driver" },
			{ "shounka_gt_rouge", 135000, "driver" },
			{ "shounka_gt_jaune", 135000, "driver" },
			{ "shounka_gt_grise", 135000, "driver" },
			{ "shounka_gt_violet", 135000, "driver" },
			{ "shounka_monsteur_violet", 335000, "driver" },
			{ "shounka_monsteur_grise", 335000, "driver" },
			{ "shounka_monsteur_bleufonce", 335000, "driver" },
			{ "shounka_monsteur_noir", 335000, "driver" },
			{ "shounka_monsteur_jaune", 335000, "driver" },
			{ "shounka_monsteur_rose", 335000, "driver" }
		};
	};
	
	class commercial_car {
		side = "civ";
		vehicles[] = {
			{ "A3L_EscortTaxi", 15000, "trucking" },
			{ "ivory_190e_taxi", 20000, "trucking" },
			{ "ivory_rs4_taxi", 25000, "trucking" },
			{ "shounka_limo_civ_noir", 43000, "trucking" },
			{ "shounka_limo_civ_violet", 43000, "trucking" }
		};
	};


	class classic_car {
		side = "civ";
		vehicles[] = {
			{ "Mrshounka_lincoln_noir", 18000, "driver" }, 
			{ "Mrshounka_lincoln_bleufonce", 18000, "driver" }, 
			{ "Mrshounka_lincoln_rouge", 18000, "driver" }, 
			{ "Mrshounka_lincoln_violet", 18000, "driver" }, 
			{ "SAL_77TRANSAMCiv", 27000, "driver" }, 
			{ "ADM_1969_Charger", 27000, "driver" }, 
			{ "SAL_IROCCivBlack", 27000, "driver" }, 
			{ "SAL_IROCCivSilver", 27000, "driver" }, 
			{ "SAL_IROCCivRed", 27000, "driver" }, 
			{ "SAL_IROCCivBlue", 27000, "driver" }, 
			{ "SIG_SuperBeeB", 27000, "driver" }, 
			{ "SIG_SuperBeeY", 27000, "driver" }, 
			{ "SIG_SuperBeeM", 27000, "driver" }, 
			{ "SIG_Roadrunner", 27000, "driver" }, 
			{ "SIG_Hubcaps", 27000, "driver" }, 
			{ "SIG_Hcodes", 27000, "driver" }, 
			{ "SIG_Magnums", 27000, "driver" }, 
			{ "ivory_gt500", 27000, "driver" },
			{ "mrshounka_92_civ_noir", 28000, "driver" }, 
			{ "mrshounka_92_civ_bleufonce", 28000, "driver" }, 
			{ "mrshounka_92_civ_rouge", 28000, "driver" }, 
			{ "mrshounka_92_civ_jaune", 28000, "driver" }, 
			{ "mrshounka_92_civ_rose", 28000, "driver" }, 
			{ "mrshounka_92_civ_grise", 28000, "driver" }, 
			{ "mrshounka_92_civ_violet", 28000, "driver" }, 
			{ "mrshounka_92_civ_orange", 28000, "driver" }, 
			{ "Mrshounka_mercedes_190_p_orange", 28000, "driver" }, 
			{ "Mrshounka_mercedes_190_p_rouge", 28000, "driver" },
			{ "Mrshounka_mercedes_190_p_noir", 28000, "driver" },
			{ "Mrshounka_mercedes_190_p_violet", 28000, "driver" },
			{ "urbanized_67Mustang_orange", 30000, "driver" },
			{ "urbanized_67Mustang_darkred", 30000, "driver" },
			{ "urbanized_67Mustang_white", 30000, "driver" },
			{ "urbanized_67Mustang_black", 30000, "driver" },
			{ "urbanized_67Mustang_blue", 30000, "driver" },
			{ "urbanized_427_black", 75000, "driver" },
			{ "urbanized_427_blue", 75000, "driver" },
			{ "urbanized_427_orange", 75000, "driver" },
			{ "urbanized_427_pink", 75000, "driver" },
			{ "urbanized_427_red", 75000, "driver" },
			{ "urbanized_427_white", 75000, "driver" },
			{ "urbanized_427_yellow", 75000, "driver" },
			{ "urbanized_427_wed", 85000, "driver" }
		};
	};

	class kart_shop {
		side = "civ";
		vehicles[] = {
			{ "C_Kart_01_Blu_F", 15000 , "driver" },
			{ "C_Kart_01_Fuel_F", 15000, "driver" },
			{ "C_Kart_01_Red_F", 15000, "driver" },
			{ "C_Kart_01_Vrana_F", 15000, "driver" }
		};
	};

	class med_shop {
		side = "med";
		vehicles[] = {
			{ "cg_stretcher", 5, "", { "life_mediclevel", 1 } },
			{ "A3L_CVPILBFD", 1000, "", { "life_mediclevel", 1 } },
			{ "Ambulance", 1000, "", { "life_mediclevel", 1 } },
			{ "ivory_suburban_ems", 1000, "", { "life_mediclevel", 2 } },
			{ "HI_ExplorerEMS", 1000, "", { "life_mediclevel", 3 } },
			{ "ivory_wrx_med_ems", 1000, "", { "life_mediclevel", 3 } },
			{ "A3L_LadderTruck", 1000, "", { "life_mediclevel", 3 } },
			{ "A3l_Charger_EMS_Fast", 1000, "", { "life_mediclevel", 4 } }
		};
	};

	class med_ship {
		side = "med";
		vehicles[] = {
			{ "B_Lifeboat", 1000, "", { "life_mediclevel", 1 } },
			{ "C_Boat_Civil_01_rescue_F", 1000, "", { "life_mediclevel", 2 } },
			{ "B_SDV_01_F", 2000, "", { "life_mediclevel", 3 } }
		};
	};

	class med_air_hs {
		side = "med";
		vehicles[] = {
			{ "C_Heli_Light_01_elliptical_F", 15000, "mAir", { "life_mediclevel", 3 } }					
		};
	};
    
	class med_air {
		side = "med";
		vehicles[] = {
			{ "C_Heli_light_01_elliptical_F", 15000, "mAir", { "life_mediclevel", 3 } },
			{ "dezkit_b206_rescue", 15000, "mAir", { "life_mediclevel", 3 } },
			{ "dezkit_b206_ems", 15000, "mAir", { "life_mediclevel", 3 } },
			{ "UH1H_Medevac", 15000, "mAir", { "life_mediclevel", 4 } },
			{ "ARMSCor_A109LUH_I", 15000, "mAir", { "life_mediclevel", 4 } },
			{ "USAF_HH60GMED", 15000, "mAir", { "life_mediclevel", 5 } },
			{ "O_Heli_Light_02_unarmed_F", 15000, "mAir", { "life_mediclevel", 6 } }					
		};
	};
	
	class civ_truck {
		side = "civ";
		vehicles[] = {
			{ "ivory_tractor", 7000, "trucking" }, 
			{ "ivory_tractor2", 7000, "trucking" }, 
			{ "A3L_Bus", 60000, "trucking" },
			{ "A3L_Towtruck", 60000, "trucking" },
			{ "shounka_a3_spr_civ_noir", 60000, "trucking" },
			{ "Jonzie_Transit", 100000, "trucking" },
			{ "MG_AA_Tow_Truck_Black", 200000, "trucking" },
			{ "shounka_a3_brinks_noir", 250000, "trucking" },
			{ "shounka_a3_brinks_bleufonce", 250000, "trucking" },
			{ "MG_AA_Tow_Truck_Black", 250000, "trucking" },
			{ "Jonzie_Western", 250000, "trucking" },
			{ "Jonzie_Superliner", 280000, "trucking" },
			{ "Jonzie_Curtain", 350000, "trucking" }

	};

	class reb_car {
		side = "civ";
		vehicles[] = {
			{ "B_Quadbike_01_F", 2500, "" },
			{ "B_G_Offroad_01_F", 20000, "rebel" },
			{ "C_Heli_light_01_digital_F", 325000, "rebel" },
			{ "I_G_Van_01_fuel_F", 25000, "rebel" },
			{ "I_G_Van_01_transport_F", 25000, "rebel" }
		};
	};

	class cop_car {
		side = "cop";
		vehicles[] = {
			{ "Aus_PD", 1000, "", { "life_coplevel", 2 } },
			{ "A3L_TaurusFPBLBCSO", 1000, "", { "life_coplevel", 2}},
			{ "A3L_TaurusCO2", 1000, "", { "life_coplevel", 2 } },
			{ "DAR_ImpalaPolice", 1000, "", { "life_coplevel", 3 } },
			{ "A3L_Charger_HWP", 2000, "", { "life_coplevel", 4 } },
			{ "DAR_TahoePolice", 3000, "", { "life_coplevel", 4 } },
			{ "DAR_ExplorerPolice", 3000, "", { "life_coplevel", 5 } },
			{ "Aus_UC", 1000, "", { "life_coplevel", 5 } },
			{ "Aus_UC_gray", 1000, "", { "life_coplevel", 5 } },
			{ "Aus_UC_blue", 1000, "", { "life_coplevel", 5 } },
			{ "urbanized_ctsv_uc1", 1000, "", { "life_coplevel", 5 } },
			{ "urbanized_ctsv_uc2", 1000, "", { "life_coplevel", 5 } },
			{ "urbanized_ctsv_uc3", 1000, "", { "life_coplevel", 5 } },
			{ "DAR_ExplorerPoliceStealth", 3000, "", { "life_coplevel", 5 } },
			{ "A3L_ChargerUC_Black_New", 2000, "", { "life_coplevel", 5 } },
			{ "A3L_ChargerUC_Blue_New", 2000, "", { "life_coplevel", 5 } },
			{ "A3L_ChargerUC_white_New", 2000, "", { "life_coplevel", 5 } },
			{ "urbanized_g65_uc1", 2000, "", { "life_coplevel", 6 } },
			{ "urbanized_g65_uc3", 2000, "", { "life_coplevel", 6 } },
			{ "demian2435_swat_hunter", 6000, "", { "life_coplevel", 6 } },
			{ "shounka_a3_suburbangign", 6000, "", { "life_coplevel", 6 } },
			{ "urbanized_g65_uc2", 2000, "", { "life_coplevel", 7 } },
			{ "urbanized_LP700_P", 8000, "", { "life_coplevel", 7 } }
		};
	};

	class civ_air {
		side = "civ";
		vehicles[] = {
			{ "sab_FAAllegro", 50000, "pilot" },
			{ "sab_FAAllegro_2", 50000, "pilot" },
			{ "sab_FAAllegro_3", 50000, "pilot" },
			{ "sab_FAAllegro_4", 50000, "pilot" },
			{ "sab_FAAllegro_5", 50000, "pilot" },
			{ "C_Heli_light_01_red_F", 60000, "pilot" },
			{ "C_Heli_light_01_blue_F", 60000, "pilot" },
			{ "sab_l19", 60000, "pilot" },
			{ "sab_l19_2", 60000, "pilot" },
			{ "sab_l19_3", 60000, "pilot" },
			{ "sab_RobinDR400", 80000, "pilot" },
			{ "sab_RobinDR400_2", 80000, "pilot" },
			{ "sab_RobinDR400_3", 80000, "pilot" },
			{ "sab_RobinDR400_4", 80000, "pilot" },
			{ "sab_RobinDR400_5", 80000, "pilot" },
			{ "sab_piper", 80000, "pilot" },
			{ "sab_piper2", 80000, "pilot" },
			{ "sab_piper3", 80000, "pilot" },
			{ "sab_piper4", 80000, "pilot" },
			{ "sab_piper5", 80000, "pilot" },
			{ "c_plane_civil_01_F", 95000, "pilot" },
			{ "I_c_plane_civil_01_F", 95000, "pilot" },
			{ "c_plane_civil_01_racing_F", 100000, "pilot" },
			{ "sab_camel_pro", 100000, "pilot" },
			{ "dezkit_b206_hs", 150000, "pilot" },
			{ "dezkit_b206_ls", 150000, "pilot" },
			{ "dezkit_b206_fl", 170000, "pilot" },
			{ "dezkit_b206_news", 180000, "pilot" },
			{ "I_Heli_light_03_unarmed_F", 200000, "pilot" },
			{ "sab_aeroc", 200000, "pilot" },
			{ "sab_aeroc_2", 200000, "pilot" },
			{ "sab_aeroc_3", 200000, "pilot" },
			{ "ARMSCor_A109_Civ", 250000, "pilot" },
			{ "sab_do228", 250000, "pilot" },
			{ "sab_do228_2", 250000, "pilot" },
			{ "sab_do228_3_1", 250000, "pilot" },
			{ "sab_do228_3_2", 250000, "pilot" },
			{ "sab_do228_4", 250000, "pilot" },
			{ "sab_do228_5", 250000, "pilot" },
			{ "O_Heli_Light_02_unarmed_F", 800000, "pilot" },
			{ "sab_panther", 1000000, "pilot" },
			{ "sab_fiat4", 1200000, "pilot" },
			{ "sab_fiat5", 1200000, "pilot" },
			{ "sab_alphajet12", 1500000, "pilot" },
			{ "sab_alphajet10", 1500000, "pilot" },
			{ "sab_alphajet13", 1500000, "pilot" },
			{ "sab_alphajet9", 1500000, "pilot" },
			{ "sab_alphajet11", 1500000, "pilot" }
		};
	};

	class cop_air {
		side = "cop";
		vehicles[] = {
			{ "C_Heli_light_01_sheriff_F", 35000, "cAir", { "life_coplevel", 4 } },
			{ "B_Heli_light_01_F", 40000, "cAir", { "life_coplevel", 6 } },
			{ "O_Heli_Light_02_unarmed_F", 40000, "cAir", { "life_coplevel", 7 } },
			{ "UH1N_Black", 40000, "cAir", { "life_coplevel", 5 } },
			{ "dezkit_b206_fbi", 40000, "cAir", { "life_coplevel", 5 } },
			{ "ARMSCor_A109LUH_B", 40000, "cAir", { "life_coplevel", 5 } }
			
		};
	};

	class cop_airhq {
		side = "cop";
		vehicles[] = {
			{ "C_Heli_light_01_sheriff_F", 35000, "cAir", { "life_coplevel", 5 } }, 
			{ "O_Heli_Light_02_unarmed_F", 40000, "cAir", { "life_coplevel", 5 } },
			{ "dezkit_b206_fbi", 40000, "cAir", { "life_coplevel", 5 } },
			{ "ARMSCor_A109LUH_B", 40000, "cAir", { "life_coplevel", 5 } }
		};
	};

	class cop_ship {
		side = "cop";
		vehicles[] = {
			{ "B_Boat_Transport_01_F", 3000, "cg" },
			{ "O_G_Boat_Transport_02_F", 3000, "cg" },
			{ "C_Boat_Civil_01_police_F", 20000, "cg" },
			{ "b_SDV_01_F", 20000, "cg" }
		};
	};

	class civ_ship {
		side = "civ";
		vehicles[] = {
			{ "C_Rubberboat", 1000, "boat" },
			{ "A3L_JetSki_Yellow", 5000, "boat" },
			{ "C_Boat_Civil_01_F", 15000, "boat" },
			{ "A3L_Ship", 35000, "boat" },
			{ "burnes_mk10_1", 500000, "boat" }
		};
	};
};

/*
	Vehicle Configs (Contains textures and other stuff)

	storageFee (Getting vehicles out of garage) format:
		INDEX 0: Civilian Price
		INDEX 1: Cop Price
		INDEX 3: EMS Price
		INDEX 4: OPFOR Price (Not implemented in vanilla but still leaving support

	Textures config follows { Texture Name, side, {texture(s)path}}
	Texture(s)path follows this format:
		INDEX 0: Texture Layer 0
		INDEX 1: Texture Layer 1
		INDEX 2: Texture Layer 2
		etc etc etc
*/
class CfgVehicles {
	class Default {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 1200;
		textures[] = {};
	};
	class shounka_a3_renaultmagnum_f {
		vItemSpace = 200;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 156000, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 96000;
		textures[] = {};
	};
	class shounka_a3_mantgs_2_in_noir {
		vItemSpace = 180;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 146250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 90000;
		textures[] = {};
	};
	class shounka_a3_dafxf_euro6_f {
		vItemSpace = 180;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 146250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 90000;
		textures[] = {};
	};
	class Mrshounka_Vandura_civ_noir {
		vItemSpace = 120;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 58500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 36000;
		textures[] = {};
	};
	class A3L_F350Black {
		vItemSpace = 100;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 58500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 36000;
		textures[] = {};
	};
	class ivory_suburban {
		vItemSpace = 100;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 58500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 36000;
		textures[] = {
			 { "Black", "civ", {
                "#(argb,8,8,3)color(0,0,0,1.0,CO)"
            } },
             { "White", "civ", {
                "#(argb,8,8,3)color(1,1,1,1.0,CO)"
            } },
             { "Blue", "civ", {
                "#(argb,8,8,3)color(0,0,0.627451,1.0,CO)"
            } },
             { "Purple", "civ", {
                "#(argb,8,8,3)color(0.705882,0.0470588,0.603922,1.0,CO"
            } },
             { "Green", "civ", {
                "#(argb,8,8,3)color(0,0.501961,0,1.0,CO)"
            } },
             { "Lime Green", "civ", {
                "#(argb,8,8,3)color(0,1,0,1.0,CO)"
            } },
             { "Dark Red", "civ", {
                "#(argb,8,8,3)color(0.501961,0,0,1.0,CO)"
            } },
             { "Red", "civ", {
                "#(argb,8,8,3)color(1,0.176471,0.176471,1.0,CO)"
            } },
             { "Pink", "civ", {
                "#(argb,8,8,3)color(1,0.501961,0.752941,1.0,CO)"
            } },
             { "Orange", "civ", {
                "#(argb,8,8,3)color(1,0.501961,0,1.0,CO)"
            } }
		};
	};
	class shounka_a3_spr_civ_noir {
		vItemSpace = 120;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 58500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 36000;
		textures[] = {};
	};
	class shounka_a3_brinks_noir {
		vItemSpace = 120;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 243750, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 150000;
		textures[] = {};
	};
	class shounka_a3_brinks_bleufonce {
		vItemSpace = 120;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 243750, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 150000;
		textures[] = {};
	};
	class Quiet_Man_TGX_petite {
		vItemSpace = 120;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 156000, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 96000;
		textures[] = {};
	};
	class shounka_a3_mantgs {
		vItemSpace = 180;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 146250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 90000;
		textures[] = {};
	};
		class B_Quadbike_01_F {
		vItemSpace = 10;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2437, 500, 500, 500 };
		insurance = 2500;
		chopShop = 1500;
		textures[] = {};
	};
		class A3L_Cooper_concept_black {
		vItemSpace = 40;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 6825, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 4200;
		textures[] = {};
	};
		class A3L_Cooper_concept_blue {
		vItemSpace = 40;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 6825, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 4200;
		textures[] = {};
	};
		class Mrshounka_a3_smart_civ_noir {
		vItemSpace = 40;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 4200, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 6825;
		textures[] = {};
	};
		class Mrshounka_a3_smart_civ_bleu {
		vItemSpace = 40;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 4200, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 6825;
		textures[] = {};
	};
		class A3L_EscortTaxi {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 14625, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 9000;
		textures[] = {};
	};
		class ivory_rs4_taxi {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 14625, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 9000;
		textures[] = {};
	};
		class ivory_190e_taxi {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 14625, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 9000;
		textures[] = {};
	};
		class Mrshounka_twingo_p_noir {
		vItemSpace = 40;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 14625, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 9000;
		textures[] = {};
	};
		class Mrshounka_twingo_p_bf {
		vItemSpace = 40;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 14625, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 9000;
		textures[] = {};
	};
		class Mrshounka_twingo_p_g {
		vItemSpace = 40;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 14625, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 9000;
		textures[] = {};
	};
		class Mrshounka_corbillard_c_noir {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 16575, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 10200;
		textures[] = {};
	};
		class Mrshounka_corbillard_c_bleufonce {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 16575, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 10200;
		textures[] = {};
	};
		class Mrshounka_corbillard_c_violet {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 16575, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 10200;
		textures[] = {};
	};
		class Mrshounka_corbillard_c_orange {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 16575, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 10200;
		textures[] = {};
	};
		class Mrshounka_golfvi_noir {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 17550, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 10800;
		textures[] = {};
	};
		class Mrshounka_golfvi_bleufonce {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 17550, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 10800;
		textures[] = {};
	};
		class Mrshounka_golfvi_rouge {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 17550, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 10800;
		textures[] = {};
	};
		class Mrshounka_golfvi_jaune {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 17550, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 10800;
		textures[] = {};
	};
		class Mrshounka_golfvi_orange {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 17550, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 10800;
		textures[] = {};
	};
		class Jonzie_Western {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 17550, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 10800;
		textures[] = {};
	};
		class Jonzie_Transit {
		vItemSpace = 120;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 17550, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 10800;
		textures[] = {};
	};
		class Jonzie_Superliner {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 17550, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 10800;
		textures[] = {};
	};
		class Jonzie_Curtain {
		vItemSpace = 300;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 17550, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 10800;
		textures[] = {};
	};
		class Mrshounka_subaru08_noir {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 22425, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 13800;
		textures[] = {};
	};
		class Mrshounka_subaru08_bleufonce {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 22425, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 13800;
		textures[] = {};
	};
		class Mrshounka_subaru08_grise {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 22425, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 13800;
		textures[] = {};
	};
		class Mrshounka_subaru08_jaune {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 22425, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 13800;
		textures[] = {};
	};
		class Mrshounka_subaru08_rouge {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 22425, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 13800;
		textures[] = {};
	};
		class MG_Honda_Civic_TypeR_04_Black {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 22425, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 13800;
		textures[] = {};
	};
		class MG_Honda_Civic_TypeR_04_Blue {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 22425, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 13800;
		textures[] = {};
	};
		class MG_Honda_Civic_TypeR_04_Red {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 22425, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 13800;
		textures[] = {};
	};
		class MG_Honda_Civic_TypeR_04_Silver {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 22425, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 13800;
		textures[] = {};
	};
		class MG_Honda_Civic_TypeR_04_Yellow {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 22425, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 13800;
		textures[] = {};
	};
		class MG_Honda_Civic_TypeR_04_Green {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 22425, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 13800;
		textures[] = {};
	};
		class MG_Honda_Civic_TypeR_04_White {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 22425, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 13800;
		textures[] = {};
	};
		class MG_Honda_Civic_TypeR_04_Pink {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 22425, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 13800;
		textures[] = {};
	};
		class MG_Honda_Civic_TypeR_04_Purple {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 22425, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 13800;
		textures[] = {};
	};
		class MG_Honda_Civic_TypeR_04_Whitecamo {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 22425, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 13800;
		textures[] = {};
	};
		class Mrshounka_evox_noir {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 22425, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 13800;
		textures[] = {};
	};
		class Mrshounka_evox_rouge {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 22425, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 13800;
		textures[] = {};
	};
		class Mrshounka_evox_bleufonce {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 22425, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 13800;
		textures[] = {};
	};
		class Mrshounka_evox_jaune {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 22425, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 13800;
		textures[] = {};
	};
		class Mrshounka_evox_grise {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 22425, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 13800;
		textures[] = {};
	};
		class ivory_evox {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 22425, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 13800;
		textures[] = {
			 { "Black", "civ", {
                "#(argb,8,8,3)color(0,0,0,1.0,CO)"
            } },
             { "White", "civ", {
                "#(argb,8,8,3)color(1,1,1,1.0,CO)"
            } },
             { "Blue", "civ", {
                "#(argb,8,8,3)color(0,0,0.627451,1.0,CO)"
            } },
             { "Purple", "civ", {
                "#(argb,8,8,3)color(0.705882,0.0470588,0.603922,1.0,CO"
            } },
             { "Green", "civ", {
                "#(argb,8,8,3)color(0,0.501961,0,1.0,CO)"
            } },
             { "Lime Green", "civ", {
                "#(argb,8,8,3)color(0,1,0,1.0,CO)"
            } },
             { "Dark Red", "civ", {
                "#(argb,8,8,3)color(0.501961,0,0,1.0,CO)"
            } },
             { "Red", "civ", {
                "#(argb,8,8,3)color(1,0.176471,0.176471,1.0,CO)"
            } },
             { "Pink", "civ", {
                "#(argb,8,8,3)color(1,0.501961,0.752941,1.0,CO)"
            } },
             { "Orange", "civ", {
                "#(argb,8,8,3)color(1,0.501961,0,1.0,CO)"
            } }
		};
	};
		class ivory_r34 {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 22425, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 13800;
		textures[] = {
			 { "Black", "civ", {
                "#(argb,8,8,3)color(0,0,0,1.0,CO)"
            } },
             { "White", "civ", {
                "#(argb,8,8,3)color(1,1,1,1.0,CO)"
            } },
             { "Blue", "civ", {
                "#(argb,8,8,3)color(0,0,0.627451,1.0,CO)"
            } },
             { "Purple", "civ", {
                "#(argb,8,8,3)color(0.705882,0.0470588,0.603922,1.0,CO"
            } },
             { "Green", "civ", {
                "#(argb,8,8,3)color(0,0.501961,0,1.0,CO)"
            } },
             { "Lime Green", "civ", {
                "#(argb,8,8,3)color(0,1,0,1.0,CO)"
            } },
             { "Dark Red", "civ", {
                "#(argb,8,8,3)color(0.501961,0,0,1.0,CO)"
            } },
             { "Red", "civ", {
                "#(argb,8,8,3)color(1,0.176471,0.176471,1.0,CO)"
            } },
             { "Pink", "civ", {
                "#(argb,8,8,3)color(1,0.501961,0.752941,1.0,CO)"
            } },
             { "Orange", "civ", {
                "#(argb,8,8,3)color(1,0.501961,0,1.0,CO)"
            } }
		};
	};
		class ivory_supra {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 22425, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 13800;
		textures[] = {
			 { "Black", "civ", {
                "#(argb,8,8,3)color(0,0,0,1.0,CO)"
            } },
             { "White", "civ", {
                "#(argb,8,8,3)color(1,1,1,1.0,CO)"
            } },
             { "Blue", "civ", {
                "#(argb,8,8,3)color(0,0,0.627451,1.0,CO)"
            } },
             { "Purple", "civ", {
                "#(argb,8,8,3)color(0.705882,0.0470588,0.603922,1.0,CO"
            } },
             { "Green", "civ", {
                "#(argb,8,8,3)color(0,0.501961,0,1.0,CO)"
            } },
             { "Lime Green", "civ", {
                "#(argb,8,8,3)color(0,1,0,1.0,CO)"
            } },
             { "Dark Red", "civ", {
                "#(argb,8,8,3)color(0.501961,0,0,1.0,CO)"
            } },
             { "Red", "civ", {
                "#(argb,8,8,3)color(1,0.176471,0.176471,1.0,CO)"
            } },
             { "Pink", "civ", {
                "#(argb,8,8,3)color(1,0.501961,0.752941,1.0,CO)"
            } },
             { "Orange", "civ", {
                "#(argb,8,8,3)color(1,0.501961,0,1.0,CO)"
            } }
		};
	};
		class ivory_supra_topsecret {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 22425, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 13800;
		textures[] = {
			 { "Black", "civ", {
                "#(argb,8,8,3)color(0,0,0,1.0,CO)"
            } },
             { "White", "civ", {
                "#(argb,8,8,3)color(1,1,1,1.0,CO)"
            } },
             { "Blue", "civ", {
                "#(argb,8,8,3)color(0,0,0.627451,1.0,CO)"
            } },
             { "Purple", "civ", {
                "#(argb,8,8,3)color(0.705882,0.0470588,0.603922,1.0,CO"
            } },
             { "Green", "civ", {
                "#(argb,8,8,3)color(0,0.501961,0,1.0,CO)"
            } },
             { "Lime Green", "civ", {
                "#(argb,8,8,3)color(0,1,0,1.0,CO)"
            } },
             { "Dark Red", "civ", {
                "#(argb,8,8,3)color(0.501961,0,0,1.0,CO)"
            } },
             { "Red", "civ", {
                "#(argb,8,8,3)color(1,0.176471,0.176471,1.0,CO)"
            } },
             { "Pink", "civ", {
                "#(argb,8,8,3)color(1,0.501961,0.752941,1.0,CO)"
            } },
             { "Orange", "civ", {
                "#(argb,8,8,3)color(1,0.501961,0,1.0,CO)"
            } }
		};
	};
		class beetle_bleufonce {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 32175, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 19800;
		textures[] = {};
	};
		class beetle_bleupetrole {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 32175, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 19800;
		textures[] = {};
	};
		class beetle_red {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 32175, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 19800;
		textures[] = {};
	};
		class beetle_violet {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 32175, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 19800;
		textures[] = {};
	};
		class beetle_white {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 32175, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 19800;
		textures[] = {};
	};
		class beetle_psycha {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 32175, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 19800;
		textures[] = {};
	};	
		class beetle_psycha1 {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 32175, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 19800;
		textures[] = {};
	};
	class beetle_coci {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 32175, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 19800;
		textures[] = {};
	};	
	class beetle_camo {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 32175, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 19800;
		textures[] = {};
	};	
		class shounka_limo_civ_noir {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 41925, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 25800;
		textures[] = {};
	};
		class shounka_limo_civ_violet {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 41925, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 25800;
		textures[] = {};
	};
		class Mrshounka_ducati_p_noir {
		vItemSpace = 15;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 14625, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 9000;
		textures[] = {};
	};
		class Mrshounka_ducati_p_bf {
		vItemSpace = 15;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 14625, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 9000;
		textures[] = {};
	};
		class Mrshounka_ducati_p_r {
		vItemSpace = 15;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 14625, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 9000;
		textures[] = {};
	};
		class Mrshounka_ducati_p_j {
		vItemSpace = 15;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 14625, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 9000;
		textures[] = {};
	};
		class Mrshounka_yamaha_p_noir {
		vItemSpace = 15;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 14625, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 9000;
		textures[] = {};
	};
		class Mrshounka_yamaha_p_bf {
		vItemSpace = 15;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 14625, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 9000;
		textures[] = {};
	};
		class Mrshounka_yamaha_p_r {
		vItemSpace = 15;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 14625, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 9000;
		textures[] = {};
	};
		class Mrshounka_yamaha_p_j {
		vItemSpace = 15;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 14625, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 9000;
		textures[] = {};
	};
		class Mrshounka_Bowler_c_noir {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 27300, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16800;
		textures[] = {};
	};
		class Mrshounka_Bowler_c_bleufonce {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 27300, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16800;
		textures[] = {};
	};
		class Mrshounka_Bowler_c_rouge {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 27300, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16800;
		textures[] = {};
	};
		class Mrshounka_Bowler_c_jaune {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 27300, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16800;
		textures[] = {};
	};
		class Mrshounka_Bowler_c_orange {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 27300, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16800;
		textures[] = {};
	};
		class Mrshounka_Bowler_c_violet {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 27300, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16800;
		textures[] = {};
	};
		class Mrshounka_a3_gtr_civ_noir {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 46800, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 28800;
		textures[] = {};
	};
		class Mrshounka_a3_gtr_civ_bleu {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 46800, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 28800;
		textures[] = {};
	};
		class Tal_Maserati_Red {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 66300, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 40800;
		textures[] = {};
	};
		class Tal_Maserati_Lime {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 66300, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 40800;
		textures[] = {};
	};
		class Tal_Maserati_Black {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 66300, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 40800;
		textures[] = {};
	};
		class Tal_Maserati_Purple {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 66300, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 40800;
		textures[] = {};
	};
		class Jonzie_Viper {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 68250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 42000;
		textures[] = {
		};
	};
		class IVORY_REV {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 107250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 66000;
		textures[] = {};
	};
		class urbanized_LP700_P {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 107250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 66000;
		textures[] = {};
	};
		class urbanized_LP700_pink {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 107250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 66000;
		textures[] = {};
	};
		class urbanized_LP700_orange {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 107250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 66000;
		textures[] = {};
	};
		class urbanized_LP700_lime {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 107250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 66000;
		textures[] = {};
	};
		class urbanized_LP700_blue {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 107250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 66000;
		textures[] = {};
	};
		class urbanized_LP700_black {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 107250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 66000;
		textures[] = {};
	};
		class urbanized_LP700_purple {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 107250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 66000;
		textures[] = {};
	};
		class urbanized_LP700_red {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 107250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 66000;
		textures[] = {};
	};
		class urbanized_LP700_white {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 107250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 66000;
		textures[] = {};
	};
		class urbanized_LP700_yellow {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 107250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 66000;
		textures[] = {};
	};
		class urbanized_LaFerrari_pink {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 107250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 66000;
		textures[] = {};
	};
		class urbanized_LaFerrari_purple {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 107250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 66000;
		textures[] = {};
	};
		class urbanized_LaFerrari_red {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 107250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 66000;
		textures[] = {};
	};
		class urbanized_LaFerrari_white {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 107250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 66000;
		textures[] = {};
	};
		class urbanized_LaFerrari_yellow {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 107250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 66000;
		textures[] = {};
	};
		class urbanized_LaFerrari_black {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 107250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 66000;
		textures[] = {};
	};
		class urbanized_LaFerrari_blue {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 107250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 66000;
		textures[] = {};
	};
		class urbanized_LaFerrari_darkred {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 107250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 66000;
		textures[] = {};
	};
		class urbanized_LaFerrari_hotpink {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 107250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 66000;
		textures[] = {};
	};
		class urbanized_LaFerrari_lime {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 107250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 66000;
		textures[] = {};
	};
		class urbanized_LaFerrari_orange {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 107250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 66000;
		textures[] = {};
	};
		class urbanized_LaFerrari_black_S {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 107250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 66000;
		textures[] = {};
	};
		class urbanized_LaFerrari_blue_S {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 107250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 66000;
		textures[] = {};
	};
		class urbanized_LaFerrari_lime_S {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 107250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 66000;
		textures[] = {};
	};
		class ivory_lfa {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 107250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 66000;
		textures[] = {
			 { "Black", "civ", {
                "#(argb,8,8,3)color(0,0,0,1.0,CO)"
            } },
             { "White", "civ", {
                "#(argb,8,8,3)color(1,1,1,1.0,CO)"
            } },
             { "Blue", "civ", {
                "#(argb,8,8,3)color(0,0,0.627451,1.0,CO)"
            } },
             { "Purple", "civ", {
                "#(argb,8,8,3)color(0.705882,0.0470588,0.603922,1.0,CO"
            } },
             { "Green", "civ", {
                "#(argb,8,8,3)color(0,0.501961,0,1.0,CO)"
            } },
             { "Lime Green", "civ", {
                "#(argb,8,8,3)color(0,1,0,1.0,CO)"
            } },
             { "Dark Red", "civ", {
                "#(argb,8,8,3)color(0.501961,0,0,1.0,CO)"
            } },
             { "Red", "civ", {
                "#(argb,8,8,3)color(1,0.176471,0.176471,1.0,CO)"
            } },
             { "Pink", "civ", {
                "#(argb,8,8,3)color(1,0.501961,0.752941,1.0,CO)"
            } },
             { "Orange", "civ", {
                "#(argb,8,8,3)color(1,0.501961,0,1.0,CO)"
            } }
		};
	};
		class Mrshounka_agera_p_noir {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 877500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 540000;
		textures[] = {};
	};
		class Mrshounka_agera_p_bleu {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 877500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 540000;
		textures[] = {};
	};
		class Mrshounka_agera_p_jaune {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 877500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 540000;
		textures[] = {};
	};
		class Mrshounka_lykan_c_noir {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 1462500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 900000;
		textures[] = {};
	};
		class Mrshounka_lykan_c_jaune {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 1462500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 900000;
		textures[] = {};
	};
		class Mrshounka_lykan_c_rouge {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 1462500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 900000;
		textures[] = {};
	};
		class Mrshounka_lykan_c_grise {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 1462500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 900000;
		textures[] = {};
	};
		class ivory_veyron {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 1462500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 1200000;
		textures[] = {
			 { "Black", "civ", {
                "#(argb,8,8,3)color(0,0,0,1.0,CO)"
            } },
             { "White", "civ", {
                "#(argb,8,8,3)color(1,1,1,1.0,CO)"
            } },
             { "Blue", "civ", {
                "#(argb,8,8,3)color(0,0,0.627451,1.0,CO)"
            } },
             { "Purple", "civ", {
                "#(argb,8,8,3)color(0.705882,0.0470588,0.603922,1.0,CO"
            } },
             { "Green", "civ", {
                "#(argb,8,8,3)color(0,0.501961,0,1.0,CO)"
            } },
             { "Lime Green", "civ", {
                "#(argb,8,8,3)color(0,1,0,1.0,CO)"
            } },
             { "Dark Red", "civ", {
                "#(argb,8,8,3)color(0.501961,0,0,1.0,CO)"
            } },
             { "Red", "civ", {
                "#(argb,8,8,3)color(1,0.176471,0.176471,1.0,CO)"
            } },
             { "Pink", "civ", {
                "#(argb,8,8,3)color(1,0.501961,0.752941,1.0,CO)"
            } },
             { "Orange", "civ", {
                "#(argb,8,8,3)color(1,0.501961,0,1.0,CO)"
            } }
		};
	};
		class mrshounka_92_civ_noir {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 27300, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16800;
		textures[] = {};
	};
		class mrshounka_92_civ_bleufonce {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 27300, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16800;
		textures[] = {};
	};
		class mrshounka_92_civ_rouge {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 27300, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16800;
		textures[] = {};
	};
		class mrshounka_92_civ_jaune {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 27300, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16800;
		textures[] = {};
	};
		class mrshounka_92_civ_rose {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 27300, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16800;
		textures[] = {};
	};
		class mrshounka_92_civ_grise {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 27300, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16800;
		textures[] = {};
	};
		class mrshounka_92_civ_violet {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 27300, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16800;
		textures[] = {};
	};
		class mrshounka_92_civ_orange {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 27300, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16800;
		textures[] = {};
	};
		class Mrshounka_Touareg_noir {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 28275, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 17400;
		textures[] = {};
	};
		class Mrshounka_Touareg_rouge {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 28275, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 17400;
		textures[] = {};
	};
		class ivory_gti {
		vItemSpace = 40;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 28275, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 17400;
		textures[] = {
			 { "Black", "civ", {
                "#(argb,8,8,3)color(0,0,0,1.0,CO)"
            } },
             { "White", "civ", {
                "#(argb,8,8,3)color(1,1,1,1.0,CO)"
            } },
             { "Blue", "civ", {
                "#(argb,8,8,3)color(0,0,0.627451,1.0,CO)"
            } },
             { "Purple", "civ", {
                "#(argb,8,8,3)color(0.705882,0.0470588,0.603922,1.0,CO"
            } },
             { "Green", "civ", {
                "#(argb,8,8,3)color(0,0.501961,0,1.0,CO)"
            } },
             { "Lime Green", "civ", {
                "#(argb,8,8,3)color(0,1,0,1.0,CO)"
            } },
             { "Dark Red", "civ", {
                "#(argb,8,8,3)color(0.501961,0,0,1.0,CO)"
            } },
             { "Red", "civ", {
                "#(argb,8,8,3)color(1,0.176471,0.176471,1.0,CO)"
            } },
             { "Pink", "civ", {
                "#(argb,8,8,3)color(1,0.501961,0.752941,1.0,CO)"
            } },
             { "Orange", "civ", {
                "#(argb,8,8,3)color(1,0.501961,0,1.0,CO)"
            } }
		};
	};
		class Mrshounka_Touareg_jaune {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 28275, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 17400;
		textures[] = {};
	};
		class urbanized_g65_yellow {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 28275, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 17400;
		textures[] = {};
	};
		class urbanized_g65_white {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 28275, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 17400;
		textures[] = {};
	};
		class urbanized_g65_red {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 28275, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 17400;
		textures[] = {};
	};
		class urbanized_g65_purple {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 28275, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 17400;
		textures[] = {};
	};
		class urbanized_g65_black {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 28275, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 17400;
		textures[] = {};
	};
		class urbanized_g65_blue {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 28275, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 17400;
		textures[] = {};
	};
		class urbanized_g65_lime {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 28275, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 17400;
		textures[] = {};
	};
		class urbanized_g65_orange {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 28275, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 17400;
		textures[] = {};
	};
		class urbanized_g65_pink {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 28275, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 17400;
		textures[] = {};
	};
		class Mrshounka_rs4_civ_noir {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 31200, 2500, 2500, 2500 };
		insurance = 19200;
		chopShop = 16000;
		textures[] = {};
	};
		class Mrshounka_rs4_civ_jaune {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 31200, 2500, 2500, 2500 };
		insurance = 19200;
		chopShop = 16000;
		textures[] = {};
	};
		class Mrshounka_rs4_civ_rouge {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 31200, 2500, 2500, 2500 };
		insurance = 19200;
		chopShop = 16000;
		textures[] = {};
	};
		class Mrshounka_rs4_civ_grise {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 31200, 2500, 2500, 2500 };
		insurance = 19200;
		chopShop = 16000;
		textures[] = {};
	};
		class ivory_rs4 {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 31200, 2500, 2500, 2500 };
		insurance = 19200;
		chopShop = 16000;
		textures[] = {
			 { "Black", "civ", {
                "#(argb,8,8,3)color(0,0,0,1.0,CO)"
            } },
             { "White", "civ", {
                "#(argb,8,8,3)color(1,1,1,1.0,CO)"
            } },
             { "Blue", "civ", {
                "#(argb,8,8,3)color(0,0,0.627451,1.0,CO)"
            } },
             { "Purple", "civ", {
                "#(argb,8,8,3)color(0.705882,0.0470588,0.603922,1.0,CO"
            } },
             { "Green", "civ", {
                "#(argb,8,8,3)color(0,0.501961,0,1.0,CO)"
            } },
             { "Lime Green", "civ", {
                "#(argb,8,8,3)color(0,1,0,1.0,CO)"
            } },
             { "Dark Red", "civ", {
                "#(argb,8,8,3)color(0.501961,0,0,1.0,CO)"
            } },
             { "Red", "civ", {
                "#(argb,8,8,3)color(1,0.176471,0.176471,1.0,CO)"
            } },
             { "Pink", "civ", {
                "#(argb,8,8,3)color(1,0.501961,0.752941,1.0,CO)"
            } },
             { "Orange", "civ", {
                "#(argb,8,8,3)color(1,0.501961,0,1.0,CO)"
            } }
		};
	};
		class Mrshounka_bmwm1_civ_noir {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 31200, 2500, 2500, 2500 };
		insurance = 19200;
		chopShop = 16000;
		textures[] = {};
	};
		class Mrshounka_bmwm1_civ_bleufonce {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 31200, 2500, 2500, 2500 };
		insurance = 19200;
		chopShop = 16000;
		textures[] = {};
	};
		class Mrshounka_bmwm1_civ_rouge {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 31200, 2500, 2500, 2500 };
		insurance = 19200;
		chopShop = 16000;
		textures[] = {};
	};
		class Mrshounka_bmwm1_civ_grise {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 31200, 2500, 2500, 2500 };
		insurance = 19200;
		chopShop = 16000;
		textures[] = {};
	};
		class Mrshounka_bmwm1_civ_orange {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 31200, 2500, 2500, 2500 };
		insurance = 19200;
		chopShop = 16000;
		textures[] = {};
	};
		class ivory_isf {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 31200, 2500, 2500, 2500 };
		insurance = 19200;
		chopShop = 16000;
		textures[] = {
			 { "Black", "civ", {
                "#(argb,8,8,3)color(0,0,0,1.0,CO)"
            } },
             { "White", "civ", {
                "#(argb,8,8,3)color(1,1,1,1.0,CO)"
            } },
             { "Blue", "civ", {
                "#(argb,8,8,3)color(0,0,0.627451,1.0,CO)"
            } },
             { "Purple", "civ", {
                "#(argb,8,8,3)color(0.705882,0.0470588,0.603922,1.0,CO"
            } },
             { "Green", "civ", {
                "#(argb,8,8,3)color(0,0.501961,0,1.0,CO)"
            } },
             { "Lime Green", "civ", {
                "#(argb,8,8,3)color(0,1,0,1.0,CO)"
            } },
             { "Dark Red", "civ", {
                "#(argb,8,8,3)color(0.501961,0,0,1.0,CO)"
            } },
             { "Red", "civ", {
                "#(argb,8,8,3)color(1,0.176471,0.176471,1.0,CO)"
            } },
             { "Pink", "civ", {
                "#(argb,8,8,3)color(1,0.501961,0.752941,1.0,CO)"
            } },
             { "Orange", "civ", {
                "#(argb,8,8,3)color(1,0.501961,0,1.0,CO)"
            } }
		};
	};
		class ivory_e36 {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 31200, 2500, 2500, 2500 };
		insurance = 19200;
		chopShop = 16000;
		textures[] = {
			 { "Black", "civ", {
                "#(argb,8,8,3)color(0,0,0,1.0,CO)"
            } },
             { "White", "civ", {
                "#(argb,8,8,3)color(1,1,1,1.0,CO)"
            } },
             { "Blue", "civ", {
                "#(argb,8,8,3)color(0,0,0.627451,1.0,CO)"
            } },
             { "Purple", "civ", {
                "#(argb,8,8,3)color(0.705882,0.0470588,0.603922,1.0,CO"
            } },
             { "Green", "civ", {
                "#(argb,8,8,3)color(0,0.501961,0,1.0,CO)"
            } },
             { "Lime Green", "civ", {
                "#(argb,8,8,3)color(0,1,0,1.0,CO)"
            } },
             { "Dark Red", "civ", {
                "#(argb,8,8,3)color(0.501961,0,0,1.0,CO)"
            } },
             { "Red", "civ", {
                "#(argb,8,8,3)color(1,0.176471,0.176471,1.0,CO)"
            } },
             { "Pink", "civ", {
                "#(argb,8,8,3)color(1,0.501961,0.752941,1.0,CO)"
            } },
             { "Orange", "civ", {
                "#(argb,8,8,3)color(1,0.501961,0,1.0,CO)"
            } }
		};
	};
		class ivory_m3 {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 31200, 2500, 2500, 2500 };
		insurance = 19200;
		chopShop = 16000;
		textures[] = {
			 { "Black", "civ", {
                "#(argb,8,8,3)color(0,0,0,1.0,CO)"
            } },
             { "White", "civ", {
                "#(argb,8,8,3)color(1,1,1,1.0,CO)"
            } },
             { "Blue", "civ", {
                "#(argb,8,8,3)color(0,0,0.627451,1.0,CO)"
            } },
             { "Purple", "civ", {
                "#(argb,8,8,3)color(0.705882,0.0470588,0.603922,1.0,CO"
            } },
             { "Green", "civ", {
                "#(argb,8,8,3)color(0,0.501961,0,1.0,CO)"
            } },
             { "Lime Green", "civ", {
                "#(argb,8,8,3)color(0,1,0,1.0,CO)"
            } },
             { "Dark Red", "civ", {
                "#(argb,8,8,3)color(0.501961,0,0,1.0,CO)"
            } },
             { "Red", "civ", {
                "#(argb,8,8,3)color(1,0.176471,0.176471,1.0,CO)"
            } },
             { "Pink", "civ", {
                "#(argb,8,8,3)color(1,0.501961,0.752941,1.0,CO)"
            } },
             { "Orange", "civ", {
                "#(argb,8,8,3)color(1,0.501961,0,1.0,CO)"
            } }
		};
	};
		class Mrshounka_bmwm6_noir {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 37050, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 22800;
		textures[] = {};
	};
		class Mrshounka_bmwm6_bleufonce {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 37050, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 22800;
		textures[] = {};
	};
		class Mrshounka_bmwm6_rouge {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 37050, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 22800;
		textures[] = {};
	};
		class Mrshounka_bmwm6_jaune {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 19000;
		textures[] = {};
	};
		class Mrshounka_bmwm6_grise {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 37050, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 22800;
		textures[] = {};
	};
		class Mrshounka_cayenne_p_noir {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 37050, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 22800;
		textures[] = {};
	};
		class Mrshounka_cayenne_p_jaune {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 37050, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 22800;
		textures[] = {};
	};
		class Mrshounka_cayenne_p_rouge {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 37050, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 22800;
		textures[] = {};
	};
		class Mrshounka_cayenne_p_grise {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 37050, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 22800;
		textures[] = {};
	};
		class shounka_a3_rs5_civ_rouge {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 37050, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 22800;
		textures[] = {};
	};
		class shounka_a3_rs5_civ_noir {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 37050, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 22800;
		textures[] = {};
	};
		class shounka_a3_rs5_civ_bleufonce {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 37050, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 22800;
		textures[] = {};
	};
		class shounka_a3_rs5_civ_jaune {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 37050, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 22800;
		textures[] = {};
	};
		class shounka_a3_rs5_civ_grise {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 37050, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 22800;
		textures[] = {};
	};
		class S_PorscheRS_Black {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 85800, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 52800;
		textures[] = {};
	};
		class S_PorscheRS_White {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 85800, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 52800;
		textures[] = {};
	};
		class S_PorscheRS_Yellow {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 85800, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 52800;
		textures[] = {};
	};
		class quiet_audi_r8_plus {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 49000;
		textures[] = {};
	};
		class Mrshounka_Alfa_Romeo_noir {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 20475, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 126000;
		textures[] = {};
	};
		class Mrshounka_Alfa_Romeo_bleufonce {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 20475, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 126000;
		textures[] = {};
	};
		class Mrshounka_Alfa_Romeo_rouge {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 20475, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 126000;
		textures[] = {};
	};
		class Mrshounka_Alfa_Romeo_jaune {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 20475, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 126000;
		textures[] = {};
	};
		class Mrshounka_Alfa_Romeo_orange {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 20475, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 126000;
		textures[] = {};
	};
		class Mrshounka_Alfa_Romeo_grise {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 20475, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 126000;
		textures[] = {};
	};
		class Mrshounka_veneno_c_noir {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 1462500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 900000;
		textures[] = {};
	};
		class Mrshounka_veneno_c_bleu {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 1462500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 900000;
		textures[] = {};
	};
		class Mrshounka_veneno_c_jaune {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 1462500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 900000;
		textures[] = {};
	};
		class shounka_a3_ds4_noir {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 14625, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 9000;
		textures[] = {};
	};
		class shounka_a3_ds4_bleufonce {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 14625, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 9000;
		textures[] = {};
	};
		class shounka_a3_ds4_rouge {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 14625, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 9000;
		textures[] = {};
	};
		class shounka_a3_ds4_jaune {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 14625, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 9000;
		textures[] = {};
	};
		class shounka_a3_ds4_grise {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 14625, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 9000;
		textures[] = {};
	};
		class shounka_a3_cliors_civ_noir {
		vItemSpace = 40;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 19500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 12000;
		textures[] = {};
	};
		class shounka_a3_cliors_civ_bleufonce {
		vItemSpace = 40;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 19500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 12000;
		textures[] = {};
	};
		class shounka_a3_cliors_civ_rouge {
		vItemSpace = 40;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 19500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 12000;
		textures[] = {};
	};
		class shounka_a3_cliors_civ_jaune {
		vItemSpace = 40;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 19500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 12000;
		textures[] = {};
	};
		class shounka_a3_cliors_civ_rose {
		vItemSpace = 40;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 19500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 12000;
		textures[] = {};
	};
		class shounka_a3_cliors_civ_grise {
		vItemSpace = 40;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 19500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 12000;
		textures[] = {};
	};
		class shounka_a3_cliors_civ_violet {
		vItemSpace = 40;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 19500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 12000;
		textures[] = {};
	};
		class shounka_a3_cliors_civ_orange {
		vItemSpace = 40;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 19500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 12000;
		textures[] = {};
	};
		class Mrshounka_a3_ds3_civ_noir {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 19500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 12000;
		textures[] = {};
	};
		class Mrshounka_a3_ds3_civ_bleufonce {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 19500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 12000;
		textures[] = {};
	};
		class Mrshounka_a3_ds3_civ_civ_rouge {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 19500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 12000;
		textures[] = {};
	};
		class Mrshounka_a3_ds3_civ_civ_jaune {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 19500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 12000;
		textures[] = {};
	};
		class Mrshounka_a3_ds3_civ_civ_grise {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 19500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 12000;
		textures[] = {};
	};
		class Mrshounka_c4_p_civ_noir {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 19500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 12000;
		textures[] = {};
	};
		class Mrshounka_c4_p_civ_rouge {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 19500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 12000;
		textures[] = {};
	};
		class Mrshounka_c4_p_civ_grise {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 19500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 12000;
		textures[] = {};
	};
		class Mrshounka_r5_noir {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 21450, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 13200;
		textures[] = {};
	};
		class Mrshounka_r5_bleufonce {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 21450, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 13200;
		textures[] = {};
	};
		class Mrshounka_r5_rouge {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 21450, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 13200;
		textures[] = {};
	};
		class Mrshounka_r5_jaune {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 21450, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 13200;
		textures[] = {};
	};
		class Mrshounka_a3_308_rcz_noir {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 23400, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 14400;
		textures[] = {};
	};
		class Mrshounka_a3_308_rcz_bleufonce {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 23400, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 14400;
		textures[] = {};
	};
		class Mrshounka_a3_308_rcz_rouge {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 23400, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 14400;
		textures[] = {};
	};
		class Mrshounka_a3_308_rcz_jaune {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 23400, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 14400;
		textures[] = {};
	};
		class Mrshounka_a3_308_rcz_rose {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 23400, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 14400;
		textures[] = {};
	};
		class Mrshounka_a3_308_rcz_grise {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 23400, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 14400;
		textures[] = {};
	};
		class Mrshounka_a3_308_rcz_violet {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 23400, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 14400;
		textures[] = {};
	};
		class Mrshounka_a3_308_rcz_orange {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 23400, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 14400;
		textures[] = {};
	};
		class Mrshounka_207_noir {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 23400, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 14400;
		textures[] = {};
	};
		class Mrshounka_207_bleufonce {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 23400, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 14400;
		textures[] = {};
	};
		class Mrshounka_207_rouge {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 23400, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 14400;
		textures[] = {};
	};
		class Mrshounka_207_jaune {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 23400, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 14400;
		textures[] = {};
	};
		class Mrshounka_207_rose {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 23400, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 14400;
		textures[] = {};
	};
	class Mrshounka_207_grise {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 23400, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 14400;
		textures[] = {};
	};
	class Mrshounka_207_violet {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 23400, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 14400;
		textures[] = {};
	};
	class Mrshounka_207_orange {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 23400, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 14400;
		textures[] = {};
	};
	class shounka_a3_peugeot508_civ_noir {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 25350, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 15600;
		textures[] = {};
	};
	class shounka_a3_peugeot508_civ_bleufonce {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 25350, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 15600;
		textures[] = {};
	};
	class IVORY_LP560 {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 152100, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 93600;
		textures[] = {};
	};
	class MG_Audi_R8_11_Black {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 152100, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 93600;
		textures[] = {};
	};
	class MG_Audi_R8_11_Blue {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 152100, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 93600;
		textures[] = {};
	};
	class MG_Audi_R8_11_Red {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 152100, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 93600;
		textures[] = {};
	};
	class MG_Audi_R8_11_Silver {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 152100, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 93600;
		textures[] = {};
	};
	class MG_Audi_R8_11_Yellow {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 152100, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 93600;
		textures[] = {};
	};
	class MG_Audi_R8_11_Green {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 152100, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 93600;
		textures[] = {};
	};
	class MG_Audi_R8_11_White {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 152100, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 93600;
		textures[] = {};
	};
	class MG_Audi_R8_11_Pink {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 152100, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 93600;
		textures[] = {};
	};
	class MG_Audi_R8_11_Purple {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 152100, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 93600;
		textures[] = {};
	};
	class shounka_a3_peugeot508_civ_rouge {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 25350, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 15600;
		textures[] = {};
	};
	class shounka_a3_peugeot508_civ_jaune {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 25350, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 15600;
		textures[] = {};
	};
	class shounka_a3_peugeot508_civ_grise {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 25350, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 15600;
		textures[] = {};
	};
	class Mrshounka_a3_308_civ_noir {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {};
	};
	class Mrshounka_a3_308_civ_bleufonce {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {};
	};
	class Mrshounka_a3_308_civ_rouge {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {};
	};
	class Mrshounka_a3_308_civ_jaune {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {};
	};
	class Mrshounka_a3_308_civ_rose {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {};
	};
	class Mrshounka_a3_308_civ_grise {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {};
	};
	class Mrshounka_a3_308_civ_violet {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {};
	};
	class Mrshounka_a3_308_civ_orange {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {};
	};
	class Mrshounka_megane_rs_2015_noir {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {};
	};
	class Mrshounka_megane_rs_2015_jaune {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {};
	};
	class Mrshounka_megane_rs_2015_rouge {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {};
	};
	class Mrshounka_lincoln_noir {
		vItemSpace = 65;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 17550, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 10800;
		textures[] = {};
	};
	class Mrshounka_lincoln_bleufonce {
		vItemSpace = 65;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 17550, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 10800;
		textures[] = {};
	};
	class Mrshounka_lincoln_rouge {
		vItemSpace = 65;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 17550, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 10800;
		textures[] = {};
	};
	class Mrshounka_lincoln_violet {
		vItemSpace = 65;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 17550, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 10800;
		textures[] = {};
	};
	class Mrshounka_jeep_blinde_noir {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 21450, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 13200;
		textures[] = {};
	};
	class Mrshounka_jeep_blinde_noir_mat {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 21450, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 13200;
		textures[] = {};
	};
	class Mrshounka_jeep_blinde_rouge {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 21450, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 13200;
		textures[] = {};
	};
	class Mrshounka_jeep_blinde_rouge_mat {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 21450, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 13200;
		textures[] = {};
	};
	class Mrshounka_jeep_blinde_blanc {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 21450, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 13200;
		textures[] = {};
	};
	class Mrshounka_hummer_civ_noir {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {};
	};
	class Mrshounka_hummer_civ_bleufonce {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {};
	};
	class Mrshounka_hummer_civ_jaune {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {};
	};
	class Mrshounka_hummer_civ_rouge {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {};
	};
	class SAL_77TRANSAMCiv {
		vItemSpace = 30;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {};
	};
	class SAL_IROCCivBlack {
		vItemSpace = 30;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {};
	};
	class SAL_IROCCivSilver {
		vItemSpace = 30;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {};
	};
	class SAL_IROCCivRed {
		vItemSpace = 30;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {};
	};
	class SAL_IROCCivBlue {
		vItemSpace = 30;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {};
	};
	class Mrshounka_mustang_noir {
		vItemSpace = 40;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 29250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 18000;
		textures[] = {};
	};
	class Mrshounka_mustang_mat_n {
		vItemSpace = 40;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 29250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 18000;
		textures[] = {};
	};
	class Mrshounka_mustang_rouge {
		vItemSpace = 40;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 29250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 18000;
		textures[] = {};
	};
	class Mrshounka_mustang_jaune {
		vItemSpace = 40;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 29250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 18000;
		textures[] = {};
	};
	class Mrshounka_mustang_orange {
		vItemSpace = 40;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 29250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 18000;
		textures[] = {};
	};
	class Mrshounka_a3_dodge15_civ_noir {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 29250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 18000;
		textures[] = {};
	};
	class Mrshounka_a3_dodge15_civ_bleu {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 29250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 18000;
		textures[] = {};
	};
	class Mrshounka_a3_dodge15_civ_rouge {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 29250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 18000;
		textures[] = {};
	};
	class Mrshounka_a3_dodge15_civ_jaune {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 29250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 18000;
		textures[] = {};
	};
	class Mrshounka_a3_dodge15_civ_rose {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 29250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 18000;
		textures[] = {};
	};
	class Mrshounka_a3_dodge15_civ_grise {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 29250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 18000;
		textures[] = {};
	};
	class Mrshounka_a3_dodge15_civ_violet {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 29250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 18000;
		textures[] = {};
	};
	class Mrshounka_a3_dodge15_civ_orange {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 29250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 18000;
		textures[] = {};
	};
	class A3L_Camaro {
		vItemSpace = 40;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 29250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 18000;
		textures[] = {};
	};
	class Mrshounka_raptor_noir {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 31200, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 19200;
		textures[] = {};
	};
	class Mrshounka_raptor_rouge {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 31200, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 19200;
		textures[] = {};
	};
	class Mrshounka_raptor_jaune {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 31200, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 19200;
		textures[] = {};
	};
	class Mrshounka_raptor_grise {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 31200, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 19200;
		textures[] = {};
	};
	class Mrshounka_raptor_violet {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 31200, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 19200;
		textures[] = {};
	};
	class Mrshounka_cherokee_mat {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 31200, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 19200;
		textures[] = {};
	};
	class Mrshounka_cherokee_bleu {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 31200, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 19200;
		textures[] = {};
	};
	class Mrshounka_cherokee_bleu_mat {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 31200, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 19200;
		textures[] = {};
	};
	class Mrshounka_cherokee_blanc_mat {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 31200, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 19200;
		textures[] = {};
	};
	class Mrshounka_cherokee_rouge_mat {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 31200, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 19200;
		textures[] = {};
	};
	class Mrshounka_raptor2_noir {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 34125, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 21000;
		textures[] = {};
	};
	class Mrshounka_raptor2_rouge {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 34125, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 21000;
		textures[] = {};
	};
	class Mrshounka_raptor2_jaune {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 34125, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 21000;
		textures[] = {};
	};
	class Mrshounka_raptor2_grise {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 34125, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 21000;
		textures[] = {};
	};
	class Mrshounka_raptor2_violet {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 34125, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 21000;
		textures[] = {};
	};
	class A3L_MonsterTruck {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 965250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 594000;
		textures[] = {};
	};
	class C_Kart_01_Blu_F {
		vItemSpace = 0;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 7500;
		textures[] = {};
	};
	class C_Kart_01_Fuel_F {
		vItemSpace = 0;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 7500;
		textures[] = {};
	};
	class C_Kart_01_Red_F {
		vItemSpace = 0;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 7500;
		textures[] = {};
	};
	class C_Kart_01_Vrana_F {
		vItemSpace = 0;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 7500;
		textures[] = {};
	};
	class cg_stretcher {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 5, 2500 };
		insurance = 2500;
		chopShop = 38;
		textures[] = {};
	};
	class Jonzie_Ambulance {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 975, 2500 };
		insurance = 2500;
		chopShop = 7500;
		textures[] = {
			{"Ambulance", "med", {
				"\jonzie_ambulance\tex\000f3487.paa"
			} }
		};
	};
	class A3L_Amberlamps {
		vItemSpace = 100;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 7500;
		textures[] = {};
	};
	class Ambulance {
		vItemSpace = 100;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 1950, 2500 };
		insurance = 2500;
		chopShop = 45000;
		textures[] = {};
	};
	class shounka_a3_pompier_sprinter {
		vItemSpace = 100;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 7500;
		textures[] = {};
	};
	class mercedes_atego_pompier_ingame {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 7500;
		textures[] = {};
	};
	class A3L_LadderTruck {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 12500;
		textures[] = {};
	};
	class dezkit_b206x_unarmed {
		vItemSpace = 100;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 15000;
		textures[] = {};
	};
	class dezkit_b206_fbi {
		vItemSpace = 100;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 11700, 2500, 2500 };
		insurance = 2500;
		chopShop = 270000;
		textures[] = {};
	};
	class dezkit_b206_police {
		vItemSpace = 100;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 15000;
		textures[] = {};
	};
	class dezkit_b206_news {
		vItemSpace = 100;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 15000;
		textures[] = {};
	};
	class dezkit_b206_fl {
		vItemSpace = 100;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 15000;
		textures[] = {};
	};
	class dezkit_b206_hs {
		vItemSpace = 100;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 15000;
		textures[] = {};
	};
	class dezkit_b206_ls {
		vItemSpace = 100;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 15000;
		textures[] = {};
	};
	class dezkit_b206_ems {
		vItemSpace = 100;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 15000;
		textures[] = {};
	};
	class dezkit_b206_rescue {
		vItemSpace = 100;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class B_G_Offroad_01_F {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 10000;
		textures[] = {};
	};
	class C_Heli_light_01_digital_F {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 162500;
		textures[] = {};
	};
	class C_Heli_light_01_elliptical_F {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class sab_FAAllegro {
		vItemSpace = 40;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class sab_FAAllegro_2 {
		vItemSpace = 40;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class sab_FAAllegro_3 {
		vItemSpace = 40;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class sab_FAAllegro_4 {
		vItemSpace = 40;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class sab_FAAllegro_5 {
		vItemSpace = 40;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class sab_l19 {
		vItemSpace = 50;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class sab_l19_2 {
		vItemSpace = 50;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class sab_l19_3 {
		vItemSpace = 50;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class sab_RobinDR400 {
		vItemSpace = 50;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class sab_RobinDR400_2 {
		vItemSpace = 50;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class sab_RobinDR400_3 {
		vItemSpace = 50;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class sab_RobinDR400_4 {
		vItemSpace = 50;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class sab_RobinDR400_5 {
		vItemSpace = 50;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class sab_piper {
		vItemSpace = 65;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class sab_piper2 {
		vItemSpace = 65;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class sab_piper3 {
		vItemSpace = 65;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class sab_piper4 {
		vItemSpace = 65;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class sab_piper5 {
		vItemSpace = 65;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class c_plane_civil_01_F {
		vItemSpace = 75;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class I_c_plane_civil_01_F {
		vItemSpace = 75;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class c_plane_civil_01_racing_F {
		vItemSpace = 75;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class sab_aeroc {
		vItemSpace = 200;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class sab_aeroc_2 {
		vItemSpace = 200;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class sab_aeroc_3 {
		vItemSpace = 200;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class burnes_mk10_1 {
		vItemSpace = 300;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class sab_do228 {
		vItemSpace = 260;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class sab_do228_2 {
		vItemSpace = 260;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class sab_do228_3_1 {
		vItemSpace = 260;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class sab_do228_3_2 {
		vItemSpace = 260;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class sab_do228_4 {
		vItemSpace = 260;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class sab_do228_5 {
		vItemSpace = 260;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class sab_camel_pro {
		vItemSpace = 30;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class sab_panther {
		vItemSpace = 30;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class sab_fiat4 {
		vItemSpace = 30;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class sab_fiat5 {
		vItemSpace = 30;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class sab_alphajet9 {
		vItemSpace = 30;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class sab_alphajet10 {
		vItemSpace = 30;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class sab_alphajet11 {
		vItemSpace = 30;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class sab_alphajet12 {
		vItemSpace = 30;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class sab_alphajet13 {
		vItemSpace = 30;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	class Mrshounka_ducati_police_p {
		vItemSpace = 15;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 4000;
		textures[] = {};
	};
	class DAR_CVPIPolice {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = {};
	};
	class Aus_PD {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 975, 975, 2500, 2500 };
		insurance = 2500;
		chopShop = 22500;
		textures[] = {};
	};
	class Aus_UC {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 975, 975, 2500, 2500 };
		insurance = 2500;
		chopShop = 22500;
		textures[] = {};
	};
	class Aus_UC_gray {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 975, 975, 2500, 2500 };
		insurance = 2500;
		chopShop = 22500;
		textures[] = {};
	};
	class Aus_UC_blue {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 975, 975, 2500, 2500 };
		insurance = 2500;
		chopShop = 22500;
		textures[] = {};
	};
    class civ_crown_black {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 14625, 9750, 2500, 2500 };
		insurance = 2500;
		chopShop = 9000;
		textures[] = {};
	};
    class civ_crown_blue {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 14625, 9750, 2500, 2500 };
		insurance = 2500;
		chopShop = 9000;
		textures[] = {};
	};
    class civ_crown_gray {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 14625, 9750, 2500, 2500 };
		insurance = 2500;
		chopShop = 9000;
		textures[] = {};
	};	
	class taxi {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 16575, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 10200;
		textures[] = {};
	};
	class DAR_CVPISlick {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = {};
	};
	class DAR_CVPIAuxiliary {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = {};
	};
	class a3l_subaru_police {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 7500;
		textures[] = {};
	};
	class Mrshounka_a3_308_gend {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 7500;
		textures[] = {};
	};
	class Mrshounka_308pol {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 7500;
		textures[] = {};
	};
	class shounka_a3_gendsprinter {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 7500;
		textures[] = {};
	};
	class DAR_ExplorerPoliceStealth {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2925, 2500, 2500 };
		insurance = 2500;
		chopShop = 67500;
		textures[] = {};
	};
	class DAR_ExplorerEMS {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 7500;
		textures[] = {};
	};
	class HI_ExplorerEMS {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 975, 2500 };
		insurance = 2500;
		chopShop = 7500;
		textures[] = {};
	};
	class DAR_ExplorerPolice {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2925, 2500, 2500 };
		insurance = 2500;
		chopShop = 67500;
		textures[] = {};
	};
	class urbanized_g65_uc1 {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2925, 2500, 2500 };
		insurance = 2500;
		chopShop = 67500;
		textures[] = {};
	};
	class urbanized_g65_uc2 {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2925, 2500, 2500 };
		insurance = 2500;
		chopShop = 67500;
		textures[] = {};
	};
	class urbanized_g65_uc3 {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2925, 2500, 2500 };
		insurance = 2500;
		chopShop = 67500;
		textures[] = {};
	};
	class DAR_ImpalaPolice {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 975, 2500, 2500 };
		insurance = 2500;
		chopShop = 22500;
		textures[] = {};
	};
	class DAR_ImpalaPoliceSlick {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 975, 2500, 2500 };
		insurance = 2500;
		chopShop = 22500;
		textures[] = {};
	};
	class DAR_ImpalaPoliceDet {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 975, 2500, 2500 };
		insurance = 2500;
		chopShop = 22500;
		textures[] = {};
	};
	class MrShounka_bmw_gend {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 9000;
		textures[] = {};
	};
	class DAR_TahoePolice {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2925, 2500, 2500 };
		insurance = 2500;
		chopShop = 67500;
		textures[] = {};
	};
	class DAR_TahoePoliceSlick {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2925, 2500, 2500 };
		insurance = 2500;
		chopShop = 67500;
		textures[] = {};
	};
	class DAR_TahoePoliceDet {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2925, 2500, 2500 };
		insurance = 2500;
		chopShop = 67500;
		textures[] = {};
	};
	class Mrshounka_rs4_gend_p_blanc {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 12500;
		textures[] = {};
	};
	class Mrshounka_rs4_gend_p_noir {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 12500;
		textures[] = {};
	};
	class Mrshounka_rs4_gend_p_jaune {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 12500;
		textures[] = {};
	};
	class Mrshounka_rs4_gend_p_bleufonce {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 12500;
		textures[] = {};
	};
	class shounka_a3_suburbangign {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 4875, 2500 };
		insurance = 2500;
		chopShop = 112500;
		textures[] = {};
	};
	class Mrshounka_agera_gend_p {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 40000;
		textures[] = {};
	};
	class GNT_C185 {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 48750, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 30000;
		textures[] = {};
	};
	class C_Heli_light_01_red_F {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 48750, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 30000;
		textures[] = {};
	};
	class C_Heli_light_01_blue_F {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 48750, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 30000;
		textures[] = {};
	};

	class C_Heli_light_01_sheriff_F {
		vItemSpace = 150;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 11700, 11700, 2500, 2500 };
		insurance = 2500;
		chopShop = 270000;
		textures[] = {};
	};

	class I_Heli_light_03_unarmed_F {
		vItemSpace = 150;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 195000, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 120000;
		textures[] = {};
	};

	class B_Heli_light_01_F {
		vItemSpace = 150;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 11700, 11700, 2500, 2500 };
		insurance = 2500;
		chopShop = 270000;
		textures[] = {};
	};

	class UH1H_Closed {
		vItemSpace = 200;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 390000, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 240000;
		textures[] = {};	
	};
	
	class UH1N_Slick {
		vItemSpace = 200;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 390000, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 240000;
		textures[] = {};
	};

	class UH1H_Medevac {
		vItemSpace = 200;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};	
	};
	
    class Bell412 {
		vItemSpace = 100;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 17500;
		textures[] = {};	
	};
	
	class UH1N_Black {
		vItemSpace = 100;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 14625, 2500, 2500 };
		insurance = 2500;
		chopShop = 337500;
		textures[] = {};
    };
	
	class ARMSCor_A109LUH_I {
		vItemSpace = 150;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};

	class USAF_HH60GMED {
		vItemSpace = 150;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 12375;
		textures[] = {};
	};
	
	class ARMSCor_A109LUH_B {
		vItemSpace = 100;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 14625, 2500, 2500 };
		insurance = 2500;
		chopShop = 337500;
		textures[] = {};
	};

	class ARMSCor_A109_civ {
		vItemSpace = 150;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 243750, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 150000;
		textures[] = {};
	};

	class O_Heli_Light_02_unarmed_F {
		vItemSpace = 300;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 780000, 39000, 14625, 2500 };
		insurance = 2500;
		chopShop = 480000;
		textures[] = {
			{ "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
			} }
		};
	};
	class EC635_Unarmed {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 20000;
		textures[] = {};
	};
	class A3L_EC635_SAR {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 14625, 2500 };
		insurance = 2500;
		chopShop = 20000;
		textures[] = {};
	};
	class B_Boat_Transport_01_F {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 1500;
		textures[] = {};
	};
	class O_G_Boat_Transport_02_F {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 1500;
		textures[] = {};
	};
	class C_Boat_Civil_01_police_F {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 10000;
		textures[] = {};
	};
	class C_Boat_Civil_01_F {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 14625, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 9000;
		textures[] = {};
	};
	class C_Boat_Civil_01_rescue_F {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 1950, 2500 };
		insurance = 2500;
		chopShop = 1650;
		textures[] = {};
	};
	class A3L_JetSki_Yellow {
		vItemSpace = 30;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 4875, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 3000;
		textures[] = {};
	};
	class B_SDV_01_F {
		vItemSpace = 30;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 4875, 2500, 7800, 2500 };
		insurance = 2500;
		chopShop = 6600;
		textures[] = {};
	};
	class B_Lifeboat {
		vItemSpace = 30;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 975, 2500 };
		insurance = 2500;
		chopShop = 825;
		textures[] = {};
	};
	class B_Rubberboat {
		vItemSpace = 30;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 975, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 600;
		textures[] = {};
	};
	class C_Rubberboat {
		vItemSpace = 30;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 2500;
		textures[] = {};
	};
	class A3L_Ship {
		vItemSpace = 45;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 34125, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 21000;
		textures[] = {};
	};
	class A3L_SpeedYacht {
		vItemSpace = 180;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 78000, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 48000;
		textures[] = {};
	};
	class I_G_Van_01_fuel_F {
		vItemSpace = 120;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 12500;
		textures[] = {};
	};
	class I_G_Van_01_transport_F {
		vItemSpace = 180;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 12500;
		textures[] = {};
	};
	class Dar_TahoeEMS {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 7500;
		textures[] = {};
	};
	class A3L_ExplorerEMS_P {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 1950, 2500 };
		insurance = 2500;
		chopShop = 45000;
		textures[] = {};
	};
	class A3L_CVPILBFD {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 975, 2500 };
		insurance = 2500;
		chopShop = 22500;
		textures[] = {};
	};
	class A3L_Charger_EMS_Fast {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 1950, 2500 };
		insurance = 2500;
		chopShop = 45000;
		textures[] = {};
	};
	class urbanized_ctsv_uc1 {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 1950, 2500 };
		insurance = 2500;
		chopShop = 45000;
		textures[] = {};
	};
	class urbanized_ctsv_uc2 {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 1950, 2500 };
		insurance = 2500;
		chopShop = 45000;
		textures[] = {};
	};
	class urbanized_ctsv_uc3 {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 1950, 2500 };
		insurance = 2500;
		chopShop = 45000;
		textures[] = {};
	};
	class EMS_Challenger {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2925, 2500 };
		insurance = 2500;
		chopShop = 67500;
		textures[] = {};
	};
	class Mrshounka_rs_2015_g {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 7500;
		textures[] = {};
	};
	class shounka_q7_police {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 12500;
		textures[] = {};
	};
	class Mrshounka_Touareg_police {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 12500;
		textures[] = {};
	};
	class shounka_buggy_noir {
		vItemSpace = 5;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 32175, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 19800;
		textures[] = {};
	};
	class shounka_buggy_rouge {
		vItemSpace = 5;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 32175, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 19800;
		textures[] = {};
	};
	class shounka_buggy_bleufonce {
		vItemSpace = 5;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 32175, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 19800;
		textures[] = {};
	};
	class shounka_buggy_violet {
		vItemSpace = 5;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 32175, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 19800;
		textures[] = {};
	};
	class shounka_mp4_noir {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 204750, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 126000;
		textures[] = {};
	};
	class shounka_mp4_grise {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 204750, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 126000;
		textures[] = {};
	};
	class shounka_mp4_bleufonce {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 204750, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 126000;
		textures[] = {};
	};
	class ivory_mp4 {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 204750, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 126000;
		textures[] = {
			 { "Black", "civ", {
                "#(argb,8,8,3)color(0,0,0,1.0,CO)"
            } },
             { "White", "civ", {
                "#(argb,8,8,3)color(1,1,1,1.0,CO)"
            } },
             { "Blue", "civ", {
                "#(argb,8,8,3)color(0,0,0.627451,1.0,CO)"
            } },
             { "Purple", "civ", {
                "#(argb,8,8,3)color(0.705882,0.0470588,0.603922,1.0,CO"
            } },
             { "Green", "civ", {
                "#(argb,8,8,3)color(0,0.501961,0,1.0,CO)"
            } },
             { "Lime Green", "civ", {
                "#(argb,8,8,3)color(0,1,0,1.0,CO)"
            } },
             { "Dark Red", "civ", {
                "#(argb,8,8,3)color(0.501961,0,0,1.0,CO)"
            } },
             { "Red", "civ", {
                "#(argb,8,8,3)color(1,0.176471,0.176471,1.0,CO)"
            } },
             { "Pink", "civ", {
                "#(argb,8,8,3)color(1,0.501961,0.752941,1.0,CO)"
            } },
             { "Orange", "civ", {
                "#(argb,8,8,3)color(1,0.501961,0,1.0,CO)"
            } }
		};
	};
	class ivory_f1 {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 204750, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 126000;
		textures[] = {
			 { "Black", "civ", {
                "#(argb,8,8,3)color(0,0,0,1.0,CO)"
            } },
             { "White", "civ", {
                "#(argb,8,8,3)color(1,1,1,1.0,CO)"
            } },
             { "Blue", "civ", {
                "#(argb,8,8,3)color(0,0,0.627451,1.0,CO)"
            } },
             { "Purple", "civ", {
                "#(argb,8,8,3)color(0.705882,0.0470588,0.603922,1.0,CO"
            } },
             { "Green", "civ", {
                "#(argb,8,8,3)color(0,0.501961,0,1.0,CO)"
            } },
             { "Lime Green", "civ", {
                "#(argb,8,8,3)color(0,1,0,1.0,CO)"
            } },
             { "Dark Red", "civ", {
                "#(argb,8,8,3)color(0.501961,0,0,1.0,CO)"
            } },
             { "Red", "civ", {
                "#(argb,8,8,3)color(1,0.176471,0.176471,1.0,CO)"
            } },
             { "Pink", "civ", {
                "#(argb,8,8,3)color(1,0.501961,0.752941,1.0,CO)"
            } },
             { "Orange", "civ", {
                "#(argb,8,8,3)color(1,0.501961,0,1.0,CO)"
            } }
		};
	};
	class Mrshounka_pagani_c_noir {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 243750, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 150000;
		textures[] = {};
	};
	class Mrshounka_pagani_c_rouge {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 243750, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 150000;
		textures[] = {};
	};
	class Mrshounka_pagani_c_jaune {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 243750, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 150000;
		textures[] = {};
	};
	class Mrshounka_mercedes_190_p_orange {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 27300, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16800;
		textures[] = {};
	};
	class Mrshounka_mercedes_190_p_rouge {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 27300, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16800;
		textures[] = {};
	};
	class Mrshounka_mercedes_190_p_noir {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 27300, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16800;
		textures[] = {};
	};
	class Mrshounka_mercedes_190_p_violet {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 27300, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16800;
		textures[] = {};
	};
	class shounka_rs6_grise {
		vItemSpace = 70;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 37050, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 22800;
		textures[] = {};
	};
	class shounka_rs6_noir {
		vItemSpace = 70;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 37050, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 22800;
		textures[] = {};
	};
	class shounka_rs6_jaune {
		vItemSpace = 70;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 37050, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 22800;
		textures[] = {};
	};
	class shounka_rs6_bleufonce {
		vItemSpace = 70;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 37050, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 22800;
		textures[] = {};
	};
	class Mrshounka_c63_2015_noir {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 46800, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 28800;
		textures[] = {};
	};
	class Mrshounka_c63_2015_mat_n {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 46800, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 28800;
		textures[] = {};
	};
	class Mrshounka_c63_2015_rouge {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 46800, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 28800;
		textures[] = {};
	};
	class Mrshounka_c63_2015_jaune {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 46800, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 28800;
		textures[] = {};
	};
	class shounka_clk_noir {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 46800, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 28800;
		textures[] = {};
	};
	class shounka_clk_rouge {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 46800, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 28800;
		textures[] = {};
	};
	class shounka_clk_jaune {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 46800, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 28800;
		textures[] = {};
	};
	class shounka_porsche911_noir {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 66300, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 40800;
		textures[] = {};
	};
	class shounka_porsche911_jaune {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 66300, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 40800;
		textures[] = {};
	};
	class shounka_porsche911_rouge {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 66300, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 40800;
		textures[] = {};
	};
	class shounka_porsche911_bleufonce {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 66300, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 40800;
		textures[] = {};
	};
	class shounka_f430_spider_noir {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 117975, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 72600;
		textures[] = {};
	};
	class shounka_f430_spider_jaune {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 117975, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 72600;
		textures[] = {};
	};
	class shounka_f430_spider_rouge {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 117975, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 72600;
		textures[] = {};
	};
	class shounka_f430_spider_violet {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 117975, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 72600;
		textures[] = {};
	};
	class urbanized_granturismo_orange {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 117975, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 72600;
		textures[] = {};
	};
	class urbanized_granturismo_purple {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 117975, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 72600;
		textures[] = {};
	};
	class urbanized_granturismo_white {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 117975, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 72600;
		textures[] = {};
	};
	class urbanized_granturismo_yellow {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 117975, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 72600;
		textures[] = {};
	};
	class urbanized_granturismo_black {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 117975, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 72600;
		textures[] = {};
	};
	class urbanized_granturismo_blue {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 117975, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 72600;
		textures[] = {};
	};
	class urbanized_granturismo_darkred {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 117975, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 72600;
		textures[] = {};
	};
	class urbanized_granturismo_hotpink {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 117975, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 72600;
		textures[] = {};
	};
	class urbanized_granturismo_lime {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 117975, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 72600;
		textures[] = {};
	};
	class shounka_nemo_noir {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 20475, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 12600;
		textures[] = {};
	};
	class shounka_nemo_rouge {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 20475, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 12600;
		textures[] = {};
	};
	class shounka_nemo_jaune {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 20475, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 12600;
		textures[] = {};
	};
	class shounka_h2_rouge {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {};
	};
	class shounka_h2_noir {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {};
	};
	class shounka_h2_jaune {
		vItemSpace = 80;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {};
	};
	class shounka_transam_noir {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {};
	};
	class shounka_transam_rouge {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {};
	};
	class shounka_transam_jaune {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {};
	};
	class shounka_avalanche_noir {
		vItemSpace = 70;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16000;
		textures[] = {};
	};
	class shounka_avalanche_grise {
		vItemSpace = 70;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16000;
		textures[] = {};
	};
	class shounka_avalanche_rouge {
		vItemSpace = 70;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16000;
		textures[] = {};
	};
	class shounka_avalanche_jaune {
		vItemSpace = 70;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16000;
		textures[] = {};
	};
	class shounka_gt_noir {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 131625, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 81000;
		textures[] = {};
	};
	class shounka_gt_rouge {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 131625, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 81000;
		textures[] = {};
	};
	class shounka_gt_jaune {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 131625, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 81000;
		textures[] = {};
	};
	class shounka_gt_grise {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 131625, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 81000;
		textures[] = {};
	};
	class shounka_gt_violet {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 131625, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 81000;
		textures[] = {};
	};
	class shounka_monsteur_violet {
		vItemSpace = 50;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 325625, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 201000;
		textures[] = {};
	};
	class shounka_monsteur_grise {
		vItemSpace = 50;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 325625, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 201000;
		textures[] = {};
	};
	class shounka_monsteur_bleufonce {
		vItemSpace = 50;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 325625, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 201000;
		textures[] = {};
	};
	class shounka_monsteur_noir {
		vItemSpace = 50;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 325625, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 201000;
		textures[] = {};
	};
	class shounka_monsteur_jaune {
		vItemSpace = 50;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 325625, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 201000;
		textures[] = {};
	};
	class shounka_monsteur_rose {
		vItemSpace = 50;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 325625, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 201000;
		textures[] = {};
	};
	class shounka_ivceco_noir {
		vItemSpace = 240;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 273000, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 168000;
		textures[] = {};
	};
	class shounka_ivceco_rouge {
		vItemSpace = 240;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 273000, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 168000;
		textures[] = {};
	};
	class shounka_ivceco_bleufonce {
		vItemSpace = 240;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 273000, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 168000;
		textures[] = {};
	};
	class shounka_a3_508gend {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 7500;
		textures[] = {};
	};
	class shounka_a3_508banalise {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 7500;
		textures[] = {};
	};
	class A3L_Bus {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 58500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 36000;
		textures[] = {};
	};
	class A3L_SchoolBus {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 58500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 36000;
		textures[] = {};
	};
	class A3L_jailBus {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 12500;
		textures[] = {};
	};
	class ADM_1969_Charger {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {
			 { "Black", "civ", {
                "#(argb,8,8,3)color(0,0,0,1.0,CO)"
            } },
             { "White", "civ", {
                "#(argb,8,8,3)color(1,1,1,1.0,CO)"
            } },
             { "Blue", "civ", {
                "#(argb,8,8,3)color(0,0,0.627451,1.0,CO)"
            } },
             { "Purple", "civ", {
                "#(argb,8,8,3)color(0.705882,0.0470588,0.603922,1.0,CO"
            } },
             { "Green", "civ", {
                "#(argb,8,8,3)color(0,0.501961,0,1.0,CO)"
            } },
             { "Lime Green", "civ", {
                "#(argb,8,8,3)color(0,1,0,1.0,CO)"
            } },
             { "Dark Red", "civ", {
                "#(argb,8,8,3)color(0.501961,0,0,1.0,CO)"
            } },
             { "Red", "civ", {
                "#(argb,8,8,3)color(1,0.176471,0.176471,1.0,CO)"
            } },
             { "Pink", "civ", {
                "#(argb,8,8,3)color(1,0.501961,0.752941,1.0,CO)"
            } },
             { "Orange", "civ", {
                "#(argb,8,8,3)color(1,0.501961,0,1.0,CO)"
            } }
		};
	};
	class SIG_Roadrunner {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {};
	};
	class SIG_Hubcaps {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {};
	};
	class SIG_Hcodes {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {};
	};
	class SIG_Magnums {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {};
	};
	class SIG_SuperBeeB {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {};
	};
	class SIG_SuperBeeY {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {};
	};
	class SIG_SuperBeeM {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {};
	};
	class Jonzie_Tow_Truck {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 30000;
		textures[] = {};
	};
	class A3L_Towtruck {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 58500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 36000;
		textures[] = {};
	};
	class ivory_c {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 68250, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 42000;
		textures[] = {
			 { "Black", "civ", {
                "#(argb,8,8,3)color(0,0,0,1.0,CO)"
            } },
             { "White", "civ", {
                "#(argb,8,8,3)color(1,1,1,1.0,CO)"
            } },
             { "Blue", "civ", {
                "#(argb,8,8,3)color(0,0,0.627451,1.0,CO)"
            } },
             { "Purple", "civ", {
                "#(argb,8,8,3)color(0.705882,0.0470588,0.603922,1.0,CO"
            } },
             { "Green", "civ", {
                "#(argb,8,8,3)color(0,0.501961,0,1.0,CO)"
            } },
             { "Lime Green", "civ", {
                "#(argb,8,8,3)color(0,1,0,1.0,CO)"
            } },
             { "Dark Red", "civ", {
                "#(argb,8,8,3)color(0.501961,0,0,1.0,CO)"
            } },
             { "Red", "civ", {
                "#(argb,8,8,3)color(1,0.176471,0.176471,1.0,CO)"
            } },
             { "Pink", "civ", {
                "#(argb,8,8,3)color(1,0.501961,0.752941,1.0,CO)"
            } },
             { "Orange", "civ", {
                "#(argb,8,8,3)color(1,0.501961,0,1.0,CO)"
            } },
			{ "Sport 1", "civ", {
                "\ivory_c\data\bentley_con_livery01.paa"
            } },
			{ "Sport 2", "civ", {
                "\ivory_c\data\bentley_con_livery02.paa"
            } },
			{ "Sport 3", "civ", {
                "\ivory_c\data\bentley_con_livery03.paa"
            } },
			{ "Sport 4", "civ", {
                "\ivory_c\data\bentley_con_livery04.paa"
            } }
		};
	};
	class IVORY_PRIUS {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 16575, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 10200;
		textures[] = {
			{ "Sport 1", "civ", {
                "\ivory_prius\data\tex_sports1_co.paa"
            } },
			{ "Sport 2", "civ", {
                "\ivory_prius\data\tex_sports2_co.paa"
            } },
			{ "Sport 3", "civ", {
                "\ivory_prius\data\tex_sports3_co.paa"
            } },
			{ "Sport 4", "civ", {
                "\ivory_prius\data\tex_sports4_co.paa"
            } }
		};
	};
	class S_Vantage_Red {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 66300, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 40800;
		textures[] = {};
	};
	class S_Vantage_Black {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 66300, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 40800;
		textures[] = {};
	};
	class S_Vantage_Blue {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 66300, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 40800;
		textures[] = {};
	};
	class S_Vantage_Yellow {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 66300, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 40800;
		textures[] = {};
	};
	class ivory_tractor {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 6825, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 4200;
		textures[] = {};
	};
	class ivory_tractor2 {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 6825, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 4200;
		textures[] = {};
	};
	class urbanized_67Mustang_orange {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {};
	};
	class urbanized_67Mustang_darkred {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {};
	};
	class urbanized_67Mustang_blue {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {};
	};
	class urbanized_67Mustang_white {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {};
	};
	class urbanized_67Mustang_black {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {};
	};
	class urbanized_427_black {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 58500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 36000;
		textures[] = {};
	};
	class urbanized_427_blue {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 58500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 36000;
		textures[] = {};
	};
	class urbanized_427_orange {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 58500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 36000;
		textures[] = {};
	};
	class urbanized_427_pink {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 58500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 36000;
		textures[] = {};
	};
	class urbanized_427_red {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 58500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 36000;
		textures[] = {};
	};
	class urbanized_427_wed {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 58500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 36000;
		textures[] = {};
	};
	class urbanized_427_white {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 58500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 36000;
		textures[] = {};
	};
	class urbanized_427_yellow {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 58500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 36000;
		textures[] = {};
	};
	class ivory_elise {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 58500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 36000;
		textures[] = {
			 { "Black", "civ", {
                "#(argb,8,8,3)color(0,0,0,1.0,CO)"
            } },
             { "White", "civ", {
                "#(argb,8,8,3)color(1,1,1,1.0,CO)"
            } },
             { "Blue", "civ", {
                "#(argb,8,8,3)color(0,0,0.627451,1.0,CO)"
            } },
             { "Purple", "civ", {
                "#(argb,8,8,3)color(0.705882,0.0470588,0.603922,1.0,CO"
            } },
             { "Green", "civ", {
                "#(argb,8,8,3)color(0,0.501961,0,1.0,CO)"
            } },
             { "Lime Green", "civ", {
                "#(argb,8,8,3)color(0,1,0,1.0,CO)"
            } },
             { "Dark Red", "civ", {
                "#(argb,8,8,3)color(0.501961,0,0,1.0,CO)"
            } },
             { "Red", "civ", {
                "#(argb,8,8,3)color(1,0.176471,0.176471,1.0,CO)"
            } },
             { "Pink", "civ", {
                "#(argb,8,8,3)color(1,0.501961,0.752941,1.0,CO)"
            } },
             { "Orange", "civ", {
                "#(argb,8,8,3)color(1,0.501961,0,1.0,CO)"
            } }
		};
	};
	class ivory_gt500 {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 26325, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 16200;
		textures[] = {
			{ "Stripes 1", "civ", {
                "\ivory_gt500\data\bodyBG.paa"
            } },
			{ "Stripes 2", "civ", {
                "\ivory_gt500\data\bodyGB.paa"
            } },
			{ "Stripes 3", "civ", {
                "\ivory_gt500\data\bodyRW.paa"
            } },
			{ "Stripes 4", "civ", {
                "\ivory_gt500\data\bodyWB.paa"
            } },
			 { "Black", "fed", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
		};
	};
	class A3L_TaurusCO2 {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 975, 2500, 2500 };
		insurance = 2500;
		chopShop = 22500;
		textures[] = {};
	};
	class A3L_TaurusFPBLBCSO {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 975, 2500, 2500 };
		insurance = 2500;
		chopShop = 22500;
		textures[] = {};
	};
	class A3L_TaurusUC {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 975, 2500, 2500 };
		insurance = 2500;
		chopShop = 22500;
		textures[] = {};
	};
	class A3L_Charger_HWP {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 1950, 1950, 2500, 2500 };
		insurance = 2500;
		chopShop = 45000;
		textures[] = {};
	};
	class A3L_Charger_SERT {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 1950, 1950, 2500, 2500 };
		insurance = 2500;
		chopShop = 45000;
		textures[] = {};
	};
	class A3L_ChargerUC_Black_New {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 1950, 1950, 2500, 2500 };
		insurance = 2500;
		chopShop = 45000;
		textures[] = {};
	};
	class demian2435_swat_hunter {
		vItemSpace = 100;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 5850, 2500, 2500 };
		insurance = 2500;
		chopShop = 135000;
		textures[] = {};
	};
	class A3L_ChargerUC_White_New {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 1950, 1950, 2500, 2500 };
		insurance = 2500;
		chopShop = 45000;
		textures[] = {};
	};
	class A3L_ChargerUC_Blue_New {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 1950, 1950, 2500, 2500 };
		insurance = 2500;
		chopShop = 45000;
		textures[] = {};
	};
	class ivory_wrx_cop_marked {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 7500;
		textures[] = {
			{"WRX Marked", "cop", {
				"\ivory_wrx\data\pd.paa"
			} }
		};
	};
	class ivory_wrx_cop_unmarked {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 7500;
		textures[] = {};
	};
	class ivory_wrx_cop_slicktop {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 7500;
		textures[] = {
			{"WRX SlickTop", "cop", {
				"\ivory_wrx\data\pd.paa"
			} }
		};
	};
	class ivory_wrx_med_ems {
		vItemSpace = 20;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2437, 2500 };
		insurance = 2500;
		chopShop = 56250;
		textures[] = {
			{"WRX Medic", "med", {
				"\ivory_wrx\data\ems.paa"
			} }
		};
	};
	class ivory_wrx {
		vItemSpace = 60;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 22425, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 13800;
		textures[] = {
			 { "Black", "civ", {
                "#(argb,8,8,3)color(0,0,0,1.0,CO)"
            } },
             { "White", "civ", {
                "#(argb,8,8,3)color(1,1,1,1.0,CO)"
            } },
             { "Blue", "civ", {
                "#(argb,8,8,3)color(0,0,0.627451,1.0,CO)"
            } },
             { "Purple", "civ", {
                "#(argb,8,8,3)color(0.705882,0.0470588,0.603922,1.0,CO"
            } },
             { "Green", "civ", {
                "#(argb,8,8,3)color(0,0.501961,0,1.0,CO)"
            } },
             { "Lime Green", "civ", {
                "#(argb,8,8,3)color(0,1,0,1.0,CO)"
            } },
             { "Dark Red", "civ", {
                "#(argb,8,8,3)color(0.501961,0,0,1.0,CO)"
            } },
             { "Red", "civ", {
                "#(argb,8,8,3)color(1,0.176471,0.176471,1.0,CO)"
            } },
             { "Pink", "civ", {
                "#(argb,8,8,3)color(1,0.501961,0.752941,1.0,CO)"
            } },
             { "Orange", "civ", {
                "#(argb,8,8,3)color(1,0.501961,0,1.0,CO)"
            } },
			{"Monster", "civ", {
				"\ivory_wrx\data\monster.paa"
			} },
			{"Doritos", "civ", {
				"\ivory_wrx\data\doritos.paa"
			} },
			{"Red/Black", "civ", {
				"\ivory_wrx\data\redblack.paa"
			} },
			{"Orange", "civ", {
				"\ivory_wrx\data\sportorange.paa"
			} },
			{"Gray/Black", "civ", {
				"\ivory_wrx\data\graystripe.paa"
			} },
			{"Blue Camo", "civ", {
				"\ivory_wrx\data\bluecamo.paa"
			} },
			{"Nyan Cat", "civ", {
				"\ivory_wrx\data\nyan.paa"
			} }
		};
	};
	class I_MRAP_03_F {
		vItemSpace = 60;
		storageFee[] =  { 1000, 1000, 1000, 1000 };
		garageSell[] = { 2500, 2500, 2500, 2500 };
		insurance = 2500;
		chopShop = 7500;
		textures[] = {
			{"SWAT Strider", "cop", {
				"textures\strider.paa"
			} }
		};
	};
};