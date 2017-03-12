#include "LAAnimal.h"


LAAnimal::LAAnimal(int x, int y,int id) : Animal(x,y,id)
{
	hab=new char[size];
	hab[0]='x';
	hab[1]='o';
}

LAAnimal::~LAAnimal()
{
	delete [] hab;
}
