#include "raylib.h"
#include "Entite.h"

#ifndef ZUMBI_H
#define ZUMBI_H
namespace enemies{

    class Zumbie:public core::Entite{
    private:
        Color zumbie_color;
    public:
        Zumbie(Rectangle rec, Color cor);

        void update(Vector2 player_position);

        void draw();
    };
}

#endif