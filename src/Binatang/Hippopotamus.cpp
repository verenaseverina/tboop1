#include "Hippopotamus.h"
#include <cstdlib>

Hippopotamus::Hippopotamus(int x, int y, int id) : LWAnimal(x,y,id)
{
	interaction = "Grooowwll";
    content='N';
   	srand(time(NULL));
    myWeight = 1400 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(3200-1400)));
    howMuchIEat = 40*myWeight/2400;
    whatIEat = 'h';
    isTame = true;
}

string Hippopotamus::interact()
{
	return this->interaction;
}

Hippopotamus& Hippopotamus::operator=(const Hippopotamus& a)
{
    LWAnimal::operator=(a);
    content=a.GetContent();
    interaction = a.interact();
    myWeight = a.GetWeight();
    howMuchIEat = a.GetEat();
    whatIEat = a.GetWEat();
    isTame = a.GetTame();
    return *this;
}

char Hippopotamus::GetContent()
{
    return content;
}

string Hippopotamus::interact()
{
    return interaction;
}

float Hippopotamus::GetWeight()
{
    return myWeight;
}

float Hippopotamus::GetEat()
{
    return howMuchIEat;
}

int Hippopotamus::GetWEat()
{
    return whatIEat;
}