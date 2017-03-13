#include "LWAnimal.h"


LWAnimal::LWAnimal(int x, int y,int id) : Animal(x,y,id)
{
	hab=new char[size];
	hab[0]='x';
	hab[1]='#';
}

LWAnimal::~LWAnimal()
{
	delete [] hab;
}

LWAnimal& LWAnimal::operator=(const LWAnimal& a)
{
	Animal::operator=(a);
	delete [] hab;
	hab=new char[size];
	hab[0]='x';
	hab[1]='#';
}

int LWAnimal::GetSize()
{
	return size;
}