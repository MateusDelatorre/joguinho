#include "raylib.h"
#include "Entite.h"

#ifndef PLAYER_H
#define PLAYER_H

namespace players{

class Player:public core::Entite{
    Color player_color;
    public:
        Player(Rectangle rec, Color cor): Entite(rec){
            player_color = cor;
        }

        void update(){
            if (IsKeyDown(KEY_RIGHT)) MoveX(2);
            if (IsKeyDown(KEY_LEFT)) MoveX(-2);
            if (IsKeyDown(KEY_UP))MoveY(2);
            if (IsKeyDown(KEY_DOWN)) MoveY(-2);
        }

        void draw(){
            DrawRectangleRec(this->getRectangle(), player_color);
        }
};
}

#endif