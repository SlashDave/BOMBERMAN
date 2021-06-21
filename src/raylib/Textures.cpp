/*
** EPITECH PROJECT, 2021
** B-YEP-400-COT-4-1-indiestudio-dodji.akuesson
** File description:
** Textures
*/

#include "../../inc/raylib/Textures.hpp"
#include "../../inc/base.hpp"

using namespace Raylib;

Textures::Textures(){}

Textures::~Textures(){}

void Textures::drawTexture(Texture2D texture, int posX, int posY, Color tint){
    DrawTexture(texture, posX, posY, tint);
};
void Textures::drawTextureV(Texture2D texture, Vector2 position, Color tint){
    DrawTextureV(texture, position, tint);
};
void Textures::drawTextureEx(Texture2D texture, Vector2 position, float rotation, float scale, Color tint){
    DrawTextureEx(texture, position, rotation, scale, tint);
};
void Textures::drawTextureRec(Texture2D texture, Rectangle source, Vector2 position, Color tint){
    DrawTextureRec(texture, source, position, tint);
};
void Textures::drawTextureQuad(Texture2D texture, Vector2 tiling, Vector2 offset, Rectangle quad, Color tint){
    DrawTextureQuad(texture, tiling, offset, quad, tint);
};
void Textures::drawTextureTiled(Texture2D texture, Rectangle source, Rectangle dest, Vector2 origin, float rotation, float scale, Color tint){
    DrawTextureTiled(texture, source, dest, origin, rotation, scale, tint);
};
void Textures::drawTexturePro(Texture2D texture, Rectangle source, Rectangle dest, Vector2 origin, float rotation, Color tint){
    DrawTexturePro( texture, source, dest, origin, rotation, tint);
};
void Textures::drawTextureNPatch(Texture2D texture, NPatchInfo nPatchInfo, Rectangle dest, Vector2 origin, float rotation, Color tint){
    DrawTextureNPatch(texture, nPatchInfo, dest, origin, rotation, tint);
};
void Textures::drawTexturePoly(Texture2D texture, Vector2 center, Vector2 *points, Vector2 *texcoords, int pointsCount, Color tint){
    DrawTexturePoly(texture, center, points, texcoords, pointsCount, tint);
};

Texture2D Textures::loadTexture(const char *fileName)
{
    return LoadTexture(fileName);
}

void Textures::unloadTexture(Texture2D texture)
{
    UnloadTexture(texture); 
}

