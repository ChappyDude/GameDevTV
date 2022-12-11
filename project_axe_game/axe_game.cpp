#include "raylib.h"
#include "axe_game.h"

static void init_window_dimensions(void);
static void init_circle(void);
static void init_axe(void);
static void update_circle_edges(void);
static void update_axe_edges(void);
static bool get_collision_status(void);
static void move_axe(void);
static void move_circle(void);

int main()
{
    init_window_dimensions();

    init_circle();
    init_axe();

    update_circle_edges();
    update_axe_edges();

    direction = 20;

    get_collision_status();

    SetTargetFPS(30);
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);

        if (collision_with_axe)
        {
            DrawText("Game Over!", 400, 200, 20, RED);
        }
        else
        {
            // Game logic begins

            // update the edges
            update_circle_edges();
            update_axe_edges();

            // Update collision with axe
            get_collision_status();

            DrawCircle(circle_x, circle_y, circle_radius, BLUE);
            DrawRectangle(axe_x, axe_y, axe_length, axe_length, RED);

            move_axe();
            move_circle();

            // Game logic ends
        }
        EndDrawing();
    }
}

static void init_window_dimensions(void)
{
    // Window dimensions
    width = 800;
    height = 450;
    InitWindow(width, height, "Kheavin");
}

static void init_circle(void)
{
    // Circle coordinates
    circle_x = 200;
    circle_y = 200;
    circle_radius = 25;
}

static void init_axe(void)
{
    axe_x = 400;
    axe_y = 0;
    axe_length = 50;
}

static void update_circle_edges(void)
{
    l_circle_x = circle_x - circle_radius;
    r_circle_x = circle_x + circle_radius;
    u_circle_y = circle_y - circle_radius;
    d_circle_y = circle_y + circle_radius;
}

static void update_axe_edges(void)
{
    l_axe_x = axe_x;
    r_axe_x = axe_x + axe_length;
    u_axe_y = axe_y;
    d_axe_y = axe_y + axe_length;
}

static bool get_collision_status(void)
{
    collision_with_axe = (d_axe_y >= u_circle_y) &&
                            (u_axe_y <= d_circle_y) &&
                            (l_axe_x <= r_circle_x) && 
                            (r_axe_x >= l_circle_x);

    return collision_with_axe;
}

static void move_axe(void)
{
    axe_y = axe_y + direction;
    if ((axe_y > height) || (axe_y == 0))
    {
        direction = -direction;
    }
}

static void move_circle(void)
{
    if (IsKeyDown(KEY_D) && (circle_x < width))
    {
        circle_x += 10;
    }
    else if (IsKeyDown(KEY_A) && (circle_x > 0))
    {
        circle_x -= 10;
    }
}