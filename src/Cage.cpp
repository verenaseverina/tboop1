#include "Cage.h"
#include <bits/stdc++.h>
using namespace std;

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

void Cage::addAnimal(char animal, int i)
{	
	int posid;
	srand(time(NULL));
	do
	{
		posid = rand() % size;
	} while (!containAnimal(h[posid].GetCellRow(), h[posid].GetCellCol()));

	switch(animal)
	{
		case 'H' :
			a[Neff++] = new Tiger(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
		case 'B' :
			a[Neff++] = new Panda(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
		case 'A' :
			a[Neff++] = new Anoa(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
		case 'R' :
			a[Neff++] = new Rhino(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
		case 'D' :
			a[Neff++] = new Kangaroo(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
		case 'L' :
			a[Neff++] = new Dolphin(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
		case 'W' :
			a[Neff++] = new Whale(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
		case 'S' :
			a[Neff++] = new Shark(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
		case 'K' :
			a[Neff++] = new Kelelawar(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
		case 'E' :
			a[Neff++] = new ElangB(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
		case 'T' :
			a[Neff++] = new Toucan(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
		case 'P' :
			a[Neff++] = new Penguin(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
		case 'C' :
			a[Neff++] = new Crocodile(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
		case 'N' :
			a[Neff++] = new Hippopotamus(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
		//case '' :
		//case '' :
		//case '' :
		//case '' :
		//case '' :
		//case '' :
	}
}

bool Cage::containAnimal(int x, int y)
{
	float tempManyAnimal = 0.3 * size;
	int manyAnimal = floor(tempManyAnimal);
	bool found = false;
	int i = 0;

	while ((i < tempManyAnimal) && (!found))
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