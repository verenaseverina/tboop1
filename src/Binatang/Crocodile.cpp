#include "Crocodile.h"
#include <cstdlib>

Crocodile::Crocodile(int x, int y, int id) : LWAnimal(x,y,id)
{
	interaction = "Rrrrr";
    content='C';
   	srand(time(NULL));
    myWeight = 400  + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(700-400)));
    howMuchIEat = 2*myWeight/700;
    whatIEat = 'c';
    isTame = false;
}

string Crocodile::interact()
{
	return this->interaction;
}

Crocodile& Crocodile::operator=(const Crocodile& a)
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

char Crocodile::GetContent()
{
    return content;
}

string Crocodile::interact()
{
    return interaction;
}

float Crocodile::GetWeight()
{
    return myWeight;
}

float Crocodile::GetEat()
{
    return howMuchIEat;
}

int Crocodile::GetWEat()
{
    return whatIEat;
}