#include "raylib.h"
#include "Entite.h"
#include "Player.h"

players::Player::Player(Rectangle rec, Color cor): Entite(rec){
    player_color = cor;
}

void players::Player::update(){
    if (IsKeyDown(KEY_RIGHT)) MoveX(2.0F);
    if (IsKeyDown(KEY_LEFT)) MoveX(-2.0F);
    if (IsKeyDown(KEY_UP))MoveY(-2.0F);
    if (IsKeyDown(KEY_DOWN)) MoveY(2.0F);
}

void players::Player::draw(){
    DrawRectangleRec(getRectangle(), player_color);
}