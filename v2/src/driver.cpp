#include "zoo.h"
#include <iostream>

using namespace std;

int main(){
	Zoo z;
	int x;
    do {
    	x = 1;
    	z.MasukkanAnimal();
    } while (x == 1);
	//r.Render(z);
    //cout << Cage::neff;
	cout << z.GetCages().size() << endl << z.GetHeight() << endl;
	return 0;
}
