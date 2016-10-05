/*
	file: fn_butcher.sqf
	author: DoneFear - ProRP
	
	butcher animals 
*/
private["_unit","_val"];
_unit = cursorTarget;
if(isNull _unit) exitWith {}; //if unit is null, then NOPE
if(alive _unit) exitWith {}; //if unit alive , then NOPE
if(isPlayer _unit) exitWith {};//if the cursor target is a player than NOPE
_unit = [_this,0,"",[""]] call BIS_fnc_param;
if(_unit == "") exitWith {hint "You can't butcher this"};


switch (_unit) do
{
	case "Cock_random_F": {_val = "chicken"};
	case "Hen_random_F": {_val = "chicken"};
	case "Sheep_random_F": {_val = "meat"};
}
life_action_inUse = true;
!([true,_val,1] call life_fnc_handleInv)) exitWith {hint "You don't have room to store any parts!"};
sleep 0.5;
deleteVehicle _unit;//deletes the carcass of the animal
sleep 1;
life_action_inUse = false;
