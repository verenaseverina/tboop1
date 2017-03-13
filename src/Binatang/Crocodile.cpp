#include "Crocodile.h"
#include <cstdlib>

Crocodile::Crocodile(int x, int y, int id) : LWAnimal(x,y,id)
{
	interaction = "Rrrrr";
    content='C';
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

Crocodile& Crocodile::operator=(const Crocodile& a)
{
	LWAnimal::operator=(a);
    interaction = a.interaction;
    myWeight = a.myWeight;
    howMuchIEat = a.howMuchIEat;
    whatIEat = a.whatIEat;
    isTame = a.isTame;
    return *this;
}