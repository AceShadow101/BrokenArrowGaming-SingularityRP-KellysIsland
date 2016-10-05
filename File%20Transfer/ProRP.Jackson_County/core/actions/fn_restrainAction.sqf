/*
	File: fn_restrainAction.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Retrains the target.
*/
private["_unit"];

_unit = cursorTarget;
if(isNull _unit) exitWith {}; //Not valid
if((_unit getVariable "restrained")) exitWith {};
if(player == _unit) exitWith {};
if (side player == civilian) then {
	if(life_inv_zipties < 1) exitWith { hint "You have no zipties."; };
	life_inv_zipties = life_inv_zipties - 1;
	hint "You have ziptied the citizen";
};

if(!isPlayer _unit) exitWith {};

if(playerside == west) then
{
	_degrees = getDir player; 
	_degreesu = getDir _unit;
	_totald = _degrees - _degreesu;


	if(_totald >= -90 && _totald < 1 || _totald <= 90 && _totald > -1 || _totald >= 270 || _totald <= -270) then 
	{
		//cops
		_unit say3D "handcuffs";
		_unit setVariable["restrained",true,true];
		[[player], "life_fnc_restrain", _unit, false] spawn life_fnc_MP;
		[[0,format[localize "STR_NOTF_Restrained",_unit getVariable["realname", name _unit], profileName]],"life_fnc_broadcast",west,false] spawn life_fnc_MP;
	}else
	{
		["You must be behind your target to restrain them.", false] spawn domsg;
	};
};


//Broadcast!

//civ zipties
if (side player == civilian) then 
{
	_unit say3D "handcuffs";
	_unit setVariable["ziptied",true,true];
	[[player], "life_fnc_restrain", _unit, false] spawn life_fnc_MP;
};

