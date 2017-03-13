#include "Kelelawar.h"
#include <cstdlib>

Kelelawar::Kelelawar(int x, int y, int id) : AirAnimal(x,y,id)
{
	interaction = "Kiiiaaa";
   	srand(time(NULL));
    myWeight = 1.2 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(1.4-1.2)));
    howMuchIEat = myWeight;
    whatIEat = 'o';
    isTame = true;
}

string Kelelawar::interact()
{
	return this->interaction;
}

Kelelawar& Kelelawar::operator=(const Kelelawar& a)
{
	AirAnimal::operator=(a);
    interaction = a.interaction;
    myWeight = a.myWeight;
    howMuchIEat = a.howMuchIEat;
    whatIEat = a.whatIEat;
    isTame = a.isTame;
    return *this;
}