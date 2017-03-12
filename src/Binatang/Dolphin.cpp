#include "Dolphin.h"
#include <cstdlib>

Dolphin::Dolphin(int x, int y, int id) : WaterAnimal(x,y,id)
{
	interaction = "Cuitttt";
   	srand(time(NULL));
    myWeight = 110 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(200-110)));
    howMuchIEat = (0.04 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(0.09-0.04)))) * myWeight;
    whatIEat = "c";
    isTame = true;
}

void Dolphin::interact()
{
	return this->interaction;
}
