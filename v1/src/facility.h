//file facility.h

#ifndef FACILITY_H
#define FACILITY_H

#include "cell.h"

class Facility : public Cell{
  public:
    /**
      *@brief Constructor
      *Mengisi content pada Cell
    */
    Facility(char _content,int x, int y);

};

#endif
