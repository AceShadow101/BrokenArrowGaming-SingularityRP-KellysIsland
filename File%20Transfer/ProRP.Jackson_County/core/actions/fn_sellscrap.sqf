/*
    File: fn_sellscrap.sqf
    Author: Matheo "DoneFear" Hanson

    Description:
    Sells and delets the ScrapMetal
*/
private["_cargo","_price"];
	_cargo = nearestObjects[getPos player,["E76_scrapmetal1"],15] select 0;
	_price= 15000;
if(!license_civ_protowing) exitwith {hint "You're not registered with the DOT"; closeDialog 0;};
if(isNil "_cargo") then 
{
	_cargo = nearestObjects[getPos player,["E76_scrapmetal1"],15] select 0;
	_price= 15000;
};
if(isNil "_cargo") exitWith {};

	life_cash = life_cash + _price;
    titleText["You have sold the cargo","PLAIN"];
    deleteVehicle _cargo;