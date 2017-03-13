#include "Kangaroo.h"
#include <cstdlib>

Kangaroo::Kangaroo(int x, int y, int id) : LandAnimal(x,y,id)
{
    x = _x;
    y = _y;
    cageID = id;
    
    size=1;
    hab=new char[size];
    hab[0]='x';

	interaction = "Jummpp";
   	srand(time(NULL));
    myWeight = 18 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(100-18)));
    howMuchIEat = 0.35 * myWeight/100;
    whatIEat = 'h';
    isTame = true;
}

Kangaroo::~Kangaroo()
{
    delete [] hab;
}

string Kangaroo::interact()
{
	return this->interaction;
}

Kangaroo& Kangaroo::operator=(const Kangaroo& a)
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

void Kangaroo::move(int dir){
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

int Kangaroo::GetX()
{
    return x;
}

int Kangaroo::GetY()
{
    return y;
}

bool Kangaroo::GetTame()
{
    return isTame;
}

char* Kangaroo::GetHab()
{
    return hab;
}
