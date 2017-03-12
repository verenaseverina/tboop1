#include "Hippopotamus.h"
#include <cstdlib>

Hippopotamus::Hippopotamus(int x, int y, int id) : LWAnimal(x,y,id)
{
	interaction = "Kiiiaaa";
   	srand(time(NULL));
    myWeight = 20 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(90-20)));
    howMuchIEat = 7.23*myWeight/100;
    whatIEat = "h";
    isTame = true;
}

void Hippopotamus::interact()
{
	return this->interaction;
}