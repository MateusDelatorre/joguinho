#include "raylib.h"
#include "Entite.h"
#include "Zumbis.h"

enemies::Zumbie::Zumbie(Rectangle rec, Color cor): Entite(rec){
    zumbie_color = cor;
}

void enemies::Zumbie::update(Vector2 player_position){
    if (player_position.x > getPositionX()) MoveX(0.5);
    else MoveX(-0.5);

    if (player_position.y > getPositionY()) MoveX(0.5);
    else MoveX(-0.5);
}

void enemies::Zumbie::draw(){
    DrawRectangleRec(getRectangle(), zumbie_color);
}
