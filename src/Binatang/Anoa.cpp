#include "Anoa.h"
#include <cstdlib>

Anoa::Anoa(int x, int y, int id) : LandAnimal(x,y,id)
{
	interaction = "Grrrr";
    content='A';
   	srand(time(NULL));
    myWeight = 150 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(300-150)));
    howMuchIEat = 5*myWeight/100;
    whatIEat = 'h';
    isTame = true;
}

Anoa& Anoa::operator=(const Anoa& a)
{
	LandAnimal::operator=(a);
    content=a.content;
    interaction = a.interaction;
    myWeight = a.myWeight;
    howMuchIEat = a.howMuchIEat;
    whatIEat = a.whatIEat;
    isTame = a.isTame;
    return *this;
}

char Anoa::GetContent()
{
    return content;
}

string Anoa::interact()
{
    return interaction;
}

float Anoa::GetWeight()
{
    return myWeight;
}

float Anoa::GetEat()
{
    return howMuchIEat;
}

int Anoa::GetWEat()
{
    return whatIEat;
}
