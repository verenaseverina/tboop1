#include "Anoa.h"
#include <cstdlib>

Anoa::Anoa(int x, int y, int id) : LandAnimal(x,y,id)
{
	interaction = "Grrrr";
   	srand(time(NULL));
    myWeight = 150 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(300-150)));
    howMuchIEat = 5*myWeight/100;
    whatIEat = 'h';
    isTame = true;
}

string Anoa::interact()
{
	return this->interaction;
}

Anoa& Anoa::operator=(const Anoa& a)
{
	LandAnimal::operator=(a);
    interaction = a.interaction;
    myWeight = a.myWeight;
    howMuchIEat = a.howMuchIEat;
    whatIEat = a.whatIEat;
    isTame = a.isTame;
    return *this;
}