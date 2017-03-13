#include "ElangB.h"
#include <cstdlib>

ElangB::ElangB(int x, int y, int id) : AirAnimal(x,y,id)
{
	interaction = "Kiiiaaa";
    content='E';
   	srand(time(NULL));
    myWeight = 4 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(6-4)));
    howMuchIEat = 0.4535*myWeight/4;
    whatIEat = 'c';
    isTame = true;
}

string ElangB::interact()
{
	return this->interaction;
}

ElangB& ElangB::operator=(const ElangB& a)
{
	AirAnimal::operator=(a);
    interaction = a.interaction;
    myWeight = a.myWeight;
    howMuchIEat = a.howMuchIEat;
    whatIEat = a.whatIEat;
    isTame = a.isTame;
    return *this;
}