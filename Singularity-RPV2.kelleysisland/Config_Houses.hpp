class Houses {
	class Land_HouseDoubleAL {
		price = 2000000;
		maxStorage = 3;
		alarm = true;
	};
	class Land_HouseDoubleAL2 : Land_HouseDoubleAL{};
	
	class Land_i_House_Big_02_V1_F {
		price = 1000000;
		maxStorage = 3;
		alarm = true;
	};
	class Land_i_House_Big_02_V2_F : Land_i_House_Big_02_V1_F{};
	class Land_i_House_Big_02_V3_F : Land_i_House_Big_02_V1_F{};

	class Land_i_House_Big_01_V1_F {
		price = 1000000;
		maxStorage = 4;
		alarm = true;
	};
	class Land_i_House_Big_01_V2_F : Land_i_House_Big_01_V1_F{};
	class Land_i_House_Big_01_V3_F : Land_i_House_Big_01_V1_F{};

	class Land_i_House_Small_01_V1_F {
		price = 900000;
		maxStorage = 2;
		alarm = false;
	};
	class Land_i_House_Small_01_V2_F : Land_i_House_Small_01_V1_F{};
	class Land_i_House_Small_01_V3_F : Land_i_House_Small_01_V1_F{};

	class Land_i_House_Small_02_V1_F {
		price = 800000;
		maxStorage = 2;
		alarm = false;
	};
	class Land_i_House_Small_02_V2_F : Land_i_House_Small_02_V1_F{};
	class Land_i_House_Small_02_V3_F : Land_i_House_Small_02_V1_F{};

	class Land_HouseA {
		price = 800000;
		maxStorage = 2;
		alarm = false;
	};
	class Land_HouseA1 : Land_HouseA{};
	class Land_HouseA1_C : Land_HouseA{};
	class Land_HouseB : Land_HouseA{};
	class Land_HouseB1_C : Land_HouseA{};
	class Land_HouseC_R : Land_HouseA{};
	class Land_HouseC1_L : Land_HouseA{};

	class Land_i_House_Small_03_V1_F {
		price = 700000;
		maxStorage = 3;
		alarm = true;
	};

	class Land_i_Stone_HouseSmall_V2_F {
		price = 500000;
		maxStorage = 1;
		alarm = false;
	};

	class Land_i_Stone_HouseSmall_V1_F : Land_i_Stone_HouseSmall_V2_F{};
	class Land_i_Stone_HouseSmall_V3_F : Land_i_Stone_HouseSmall_V2_F{};
	
	class Land_i_Garage_V1_F { price = 500000; alarm = false; };
	class Land_i_Garage_V2_F : Land_i_Garage_V1_F{};
};