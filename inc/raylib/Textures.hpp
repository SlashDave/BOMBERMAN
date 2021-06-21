/*
** EPITECH PROJECT, 2021
** B-YEP-400-COT-4-1-indiestudio-dodji.akuesson
** File description:
** Textures
*/

#ifndef TEXTURES_HPP_
#define TEXTURES_HPP_
#include "../base.hpp"

namespace Raylib
{
    class Textures
    {
    public:
        Textures();
        ~Textures();

        static Texture2D loadTexture(const char *fileName);
        static void unloadTexture(Texture2D texture); 
        static void drawTexture(Texture2D texture, int posX, int posY, Color tint);                                                                 // Draw a Texture2D
        static void drawTextureV(Texture2D texture, Vector2 position, Color tint);                                                                  // Draw a Texture2D with position defined as Vector2
        static void drawTextureEx(Texture2D texture, Vector2 position, float rotation, float scale, Color tint);                                    // Draw a Texture2D with extended parameters
        static void drawTextureRec(Texture2D texture, Rectangle source, Vector2 position, Color tint);                                              // Draw a part of a texture defined by a rectangle
        static void drawTextureQuad(Texture2D texture, Vector2 tiling, Vector2 offset, Rectangle quad, Color tint);                                 // Draw texture quad with tiling and offset parameters
        static void drawTextureTiled(Texture2D texture, Rectangle source, Rectangle dest, Vector2 origin, float rotation, float scale, Color tint); // Draw part of a texture (defined by a rectangle) with rotation and scale tiled into dest.
        static void drawTexturePro(Texture2D texture, Rectangle source, Rectangle dest, Vector2 origin, float rotation, Color tint);                // Draw a part of a texture defined by a rectangle with 'pro' parameters
        static void drawTextureNPatch(Texture2D texture, NPatchInfo nPatchInfo, Rectangle dest, Vector2 origin, float rotation, Color tint);        // Draws a texture (or part of it) that stretches or shrinks nicely
        static void drawTexturePoly(Texture2D texture, Vector2 center, Vector2 *points, Vector2 *texcoords, int pointsCount, Color tint);           // Draw a textured polygon
    protected:
    private:
    };
} // namespace Raylib

#endif /* !TEXTURES_HPP_ */
