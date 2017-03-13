#include "Panda.h"
#include <cstdlib>

Panda::Panda(int x, int y, int id)
{
    x = _x;
    y = _y;
    cageID = id;
    
    size=1;
    hab=new char[size];
    hab[0]='o';
    
	interaction = "Mmmm";
   	srand(time(NULL));
    myWeight = 70 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(100-70)));
    howMuchIEat = 38*myWeight/100;
    whatIEat = 'h';
    isTame = true;
}

Panda::~Panda()
{
    delete [] hab;
}

string Panda::interact()
{
	return this->interaction;
}


Panda& Panda::operator=(const Panda& a)
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

void Panda::move(int dir){
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

int Panda::GetX()
{
    return x;
}

int Panda::GetY()
{
    return y;
}

bool Panda::GetTame()
{
    return isTame;
}

char* Panda::GetHab()
{
    return hab;
}
