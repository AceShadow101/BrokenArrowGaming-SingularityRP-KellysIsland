#include <macro.h>
/*
	File: fn_initMedic.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Initializes the medic..
*/
private["_end"];
player addRating 9999999;
waitUntil {!(isNull (findDisplay 46))};

if((FETCH_CONST(life_medicLevel)) < 1) exitWith {
	["Notwhitelisted",FALSE,TRUE] call BIS_fnc_endMission;
	sleep 35;
};

switch (FETCH_CONST(life_medicLevel)) do 
			{
	             case 1: {life_paycheck = life_paycheck + 0;}; // Rank 1
	             case 2: {life_paycheck = life_paycheck + 750;}; // Rank 2
	             case 3: {life_paycheck = life_paycheck + 1500;}; // Rank 3
	             case 4: {life_paycheck = life_paycheck + 2250;}; // Rank 4
	             case 5: {life_paycheck = life_paycheck + 3000;}; // Rank 5 
			};

[] call life_fnc_spawnMenu;
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.
[] call life_fnc_placeablesInitMEDIC; //MY NAMES MAX AND IM A HERP DERP HOW TO INITILIATZSE SJALKFKJDSJLFSDKLJFDL HERP //dont delete this -killerty69