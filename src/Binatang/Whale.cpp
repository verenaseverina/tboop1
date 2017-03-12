#include "Whale.h"
#include <cstdlib>

Whale::Whale(int x, int y, int id) : WaterAnimal(x,y,id)
{
	interaction = "Wet";
   	srand(time(NULL));
    myWeight = 14000 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(16000-14000)));
    howMuchIEat = 0.0667 * myWeight;
    whatIEat = 'c';
    isTame = true;
}

void Whale::interact()
{
	return this->interaction;
}
