#include "raylib.h"
#include "Entite.h"

#ifndef ZUMBI_H
#define ZUMBI_H

namespace enemies{

class Zumbie:public core::Entite{
    Color zumbie_color;
    public:
        Zumbie(Rectangle rec, Color cor): Entite(rec){
            zumbie_color = cor;
        }

        void update(Vector2 player_position){
            if (player_position.x > getPositionX())
            {
                MoveX(2);
            }
            
        }

        void draw(){
            DrawRectangleRec(getRectangle(), zumbie_color);
        }
};
}

#endif