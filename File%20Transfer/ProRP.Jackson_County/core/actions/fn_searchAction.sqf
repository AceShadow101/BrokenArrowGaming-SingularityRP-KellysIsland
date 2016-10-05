/*
	File: fn_searchAction.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Starts the searching process.
*/
private["_civ"];
_civ = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param; // Player being searched
if(isNull _civ) exitWith {};

hint "Searching...";
player say3D "Patdown"; 
sleep 2;


if(player distance _civ > 5 || !alive player || !alive _civ) exitWith {hint "Cannot search that person."};
[[player],"life_fnc_searchClient",_civ,false] spawn life_fnc_MP;