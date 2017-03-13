#include "State.h"

using namespace std;

State::State()
{
	ifstream inputFile("map.txt");
	ofstream outputFile("cek.txt");

	int baris = 0;
	width = 0;
	height = 0;

	if (outputFile.is_open())
	{
		while (inputFile.good())
		{
			if (baris == 0)
			{
				// membaca width dan height map dari peta
				char buf[maxcharsperline];
				inputFile.getline(buf, maxcharsperline);
				int n = 0;
				const char* token[maxtokensperline];
				token[0] = strtok(buf, DELIMITER);
				if (token[0])
				{
					for (n = 1; n < maxtokensperline; n++)
					{
						token[n] = strtok(0, DELIMITER);
							if (!token[n])
							{
								break;
							}
					}
				}	
				for (int i = 0; i < n; i++)
				{
					outputFile << token[i] << " ";
				}
				outputFile << endl;
				height = stoi(token[0]);
				width = stoi(token[1]);

				// buat matriks map sesuai dengan width dan height
				map = new char* [height];
				for (int k = 0; k < height; k++)
				{
					map[k] = new char [width];
				}
			}
			else if (baris <= height)
			{
				char buf[maxcharsperline];
				inputFile.getline(buf, maxcharsperline);
				outputFile << buf << endl;
				for (int l = 0; l < width; l++)
				{
					map[baris-1][l] = buf[l];
				}
			}
			else
			{
				char buf[maxcharsperline];
				inputFile.getline(buf, maxcharsperline);
				outputFile << buf << endl;
			}
			/* else{} siapa tau mau taro legendanya di map.txt */
			baris++;
		}
		outputFile.close();
	}
}

char** State::GetMap()
{
	return map;
}

int State::GetHeight()
{
	return height;
}

int State::GetWidth()
{
	return width;
}
