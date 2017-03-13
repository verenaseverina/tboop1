#include "Whale.h"
#include <cstdlib>

Whale::Whale(int x, int y, int id) : WaterAnimal(x,y,id)
{
	interaction = "Wet";
    content='W';
   	srand(time(NULL));
    myWeight = 14000 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(16000-14000)));
    howMuchIEat = 0.0667 * myWeight;
    whatIEat = 'c';
    isTame = true;
}

string Whale::interact()
{
	return this->interaction;
}

Whale& Whale::operator=(const Whale& a)
{
	WaterAnimal::operator=(a);
    interaction = a.interaction;
    myWeight = a.myWeight;
    howMuchIEat = a.howMuchIEat;
    whatIEat = a.whatIEat;
    isTame = a.isTame;
    return *this;
}