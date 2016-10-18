/*
	File: fn_copLoadout.sqf
	Author: Bryan "Tonic" Boardwine
	Edited: Itsyuka
	
	Description:
	Loads the cops out with the default gear.
*/
private["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

//Load player with default cop gear.
player addUniform "demian2435_police_man_uniform";

// Add shortrange radio
player addItem "ItemRadio"; 
player assignItem "ItemRadio";

player addBackpack "AM_PoliceBelt";
this addItemToBackpack "ItemcTabHCam";
player addMagazine "26_cartridge";
player addMagazine "26_cartridge";
player addMagazine "26_cartridge";
player addMagazine "26_cartridge";
player addMagazine "26_cartridge";
player addWeapon "Taser_26";

/* ITEMS */
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemGPS";
player assignItem "ItemGPS";

[] call life_fnc_saveGear;
[] call life_fnc_uniformcolor;
[] call life_fnc_updateClothing;