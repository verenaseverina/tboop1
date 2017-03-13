#include "Anoa.h"
#include <cstdlib>

Anoa::Anoa(int x, int y, int id)
{
    x = _x;
    y = _y;
    cageID = id;
    
    size=1;
    hab=new char[size];
    hab[0]='o';

	interaction = "Grrrr";
   	srand(time(NULL));
    myWeight = 150 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(300-150)));
    howMuchIEat = 5*myWeight/100;
    whatIEat = 'h';
    isTame = true;
}

Anoa::~Anoa()
{
    delete [] hab;
}

string Anoa::interact()
{
	return this->interaction;
}

Anoa& Anoa::operator=(const Anoa& a)
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

void Anoa::move(int dir){
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

int Anoa::GetX()
{
    return x;
}

int Anoa::GetY()
{
    return y;
}

bool Anoa::GetTame()
{
    return isTame;
}

char* Anoa::GetHab()
{
    return hab;
}
