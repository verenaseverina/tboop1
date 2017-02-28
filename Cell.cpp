#include "Cell.h"
#include <cstddef>

Cell::Cell()
{
	content = '\0';
	cell_id_row = 0;
	cell_id_col = 0;
}

Cell::Cell(const Cell& c)
{
	this->content = c.content;
	this->cell_id_row = c.cell_id_row;
	this->cell_id_col = c.cell_id_col;
}

Cell::~Cell()
{

}

Cell& Cell::operator=(const Cell& c)
{
	this->content = c.content;
	this->cell_id_row = c.cell_id_row;
	this->cell_id_col = c.cell_id_col;

	return *this;
}

char Cell::GetCellContent()
{
	return content;
}

int Cell::GetCellRow()
{
	return cell_id_row;
}

int Cell::GetCellCol()
{
	return cell_id_col;
}