#include "raylib.h"

struct AnimeData
{
    Rectangle rec;
    Vector2 pos;
    int frame;
    float updateTime;
    float runningTime;
};

int main(void)
{
    const int window_width = 800;
    const int window_height = 800;

    InitWindow(window_width, window_height, "Dasher");

    const int gravity = 1'200;  // Pixels per s per s

    Texture2D nebula = LoadTexture("textures/12_nebula_spritesheet.png");
    AnimeData nebData{
        {0.0, 0.0, nebula.width/8, nebula.height/8},    // Rectangle rec 
        {window_width, window_height-nebula.height/8},  // Vector pos
        0,  // int frame
        1.0/12.0,   // float updateTime
        0   // float runningTime
    };

    AnimeData neb2Data{
        {0.0, 0.0, nebula.width/8, nebula.height/8},    // Rectangle rec 
        {window_width + 300, window_height-nebula.height/8},  // Vector pos
        0,  // int frame
        1.0/16.0,   // float updateTime
        0.0   // float runningTime
    };

    Texture2D scarfy = LoadTexture("textures/scarfy.png");
    AnimeData scarfyData;
    scarfyData.rec.width = scarfy.width/6;
    scarfyData.rec.height = scarfy.height;
    scarfyData.rec.x = 0;
    scarfyData.rec.y = 0;
    scarfyData.pos.x = window_width/2 - scarfyData.rec.width/2;
    scarfyData.pos.y = window_height - scarfyData.rec.height;
    scarfyData.frame = 0;
    scarfyData.updateTime = 1.0/12.0;
    scarfyData.runningTime = 0.0;

    int nebularVelocity = -200;

    int velocity = 0;
    int jump_val = -600;    // Pixel per second

    bool isInAir;

    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        const float dT = GetFrameTime();
        BeginDrawing();
        ClearBackground(WHITE);

        if (scarfyData.pos.y >= (window_height - scarfyData.rec.height))
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

        nebData.pos.x += nebularVelocity * dT;
        neb2Data.pos.x += nebularVelocity * dT;
        scarfyData.pos.y += velocity * dT;

        scarfyData.rec.x = scarfyData.frame * scarfyData.rec.width;
        if (!isInAir)
        {
            scarfyData.runningTime += dT;
            if (scarfyData.runningTime >= scarfyData.updateTime)
            {
                scarfyData.runningTime = 0.0;
                scarfyData.rec.x = scarfyData.frame * scarfyData.rec.width;
                scarfyData.frame++;
                if (scarfyData.frame > 5)
                {
                    scarfyData.frame = 0;
                }
            }
        }

        nebData.runningTime += dT;
        if (nebData.runningTime >= nebData.updateTime)
        {
            nebData.runningTime = 0.0;
            nebData.rec.x = nebData.frame * nebData.rec.width;
            nebData.frame++;
            if (nebData.frame > 7)
            {
                nebData.frame = 0;
            }
        }

        neb2Data.runningTime += dT;
        if (neb2Data.runningTime >= neb2Data.updateTime)
        {
            neb2Data.runningTime = 0.0;
            neb2Data.rec.x = neb2Data.frame * neb2Data.rec.width;
            neb2Data.frame++;
            if (neb2Data.frame > 7)
            {
                neb2Data.frame = 0;
            }
        }

        DrawTextureRec(nebula, nebData.rec, nebData.pos, WHITE);
        DrawTextureRec(nebula, neb2Data.rec, neb2Data.pos, RED);
        DrawTextureRec(scarfy, scarfyData.rec, scarfyData.pos, WHITE);
        EndDrawing();
    }
    UnloadTexture(scarfy);
    UnloadTexture(nebula);
    CloseWindow();
}