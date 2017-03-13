#include "Toucan.h"
#include <cstdlib>

Toucan::Toucan(int x, int y, int id) : AirAnimal(x,y,id)
{
	interaction = "Kwwaakk";
    content='T';
   	srand(time(NULL));
    myWeight = 0.592 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(0.760-0.592)));
    howMuchIEat = 0.5*myWeight;
    whatIEat = 'o';
    isTame = true;
}

string Toucan::interact()
{
	return this->interaction;
}

Toucan& Toucan::operator=(const Toucan& a)
{
	AirAnimal::operator=(a);
    interaction = a.interaction;
    myWeight = a.myWeight;
    howMuchIEat = a.howMuchIEat;
    whatIEat = a.whatIEat;
    isTame = a.isTame;
    return *this;
}