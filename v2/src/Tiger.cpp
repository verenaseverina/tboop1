#include "Tiger.h"
#include <cstdlib>

Tiger::Tiger(int x, int y, int id) : LandAnimal(x,y,id)
{
    x = _x;
    y = _y;
    cageID = id;
    
    size=1;
    hab=new char[size];
    hab[0]='x';

	interaction = "Roooarrrr";
   	srand(time(NULL));
    myWeight = 90 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(310-90)));
    howMuchIEat = 0;
    whatIEat = 'c';
    isTame = false;
}

Tiger::~Tiger()
{
    delete [] hab;
}

string Tiger::interact()
{
	return this->interaction;
}

Tiger& Tiger::operator=(const Tiger& a)
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

void Tiger::move(int dir){
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

int Tiger::GetX()
{
    return x;
}

int Tiger::GetY()
{
    return y;
}

bool Tiger::GetTame()
{
    return isTame;
}

char* Tiger::GetHab()
{
    return hab;
}
