/*
** EPITECH PROJECT, 2021
** B-YEP-400-COT-4-1-indiestudio-dodji.akuesson
** File description:
** Text
*/
#include "../../inc/raylib/Text.hpp"


using namespace Raylib;

Text::Text()
{
}

Text::~Text()
{
}

Font Text::getFontDefault(void)
{
    return (GetFontDefault());
};

Font Text::loadFont(const char *fileName)
{
    return (LoadFont(fileName));
};

Font Text::loadFontEx(const char *fileName, int fontSize, int *fontChars, int charsCount)
{
    return (LoadFontEx(fileName, fontSize, fontChars, charsCount));
};

Font Text::loadFontFromImage(Image image, Color key, int firstChar)
{
    return (LoadFontFromImage(image, key, firstChar));
};

Font Text::loadFontFromMemory(const char *fileType, const unsigned char *fileData, int dataSize, int fontSize, int *fontChars, int charsCount)
{
    return (LoadFontFromMemory(fileType, fileData, dataSize, fontSize, fontChars, charsCount));
};

CharInfo *Text::loadFontData(const unsigned char *fileData, int dataSize, int fontSize, int *fontChars, int charsCount, int type)
{
    return (LoadFontData(fileData, dataSize, fontSize, fontChars, charsCount, type));
};

Image Text::genImageFontAtlas(const CharInfo *chars, Rectangle **recs, int charsCount, int fontSize, int padding, int packMethod)
{
    return (GenImageFontAtlas(chars, recs, charsCount, fontSize, padding, packMethod));
};

void Text::unloadFontData(CharInfo *chars, int charsCount)
{
    UnloadFontData(chars, charsCount);
};

void Text::unloadFont(Font font)
{
    UnloadFont(font);
};

void Text::drawFPS(int posX, int posY)
{
    DrawFPS(posX, posY);
};

void Text::drawText(const char *text, int posX, int posY, int fontSize, Color color)
{
    DrawText(text, posX, posY, fontSize, color);
};

void Text::drawTextEx(Font font, const char *text, Vector2 position, float fontSize, float spacing, Color tint)
{
    DrawTextEx(font, text, position, fontSize, spacing, tint);
};

void Text::drawTextRec(Font font, const char *text, Rectangle rec, float fontSize, float spacing, bool wordWrap, Color tint)
{
    DrawTextRec(font, text, rec, fontSize, spacing, wordWrap, tint);
};

void Text::drawTextRecEx(Font font, const char *text, Rectangle rec, float fontSize, float spacing, bool wordWrap, Color tint,
                         int selectStart, int selectLength, Color selectTint, Color selectBackTint)
{
    DrawTextRecEx(font, text, rec, fontSize, spacing, wordWrap, tint, selectStart, selectLength, selectTint, selectBackTint);
};

void Text::drawTextCodepoint(Font font, int codepoint, Vector2 position, float fontSize, Color tint)
{
    DrawTextCodepoint(font, codepoint, position, fontSize, tint);
};

