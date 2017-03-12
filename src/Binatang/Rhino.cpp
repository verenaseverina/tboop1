#include "Rhino.h"
#include <cstdlib>

Rhino::Rhino(int x, int y, int id) : LandAnimal(x,y,id)
{
	interaction = "Woooo";
   	srand(time(NULL));
    myWeight = 900 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(2300-900)));
    howMuchIEat = 7.23*myWeight/100;
    whatIEat = "h";
    isTame = false;
}

void Rhino::interact()
{
	return this->interaction;
}