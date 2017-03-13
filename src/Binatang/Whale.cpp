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
Whale& Whale::operator=(const Whale& a)
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

char Whale::GetContent()
{
    return content;
}

string Whale::interact()
{
    return interaction;
}

float Whale::GetWeight()
{
    return myWeight;
}

float Whale::GetEat()
{
    return howMuchIEat;
}

int Whale::GetWEat()
{
    return whatIEat;
}
