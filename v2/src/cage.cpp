#include "cage.h"
#include <bits/stdc++.h>
using namespace std;

int neff = -1;

Cage::Cage(int _size, vector<Habitat> buf) : size(buf.size())
{
	h = new Habitat[buf.size()];
	for (int i = 0; i < size; i++)
	{
		h[i] = buf[i];
	}
	
	float temp_many_animal = 0.3 * size;
	int many_animal = floor(temp_many_animal); // perlu casting ke int ga?
	a = new Animal*[many_animal];
}

Cage::Cage(const Cage& c) : size(c.size)
{
	h = new Habitat[c.size];
	int i;
	for (i = 0; i < size; i++)
	{
		h[i] = c.h[i];
	}

	float temp_many_animal = 0.3 * c.size;
	int many_animal = floor(temp_many_animal); // perlu casting ke int ga?
	a = new Animal*[many_animal];

	for (i = 0; i < many_animal; i++)
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

	float temp_many_animal = 0.3 * c.size;
	int many_animal = floor(temp_many_animal); // perlu casting ke int ga?
	a = new Animal*[many_animal];

	for (i = 0; i < many_animal; i++)
	{
		a[i] = c.a[i];
	}

	return *this;
}

void Cage::AddAnimal(char animal, int i)
{	
	int posid;
	srand(time(NULL));
	do
	{
		posid = rand() % size;
	} while (!ContainAnimal(h[posid].GetCellRow(), h[posid].GetCellCol()));

	a[neff++] = new Animal(h[posid].GetCellRow(), h[posid].GetCellCol(), i,animal);
}

bool Cage::ContainAnimal(int x, int y)
{
	float temp_many_animal = 0.3 * size;
	int many_animal = floor(temp_many_animal);
	bool found = false;
	int i = 0;

	while ((i < many_animal) && (!found))
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

bool Cage::IsFull()
{
	float temp_many_animal = 0.3 * size;
	int many_animal = floor(temp_many_animal);
	return (many_animal == neff);
}

bool Cage::IsEmpty()
{
	return (neff == -1);
}