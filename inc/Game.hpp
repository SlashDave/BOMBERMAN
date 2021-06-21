/*
** EPITECH PROJECT, 2021
** Project
** File description:
** Game
*/

#ifndef GAME_H_
#define GAME_H_
#include "base.hpp"
#include "interfaces/IComponent.hpp"
#include "interfaces/IScene.hpp"

using namespace Engine;

extern GameSettings globalGameSettings;
class Game
{
private:
    // Where all the game's scenes are stored
    std::unordered_map<std::string, std::shared_ptr<IScene>> _scenes; // a map to link string witch scene in order to switch between them

    // Where the current active scene is stored
    std::string _currentScene; 

    //A Core Raylib module instance
    Raylib::Core _core; 
    
    GameSettings _gameSettings;

public:
    Game(std::unordered_map<std::string, std::shared_ptr<IScene>> scenes);
    
    void init();
    void loop();

    ~Game();
};

#endif /* !GAME_H_ */
