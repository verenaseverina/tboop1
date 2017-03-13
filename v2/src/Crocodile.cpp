#include "Crocodile.h"
#include <cstdlib>

Crocodile::Crocodile(int x, int y, int id)
{
    x = _x;
    y = _y;
    cageID = id;
    
    size=2;
    hab=new char[size];
    hab[0]='x';
    hab[1]='#';

	interaction = "Rrrrr";
   	srand(time(NULL));
    myWeight = 400  + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(700-400)));
    howMuchIEat = 2*myWeight/700;
    whatIEat = 'c';
    isTame = false;
}

Crocodile::~Crocodile()
{
    delete [] hab;
}

string Crocodile::interact()
{
	return this->interaction;
}


Crocodile& Crocodile::operator=(const Crocodile& a)
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

void Crocodile::move(int dir){
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

int Crocodile::GetX()
{
    return x;
}

int Crocodile::GetY()
{
    return y;
}

bool Crocodile::GetTame()
{
    return isTame;
}

char* Crocodile::GetHab()
{
    return hab;
}
