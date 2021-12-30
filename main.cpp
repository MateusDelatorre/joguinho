#include "raylib.h"
#include "Player.h"
#include "Zumbis.h"

using namespace players;
using namespace enemies;

int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - keyboard input");

    Player player1 = Player({400, 280, 40, 40}, RED);
    Zumbie zumbis = Zumbie({400, 180, 40, 40}, BLUE);

    Camera2D camera = { 0 };
    camera.target = (Vector2){ player1.getPositionX() + 20.0f, player1.getPositionY() + 20.0f };
    camera.offset = (Vector2){ screenWidth/2.0f, screenHeight/2.0f };
    camera.rotation = 0.0f;
    camera.zoom = 1.0f;

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        player1.update();
        camera.target = (Vector2){ player1.getPositionX() + 20.0f, player1.getPositionY() + 20.0f };
        camera.zoom += ((float)GetMouseWheelMove()*0.05f);
        if (camera.zoom > 3.0f) camera.zoom = 3.0f;
        else if (camera.zoom < 0.1f) camera.zoom = 0.1f;
        zumbis.update(player1.getVector());
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);

            BeginMode2D(camera);

                player1.draw();
                zumbis.draw();

            EndMode2D();

            DrawText("move the ball with arrow keys", 10, 10, 20, DARKGRAY);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}