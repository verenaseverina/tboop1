#include "Panda.h"
#include <cstdlib>

Panda::Panda(int x, int y, int id) : LandAnimal(x,y,id)
{
	interaction = "Mmmm";
    content='B';
   	srand(time(NULL));
    myWeight = 70 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(100-70)));
    howMuchIEat = 38*myWeight/100;
    whatIEat = 'h';
    isTame = true;
}

string Panda::interact()
{
	return this->interaction;
}

Panda& Panda::operator=(const Panda& a)
{
	LandAnimal::operator=(a);
    interaction = a.interaction;
    myWeight = a.myWeight;
    howMuchIEat = a.howMuchIEat;
    whatIEat = a.whatIEat;
    isTame = a.isTame;
    return *this;
}