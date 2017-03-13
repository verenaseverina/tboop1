#include "Penguin.h"
#include <cstdlib>

Penguin::Penguin(int x, int y, int id) : LWAnimal(x,y,id)
{
	interaction = "Sqqqaaa";
    content='P';
   	srand(time(NULL));
    myWeight = 27 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(41-27)));
    howMuchIEat = 0.9*myWeight/27;
    whatIEat = 'c';
    isTame = true;
}
Penguin& Penguin::operator=(const Penguin& a)
{
    LWAnimal::operator=(a);
    content=a.content;
    interaction = a.interaction;
    myWeight = a.myWeight;
    howMuchIEat = a.howMuchIEat;
    whatIEat = a.whatIEat;
    isTame = a.isTame;
    return *this;
}

char Penguin::GetContent()
{
    return content;
}

string Penguin::interact()
{
    return interaction;
}

float Penguin::GetWeight()
{
    return myWeight;
}

float Penguin::GetEat()
{
    return howMuchIEat;
}

int Penguin::GetWEat()
{
    return whatIEat;
}
