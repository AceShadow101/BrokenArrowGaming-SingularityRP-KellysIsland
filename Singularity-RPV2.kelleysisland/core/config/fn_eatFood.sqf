/*
	File: fn_eatFood.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Main handling system for eating food.
	*Needs to be revised and made more modular and more indept effects*
*/
private["_food","_val","_sum"];
_food = [_this,0,"",[""]] call BIS_fnc_param;
if(_food == "") exitWith {};

if([false,_food,1] call life_fnc_handleInv) then {
	switch (_food) do
	{
		case "apple": {_val = 10};
		case "rabbit_grilled":{ _val = 20};
		case "salema_grilled": {_val = 30};
		case "ornate_grilled": {_val = 25};
		case "mackerel_grilled": {_val = 30};
		case "hen_fried": {_val = 30};
		case "rooster_grilled": {_val = 30};
		case "tuna_grilled": {_val = 100};
		case "mullet_fried": {_val = 80};
		case "sheep_grilled": {_val = 80};
		case "goat_grilled": {_val = 80};
		case "catshark_fried": {_val = 100};
		case "turtlesoup": {_val = 100};
		case "donuts": {_val = 30};
		case "tbacon": {_val = 40};
		case "peach": {_val = 10};
	};

	_sum = life_hunger + _val;
	if(_sum > 100) then {_sum = 100; player setFatigue 1; hint "You have over eaten, you are now feeling fatigued.";};
	life_hunger = _sum;
};