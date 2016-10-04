StartProgress = false;
enableSaving[false,false];

life_versionInfo = "Altis Life RPG v4.0";
[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";
[] execVM "outlw_magRepack\MagRepack_init_sv.sqf";
[] execVM "scripts\fn_statusBar.sqf";
[] execVM "teargas.sqf";

StartProgress = true;
