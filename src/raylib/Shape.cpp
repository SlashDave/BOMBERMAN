/*
** EPITECH PROJECT, 2021
** Indie
** File description:
** Shape
*/

#include "../../inc/raylib/Shape.hpp"

using namespace Raylib;

Shape::Shape()
{
}

bool Shape::checkCollisionRecs(Rectangle rec1, Rectangle rec2)
{
    return CheckCollisionRecs(rec1, rec2);
}

bool Shape::checkCollisionPointRec(Vector2 point, Rectangle rec)
{
    return CheckCollisionPointRec(point, rec);
}

bool Shape::checkCollisionLines(Vector2 startPos1, Vector2 endPos1, Vector2 startPos2, Vector2 endPos2, Vector2 *collisionPoint)
{
    return CheckCollisionLines(startPos1, endPos1, startPos2, endPos2, collisionPoint);
}

Rectangle Shape::getCollisionRec(Rectangle rec1, Rectangle rec2)
{
    return GetCollisionRec(rec1, rec2);
}

Shape::~Shape()
{
}
