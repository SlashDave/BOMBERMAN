/*
** EPITECH PROJECT, 2021
** Indie
** File description:
** IComponent
*/

#ifndef ICOMPONENT_HPP_
#define ICOMPONENT_HPP_

#include "../Raylib.hpp"

// For GUI component and everyting which can be touched on the screen
class IComponent 
{
public:
    ~IComponent() = default;
    virtual void setVec(Vector2 vec) { this->_vec = vec;}
    virtual void setColor(Color color) {this->_color = color;};
    virtual void drawAtPosVec(Vector2 pos) = 0;
    virtual void draw() = 0;
    virtual bool isTouchedByMouse() = 0;
    
protected:
    Vector2 _vec;
    Color _color = WHITE;
    Rectangle _bound;
};

#endif /* !ICOMPONENT_HPP_ */
