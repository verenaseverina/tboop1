#include "Shark.h"
#include <cstdlib>

Shark::Shark(int x, int y, int id) : WaterAnimal(x,y,id)
{
	interaction = "Wett";
    content='S';
   	srand(time(NULL));
    myWeight = 21500 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(30000-21500)));
    howMuchIEat = 0.0667 * myWeight;
    whatIEat = 'c';
    isTame = false;
}
Shark& Shark::operator=(const Shark& a)
{
    WaterAnimal::operator=(a);
    content=a.content;
    interaction = a.interaction;
    myWeight = a.myWeight;
    howMuchIEat = a.howMuchIEat;
    whatIEat = a.whatIEat;
    isTame = a.isTame;
    return *this;
}

char Shark::GetContent()
{
    return content;
}

string Shark::interact()
{
    return interaction;
}

float Shark::GetWeight()
{
    return myWeight;
}

float Shark::GetEat()
{
    return howMuchIEat;
}

int Shark::GetWEat()
{
    return whatIEat;
}
