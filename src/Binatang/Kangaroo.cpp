#include "Kangaroo.h"
#include <cstdlib>

Kangaroo::Kangaroo(int x, int y, int id) : LandAnimal(x,y,id)
{
	interaction = "Jummpp";
    content='D';
   	srand(time(NULL));
    myWeight = 18 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(100-18)));
    howMuchIEat = 0.35 * myWeight/100;
    whatIEat = 'h';
    isTame = true;
}

string Kangaroo::interact()
{
	return this->interaction;
}

Kangaroo& Kangaroo::operator=(const Kangaroo& a)
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

char Kangaroo::GetContent()
{
    return content;
}

string Kangaroo::interact()
{
    return interaction;
}

float Kangaroo::GetWeight()
{
    return myWeight;
}

float Kangaroo::GetEat()
{
    return howMuchIEat;
}

int Kangaroo::GetWEat()
{
    return whatIEat;
}