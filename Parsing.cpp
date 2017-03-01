#include <iostream>
using namespace std;

const int maxcharsperline = 512;
const int maxtokensperline = 30;
const char* const DELIMITER = " ,:{}"; // ini artinya apaan sih??

typdef struct {
	char** map;
	int width;
	int height;
} State;

void readStateFile(string filePath, State* mapstate)
{
	ifstream inputFile(filePath + "/" + "map.txt");
	ofstream outputFile(filePath + "/" + "cek.txt");

	baris = 0;
	(*mapstate).width = 0;
	(*mapstate).height = 0;

	if (outputFile.is_open())
	{
		while (!inputfile.eof())
		{
			if (baris == 0)
			{
				// membaca width dan height map dari peta
				char buf[mascharsperline];
				inputFile.getline(buf, maxcharsperline);
				int n = 0;
				const char* token[maxtokensperline] = {};
				token[0] = strtok(buf, DELIMITER);
				if (token[0])
				{
					for (n = 1; n < maxtokensperline; n++)
					{
						token[n] = strtok(o, DELIMITER;
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
				(*maptate).width = stoi(token[2]);
				(*mapstate).height = stoi(token[5]);

				// buat matriks map sesuai dengan width dan height
				(*mapstate).map = new char* [(*mapstate).height];
				for (int k = 0; k <= (*mapstate).height; k++)
				{
					(*mapstate).map[k] = new char [(*mapstate).width];
				}
			}
			else if (baris <= (*mapstate).height)
			{
				char buf[mascharsperline];
				int l;

				myfile.getline(buf, maxcharsperline);
				outputFile << buf << endl;
				for (l = 0; l <= (*mapstate).width; l++)
				{
					(*mapstate).map[baris][l] = buf[l];
				}
			}
			/* else{} siapa tau mau taro legendanya di map.txt */
			baris++:
		}
		outputFile.close();
	}
}
