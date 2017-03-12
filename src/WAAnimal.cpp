#include "WAAnimal.h"


WAAnimal::WAAnimal(int x, int y,int id) : Animal(x,y,id)
{
	hab=new char[size];
	hab[0]='#';
	hab[1]='o';
}

WAAnimal::~WAAnimal()
{
	delete [] hab;
}

