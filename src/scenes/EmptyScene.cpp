/*
** EPITECH PROJECT, 2021
** Indie
** File description:
** EmptyScene
*/

#include "../../inc/scenes/EmptyScene.hpp"

EmptyScene::EmptyScene()
{
    this->has3DMode = false;
}

void EmptyScene::init()
{
    this->_img = LoadTexture("assets/png/background_18.png");
}

void EmptyScene::updateContent()
{

}

void EmptyScene::draw2DContent()
{
    _coreHandler.clearBackground(RAYWHITE);
    _textHandler.drawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

}

void EmptyScene::draw3DContent()
{

}

void EmptyScene::memoryCleaner()
{
    
}

EmptyScene::~EmptyScene()
{
}
