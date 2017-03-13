#include "Kelelawar.h"
#include <cstdlib>

Kelelawar::Kelelawar(int x, int y, int id)
{
    x = _x;
    y = _y;
    cageID = id;
    
    size=1;
    hab=new char[size];
    hab[0]='o';

	interaction = "Kiiiaaa";
   	srand(time(NULL));
    myWeight = 1.2 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(1.4-1.2)));
    howMuchIEat = myWeight;
    whatIEat = 'o';
    isTame = true;
}

Kelelawar::~Kelelawar()
{
    delete [] hab;
}

string Kelelawar::interact()
{
	return this->interaction;
}

Kelelawar& Kelelawar::operator=(const Kelelawar& a)
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

void Kelelawar::move(int dir){
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

int Kelelawar::GetX()
{
    return x;
}

int Kelelawar::GetY()
{
    return y;
}

bool Kelelawar::GetTame()
{
    return isTame;
}

char* Kelelawar::GetHab()
{
    return hab;
}
