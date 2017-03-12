#include "Cage.h"

int Neff = -1;

Cage::Cage(int _size, Habitat* buf) : size(_size)
{
	h = new Habitat[size];
	for (int i = 0; i < size; i++)
	{
		h[i] = buf[i];
	}
	
	float tempManyAnimal = 0.3 * size;
	int manyAnimal = floor(tempManyAnimal); // perlu casting ke int ga?
	a = new Animal*[manyAnimal];
}

Cage::Cage(const Cage& c) : size(c.size)
{
	h = new Habitat[c.size];
	int i;
	for (i = 0; i < size; i++)
	{
		h[i] = c.h[i];
	}

	float tempManyAnimal = 0.3 * c.size;
	int manyAnimal = floor(tempManyAnimal); // perlu casting ke int ga?
	a = new Animal*[manyAnimal];

	for (i = 0; i < manyAnimal; i++)
	{
		a[i] = c.a[i];
	}
}

Cage::~Cage()
{
	delete [] h;
	delete [] a;
}

Cage& Cage::operator=(const Cage& c)
{
	delete [] h;
	delete [] a;
	h = new Habitat[c.size];
	int i;
	for (i = 0; i < size; i++)
	{
		h[i] = c.h[i];
	}

	float tempManyAnimal = 0.3 * c.size;
	int manyAnimal = floor(tempManyAnimal); // perlu casting ke int ga?
	a = new Animal*[manyAnimal];

	for (i = 0; i < manyAnimal; i++)
	{
		a[i] = c.a[i];
	}

	return *this;
}

void Cage::addAnimal(char animal)
{
	switch(animal)
	{
		case 'H' :
			a[Neff++] = new Tiger;
		case 'B' :
			a[Neff++] = new Panda;
		case 'A' :
			a[Neff++] = new Anoa;
		case 'L' :
			a[Neff++] = new Dolphin;
		case 'W' :
			a[Neff++] = new Whale;
		case 'S' :
			a[Neff++] = new Shark;
		case 'K' :
			a[Neff++] = new Bat;
		case 'E' :
			a[Neff++] = new Eagle;
		case 'T' :
			a[Neff++] = new Toucan;
		case 'P' :
			a[Neff++] = new Penguin;
		case 'C' :
			a[Neff++] = new Crocodile;
		case 'N' :
			a[Neff++] = new Hippopotamus;
		//case '' :
		//case '' :
		//case '' :
		//case '' :
		//case '' :
		//case '' :
	}
}