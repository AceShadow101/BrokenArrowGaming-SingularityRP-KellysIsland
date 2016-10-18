#include <macro.h>
/*
	File: fn_initCop.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Cop Initialization file.
*/
private["_end"];
player addRating 9999999;
waitUntil {!(isNull (findDisplay 46))};
_end = false;
if(life_blacklisted) exitWith
{
	["Blacklisted",false,true] call BIS_fnc_endMission;
	sleep 30;
};


if((FETCH_CONST(life_copLevel)) < 1) exitWith {
	["Notwhitelisted",FALSE,TRUE] call BIS_fnc_endMission;
	sleep 35;
};

switch (FETCH_CONST(life_copLevel)) do 
			{
	             case 1: {life_paycheck = life_paycheck + 0;}; // Rank 1
	             case 2: {life_paycheck = life_paycheck + 500;}; // Rank 2
	             case 3: {life_paycheck = life_paycheck + 1000;}; // Rank 3
	             case 4: {life_paycheck = life_paycheck + 1500;}; // Rank 4
	             case 5: {life_paycheck = life_paycheck + 2000;}; // Rank 5 
	             case 6: {life_paycheck = life_paycheck + 2500;}; // Rank 6
	             case 7: {life_paycheck = life_paycheck + 3000;}; // Rank 7
			};

if(playerSide == west) then {
	{_x setMarkerAlphaLocal 0} forEach ["cocaine_1","cocaine_processing","heroin_1","chop_shop_2","heroin_p","weed_1","distmark","weed_p_1","turtle_dealer_2","Rebelop","turtle_2","turtle_1_name_1","turtle_3","turtle_1_name_2","turtle_1","turtle_1_name","dealer_1_3"];
};


player setVariable["rank",(FETCH_CONST(life_coplevel)),true];
[] call life_fnc_spawnMenu;
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.
[] spawn life_fnc_placeablesInit;
[] call life_fnc_uniformcolor;
[] call life_fnc_updateClothing;