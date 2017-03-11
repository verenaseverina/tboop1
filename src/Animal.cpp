#include "Animal.h"

Animal::Animal(int _x,int _y, int id){
    x = _x;
    y = _y;
    cageID = id;
}

Animal& Animal::operator=(const Animal& a){
    interaction = a.interaction;
    animal_id = a.animal_id;
    x = a.x;
    y = a.y;
    myWeight = a.myWeight;
    howMuchIEat = a.howMuchIEat;
    whatIEat = a.whatIEat;
    isTame = a.isTame;
    return *this;
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
