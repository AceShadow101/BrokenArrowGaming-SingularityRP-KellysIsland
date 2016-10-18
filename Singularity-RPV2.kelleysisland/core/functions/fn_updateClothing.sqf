private["_uniform","_backpack"];

///Uniform
////////////////

_uniform = uniform player;

switch(true) do
{
case (playerSide == west && _uniform == "UCPD Patrol Uniform"):
{
player setObjectTextureGlobal  [0, "textures\police\cop_uniform.paa"]; // example civ
};
\\


