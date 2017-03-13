#include "Penguin.h"
#include <cstdlib>

Penguin::Penguin(int x, int y, int id) : LWAnimal(x,y,id)
{
    x = _x;
    y = _y;
    cageID = id;
    
    size=2;
    hab=new char[size];
    hab[0]='#';
    hab[1]='x';

	interaction = "Sqqqaaa";
   	srand(time(NULL));
    myWeight = 27 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(41-27)));
    howMuchIEat = 0.9*myWeight/27;
    whatIEat = 'c';
    isTame = true;
}

Penguin::~Penguin()
{
    delete [] hab;
}

string Penguin::interact()
{
	return this->interaction;
}

Penguin& Penguin::operator=(const Penguin& a)
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

void Penguin::move(int dir){
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

int Penguin::GetX()
{
    return x;
}

int Penguin::GetY()
{
    return y;
}

bool Penguin::GetTame()
{
    return isTame;
}

char* Penguin::GetHab()
{
    return hab;
}
