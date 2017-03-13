#include "Kelelawar.h"
#include <cstdlib>

Kelelawar::Kelelawar(int x, int y, int id) : AirAnimal(x,y,id)
{
	interaction = "Kiiiaaa";
    content='K';
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

Kelalawar& Kelalawar::operator=(const Kelalawar& a)
{
    AirAnimal::operator=(a);
    content=a.GetContent();
    interaction = a.interact();
    myWeight = a.GetWeight();
    howMuchIEat = a.GetEat();
    whatIEat = a.GetWEat();
    isTame = a.GetTame();
    return *this;
}

char Kelalawar::GetContent()
{
    return content;
}

string Kelalawar::interact()
{
    return interaction;
}

float Kelalawar::GetWeight()
{
    return myWeight;
}

float Kelalawar::GetEat()
{
    return howMuchIEat;
}

int Kelalawar::GetWEat()
{
    return whatIEat;
}