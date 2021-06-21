/*
** EPITECH PROJECT, 2021
** B-YEP-400-COT-4-1-indiestudio-dodji.akuesson
** File description:
** Text
*/

#ifndef TEXT_HPP_
#define TEXT_HPP_
#include "../base.hpp"

namespace Raylib
{

    class Text
    {
    public:
        Text();
        ~Text();
        static Font getFontDefault(void);                                                                                                                // Get the default Font
        static Font loadFont(const char *fileName);                                                                                                      // Load font from file into GPU memory (VRAM)
        static Font loadFontEx(const char *fileName, int fontSize, int *fontChars, int charsCount);                                                      // Load font from file with extended parameters
        static Font loadFontFromImage(Image image, Color key, int firstChar);                                                                            // Load font from Image (XNA style)
        static Font loadFontFromMemory(const char *fileType, const unsigned char *fileData, int dataSize, int fontSize, int *fontChars, int charsCount); // Load font from memory buffer
        static CharInfo *loadFontData(const unsigned char *fileData, int dataSize, int fontSize, int *fontChars, int charsCount, int type);              // Load font data for further use
        static Image genImageFontAtlas(const CharInfo *chars, Rectangle **recs, int charsCount, int fontSize, int padding, int packMethod);              // Generate image font atlas using chars info
        static void unloadFontData(CharInfo *chars, int charsCount);                                                                                     // Unload font chars info data (RAM)
        static void unloadFont(Font font);                                                                                                               // Unload Font from GPU memory (VRAM)

        static void drawFPS(int posX, int posY);                                                                                       // Draw current FPS
        static void drawText(const char *text, int posX, int posY, int fontSize, Color color);                                         // Draw text (using default font)
        static void drawTextEx(Font font, const char *text, Vector2 position, float fontSize, float spacing, Color tint);              // Draw text using font and additional parameters
        static void drawTextRec(Font font, const char *text, Rectangle rec, float fontSize, float spacing, bool wordWrap, Color tint); // Draw text using font inside rectangle limits
        static void drawTextRecEx(Font font, const char *text, Rectangle rec, float fontSize, float spacing, bool wordWrap, Color tint,
                           int selectStart, int selectLength, Color selectTint, Color selectBackTint);  // Draw text using font inside rectangle limits with support for text selection
        static void drawTextCodepoint(Font font, int codepoint, Vector2 position, float fontSize, Color tint); // Draw one character (codepoint)

    private:
    };
} // namespace Raylib

#endif /* !TEXT_HPP_ */
