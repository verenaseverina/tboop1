#include "Hippopotamus.h"
#include <cstdlib>

Hippopotamus::Hippopotamus(int x, int y, int id) : LWAnimal(x,y,id)
{
    x = _x;
    y = _y;
    cageID = id;
    
    size=2;
    hab=new char[size];
    hab[0]='x';
    hab[1]='#';

	interaction = "Grooowwll";
   	srand(time(NULL));
    myWeight = 1400 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(3200-1400)));
    howMuchIEat = 40*myWeight/2400;
    whatIEat = 'h';
    isTame = true;
}

Hippopotamus::~Hippopotamus()
{
    delete [] hab;
}

string Hippopotamus::interact()
{
	return this->interaction;
}

Hippopotamus& Hippopotamus::operator=(const Hippopotamus& a)
{
    x= a.x;
    y = a.y;
    
    size=a.size;
    hab=new char[size];
    for (int i=0;i<size;i++)
    {
        hab[i]=a.hab[i];
    }

    cageID = a.cageID;
    interaction = a.interaction;
    myWeight = a.myWeight;
    howMuchIEat = a.howMuchIEat;
    whatIEat = a.whatIEat;
    isTame = a.isTame;
    return *this;
}

void Hippopotamus::move(int dir){
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

int Hippopotamus::GetX()
{
    return x;
}

int Hippopotamus::GetY()
{
    return y;
}

bool Hippopotamus::GetTame()
{
    return isTame;
}

char* Hippopotamus::GetHab()
{
    return hab;
}
