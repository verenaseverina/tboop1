#include "Kangaroo.h"
#include <cstdlib>

Kangaroo::Kangaroo(int x, int y, int id) : LandAnimal(x,y,id)
{
	interaction = "Jummpp";
   	srand(time(NULL));
    myWeight = 18 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(100-18)));
    howMuchIEat = 0.35 * myWeight/100;
    whatIEat = 'h';
    isTame = true;
}

string Kangaroo::interact()
{
	return this->interaction;
}

Kangaroo& Kangaroo::operator=(const Kangaroo& a)
{
	LandAnimal::operator=(a);
    interaction = a.interaction;
    myWeight = a.myWeight;
    howMuchIEat = a.howMuchIEat;
    whatIEat = a.whatIEat;
    isTame = a.isTame;
    return *this;
}