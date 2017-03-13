#include "Renderable.h"
using namespace std;

void Renderable::Render(Zoo& virtualzoo)
{

	for (int i = 0; i < virtualzoo.GetHeight(); i++)
	{
		for (int j = 0; j < virtualzoo.GetWidth(); j++)
		{
			if (IsThereAnimal(virtualzoo,))
			{
				//print animalnya di sini;
			}
			else
			{
				cout << map[i][j].GetContent();
			}
		}
		cout << endl;
	}
}

bool Renderable::IsThereAnimal(Zoo& virtualzoo, int x, int y)
{
	int i = 0, j = 0;
	bool found = false;
	while ((i < virtualzoo.cages.size()) && (!found))
	{
		while ((j < cages[i].GetSize()) && (!found))
		{
			if ((cages[i].GetAnimal()[j]->GetX() == x) && (cages[i].GetAnimal()[j]->GetY() == y))
			{
				found = true;
			}
			else
			{
				j++;
			}
		}
		i++;
	}
}