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
	
	bool IsCage(char c)
	{
		return(c=='W'||c=='A'||c=='L');
	}
	
	bool InCages(Cell c)
	{
		int x=c.cell_id_row;
		int y=c.cell_id_col;
		int i=0
		yes=false;
		while(!yes&&cages[i].size!=0)
		{
			for(int j=0;j<cages[i].size;j++)
			{
				if(x==cages[i].h.cell_id_row&&y==cages[i].h.cell_id_col)
					yes=true;
			}
		}
		return(yes);
	}
	
	void Zoo::DefineCages()
	{
		char key=map[0][0].content;
		int n=0;
		int i=0, int j=0;
		while(i<height && j<width)
		{
			while(!IsCage(map[i][j].content)&&!InCages(map[i][j])&&i<width)
			{
				j=0;
				while(map[i][j].content!="cagekey"&&!InCages(map[i][j])&&j<height)
				{
					j++;
				}
				i++;
			}
			if(i<width&&j<height)
			{
				key=map[i][j].content;
				cages[n]=new Cage(key,i,j);
				n++;
			}
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