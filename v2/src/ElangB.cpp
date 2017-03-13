#include "ElangB.h"
#include <cstdlib>

ElangB::ElangB(int x, int y, int id) : AirAnimal(x,y,id)
{
    x = _x;
    y = _y;
    cageID = id;
    
    size=1;
    hab=new char[size];
    hab[0]='o';

	interaction = "Kiiiaaa";
   	srand(time(NULL));
    myWeight = 4 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(6-4)));
    howMuchIEat = 0.4535*myWeight/4;
    whatIEat = 'c';
    isTame = true;
}

ElangB::~ElangB()
{
    delete [] hab;
}

string ElangB::interact()
{
	return this->interaction;
}

ElangB& ElangB::operator=(const ElangB& a)
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

void ElangB::move(int dir){
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

int ElangB::GetX()
{
    return x;
}

int ElangB::GetY()
{
    return y;
}

bool ElangB::GetTame()
{
    return isTame;
}

char* ElangB::GetHab()
{
    return hab;
}
