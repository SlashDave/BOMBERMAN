/*
** EPITECH PROJECT, 2021
** Indie
** File description:
** HomeScene
*/

#ifndef HOMESCENE_HPP_
#define HOMESCENE_HPP_
#include "../base.hpp"
#include "../interfaces/IScene.hpp"
#include "../Engine.hpp"

extern std::string globalCurrentGameScene;

using namespace Engine;

class HomeScene : public IScene {
    public:
        HomeScene();

        void updateContent() override;
        void draw2DContent() override;
        void draw3DContent() override;
        void memoryCleaner() override;
        void init() override;
        
        ~HomeScene();

    protected:
    private:
        int _timePlayed = 0;

        Music _music;

        Texture2D _background;
        Texture2D _title;
        
        SpriteButton _loadGameButton;
        SpriteButton _settingGameButton;
        SpriteButton _exitGameButton;
        SpriteButton _newGameButton;

    
};

#endif /* !HOMESCENE_HPP_ */
