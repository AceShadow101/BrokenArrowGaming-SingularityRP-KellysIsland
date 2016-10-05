/*
	File: fn_repairTruck.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Main functionality for toolkits, to be revised in later version.
*/
private["_veh","_upp","_ui","_progress","_pgText","_cP","_displayName"];
_veh = cursorTarget;
life_interrupted = false;
_duration = 1;
if(isNull _veh) exitwith {};
if((_veh isKindOf "Car") OR (_veh isKindOf "Ship") OR (_veh isKindOf "Air")) then
{
	if("ToolKit" in (items player)) then
	{
		life_action_inUse = true;
		_displayName = getText(configFile >> "CfgVehicles" >> (typeOf _veh) >> "displayName");
		_upp = format["Repairing %1",_displayName];
		//Setup our progress bar.
		disableSerialization;
		5 cutRsc ["life_progress","PLAIN"];
		_ui = uiNameSpace getVariable "life_progress";
		_progress = _ui displayCtrl 38201;
		_pgText = _ui displayCtrl 38202;
		_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
		_progress progressSetPosition 0.01;
		_cP = 0.02;
		_timePassed = 0 ;
		while{true} do
		{
			if(animationState player != "Acts_carFixingWheel")then{
				sleep 3;
				[[player,"Acts_carFixingWheel"],"life_fnc_animSync",true,false] spawn life_fnc_MP;
				//player playMoveNow "Acts_carFixingWheel";
				
				//player playMove "Acts_carFixingWheel";

			};
			sleep 0.85;
			_timePassed = _timePassed + 1;
			_percent = _timePassed / (_duration * 60);
			//_progress progressSetPosition _cP;
			//_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];

			_progress progressSetPosition _percent;
			_pgText ctrlSetText format["%1 (%2%3)...",_upp,[floor(_percent * 100)] call life_fnc_numberText,"%"];

			if(_timePassed >= _duration * 60) exitWith {_ui = "osefStatusBar" call BIS_fnc_rscLayer;_ui cutRsc["osefStatusBar","PLAIN"];};
			if(!alive player) exitWith {_ui = "osefStatusBar" call BIS_fnc_rscLayer;_ui cutRsc["osefStatusBar","PLAIN"];};
			if(player != vehicle player) exitWith {_ui = "osefStatusBar" call BIS_fnc_rscLayer;_ui cutRsc["osefStatusBar","PLAIN"];};
			if(life_interrupted) exitWith {_ui = "osefStatusBar" call BIS_fnc_rscLayer;_ui cutRsc["osefStatusBar","PLAIN"];};
		};
		
		life_action_inUse = false;
		5 cutText ["","PLAIN"];
		player switchMove "";
		if(life_interrupted) exitWith {life_interrupted = false; titleText["Action cancelled","PLAIN"]; life_action_inUse = false;_ui = "osefStatusBar" call BIS_fnc_rscLayer;_ui cutRsc["osefStatusBar","PLAIN"];};
		if(player != vehicle player) exitWith {titleText["You must be outside of the vehicle to fix it. Sorry that this prevents you from exploiting the system, well not really.","PLAIN"];_ui = "osefStatusBar" call BIS_fnc_rscLayer;_ui cutRsc["osefStatusBar","PLAIN"];};
		//player removeItem "ToolKit";

		_veh setDamage 0;
/*
		_veh setHitPointDamage["HitLFWheel",0.8];
		_veh setHitPointDamage["HitLF2Wheel",0.8];
		_veh setHitPointDamage["HitRFWheel",0.8];
		_veh setHitPointDamage["HitRF2Wheel",0.8];
		_damage = 0.75;
		// Body / Hull
		if ((_veh getHitPointDamage "HitBody") > _damage) then {_veh setHitPointDamage ["HitBody", _damage]};
		// Engine
		if ((_veh getHitPointDamage "HitEngine") > _damage) then {_veh setHitPointDamage ["HitEngine", _damage]}; 
		// Fuel Tank
		if ((_veh getHitPointDamage "HitFuel") > _damage) then {_veh setHitPointDamage ["HitFuel", _damage]}; 
		*/       
		sleep 1;
		titleText["You have repaired that vehicle.","PLAIN"];
	};
};
_ui = "osefStatusBar" call BIS_fnc_rscLayer;_ui cutRsc["osefStatusBar","PLAIN"];