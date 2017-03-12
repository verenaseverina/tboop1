#include "Tiger.h"
#include <cstdlib>

Tiger::Tiger(int x, int y, int id) : LandAnimal(x,y,id)
{
	interaction = "Roooarrrr";
   	srand(time(NULL));
    myWeight = 90 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(310-90)));
    howMuchIEat = ;
    whatIEat = "c";
    isTame = false;
}

void Tiger::interact()
{
	return this->interaction;
}