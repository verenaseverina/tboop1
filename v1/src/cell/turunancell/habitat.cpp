#include "habitat.h"

Habitat::Habitat() : Cell(-1,-1) {
  this->content = '0';
}

Habitat::Habitat(char _content, int x, int y) : Cell(x,y) {
  this->content = _content;
}

Habitat& Habitat::operator=(Cell* c) {
  content=c->GetCellContent();
  cell_id_row=c->GetCellRow();
  cell_id_col=c->GetCellCol();
  return *this;
}
