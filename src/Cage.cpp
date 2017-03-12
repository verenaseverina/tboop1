#include "Cage.h"

Cage::Cage(int _size, Habitat* buf) : size(_size)
{
	h = new Habitat[size];
	for (int i = 0; i < size; i++)
	{
		h[i] = buf[i];
	}
	
	float tempManyAnimal = 0.3 * size;
	int manyAnimal = floor(tempManyAnimal); // perlu casting ke int ga?
	a = new Animal[manyAnimal];
}

Cage::Cage(const Cage& c) : size(c.size)
{
	h = new Habitat[c.size];
	for (int i = 0; i < size; i++)
	{
		h[i] = c.h[i];
	}

	float tempManyAnimal = 0.3 * c.size;
	int manyAnimal = floor(tempManyAnimal); // perlu casting ke int ga?
	a = new Animal[manyAnimal];
	
}

Cage::~Cage()
{
	delete [] h;
	delete [] a;
}

Cage& Cage::operator=(const Cage& c)
{

}