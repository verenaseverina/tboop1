 #include "cell.h"

Cell::Cell() {
  content = '\0';
  cell_id_row = -1;
  cell_id_col = -1;
}

Cell::Cell(char _content,int x, int y) {
  content = _content;
  cell_id_row = x;
  cell_id_col = y;
}

Cell::Cell(const Cell& c) {
  this->content = c.content;
  this->cell_id_row = c.cell_id_row;
  this->cell_id_col = c.cell_id_col;
}

Cell::~Cell() {

}

Cell& Cell::operator=(const Cell& c) {
  this->content = c.content;
  this->cell_id_row = c.cell_id_row;
  this->cell_id_col = c.cell_id_col;

  return *this;
}

char Cell::GetCellContent() {
  return content;
}

int Cell::GetCellRow() {
  return cell_id_row;
}

int Cell::GetCellCol() {
  return cell_id_col;
}

void Cell::set_true(int n) {
  if(n==0)
	entrance=true;
  else if(n==1)
	exit=true;
}
