#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	srand(time(NULL));	
    float howMuchIEat = 2 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(8-2)));
    cout<<howMuchIEat<<endl;
    return 0;
}