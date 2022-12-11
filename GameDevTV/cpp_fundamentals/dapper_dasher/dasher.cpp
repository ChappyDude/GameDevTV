#include "raylib.h"

int main(void)
{
    const int window_width = 800;
    const int window_height = 800;

    InitWindow(window_width, window_height, "Dasher");

    const int gravity = 1;  // Pixels per framer per frame

    Texture2D scarfy = LoadTexture("textures/scarfy.png");
    Rectangle scarfyRec;
    scarfyRec.width = scarfy.width/6;
    scarfyRec.height = scarfy.height;
    scarfyRec.x = 0;
    scarfyRec.y = 0;
    Vector2 scarfyPos;
    scarfyPos.x = window_width/2 - scarfyRec.width/2;
    scarfyPos.y = window_height - scarfyRec.height;

    int velocity = 0;
    int jump_val = -20;

    bool isInAir;

    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);

        if (scarfyPos.y >= (window_height - scarfyRec.height))
        {
            velocity = 0;
            isInAir = false;
        }
        else 
        {
            velocity += gravity;
            isInAir = true;
        }

        if (IsKeyPressed(KEY_SPACE) && !isInAir)
        {
            velocity += jump_val;
        }

        scarfyPos.y += velocity;

        DrawTextureRec(scarfy, scarfyRec, scarfyPos, WHITE);
        EndDrawing();
    }
    UnloadTexture(scarfy);
    CloseWindow();
}