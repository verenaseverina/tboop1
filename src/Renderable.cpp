#include "Renderable.h"
using namespace std;

void Renderable::Render(Zoo& virtualzoo)
{
	for (int i = 0; i < virtualzoo.GetHeight(); i++)
	{
		for (int j = 0; j < virtualzoo.GetWidth(); j++)
		{
			if (IsThereAnimal(virtualzoo, i, j) != -999)
			{
				int idx = IsThereAnimal(virtualzoo, i, j);
				int anidx = FindAnimal(virtualzoo,idx,i,j);
				cout << virtualzoo.GetCages()[idx].GetAnimal()[anidx]->GetContent();
			}
			else
			{
				cout << virtualzoo.GetMap()[i][j]->GetCellContent();
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
	while ((i < virtualzoo.GetCages().size()) && (!found))
	{
		while ((j < virtualzoo.GetCages()[i].GetSize()) && (!found))
		{
			if ((virtualzoo.GetCages()[i].GetAnimal()[j]->GetX() == x) && (virtualzoo.GetCages()[i].GetAnimal()[j]->GetY() == y))
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
	while ((k < virtualzoo.GetCages()[i].GetSize()) && (!found))
	{
		if ((virtualzoo.GetCages()[i].GetAnimal()[k]->GetX() == x) && (virtualzoo.GetCages()[i].GetAnimal()[k]->GetY() == y))
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