// #include "Scripts.h"
#include "Example.hpp"
#include "Player.h"
#include "Components.h"
#include "Common.h"

extern "C" __declspec(dllexport) void GameInit(std::map<std::string, ScriptComponent> *map)
{
    register_class<Example>(map);
    register_class<Player>(map);
    //register_class<Exato>(map);
    // register_class<Camera>(map);
    // register_class<Din>(map);
    // register_class<Vida>(map);
}
