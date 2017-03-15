//file habitat.h

#ifndef HABITAT_H
#define HABITAT_H
#include "../cell.h"

class Habitat : public Cell{
public:
  Habitat();
  /**
    *@brief Constructor
    *Mengisi content pada Cell
  */
  Habitat(char _content,int x, int y);
  Habitat& operator=(Cell* c);
};

#endif
