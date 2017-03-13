#include "Renderable.h"
using namespace std;

void Renderable::Render(Zoo& virtualzoo)
{
	for (int i = 0; i < virtualzoo.GetHeight(); i++)
	{
		for (int j = 0; j < virtualzoo.GetWidth(); j++)
		{
			if (IsThereAnimal(virtualzoo, i, j) !+ -999)
			{
				int idx = IsThereAnimal(virtualzoo, i, j);
				int anidx = FindAnimal(virtualzoo,idx,i,j);
				cout << virtualzoo.cages[idx].GetAnimal()[anidx]->GetContent();
			}
			else
			{
				cout << virtualzoo.GetMap()[i][j].GetContent();
			}
		}
		cout << endl;
	}
}

int Renderable::IsThereAnimal(Zoo& virtualzoo, int x, int y)
{
	int i = 0, j = 0;
	bool found = false;
	int cage = -999;
	while ((i < virtualzoo.cages.size()) && (!found))
	{
		while ((j < virtualzoo.cages[i].GetSize()) && (!found))
		{
			if ((virtualzoo.cages[i].GetAnimal()[j]->GetX() == x) && (virtualzoo.cages[i].GetAnimal()[j]->GetY() == y))
			{
				found = true;
				cage = i;
			}
			else
			{
				j++;
			}
		}
		i++;
	}

	return cage;
}

int Renderable::FindAnimal(Zoo& virtualzoo, int i, int x, int y)
{
	int k = 0;
	bool found = false;
	while ((k < virtualzoo.cages[i].GetSize()) && (!found))
	{
		if ((virtualzoo.cages[i].GetAnimal()[k]->GetX() == x) && (virtualzoo.cages[i].GetAnimal()[k]->GetY() == y))
		{
			found = true;
		}
		else
		{
			k++;
		}
	}

	return k;
}