/*
** EPITECH PROJECT, 2021
** Indie
** File description:
** HomeScene
*/

#include "../../inc/scenes/HomeScene.hpp"

HomeScene::HomeScene()
{
    this->has3DMode = false;   
}

void HomeScene::init()
{
    this->_title = this->_textureHandler.loadTexture("assets/png/logo.png");
    this->_background = this->_textureHandler.loadTexture("assets/png/background_18.png");
    
    this->_newGameButton.setPath("assets/png/NewGame_Button.png");
    this->_loadGameButton.setPath("assets/png/LoadGame_Button.png");
    this->_exitGameButton.setPath("assets/png/Exit_Button.png");
    this->_settingGameButton.setPath("assets/png/Settings_Button.png");

    
    this->_music = this->_audioHandler.loadMusicStream("assets/sounds/menu backgroud soud.wav");
    this->_audioHandler.playMusicStream(this->_music);    
}

void HomeScene::updateContent()
{

    this->_audioHandler.updateMusicStream(this->_music);

    if (this->_newGameButton.isTouchedByMouse() && this->_coreHandler.isMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
        this->setActiveScene("empty"); // only for test purpose
        std::cout << globalCurrentGameScene << std::endl;
    }        

    if (this->_coreHandler.isKeyPressed(KEY_SPACE))
    {
        this->_audioHandler.stopMusicStream(this->_music);
        this->_audioHandler.playMusicStream(this->_music);
    }

    if (this->_coreHandler.isKeyPressed(KEY_P))
    {
        this->_isPaused = !this->_isPaused;

        if (this->_isPaused)
            this->_audioHandler.pauseMusicStream(this->_music);
        else
            this->_audioHandler.resumeMusicStream(this->_music);
    }

    this->_timePlayed = this->_audioHandler.getMusicTimePlayed(this->_music) / this->_audioHandler.getMusicTimeLength(this->_music) * 400;

    if (this->_timePlayed > 400)
        this->_audioHandler.stopMusicStream(this->_music);

}

void HomeScene::draw2DContent()
{
    this->_coreHandler.clearBackground(RAYWHITE);
    this->_textureHandler.drawTexture(this->_background, SCREEN_WIDTH / 2 - this->_background.width / 2, SCREEN_HEIGHT / 2 - this->_background.height / 2 - 40, WHITE);
    this->_textureHandler.drawTexture(this->_title, SCREEN_WIDTH / 4 - this->_title.width / 4, SCREEN_HEIGHT / 4 - this->_title.height / 4 - 60, WHITE);

    this->_newGameButton.drawAtPosVec((Vector2){300, 350 + 10});  
    this->_loadGameButton.drawAtPosVec((Vector2){300, 450});
    this->_settingGameButton.drawAtPosVec((Vector2){500, 350 });
    this->_exitGameButton.drawAtPosVec((Vector2){500, 450});
}

void HomeScene::draw3DContent()
{
}

void HomeScene::memoryCleaner()
{
    //this->_textureHandler.unloadTexture(this->_exitGameButton.texture);
}

HomeScene::~HomeScene()
{
}
