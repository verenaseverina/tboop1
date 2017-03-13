#include "Toucan.h"
#include <cstdlib>

Toucan::Toucan(int x, int y, int id) : AirAnimal(x,y,id)
{
	interaction = "Kwwaakk";
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