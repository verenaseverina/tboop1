#include "animal.h"

Animal::Animal(int _x,int _y, int id,char con){
  x = _x;
  y = _y;
  cage_id = id;
  content = con;

  switch(animal)
  {
    case 'H' :
      {
        size = 1;
        hab = new char[size];
        hab[0] = 'x';

        interaction = "Roooarrrr";
        srand(time(NULL));
        my_weight = 90 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(310-90)));
        how_much_i_eat = 0;
        what_i_eat = 'c';
        is_tame = false;
        break;
      }
    case 'B' :
      {
        size = 1;
        hab = new char[size];
        hab[0] = 'o';
                
        interaction = "Mmmm";
        srand(time(NULL));
        my_weight = 70 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(100-70)));
        how_much_i_eat = 38*my_weight/100;
        what_i_eat = 'h';
        is_tame = true;
        break;
      }
    case 'A' :
      {              
        size = 1;
        hab = new char[size];
        hab[0] = 'o';

        interaction = "Grrrr";
        srand(time(NULL));
        my_weight = 150 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(300-150)));
        how_much_i_eat = 5*my_weight/100;
        what_i_eat = 'h';
        is_tame = true;
        break;
      }
    case 'R' :
      {
        size = 1;
        hab = new char[size];
        hab[0] = 'x';
               
        interaction = "Woooo";
        srand(time(NULL));
        my_weight = 900 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(2300-900)));
        how_much_i_eat = 7.23*my_weight/100;
        what_i_eat = 'h';
        is_tame = false;
        break;
      }
    case 'D' :
      {
        size = 1;
        hab = new char[size];
        hab[0] = 'x';

        interaction = "Jummpp";
        srand(time(NULL));
        my_weight = 18 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(100-18)));
        how_much_i_eat = 0.35 * my_weight/100;
        what_i_eat = 'h';
        is_tame = true;
        break;
      }
    case 'L' :
      {
        size = 1;
        hab = new char[size];
        hab[0] = '#';

        interaction = "Cuitttt";
        srand(time(NULL));
        my_weight = 110 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(200-110)));
        how_much_i_eat = (0.04 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(0.09-0.04)))) * my_weight;
        what_i_eat = 'c';
        is_tame = true;
        break;
      }
    case 'W' :
      {
        size = 1;
        hab = new char[size];
        hab[0] = '#';

        interaction = "Wet";
        srand(time(NULL));
        my_weight = 14000 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(16000-14000)));
        how_much_i_eat = 0.0667 * my_weight;
        what_i_eat = 'c';
        is_tame = true;
        break;
      }
    case 'S' :
      {
        size = 1;
        hab = new char[size];
        hab[0] = '#';

        interaction = "Wett";
        srand(time(NULL));
        my_weight = 21500 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(30000-21500)));
        how_much_i_eat = 0.0667 * my_weight;
        what_i_eat = 'c';
        is_tame = false;
        break;
      }
    case 'K' :
      {
        size = 1;
        hab = new char[size];
        hab[0] = 'o';

        interaction = "Kiiiaaa";
        srand(time(NULL));
        my_weight = 1.2 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(1.4-1.2)));
        how_much_i_eat = my_weight;
        what_i_eat = 'o';
        is_tame = true;
        break;
      }
    case 'E' :
      {
        size = 1;
        hab = new char[size];
        hab[0] = 'o';

        interaction = "Kiiiaaa";
        srand(time(NULL));
        my_weight = 4 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(6-4)));
        how_much_i_eat = 0.4535*my_weight/4;
        what_i_eat = 'c';
        break;
      }
    case 'T' :
      {
        size = 1;
        hab = new char[size];
        hab[0] = 'o';

        interaction = "Kwwaakk";
        srand(time(NULL));
        my_weight = 0.592 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(0.760-0.592)));
        how_much_i_eat = 0.5*my_weight;
        what_i_eat = 'o';
        is_tame = true;
        break;
      }
    case 'P' :
      {
        size = 2;
        hab = new char[size];
        hab[0] = '#';
        hab[1] = 'x';

        interaction = "Sqqqaaa";
        srand(time(NULL));
        my_weight = 27 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(41-27)));
        how_much_i_eat = 0.9*my_weight/27;
        what_i_eat = 'c';
        is_tame = true;
        break;
      }
    case 'C' :
      {
        size = 2;
        hab = new char[size];
        hab[0] = 'x';
        hab[1] = '#';

        interaction = "Rrrrr";
        srand(time(NULL));
        my_weight = 400  + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(700-400)));
        how_much_i_eat = 2*my_weight/700;
        what_i_eat = 'c';
        is_tame = false;
        break;
      }
    case 'N' :
      {
        size = 2;
        hab = new char[size];
        hab[0] = 'x';
        hab[1] = '#';

        interaction = "Grooowwll";
        srand(time(NULL));
        my_weight = 1400 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(3200-1400)));
        how_much_i_eat = 40*my_weight/2400;
        what_i_eat = 'h';
        is_tame = true;
        break;
      }
  }
}

Animal& Animal::operator=(const Animal& a){
  x = a.x;
  y = a.y;
  content = a.content;
    
  size = a.size;
  hab = new char[size];
  for (int i = 0;i<size;i++)
  {
    hab[i] = a.hab[i];
  }

  cage_id = a.cage_id;
  interaction = a.interaction;
  my_weight = a.my_weight;
  how_much_i_eat = a.how_much_i_eat;
  what_i_eat = a.what_i_eat;
  is_tame = a.is_tame;
  return *this;
}

void Animal::move(int dir){
  switch(dir)
  {
    case 1: //top
    {
      y -=  1;
      break;
    }
    case 2: //right
    {
      x +=  1;
      break;
    }
    case 3: //down
    {
      y +=  1;
      break;
    }
    case 4: //left
    {
      x -=  1;
      break;
    }
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
  return my_weight;
}

float Animal::GetEat()
{
  return how_much_i_eat;
}

int Animal::GetID()
{
  return cage_id;
}

int Animal::GetWEat()
{
  return what_i_eat;
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
  return is_tame;
}

char* Animal::GetHab()
{
  return hab;
}
