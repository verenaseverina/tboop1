#include "Animal.h"

Animal::Animal(int _x,int _y, int id,char con){
    x = _x;
    y = _y;
    cageID = id;
    content=con;

    switch(animal)
    {
        case 'H' :
            {
                size=1;
                hab=new char[size];
                hab[0]='x';

                interaction = "Roooarrrr";
                srand(time(NULL));
                myWeight = 90 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(310-90)));
                howMuchIEat = 0;
                whatIEat = 'c';
                isTame = false;
            }
        case 'B' :
            {
                size=1;
                hab=new char[size];
                hab[0]='o';
                
                interaction = "Mmmm";
                srand(time(NULL));
                myWeight = 70 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(100-70)));
                howMuchIEat = 38*myWeight/100;
                whatIEat = 'h';
                isTame = true;
            }
        case 'A' :
            {              
                size=1;
                hab=new char[size];
                hab[0]='o';

                interaction = "Grrrr";
                srand(time(NULL));
                myWeight = 150 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(300-150)));
                howMuchIEat = 5*myWeight/100;
                whatIEat = 'h';
                isTame = true;
            }
        case 'R' :
            {
                size=1;
                hab=new char[size];
                hab[0]='x';
               
                interaction = "Woooo";
                srand(time(NULL));
                myWeight = 900 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(2300-900)));
                howMuchIEat = 7.23*myWeight/100;
                whatIEat = 'h';
                isTame = false;
            }
        case 'D' :
            {
                size=1;
                hab=new char[size];
                hab[0]='x';

                interaction = "Jummpp";
                srand(time(NULL));
                myWeight = 18 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(100-18)));
                howMuchIEat = 0.35 * myWeight/100;
                whatIEat = 'h';
                isTame = true;
            }
        case 'L' :
            {
                size=1;
                hab=new char[size];
                hab[0]='#';

                interaction = "Cuitttt";
                srand(time(NULL));
                myWeight = 110 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(200-110)));
                howMuchIEat = (0.04 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(0.09-0.04)))) * myWeight;
                whatIEat = 'c';
                isTame = true;
            }
        case 'W' :
            {
                size=1;
                hab=new char[size];
                hab[0]='#';

                interaction = "Wet";
                srand(time(NULL));
                myWeight = 14000 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(16000-14000)));
                howMuchIEat = 0.0667 * myWeight;
                whatIEat = 'c';
                isTame = true;
            }
        case 'S' :
            {
                size=1;
                hab=new char[size];
                hab[0]='#';

                interaction = "Wett";
                srand(time(NULL));
                myWeight = 21500 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(30000-21500)));
                howMuchIEat = 0.0667 * myWeight;
                whatIEat = 'c';
                isTame = false;
            }
        case 'K' :
            {
                size=1;
                hab=new char[size];
                hab[0]='o';

                interaction = "Kiiiaaa";
                srand(time(NULL));
                myWeight = 1.2 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(1.4-1.2)));
                howMuchIEat = myWeight;
                whatIEat = 'o';
                isTame = true;
            }
        case 'E' :
            {
                size=1;
                hab=new char[size];
                hab[0]='o';

                interaction = "Kiiiaaa";
                srand(time(NULL));
                myWeight = 4 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(6-4)));
                howMuchIEat = 0.4535*myWeight/4;
                whatIEat = 'c';
            }
        case 'T' :
            {
                size=1;
                hab=new char[size];
                hab[0]='o';

                interaction = "Kwwaakk";
                srand(time(NULL));
                myWeight = 0.592 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(0.760-0.592)));
                howMuchIEat = 0.5*myWeight;
                whatIEat = 'o';
                isTame = true;
            }
        case 'P' :
            {
                size=2;
                hab=new char[size];
                hab[0]='#';
                hab[1]='x';

                interaction = "Sqqqaaa";
                srand(time(NULL));
                myWeight = 27 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(41-27)));
                howMuchIEat = 0.9*myWeight/27;
                whatIEat = 'c';
                isTame = true;
            }
        case 'C' :
            {
                size=2;
                hab=new char[size];
                hab[0]='x';
                hab[1]='#';

                interaction = "Rrrrr";
                srand(time(NULL));
                myWeight = 400  + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(700-400)));
                howMuchIEat = 2*myWeight/700;
                whatIEat = 'c';
                isTame = false;
            }
        case 'N' :
            {
                size=2;
                hab=new char[size];
                hab[0]='x';
                hab[1]='#';

                interaction = "Grooowwll";
                srand(time(NULL));
                myWeight = 1400 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(3200-1400)));
                howMuchIEat = 40*myWeight/2400;
                whatIEat = 'h';
                isTame = true;
            }
    }
}

Animal& Animal::operator=(const Animal& a){
    x= a.GetX();
    y = a.GetY();
    content=a.GetContent();
    
    size=a.GetSize();
    hab=new char[size];
    for (int i=0;i<size;i++)
    {
        hab[i]=a.GetHab()[i];
    }

    cageID = a.GetID();
    interaction = a.interact();
    myWeight = a.GetWeight();
    howMuchIEat = a.GetEat();
    whatIEat = a.GetWEat();
    isTame = a.GetTame();
    return *this;
}

void Animal::move(int dir){
    switch(dir){
    case 1: //top
        y -= 1;
        break;
    case 2: //right
        x += 1;
        break;
    case 3: //down
        y += 1;
        break;
    case 4: //left
        x -= 1;
        break;
    }
}

int Animal::GetSize()
{
    return size;
}

char Animal::GetContent()
{
    return content;
}

string Animal::interact()
{
    return this->interaction;
}

float Animal::GetWeight()
{
    return myWeight;
}

float Animal::GetEat()
{
    return howMuchIEat;
}

int Animal::GetID()
{
    return cageID;
}

int Animal::GetWEat()
{
    return whatIEat;
}

int Animal::GetX()
{
    return x;
}

int Animal::GetY()
{
    return y;
}

bool Animal::GetTame()
{
    return isTame;
}

char* Animal::GetHab()
{
    return hab;
}
