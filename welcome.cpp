#include "inc/Raylib.hpp"
#include "inc/Engine.hpp"
#include "inc/interfaces/IScene.hpp"
#include <iostream>

using namespace Engine;

class Bitch : public IScene
{
private:
public:
    Texture2D _img;

    Bitch();

    void updateContent() override;
    void draw2DContent() override;
    void draw3DContent() override;
    void memoryCleaner() override;
    void init() override;
    ~Bitch() {}
};

Bitch::Bitch()
{
    
}

void Bitch::init()
{
    this->_img = LoadTexture("assets/png/background_18.png");
}

void Bitch::updateContent()
{
}

void Bitch::draw2DContent()
{
    DrawTexture(this->_img, 0, 0, WHITE);
}

void Bitch::draw3DContent()
{
}
void Bitch::memoryCleaner()
{
}

int main(void)
{
    const int screenWidth = 1000;
    const int screenHeight = 650;
    std::map<std::string, std::shared_ptr<IScene>> scenes;
    scenes["bitch"] = std::shared_ptr<IScene>(new Bitch());

    InitWindow(screenWidth, screenHeight, "Bomberman");
    InitAudioDevice();
    SpriteButton newGameButton;

    newGameButton.setPath("assets/png/NewGame_Button.png");
    newGameButton.setVec((Vector2){300, 350});

    for (auto scene : scenes)
        scene.second->init();

    while (!WindowShouldClose())
    {
        BeginDrawing();

            ClearBackground(RAYWHITE);
                scenes["bitch"]->draw2DContent();
            newGameButton.draw();

        EndDrawing();
    }

    CloseWindow();
    return 0;
}