#include "raylib.h"

int main(void)
{
    const int window_width = 800;
    const int window_height = 800;

    InitWindow(window_width, window_height, "Dasher");

    const int gravity = 1'000;  // Pixels per s per s

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
    int jump_val = -600;    // Pixel per second

    bool isInAir;

    int frame;
    const float updateTime = 1.0 / 12.0;
    float runningTime;

    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        const float dT = GetFrameTime();
        BeginDrawing();
        ClearBackground(WHITE);

        if (scarfyPos.y >= (window_height - scarfyRec.height))
        {
            velocity = 0;
            isInAir = false;
        }
        else 
        {
            velocity += gravity * dT;
            isInAir = true;
        }

        if (IsKeyPressed(KEY_SPACE) && !isInAir)
        {
            velocity += jump_val;
        }

        scarfyPos.y += velocity * dT;

        scarfyRec.x = frame * scarfyRec.width;
        runningTime += dT;

        if (runningTime >= updateTime)
        {
            runningTime = 0.0;
            frame++;
            if (frame > 5)
            {
                frame = 0;
            }
        }

        DrawTextureRec(scarfy, scarfyRec, scarfyPos, WHITE);
        EndDrawing();
    }
    UnloadTexture(scarfy);
    CloseWindow();
}