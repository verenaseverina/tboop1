#include "Animal.h"

Animal::Animal(int _x,int _y, int id){
    x = _x;
    y = _y;
    cageID = id;
}

Animal& Animal::operator=(const Animal& a){
    x= a.x;
    y = a.y;
    cageID = a.cageID;
}

void Animal::move(int dir){
    switch(dir){
    case 1: //top
        y -= 1;
        break;
    case 2: //right
        x += 1;
        break;
    case 3: //down
        y += 1;
        break;
    case 4: //left
        x -= 1;
        break;
    }
}

int Animal::GetX()
{
    return x;
}

int Animal::GetY()
{
    return y;
}