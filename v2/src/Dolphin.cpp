#include "Dolphin.h"
#include <cstdlib>

Dolphin::Dolphin(int x, int y, int id)
{
    x = _x;
    y = _y;
    cageID = id;
    
    size=1;
    hab=new char[size];
    hab[0]='#';

	interaction = "Cuitttt";
   	srand(time(NULL));
    myWeight = 110 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(200-110)));
    howMuchIEat = (0.04 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(0.09-0.04)))) * myWeight;
    whatIEat = 'c';
    isTame = true;
}

Dolphin::~Dolphin()
{
    delete [] hab;
}
string Dolphin::interact()
{
	return this->interaction;
}


Dolphin& Dolphin::operator=(const Dolphin& a)
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

void Dolphin::move(int dir){
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

int Dolphin::GetX()
{
    return x;
}

int Dolphin::GetY()
{
    return y;
}

bool Dolphin::GetTame()
{
    return isTame;
}

char* Dolphin::GetHab()
{
    return hab;
}
