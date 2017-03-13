#include "Rhino.h"
#include <cstdlib>

Rhino::Rhino(int x, int y, int id) : LandAnimal(x,y,id)
{
	interaction = "Woooo";
    content='R';
   	srand(time(NULL));
    myWeight = 900 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(2300-900)));
    howMuchIEat = 7.23*myWeight/100;
    whatIEat = 'h';
    isTame = false;
}

string Rhino::interact()
{
	return this->interaction;
}

Rhino& Rhino::operator=(const Rhino& a)
{
    LandAnimal::operator=(a);
    content=a.GetContent();
    interaction = a.interact();
    myWeight = a.GetWeight();
    howMuchIEat = a.GetEat();
    whatIEat = a.GetWEat();
    isTame = a.GetTame();
    return *this;
}

char Rhino::GetContent()
{
    return content;
}

string Rhino::interact()
{
    return interaction;
}

float Rhino::GetWeight()
{
    return myWeight;
}

float Rhino::GetEat()
{
    return howMuchIEat;
}

int Rhino::GetWEat()
{
    return whatIEat;
}