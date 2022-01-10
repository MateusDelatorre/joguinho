#include "raylib.h"
#include "Entite.h"

#ifndef PLAYER_H
#define PLAYER_H

namespace players{

class Player:public core::Entite{
    Color player_color;
    public:
        Player(Rectangle rec, Color cor);

        void update();

        void draw();
};
}

#endif