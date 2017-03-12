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
	repeat
	{
		posid = rand() % size;
	} until (!containAnimal(h[posid].cell_id_row, h[posid].cell_id_col));

	switch(animal)
	{
		case 'H' :
			a[Neff++] = new Tiger(h[posid].cell_id_row, h[posid].cell_id_col, i);
		case 'B' :
			a[Neff++] = new Panda(h[posid].cell_id_row, h[posid].cell_id_col, i);
		case 'A' :
			a[Neff++] = new Anoa(h[posid].cell_id_row, h[posid].cell_id_col, i);
		case 'R' :
			a[Neff++] = new Rhino(h[posid].cell_id_row, h[posid].cell_id_col, i);
		case 'D' :
			a[Neff++] = new Kangaroo(h[posid].cell_id_row, h[posid].cell_id_col, i);
		case 'L' :
			a[Neff++] = new Dolphin(h[posid].cell_id_row, h[posid].cell_id_col, i);
		case 'W' :
			a[Neff++] = new Whale(h[posid].cell_id_row, h[posid].cell_id_col, i);
		case 'S' :
			a[Neff++] = new Shark(h[posid].cell_id_row, h[posid].cell_id_col, i);
		case 'K' :
			a[Neff++] = new Bat(h[posid].cell_id_row, h[posid].cell_id_col, i);
		case 'E' :
			a[Neff++] = new Eagle(h[posid].cell_id_row, h[posid].cell_id_col, i);
		case 'T' :
			a[Neff++] = new Toucan(h[posid].cell_id_row, h[posid].cell_id_col, i);
		case 'P' :
			a[Neff++] = new Penguin(h[posid].cell_id_row, h[posid].cell_id_col, i);
		case 'C' :
			a[Neff++] = new Crocodile(h[posid].cell_id_row, h[posid].cell_id_col, i);
		case 'N' :
			a[Neff++] = new Hippo(h[posid].cell_id_row, h[posid].cell_id_col, i);
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
		if ((x == a[i].x) && (y == a[i].y))
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