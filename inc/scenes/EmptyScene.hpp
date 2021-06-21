/*
** EPITECH PROJECT, 2021
** Indie
** File description:
** EmptyScene
*/

#ifndef EMPTYSCENE_HPP_
#define EMPTYSCENE_HPP_
#include "../base.hpp"
#include "../Raylib.hpp"
#include "../interfaces/IScene.hpp"

class EmptyScene : public IScene {
    public:
        EmptyScene();
        void updateContent() override;
        void draw2DContent() override;
        void draw3DContent() override;
        void memoryCleaner() override;
        void init() override;
        ~EmptyScene();
    protected:
    private:
        Texture2D _img;
};

#endif /* !EMPTYSCENE_HPP_ */
