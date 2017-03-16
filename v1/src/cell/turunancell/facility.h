//file facility.h

#ifndef FACILITY_H
#define FACILITY_H

#include "../cell.h"

class Facility : public Cell{
  public:
    /**
      *@brief Constructor
      *Mengisi content pada Cell
    */
    Facility(char _content,int x, int y);
	/**
	 *  @brief Getter Entrance
	 *  Mengembalikan apakah facility = entrance
	 *  @return boolean apakah facility entrance
	 */
	bool IsEntrance();
	/**
	 *  @brief Getter Exit
	 *  Mengembalikan apakah facility = exit
	 *  @return boolean apakah facility exit
	 */
	bool IsExit();
	/**
	 *  @brief Set true untuk entrance atau exit
	 *  Memberikan nilai true untuk entrance apabila parameter 0, exit apabila parameter 1
	 *  @param n seleksi entrance atau exit yang akan di set true
	 */
	virtual void set_true(int n);
  private:
    bool entrance=false;
	bool exit=false;
};

#endif
