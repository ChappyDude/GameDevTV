#include "raylib.h"

int main(void)
{
    const int window_width = 800;
    const int window_height = 800;

    InitWindow(window_width, window_height, "Dasher");

    const int gravity = 1'200;  // Pixels per s per s

    Texture2D nebula = LoadTexture("textures/12_nebula_spritesheet.png");
    Rectangle nebulaRec;
    nebulaRec.width = nebula.width / 8;
    nebulaRec.height = nebula.height / 8;
    nebulaRec.x = 0;
    nebulaRec.y = 0;
    Vector2 nebularPos;
    nebularPos.x = window_width;
    nebularPos.y = window_height - nebulaRec.height;

    Rectangle nebula2Rec;
    nebula2Rec.width = nebula.width / 8;
    nebula2Rec.height = nebula.height / 8;
    nebula2Rec.x = 0;
    nebula2Rec.y = 0;
    Vector2 nebular2Pos;
    nebular2Pos.x = window_width + 300;
    nebular2Pos.y = window_height - nebulaRec.height;


    Texture2D scarfy = LoadTexture("textures/scarfy.png");
    Rectangle scarfyRec;
    scarfyRec.width = scarfy.width/6;
    scarfyRec.height = scarfy.height;
    scarfyRec.x = 0;
    scarfyRec.y = 0;
    Vector2 scarfyPos;
    scarfyPos.x = window_width/2 - scarfyRec.width/2;
    scarfyPos.y = window_height - scarfyRec.height;

    int nebularVelocity = -200;

    int velocity = 0;
    int jump_val = -600;    // Pixel per second

    int nebFrame;
    const float nebUpdateTime = 1.0 / 12.0;
    float nebRunningTime;

    int neb2Frame;
    const float neb2UpdateTime = 1.0 / 12.0;
    float neb2RunningTime;

    bool isInAir;

    int frame;
    const float updateTime = 1.0 / 16.0;
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

        nebularPos.x += nebularVelocity * dT;
        nebular2Pos.x += nebularVelocity * dT;
        scarfyPos.y += velocity * dT;

        scarfyRec.x = frame * scarfyRec.width;
        if (!isInAir)
        {
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
        }

        nebRunningTime += dT;
        if (nebRunningTime >= nebUpdateTime)
        {
            nebRunningTime = 0.0;
            nebulaRec.x = frame * nebulaRec.width;
            nebFrame++;
            if (nebFrame > 7)
            {
                nebFrame = 0;
            }
        }

        neb2RunningTime += dT;
        if (neb2RunningTime >= neb2UpdateTime)
        {
            neb2RunningTime = 0.0;
            nebula2Rec.x = frame * nebula2Rec.width;
            neb2Frame++;
            if (neb2Frame > 7)
            {
                neb2Frame = 0;
            }
        }

        DrawTextureRec(nebula, nebulaRec, nebularPos, WHITE);
        DrawTextureRec(nebula, nebula2Rec, nebular2Pos, RED);
        DrawTextureRec(scarfy, scarfyRec, scarfyPos, WHITE);
        EndDrawing();
    }
    UnloadTexture(scarfy);
    UnloadTexture(nebula);
    CloseWindow();
}