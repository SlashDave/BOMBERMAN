/*
** EPITECH PROJECT, 2021
** Indie
** File description:
** main
*/

#include "inc/Raylib.hpp"
#include "inc/Game.hpp"
#include "inc/scenes/scenes.hpp"
#include <raylib.h>

int main(void)
{
    std::unordered_map<std::string, std::shared_ptr<IScene>> scenes;

    scenes["home"] = std::shared_ptr<IScene>(new HomeScene());
    scenes["empty"] = std::shared_ptr<IScene>(new EmptyScene());

    Game game = Game(scenes);
    
    game.init();
    game.loop();


    for (auto scene : scenes)
        scene.second->memoryCleaner();
}