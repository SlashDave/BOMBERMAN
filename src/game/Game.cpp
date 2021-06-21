/*
** EPITECH PROJECT, 2021
** Project
** File description:
** Game
*/

#include "../../inc/Raylib.hpp"
#include "../../inc/Game.hpp"

Game::Game(std::unordered_map<std::string, std::shared_ptr<IScene> > scenes)
{
    this->_core.initAudioDevice();
    this->_core.setTargetFPS(60);
    this->_scenes = scenes;
    this->_core.initWindow(SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_TITLE);
}

void Game::init()
{ 
    for (auto scene : this->_scenes)
        scene.second->init();
}

void Game::loop()
{
    while (!this->_core.windowShouldClose()) {

        {
            // I keep  update here the active game variable handled by global variable stored in global.cpp file at the root of the repository
        
            this->_currentScene = globalCurrentGameScene;
            this->_gameSettings = globalGameSettings;
        }

        this->_scenes[this->_currentScene]->updateContent();
        if (this->_scenes[this->_currentScene]->has3DMode)
            this->_core.updateCamera(&this->_scenes[this->_currentScene]->sceneCamera);    
        
        this->_core.beginDrawing();
            this->_scenes[this->_currentScene]->draw2DContent();   
            if (this->_scenes[this->_currentScene]->has3DMode) {
                this->_core.beginMode3D(this->_scenes[this->_currentScene]->sceneCamera);
                    this->_scenes[this->_currentScene]->draw3DContent();   
                this->_core.endMode3D();
            }    
        this->_core.endDrawing();
    }
    this->_core.closeWindow();
}

Game::~Game()
{
    CloseAudioDevice();
}