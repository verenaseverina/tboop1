//File: Zoo.h

#ifndef ZOO_H
#define ZOO_H

class Zoo
{
public:
	Zoo(State mapstate)
	{
		for(int i=0;i<mapstate.height;i++)
		{
			map[i]=new Cell[mapstate.height];
		}
		
	}
	
	void Zoo::DefineCages()
	{
		char key=map[0][0].content;
		int n=0;
		int i=0, int j=0;
		while(i!=height && j!=width)
		{
			while(map[i][j].content!="cagekey"&&!InCages(map[i][j])&&i<width)
			{
				j=0;
				while(map[i][j].content!="cagekey"&&!InCages(map[i][j])&&j<width)
				{
					j++;
				}
				i++;
			}
			key=map[i][j].content;
			cages[n]=new Cage(key,i,j);
			n++;
		}
	}

	GetHeight()
	{
		return(height);
	}
	
	GetWidth()
	{
		return(width);
	}
}