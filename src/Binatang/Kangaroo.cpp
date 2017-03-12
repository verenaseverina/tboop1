#include "Kangaroo.h"
#include <cstdlib>

Kangaroo::Kangaroo(int x, int y, int id) : LandAnimal(x,y,id)
{
	interaction = "Cuitttt";
   	srand(time(NULL));
    myWeight = 110 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(200-110)));
    howMuchIEat = (0.04 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(0.09-0.04)))) * myWeight;
    whatIEat = 'h';
    isTame = true;
}

void Kangaroo::interact()
{
	return this->interaction;
}
