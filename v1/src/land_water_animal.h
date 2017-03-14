// File: land_water_animal.h


#ifndef LAND_WATER_ANIMAL_H
#define LAND_WATER_ANIMAL_H
#include <string>
#include "animal.h"
using namespace std;

class LWAnimal : public Animal {
public:
  /**
   * @brief Constructor.
   * Menciptakan Land Water Animal kosong.
   */
  LWAnimal(int x, int y,int id);

  /**
   * @brief Destructor.
   */
  ~LWAnimal();

  /**
   * @brief Overloading Operator "="
   * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
   * @param a adalah Animal yang hendak disalin
   */
  virtual LWAnimal& operator=(const LWAnimal& a);
  /**
   * @brief Function interact
   * Interact pada binatang berupa string
   */
  virtual string Interact()=0;
  /**
   * @brief Procedure move
   * Pergerakan binatang dari point ke point yang dituju berdasarkan int yang dipilih
   * @param int dir adalah pilihan swicth untuk 1.moveup 2.moveright 3.movedown 4.moveleft
   */
  void Move(int);

  int GetSize();
  
  virtual char GetContent() = 0;

protected:
  const int size=2;

};
#endif
