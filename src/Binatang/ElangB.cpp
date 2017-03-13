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

ElangB& ElangB::operator=(const ElangB& a)
{
    AirAnimal::operator=(a);
    content=a.content;
    interaction = a.interaction;
    myWeight = a.myWeight;
    howMuchIEat = a.howMuchIEat;
    whatIEat = a.whatIEat;
    isTame = a.isTame;
    return *this;
}

char ElangB::GetContent()
{
    return content;
}

string ElangB::interact()
{
    return interaction;
}

float ElangB::GetWeight()
{
    return myWeight;
}

float ElangB::GetEat()
{
    return howMuchIEat;
}

int ElangB::GetWEat()
{
    return whatIEat;
}
