#include "Tiger.h"
#include <cstdlib>

Tiger::Tiger(int x, int y, int id) : LandAnimal(x,y,id)
{
	interaction = "Roooarrrr";
    content='H';
   	srand(time(NULL));
    myWeight = 90 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(310-90)));
    howMuchIEat = 0;
    whatIEat = 'c';
    isTame = false;
}

string Tiger::interact()
{
	return this->interaction;
}

Tiger& Tiger::operator=(const Tiger& a)
{
	LandAnimal::operator=(a);
    interaction = a.interaction;
    myWeight = a.myWeight;
    howMuchIEat = a.howMuchIEat;
    whatIEat = a.whatIEat;
    isTame = a.isTame;
    return *this;
}