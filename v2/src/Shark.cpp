#include "Shark.h"
#include <cstdlib>

Shark::Shark(int x, int y, int id)
{
    x = _x;
    y = _y;
    cageID = id;
    
    size=1;
    hab=new char[size];
    hab[0]='#';

	interaction = "Wett";
   	srand(time(NULL));
    myWeight = 21500 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(30000-21500)));
    howMuchIEat = 0.0667 * myWeight;
    whatIEat = 'c';
    isTame = false;
}
string Shark::interact()
{
	return this->interaction;
}

Shark::~Shark()
{
    delete [] hab;
}

Shark& Shark::operator=(const Shark& a)
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

void Shark::move(int dir){
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

int Shark::GetX()
{
    return x;
}

int Shark::GetY()
{
    return y;
}

bool Shark::GetTame()
{
    return isTame;
}

char* Shark::GetHab()
{
    return hab;
}
