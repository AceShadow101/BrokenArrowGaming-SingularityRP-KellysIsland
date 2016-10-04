/*
FREEDOM BANK
*/
private["_robber","_shop","_timer","_funds","_dist","_success"]; 
_shop = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_robber = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param; 
_action = [_this,2] call BIS_fnc_param;
_timer = 90;
_funds = 25000 + round(random 14000); 
_dist = _robber distance _shop;
_success = false;

if(side _robber != civilian) exitWith { hint "You are not civilian!"; };

_cops = (west countSide playableUnits);
if(_cops < 3) exitWith { hint "The Bank is locked down until more Police are on Duty! (3+)"; }; 


if(vehicle player != _robber) exitWith { hint "You need to exit your vehicle!"; }; 
if (alive _robber && {currentWeapon _robber != ""} && {_funds > 0}) then {

[[1,format["911 DISPATCH: Freedom Bank has an emergency alarm triggered!",_storename]],"life_fnc_broadcast",west,false] spawn life_fnc_MP;
hint format ["Robbing the Freedom Bank! Wait %1 sec.  Be Ready! Cops may be on their way!",_timer];

_shop removeAction _action;//Deleting the action,so it won't be spammed



while {true} do {
		hintsilent format ["%1 seconds remaining.",_timer];
		sleep 1;
		_timer = _timer - 1;
		_dist = _robber distance _shop;

		if (!alive _robber) exitwith
			{
				[[1,format["911 DISPATCH: ONE ASSAILANT HAS DIED: Freedom Bank",_storename]],"life_fnc_broadcast",west,false] spawn life_fnc_MP;
				hint "You can't steal shit if you're dead!";
					sleep 1800;
				_action = _shop addAction["Rob Deposit Boxes",life_fnc_robShops];
			};
			if (_dist >= 6) exitwith {
			[[1,format["911 DISPATCH: ONE ASSAILANT HAS FLED: Freedom Bank",_storename]],"life_fnc_broadcast",west,false] spawn life_fnc_MP;
			hint "You've fled the scene of the crime!";
				sleep 1800;
			_action = _shop addAction["Rob Deposit Boxes",life_fnc_robShops];
			};
			if (currentWeapon _robber == "") exitwith {
			[[1,format["911 DISPATCH: ONE ASSAILANT HAS FLED: Freedom Bank",_storename]],"life_fnc_broadcast",west,false] spawn life_fnc_MP;
			hint "Who robs a bank without a GUN?!";
				sleep 1800;
			_action = _shop addAction["Rob Deposit Boxes",life_fnc_robShops];
			};

if(_timer < 1) exitWith { _success = true; }; //Kraken Cleanup - If the count-down has hit 0 (or -1..just in case) the robbery is a success!
};
if(!_success) exitWith { }; //Kraken Cleanup -If success is false, kill it! They've already got their message
life_cash = life_cash + _funds; //Self explanatory
hint format["You have stolen $%1",_funds]; //Give them a nice message
[[getPlayerUID _robber,name _robber,"211"],"life_fnc_wantedAdd",false,false] spawn life_fnc_MP;//Add the robber to the wanted list,thanks to DimitryYuri
_funds = 0;
sleep 180;
life_use_atm = true;
sleep 900;//Cooldown between the robberies
_action = _shop addAction["Rob Federal Bank",life_fnc_robLM];//Adding action for the robbery
};