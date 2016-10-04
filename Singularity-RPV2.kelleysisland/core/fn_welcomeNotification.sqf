/*
	File: fn_welcomeNotification.sqf
	
	Description:
	Called upon first spawn selection and welcomes our player.
*/
playsound "titanintro";
format["Welcome %1, Please read the following as it is important!",profileName] hintC
[
	"Welcome to Singularity Life! A few things have changed with Singularity Life RP since our Arma 3 Life days!",
	"An interaction key has been introduced which replaces the large majority of scroll wheel actions, this was for performance issues. By default this key is [Left Windows], you can change this key by pressing ESC and going to Configure->Controls->Custom
	and bind 'Use Action 10' to a single key like H. This key is used for the following actions",
	"Fishing, Gathering, Hunting and many other similar activities now RELY on this interaction button usage.",
	"",
	"If you are having issues with interacting / picking up items just wait. A quick way to know when you can interact with that item if the server allows it is by pressing your tilde key (~) and using the circle to highlight the object, when it says for example 'Pile of Money' then
	that means you can pick it up!."
];
	