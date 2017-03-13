#include "Hippopotamus.h"
#include <cstdlib>

Hippopotamus::Hippopotamus(int x, int y, int id) : LWAnimal(x,y,id)
{
	interaction = "Grooowwll";
   	srand(time(NULL));
    myWeight = 1400 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(3200-1400)));
    howMuchIEat = 40*myWeight/2400;
    whatIEat = 'h';
    isTame = true;
}

string Hippopotamus::interact()
{
	return this->interaction;
}