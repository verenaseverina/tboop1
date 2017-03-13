#include "Rhino.h"
#include <cstdlib>

Rhino::Rhino(int x, int y, int id)
{
    x = _x;
    y = _y;
    cageID = id;
    
    size=1;
    hab=new char[size];
    hab[0]='x';
   
	interaction = "Woooo";
   	srand(time(NULL));
    myWeight = 900 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(2300-900)));
    howMuchIEat = 7.23*myWeight/100;
    whatIEat = 'h';
    isTame = false;
}

Rhino::~Rhino()
{
    delete [] hab;
}

string Rhino::interact()
{
	return this->interaction;
}

Rhino& Rhino::operator=(const Rhino& a)
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

void Rhino::move(int dir){
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

int Rhino::GetX()
{
    return x;
}

int Rhino::GetY()
{
    return y;
}

bool Rhino::GetTame()
{
    return isTame;
}

char* Rhino::GetHab()
{
    return hab;
}
