/*
	File: fn_spawnPointCfg.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Master configuration for available spawn points depending on the units side.
	
	Return:
	[Spawn Marker,Spawn Name,Image Path]
*/
private["_side","_return"];
_side = [_this,0,civilian,[civilian]] call BIS_fnc_param;

//Spawn Marker, Spawn Name, PathToImage
switch (_side) do
{
	case west:
	{
		_return = [
			["cop_spawn_1","Union City HQ","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["cop_spawn_2","Erie County Jail","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["cop_spawn_3","Erie County Airport","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["cop_spawn_4","Unity Beach Substation","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["cop_spawn_5","Dartmouth Substation","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["cop_spawn_6","Erie County Police Academy","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["cop_spawn_7","Oceanview Substation","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
		];
	};
	
	case civilian:
	{
	
		_return = [
			["civ_spawn_1","Union City","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_2","Huntington Heights","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_3","Unity Beach","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_4","Dartmouth","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_5","Waterford","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_6","Oceanside","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		
		if(count life_houses > 0) then {
			{
				_pos = call compile format["%1",_x select 0];
				_house = nearestBuilding _pos;
				_houseName = getText(configFile >> "CfgVehicles" >> (typeOf _house) >> "displayName");
				
				_return set[count _return,[format["house_%1",_house getVariable "uid"],_houseName,"\a3\ui_f\data\map\MapControl\lighthouse_ca.paa"]];
			} foreach life_houses;
		};
		if((getPlayerUID player) in ["76561198137246770"])then {
			_return = _return + [
							["service_spawn_1","Zachs Salt Mine","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
						  ];
		};
	};
	
	case independent: {
		_return = [
			["medic_spawn_2","Union City Hospital","\a3\ui_f\data\map\MapControl\hospital_ca.paa"],
			["medic_spawn_3","North Haven Hospiral","\a3\ui_f\data\map\MapControl\hospital_ca.paa"],
			["medic_spawn_4","Southern Rescue Station","\a3\ui_f\data\map\MapControl\hospital_ca.paa"]
		];
	};
};

_return;