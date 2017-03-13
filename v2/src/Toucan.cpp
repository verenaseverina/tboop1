#include "Toucan.h"
#include <cstdlib>

Toucan::Toucan(int x, int y, int id) : AirAnimal(x,y,id)
{
    x = _x;
    y = _y;
    cageID = id;
    
    size=1;
    hab=new char[size];
    hab[0]='o';

	interaction = "Kwwaakk";
   	srand(time(NULL));
    myWeight = 0.592 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(0.760-0.592)));
    howMuchIEat = 0.5*myWeight;
    whatIEat = 'o';
    isTame = true;
}

Toucan::~Toucan()
{
    delete [] hab;
}

string Toucan::interact()
{
	return this->interaction;
}

Toucan& Toucan::operator=(const Toucan& a)
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

void Toucan::move(int dir){
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

int Toucan::GetX()
{
    return x;
}

int Toucan::GetY()
{
    return y;
}

bool Toucan::GetTame()
{
    return isTame;
}

char* Toucan::GetHab()
{
    return hab;
}
