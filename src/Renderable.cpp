#include "Renderable.h"
using namespace std;

void Renderable::Render(Zoo& virtualzoo)
{

	for (int i = 0; i < virtualzoo.GetHeight(); i++)
	{
		for (int j = 0; j < virtualzoo.GetWidth(); j++)
		{
			if ()
			{

			}
			else
			{
				cout << map[i][j].GetContent();
			}
		}
		cout << endl;
	}
}

bool Renderable::IsCage(Zoo& virtualzoo, int x, int y)
{
	int i = 0, j = 0;
	bool found = false;
	while ((i < virtualzoo.cages.size()) && (!found))
	{
		while ((j < cages[i].GetSize()) && (!found))
		{
			if ()
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