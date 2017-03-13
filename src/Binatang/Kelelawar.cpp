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

Kelelawar& Kelelawar::operator=(const Kelelawar& a)
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

char Kelelawar::GetContent()
{
    return content;
}

string Kelelawar::interact()
{
    return interaction;
}

float Kelelawar::GetWeight()
{
    return myWeight;
}

float Kelelawar::GetEat()
{
    return howMuchIEat;
}

int Kelelawar::GetWEat()
{
    return whatIEat;
}
