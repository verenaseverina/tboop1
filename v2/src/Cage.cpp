#include "Cage.h"
#include <bits/stdc++.h>
using namespace std;

int Neff = -1;

Cage::Cage(int _size, vector<Habitat> buf) : size(buf.size())
{
	h = new Habitat[buf.size()];
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

void Cage::addAnimal(char animal, int i)
{	
	int posid;
	srand(time(NULL));
	do
	{
		posid = rand() % size;
	} while (!containAnimal(h[posid].GetCellRow(), h[posid].GetCellCol()));

	a[Neff++] = new Animal(h[posid].GetCellRow(), h[posid].GetCellCol(), i,animal);
}

bool Cage::containAnimal(int x, int y)
{
	float tempManyAnimal = 0.3 * size;
	int manyAnimal = floor(tempManyAnimal);
	bool found = false;
	int i = 0;

	while ((i < manyAnimal) && (!found))
	{
		if ((x == a[i]->GetX()) && (y == a[i]->GetY()))
		{
			found = true;
		}
		else
		{
			i++;
		}
	}

	return found;
}

bool Cage::isFull()
{
	float tempManyAnimal = 0.3 * size;
	int manyAnimal = floor(tempManyAnimal);
	return (manyAnimal == Neff);
}

bool Cage::isEmpty()
{
	return (Neff == -1);
}