/*
** EPITECH PROJECT, 2021
** Indie
** File description:
** IScene
*/

#ifndef ISCENE_HPP_
#define ISCENE_HPP_
#include "../Raylib.hpp"
#include "../engine/GameSettings.hpp"

using namespace Engine;

extern std::string globalCurrentGameScene;
extern GameSettings globalGameSettings;
class IScene
{
private:

public:
    virtual ~IScene() = default;
     
    //Scene function where every ressources should be initialise
    virtual void init() = 0;
    
    //Scene function where all the game logic should be putted
    virtual void updateContent() = 0; 

    //Scene function where all the 2d graphics should be rendered
    virtual void draw2DContent() = 0; 
    
    //Scene function where all the 3d graphics should be rendered
    virtual void draw3DContent() = 0; 

     //Scene function simple function where all the ressources should be unload and freed from the memory
    virtual void memoryCleaner() = 0;
    
    //Scene function to load an other scene based on its name
    virtual void setActiveScene(std::string scene, std::string& globalSceneKeeper = globalCurrentGameScene) {
        globalSceneKeeper = scene;
    }

    //Scene function which provides functionality about set a new global setting for all the game
    virtual void setGameSettings(GameSettings newGameSettings, GameSettings& globalSettings =  globalGameSettings) {
        globalSettings = newGameSettings;
    }

    Camera sceneCamera;
    bool has3DMode = false;

protected:
    bool _isPaused = false;
    Raylib::Core _coreHandler;
    Raylib::Text _textHandler;
    Raylib::Audio _audioHandler;
    Raylib::Textures _textureHandler;
    Vector2 _mousePoint = { 0.0f, 0.0f };
};

#endif /* !ISCENE_HPP_ */
