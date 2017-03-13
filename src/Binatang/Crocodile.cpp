#include "Crocodile.h"
#include <cstdlib>

Crocodile::Crocodile(int x, int y, int id) : LWAnimal(x,y,id)
{
	interaction = "Rrrrr";
   	srand(time(NULL));
    myWeight = 400  + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(700-400)));
    howMuchIEat = 2*myWeight/700;
    whatIEat = 'c';
    isTame = false;
}

string Crocodile::interact()
{
	return this->interaction;
}