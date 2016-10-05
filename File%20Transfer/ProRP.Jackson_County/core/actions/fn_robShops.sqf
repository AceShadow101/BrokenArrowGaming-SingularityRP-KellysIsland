/*
file: fn_robShops.sqf
Author: MrKraken
Made from MrKrakens bare-bones shop robbing tutorial on www.altisliferpg.com forums
Description:
Executes the rob shob action!
Idea developed by PEpwnzya v1.0
*/
if((west countSide playableUnits) < 5) exitWith {hint "There needs to be 5 or more cops online to rob the reserve."};
private["_robber","_shopdmv","_kassa","_ui","_progress","_pgText","_cP","_rip","_pos"];
_shopdmv = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param; //The object that has the action attached to it is _this. ,0, is the index of object, ObjNull is the default should there be nothing in the parameter or it's broken
_robber = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param; //Can you guess? Alright, it's the player, or the "caller". The object is 0, the person activating the object is 1
//_kassa = 1000; //The amount the shop has to rob, you could make this a parameter of the call (https://community.bistudio.com/wiki/addAction). Give it a try and post below ;)
_action = [_this,2] call BIS_fnc_param;//Action name

if(side _robber != civilian) exitWith { hint "You can not rob this station!" };
if(_robber distance _shopdmv > 10) exitWith { hint "You need to be within 10m of the cashier to rob him!" };

if !(_kassa) then { _kassa = 1000; };
if (_rip) exitWith { hint "Robbery already in progress!" };
if (vehicle player != _robber) exitWith { hint "Get out of your vehicle!" };

if !(alive _robber) exitWith {};
if (currentWeapon _robber == "") exitWith { hint "HaHa, you do not threaten me! Get out of here you hobo!" };
if (_kassa == 0) exitWith { hint "There is no cash in the register!" };

_rip = true;
_kassa = 6000 + round(random 12000);
_shopdmv removeAction _action;
_shopdmv switchMove "AmovPercMstpSsurWnonDnon";
_chance = random(100);
if(_chance >= 85) then { hint "The cashier hit the silent alarm, police has been alerted!"; [[1,format["ALARM! - LSDMV: %1 is being robbed!", _shopdmv]],"life_fnc_broadcast",west,false] spawn life_fnc_MP; };
[[2,"<> LAKESIDE DMV IS BEING ROBBED<>!!! $$$"],"life_fnc_broadcast",nil,false] spawn life_fnc_MP;

//Setup our progress bar.
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNameSpace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["Robbery in Progress, stay close (10m) (1%1)...","%"];
_progress progressSetPosition 0.01;
_cP = 0.005;
 
if(_rip) then
{
while{true} do
{
sleep 0.85;
_cP = _cP + 0.01;
_progress progressSetPosition _cP;
_pgText ctrlSetText format["Robbery in Progress, stay close (10m) (%1%2)...",round(_cP * 100),"%"];

if(_cP >= 1) exitWith {};
if(_robber distance _shopdmv > 10.5) exitWith { };
if!(alive _robber) exitWith {};
};
if!(alive _robber) exitWith { _rip = false; };
if(_robber distance _shopdmv > 10.5) exitWith { _shopdmv switchMove ""; hint "You need to stay within 10m to Rob registry! - Now the registry is locked."; 5 cutText ["","PLAIN"]; _rip = false; };
5 cutText ["","PLAIN"];

titleText[format["You have stolen $%1, now get away before the cops arrive!",[_kassa] call life_fnc_numberText],"PLAIN"];
life_cash = life_cash + _kassa;
[[1,format["911 - LSDMV: %1 was just robbed by %2 for a total of $%3", _shopdmv, _robber, [_kassa] call life_fnc_numberText]],"life_fnc_broadcast",west,false] spawn life_fnc_MP;
_rip = false;
life_use_atm = false;
sleep (30 + random(180));
life_use_atm = true;
if!(alive _robber) exitWith {};
[[1,format["NEWS: LSDMV: %1 was just robbed for a total of $%2", _shopdmv, [_kassa] call life_fnc_numberText]],"life_fnc_broadcast",civilian,false] spawn life_fnc_MP;
[[getPlayerUID _robber,name _robber,"211"],"life_fnc_wantedAdd",false,false] spawn life_fnc_MP;
};
sleep 300;
_action = _shopdmv addAction["Rob the Gas Station",life_fnc_robShops];
_shopdmv switchMove "";