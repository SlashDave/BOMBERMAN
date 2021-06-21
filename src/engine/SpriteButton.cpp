/*
** EPITECH PROJECT, 2021
** Indie
** File description:
** SpriteButton
*/

#include "../../inc/engine/SpriteButton.hpp"

using namespace Engine;

SpriteButton::SpriteButton()
{

}

SpriteButton::SpriteButton(std::string filePath, Vector2 vec) : IComponent()
{
    this->_vec = vec;
    this->_filePath = filePath;
    this->texture = Raylib::Textures::loadTexture(this->_filePath.c_str());
    this->_bound = (Rectangle){this->_vec.x, this->_vec.y, (float)this->texture.width, (float)this->texture.height};
}


bool SpriteButton::isTouchedByMouse()
{
    if (Raylib::Shape::checkCollisionPointRec(GetMousePosition(), this->_bound))
        return true;
    return false;
}

void SpriteButton::setVec(Vector2 vec)
{
    this->_vec = vec;
}


void SpriteButton::drawAtPosVec(Vector2 pos)
{   
    this->_vec = pos;
    this->_bound = (Rectangle){this->_vec.x, this->_vec.y, (float)this->texture.width, (float)this->texture.height};
    Raylib::Textures::drawTextureRec(this->texture, this->_bound, pos, this->_color);
}

void SpriteButton::setPath(std::string path)
{
    this->_filePath = path;
    this->texture = Raylib::Textures::loadTexture(this->_filePath.c_str());
}

void SpriteButton::draw()
{
    this->_bound = (Rectangle){this->_vec.x, this->_vec.y, (float)this->texture.width, (float)this->texture.height};
    Raylib::Textures::drawTextureRec(this->texture, this->_bound, this->_vec, this->_color);
}

SpriteButton::~SpriteButton()
{
    //Raylib::Textures::unloadTexture(this->texture);
}
