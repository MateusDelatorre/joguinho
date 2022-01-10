#include "raylib.h"

#ifndef ENTITE_H
#define ENTITE_H

namespace core{

class Entite{
    Rectangle shape;
    public:
        Entite(Rectangle rec){
            this->shape = rec;
        }

        void MoveX(float movement){
            shape.x += movement;
        }

        void MoveY(float movement){
            shape.y += movement;
        }

        //Getters & Setters
        Rectangle getRectangle(){
            return shape;
        }

        Vector2 getVector(){
            return {shape.x, shape.y};
        }

        float getPositionX(){
            return shape.x;
        }

        float getPositionY(){
            return shape.y;
        }
};

}

#endif