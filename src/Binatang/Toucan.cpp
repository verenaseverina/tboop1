#include "Toucan.h"
#include <cstdlib>

Toucan::Toucan(int x, int y, int id) : AirAnimal(x,y,id)
{
	interaction = "Kwwaakk";
    content='T';
   	srand(time(NULL));
    myWeight = 0.592 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(0.760-0.592)));
    howMuchIEat = 0.5*myWeight;
    whatIEat = 'o';
    isTame = true;
}
Toucan& Toucan::operator=(const Toucan& a)
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

char Toucan::GetContent()
{
    return content;
}

string Toucan::interact()
{
    return interaction;
}

float Toucan::GetWeight()
{
    return myWeight;
}

float Toucan::GetEat()
{
    return howMuchIEat;
}

int Toucan::GetWEat()
{
    return whatIEat;
}
