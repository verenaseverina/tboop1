#include "facility.h"

Facility::Facility(char _content,int x, int y) : Cell(x,y) {
  this->content = _content;
}
