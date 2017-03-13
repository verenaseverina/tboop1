// File: animal.h

#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
using namespace std;

class Animal {
public:
  /**
   * @brief Constructor.
   * Menciptakan Animal kosong.
   */
  Animal(int _x, int _y, int id);
  /**
   * @brief Overloading Operator "="
   * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit wise
   * @param a adalah Animal yang hendak disalin
   */
  virtual Animal& operator=(const Animal& a);  
  /**
  * @brief Function interact
  * Interact pada binatang berupa string
  */
  virtual string interact() = 0;
  /**
   * @brief Procedure move
   * Pergerakan binatang dari point ke point yang dituju berdasarkan int yang dipilih
   * @param int dir adalah pilihan swicth untuk 1.moveup 2.moveright 3.movedown 4.moveleft
   */
  void move(int);

  int GetID();

  /**
  * @brief Function GetX()
  * Getter x
  */
  int GetX();
	
  /**
  * @brief Function GetY()
  * Getter y
  */
  int GetY();

  bool GetTame();

  char* GetHab();

  virtual int GetSize() = 0;

  virtual char GetContent() = 0;

protected:
  string interaction;
  char content;
  int x;
  int y;
  int cage_id;
  float my_weight;
  float how_much_i_eat; // ini dihitung dari myWeight
  char what_i_eat;
  bool is_tame;
  char* hab;
};
#endif
