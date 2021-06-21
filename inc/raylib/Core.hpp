/*
** EPITECH PROJECT, 2021
** B-YEP-400-COT-4-1-indiestudio-dodji.akuesson
** File description:
** Core
*/

#ifndef CORE_HPP_
#define CORE_HPP_

#include "../base.hpp"
namespace Raylib
{
    class Core
    {
    private:
        /* data */
    public:
        Core(void);
        ~Core();
        // Window-related functions
        static void initWindow(int width, int height, const char *title);              // Initialize window and OpenGL context
        static void initAudioDevice();
        static bool windowShouldClose(void);                                           // Check if KEY_ESCAPE pressed or Close icon pressed
        static void closeWindow(void);                                                 // Close window and unload OpenGL context
        static bool isWindowReady(void);                                               // Check if window has been initialized successfully
        static bool isKeyPressed(int key);                                             // Detect if a key has been pressed once
        static bool isKeyDown(int key);                                                // Detect if a key is being pressed
        static bool isKeyReleased(int key);                                            // Detect if a key has been released once
        static bool isKeyUp(int key);                                                  // Detect if a key is NOT being pressed
        static void setExitKey(int key);                                               // Set a custom key to exit program (default is ESC)
        static int getKeyPressed(void);                                                // Get key pressed (keycode), call it multiple times for keys queued
        static int getCharPressed(void);                                               // Get char pressed (unicode), call it multiple times for chars queued
        static void updateCamera(Camera *camera);    

        // Input-related functions: gamepads
        static bool isGamepadAvailable(int gamepad);                                   // Detect if a gamepad is available
        static bool isGamepadName(int gamepad, const char *name);                      // Check gamepad name (if available)
        static const char *getGamepadName(int gamepad);                                // Return gamepad internal name id
        static bool isGamepadButtonPressed(int gamepad, int button);                   // Detect if a gamepad button has been pressed once
        static bool isGamepadButtonDown(int gamepad, int button);                      // Detect if a gamepad button is being pressed
        static bool isGamepadButtonReleased(int gamepad, int button);                  // Detect if a gamepad button has been released once
        static bool isGamepadButtonUp(int gamepad, int button);                        // Detect if a gamepad button is NOT being pressed
        static int getGamepadButtonPressed(void);                                      // Get the last gamepad button pressed
        static int getGamepadAxisCount(int gamepad);                                   // Return gamepad axis count for a gamepad
        static float getGamepadAxisMovement(int gamepad, int axis);                    // Return axis movement value for a gamepad axis
        static int setGamepadMappings(const char *mappings);

        static void showCursor(void);                                                  // Shows cursor
        static void hideCursor(void);                                                  // Hides cursor
        static bool isCursorHidden(void);                                              // Check if cursor is not visible
        static void enableCursor(void);                                                // Enables cursor (unlock cursor)
        static void disableCursor(void);                                               // Disables cursor (lock cursor)
        static bool isCursorOnScreen(void);  
        static bool isMouseButtonPressed(int button);                                  // Detect if a mouse button has been pressed once
        static bool isMouseButtonDown(int button);                                     // Detect if a mouse button is being pressed
        static bool isMouseButtonReleased(int button);                                 // Detect if a mouse button has been released once
        static bool isMouseButtonUp(int button);                                          // Check if cursor is on the current screen.

        // Drawing-related functions
        static void clearBackground(Color color);                                      // Set background color (framebuffer clear color)
        static void beginDrawing(void);                                                // Setup canvas (framebuffer) to start drawing
        static void endDrawing(void);                                                  // End canvas drawing and swap buffers (double buffering)
        static void beginMode2D(Camera2D camera);                                      // Initialize 2D mode with custom camera (2D)
        static void endMode2D(void);                                                   // Ends 2D mode with custom camera
        static void beginMode3D(Camera3D camera);                                      // Initializes 3D mode with custom camera (3D)
        static void endMode3D(void);                                                   // Ends 3D mode and returns to default 2D orthographic mode

        static void setTargetFPS(int fps);
    };

} // namespace Raylib

#endif /* !Core_HPP_ */
