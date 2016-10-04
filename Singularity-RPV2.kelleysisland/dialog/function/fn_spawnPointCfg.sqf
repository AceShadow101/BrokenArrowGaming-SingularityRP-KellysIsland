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
			["cop_spawn_2","Tanoa DOC","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["cop_spawn_3","Tanoa Police Air HQ","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["cop_spawn_4","La Rochelle Substation","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["cop_spawn_5","Lijnhaven Substation","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["cop_spawn_6","Tanoa Police Academy","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
		];
	};
	
	case civilian:
	{
	
		_return = [
			["civ_spawn_1","Union City","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_2","La Rochelle","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_3","Lijnhaven","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_4","Katkoula","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_5","Tanouka","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_6","Oumere","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
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
			["medic_spawn_2","Lijnhaven FD","\a3\ui_f\data\map\MapControl\hospital_ca.paa"],
			["medic_spawn_3","Georgetown Hospital","\a3\ui_f\data\map\MapControl\hospital_ca.paa"],
			["medic_spawn_4","Rescue Station Tanoa","\a3\ui_f\data\map\MapControl\hospital_ca.paa"],
			["medic_spawn_5","Katkoula Volunteer FD","\a3\ui_f\data\map\MapControl\hospital_ca.paa"]
		];
	};
};

_return;