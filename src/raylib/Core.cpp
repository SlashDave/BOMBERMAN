/*
** EPITECH PROJECT, 2021
** B-YEP-400-COT-4-1-indiestudio-dodji.akuesson
** File description:
** core
*/

#include "../../inc/raylib/Core.hpp"

using namespace Raylib;

Core::Core()
{
}

Core::~Core()
{
}

void Core::initWindow(int width, int height, const char *title)
{
    InitWindow(width, height, title);
}

bool Core::windowShouldClose(void)
{
    return (WindowShouldClose());
}

void Core::closeWindow(void)
{
    CloseWindow();
}

bool Core::isWindowReady(void)
{
    return (IsWindowReady());
}

bool Core::isKeyPressed(int key)
{
    return IsKeyPressed(key);
}

bool Core::isKeyDown(int key)
{
    return IsKeyDown(key);
}

bool Core::isKeyReleased(int key)
{
    return IsKeyReleased(key);
}

bool Core::isKeyUp(int key)
{
    return IsKeyUp(key);
}

void Core::setExitKey(int key)
{
    SetExitKey(key);
}

int Core::getKeyPressed(void)
{
    return GetKeyPressed();
}

int Core::getCharPressed(void)
{
    return GetCharPressed();
}

bool Core::isGamepadAvailable(int gamepad)
{
    return IsGamepadAvailable(gamepad);
}

bool Core::isGamepadName(int gamepad, const char *name)
{
    return IsGamepadName(gamepad, name);
}

const char *Core::getGamepadName(int gamepad)
{
    return GetGamepadName(gamepad);
}

bool Core::isGamepadButtonPressed(int gamepad, int button)
{
    return IsGamepadButtonPressed(gamepad, button);
}

bool Core::isGamepadButtonDown(int gamepad, int button)
{
    return IsGamepadButtonDown(gamepad, button);
}

bool Core::isGamepadButtonReleased(int gamepad, int button)
{
    return IsGamepadButtonReleased(gamepad, button);
}

bool Core::isGamepadButtonUp(int gamepad, int button)
{
    return IsGamepadButtonUp(gamepad, button);
}

int Core::getGamepadButtonPressed(void)
{
    return GetGamepadButtonPressed();
}

int Core::getGamepadAxisCount(int gamepad)
{
    return GetGamepadAxisCount(gamepad);
}

float Core::getGamepadAxisMovement(int gamepad, int axis)
{
    return GetGamepadAxisMovement(gamepad, axis);
}

int Core::setGamepadMappings(const char *mappings)
{
    return SetGamepadMappings(mappings);
}

void Core::showCursor(void)
{
    ShowCursor();
}

void Core::hideCursor(void)
{
    HideCursor();
}

bool Core::isCursorHidden(void)
{
    return IsCursorHidden();
}

void Core::enableCursor(void)
{
    EnableCursor();
}

void Core::disableCursor(void)
{
    DisableCursor();
}

bool Core::isCursorOnScreen(void)
{
    return IsCursorOnScreen();
}

void Core::clearBackground(Color color)
{
    ClearBackground(color);
}

void Core::beginDrawing(void)
{
    BeginDrawing();
}

void Core::endDrawing(void)
{
    EndDrawing();
}

void Core::beginMode2D(Camera2D camera)
{
    BeginMode2D(camera);
}

void Core::endMode2D(void)
{
    EndMode2D();
}

void Core::beginMode3D(Camera3D camera)
{
    BeginMode3D(camera);
}

void Core::endMode3D(void)
{
    EndMode3D();
}

void Core::setTargetFPS(int fps)
{
    SetTargetFPS(fps);
}

void Core::initAudioDevice()
{
    InitAudioDevice();
}

void Core::updateCamera(Camera *camera)
{
    UpdateCamera(camera);
}

bool Core::isMouseButtonPressed(int button) 
{ 
    return IsMouseButtonPressed(button); 
}

bool Core::isMouseButtonDown(int button)
{
    return IsMouseButtonPressed(button);
}

bool Core::isMouseButtonReleased(int button)
{
    return IsMouseButtonReleased(button);
}

bool Core::isMouseButtonUp(int button)
{
    return IsMouseButtonUp(button);
}