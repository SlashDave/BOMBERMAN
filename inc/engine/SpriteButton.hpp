/*
** EPITECH PROJECT, 2021
** Indie
** File description:
** SpriteButton
*/

#ifndef SPRITEBUTTON_HPP_
#define SPRITEBUTTON_HPP_

#include "../interfaces/IComponent.hpp"

namespace Engine
{
    class SpriteButton : public IComponent
    {
        private:
            std::string _filePath;
            
            Color _color = WHITE;

        public:
            Texture2D texture;
            
            SpriteButton();

            SpriteButton(std::string filePath, Vector2 vec = {0.f, 0.f});
            void setPath(std::string path);
            void drawAtPosVec(Vector2 pos) override;
            void draw() override;
            void setVec(Vector2 vec) override;
            bool isTouchedByMouse() override;

            ~SpriteButton();
    };   
} // namespace Engine

#endif /* !SPRITEBUTTON_HPP_ */
