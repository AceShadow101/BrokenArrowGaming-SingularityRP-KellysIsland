private["_bankZones","_tacoZones"];
_bankZones = ["bank_1"];
_tacoZones = ["taco_1","taco_2"];

//Create Bank
{
	_zone = createTrigger ["EmptyDetector",(getMarkerPos _x)];
	_zone setTriggerArea[5,5,0,false];
	_zone setTriggerActivation["ANY","PRESENT",true];
	_zone setTriggerStatements["player in thislist","life_action_robFB = player addAction['Rob the Safety Deposit Boxes',life_fnc_robFB,'',0,false,false,'','!life_action_inUse'];","player removeAction life_action_robFB;"];
} foreach _bankZones;


