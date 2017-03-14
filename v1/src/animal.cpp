#include "animal.h"

Animal::Animal(int _x,int _y, int id) {
  x = _x;
  y = _y;
  cage_id = id;
}

Animal& Animal::operator=(const Animal& a) {
  x= a.x;
  y = a.y;
  cage_id = a.cage_id;
  return *this;
}

void Animal::Move(int dir) {
  switch(dir) {
    case 1: {//top 
      y -= 1;
      break;
    }
    case 2: {//right 
      x += 1;
      break;
    }
    case 3:  {//down
      y += 1;
      break;
    }
    case 4: {//left 
      x -= 1;
      break;
    }
  }
}

int Animal::GetID() {
  return cage_id;
}

int Animal::GetX() {
  return x;
}

int Animal::GetY() {
  return y;
}

bool Animal::GetTame() {
  return is_tame;
}

char* Animal::GetHab() {
  return hab;
}

char Animal::GetContent() {
  return content;
}
