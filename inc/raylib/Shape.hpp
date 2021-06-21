/*
** EPITECH PROJECT, 2021
** Indie
** File description:
** Shape
*/

#ifndef SHAPE_HPP_
#define SHAPE_HPP_
#include "../base.hpp"

namespace Raylib
{
    
    class Shape {
        public:
            Shape();
            ~Shape();
            static bool checkCollisionRecs(Rectangle rec1, Rectangle rec2);                                            // check collision between two rectangles
            static bool checkCollisionPointRec(Vector2 point, Rectangle rec);                                          // check if point is inside rectangle
            static bool checkCollisionLines(Vector2 startPos1, Vector2 endPos1, Vector2 startPos2, Vector2 endPos2, Vector2 *collisionPoint); // check the collision between two lines defined by two points each, returns collision point by reference
            static Rectangle getCollisionRec(Rectangle rec1, Rectangle rec2);                                          // Get collision rectangle for two rectangles collision
        protected:
        private:
    };    
} // namespace Raylib


#endif /* !SHAPE_HPP_ */
