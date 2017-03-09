#include <iostream>
#include <fstream>
#include <string>
#include "Parsing.h"

using namespace std;

const int maxcharsperline = 512;
const int maxtokensperline = 30;
const char* const DELIMITER = " x";

void readStateFile(State* mapstate);

int main()
{
	State mapstate;

	readStateFile(&mapstate);

	for (int i = 0; i < mapstate.height; i++)
	{
		for (int j = 0; j < mapstate.width; j++)
		{
			cout << mapstate.map[i][j];
		}
		cout << endl;
	}

	return 0;
}

void readStateFile(State* mapstate)
{
	ifstream inputFile("map.txt");
	ofstream outputFile("cek.txt");

	int baris = 0;
	(*mapstate).width = 0;
	(*mapstate).height = 0;

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
				const char* token[maxtokensperline] = {};
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
				(*mapstate).height = stoi(token[0]);
				(*mapstate).width = stoi(token[1]);

				// buat matriks map sesuai dengan width dan height
				(*mapstate).map = new char* [(*mapstate).height];
				for (int k = 0; k < (*mapstate).height; k++)
				{
					(*mapstate).map[k] = new char [(*mapstate).width];
				}
			}
			else if (baris <= (*mapstate).height)
			{
				char buf[maxcharsperline];
				inputFile.getline(buf, maxcharsperline);
				outputFile << buf << endl;
				for (int l = 0; l < (*mapstate).width; l++)
				{
					(*mapstate).map[baris-1][l] = buf[l];
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
