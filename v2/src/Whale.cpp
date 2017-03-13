#include "Whale.h"
#include <cstdlib>

Whale::Whale(int x, int y, int id)
{
    x = _x;
    y = _y;
    cageID = id;
    
    size=1;
    hab=new char[size];
    hab[0]='#';

	interaction = "Wet";
   	srand(time(NULL));
    myWeight = 14000 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(16000-14000)));
    howMuchIEat = 0.0667 * myWeight;
    whatIEat = 'c';
    isTame = true;
}

Whale::~Whale()
{
    delete [] hab;
}

string Whale::interact()
{
	return this->interaction;
}

Whale& Whale::operator=(const Whale& a)
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

void Whale::move(int dir){
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

int Whale::GetX()
{
    return x;
}

int Whale::GetY()
{
    return y;
}

bool Whale::GetTame()
{
    return isTame;
}

char* Whale::GetHab()
{
    return hab;
}
