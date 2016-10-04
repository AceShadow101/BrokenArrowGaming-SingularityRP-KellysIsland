#include <macro.h>
/*
	File: fn_varHandle.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Master handler for getting a variables name, short name, etc.
*/
private["_var","_mode"];
_var = [_this,0,"",[""]] call BIS_fnc_param;
_mode = [_this,1,-1,[0]] call BIS_fnc_param;
if(_var == "" OR _mode == -1) exitWith {""};

switch (_mode) do
{
	case 0:
	{
		switch (_var) do
		{
			case "oilUnprocessed": {"life_inv_oilu"};
			case "oilProcessed": {"life_inv_oilp"};
			case "heroinUnprocessed": {"life_inv_heroinu"};
			case "heroinProcessed": {"life_inv_heroinp"};
			case "cannabis": {"life_inv_cannabis"};
			case "marijuana": {"life_inv_marijuana"};
			case "apple": {"life_inv_apple"};
			case "waterBottle": {"life_inv_water"};
			case "rabbitRaw": {"life_inv_rabbit"};
			case "salemaRaw": {"life_inv_salema"};
			case "ornateRaw": {"life_inv_ornate"};
			case "mackerelRaw": {"life_inv_mackerel"};
			case "tunaRaw": {"life_inv_tuna"};
			case "mulletRaw": {"life_inv_mullet"};
			case "catsharkRaw": {"life_inv_catshark"};
			case "turtleRaw": {"life_inv_turtle"};
			case "fishing": {"life_inv_fishingpoles"};
			case "coffee": {"life_inv_coffee"};
			case "turtleSoup": {"life_inv_turtlesoup"};
			case "donuts": {"life_inv_donuts"};
			case "fuelEmpty": {"life_inv_fuelE"};
			case "fuelFull": {"life_inv_fuelF"};
			case "money": {"life_cash"};
			case "pickaxe": {"life_inv_pickaxe"};
			case "copperUnrefined": {"life_inv_copperore"};
			case "ironUnrefined": {"life_inv_ironore"};
			case "ironRefined": {"life_inv_ironr"};
			case "copperRefined": {"life_inv_copperr"};
			case "saltUnrefined": {"life_inv_salt"};
			case "saltRefined": {"life_inv_saltr"};
			case "sand": {"life_inv_sand"};
			case "glass": {"life_inv_glass"};
			case "tbacon": {"life_inv_tbacon"};
			case "lockpick": {"life_inv_lockpick"};
			case "redgull": {"life_inv_redgull"};
			case "peach": {"life_inv_peach"};
			case "diamondUncut": {"life_inv_diamond"};
			case "diamondCut": {"life_inv_diamondr"};
			case "cocaineUnprocessed": {"life_inv_coke"};
			case "cocaineProcessed": {"life_inv_cokep"};
			case "spikeStrip": {"life_inv_spikeStrip"};
			case "cement": {"life_inv_cement"};
			case "rock": {"life_inv_rock"};
			case "goldBar": {"life_inv_goldbar"};
			case "blastingCharge": {"life_inv_blastingcharge"};
			case "boltCutter": {"life_inv_boltcutter"};
			case "defuseKit": {"life_inv_defusekit"};
			case "storageSmall": {"life_inv_storagesmall"};
			case "storageBig": {"life_inv_storagebig"};
			case "kidney": {"life_inv_kidney"};
			case "cottonu": {"life_inv_cottonu"};
			case "cottonp": {"life_inv_cottonp"};
			case "woodu": {"life_inv_woodu"};
			case "woodp": {"life_inv_woodp"};
		};
	};
	
	case 1:
	{
		switch (_var) do
		{
			case "life_inv_oilu": {"oilUnprocessed"};
			case "life_inv_oilp": {"oilProcessed"};
			case "life_inv_heroinu": {"heroinUnprocessed"};
			case "life_inv_heroinp": {"heroinProcessed"};
			case "life_inv_cannabis": {"cannabis"};
			case "life_inv_marijuana": {"marijuana"};
			case "life_inv_apple": {"apple"};
			case "life_inv_water": {"waterBottle"};
			case "life_inv_rabbit": {"rabbitRaw"};
			case "life_inv_salema": {"salemaRaw"};
			case "life_inv_ornate": {"ornateRaw"};
			case "life_inv_mackerel": {"mackerelRaw"};
			case "life_inv_tuna": {"tunaRaw"};
			case "life_inv_mullet": {"mulletRaw"};
			case "life_inv_catshark": {"catsharkRaw"};
			case "life_inv_turtle": {"turtleRaw"};
			case "life_inv_fishingpoles": {"fishing"};
			case "life_inv_coffee": {"coffee"};
			case "life_inv_turtlesoup": {"turtleSoup"};
			case "life_inv_donuts": {"donuts"};
			case "life_inv_fuelE": {"fuelEmpty"};
			case "life_inv_fuelF": {"fuelFull"};
			case "life_cash": {"money"};
			case "life_inv_pickaxe": {"pickaxe"};
			case "life_inv_copperore": {"copperUnrefined"};
			case "life_inv_ironore": {"ironUnrefined"};
			case "life_inv_ironr": {"ironRefined"};
			case "life_inv_copperr": {"copperRefined"};
			case "life_inv_sand": {"sand"};
			case "life_inv_salt": {"saltUnrefined"};
			case "life_inv_glass": {"glass"};
			case "life_inv_redgull": {"redgull"};
			case "life_inv_lockpick": {"lockpick"};
			case "life_inv_tbacon": {"tbacon"};
			case "life_inv_peach": {"peach"};
			case "life_inv_diamond": {"diamondUncut"};
			case "life_inv_diamondr": {"diamondCut"};
			case "life_inv_saltr": {"saltRefined"};
			case "life_inv_coke": {"cocaineUnprocessed"};
			case "life_inv_cokep": {"cocaineProcessed"};
			case "life_inv_spikeStrip": {"spikeStrip"};
			case "life_inv_cement": {"cement"};
			case "life_inv_rock": {"rock"};
			case "life_inv_goldbar": {"goldbar"};
			case "life_inv_blastingcharge": {"blastingCharge"};
			case "life_inv_boltcutter": {"boltCutter"};
			case "life_inv_defusekit": {"defuseKit"};
			case "life_inv_storagesmall": {"storageSmall"};
			case "life_inv_storagebig": {"storageBig"};
			case "life_inv_kidney": {"kidney"};
			case "life_inv_woodu": {"woodu"};
			case "life_inv_woodp": {"woodp"};
			case "life_inv_cottonu": {"cottonu"};
			case "life_inv_cottonp": {"cottonp"};
		};
	};
};
