#include "Penguin.h"
#include <cstdlib>

Penguin::Penguin(int x, int y, int id) : LWAnimal(x,y,id)
{
	interaction = "Sqqqaaa";
   	srand(time(NULL));
    myWeight = 27 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(41-27)));
    howMuchIEat = 0.9*myWeight/27;
    whatIEat = 'c';
    isTame = true;
}

string Penguin::interact()
{
	return this->interaction;
}