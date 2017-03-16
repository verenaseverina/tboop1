// File: animal.h

#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include <iostream>

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
  virtual string Interact() = 0;
  /**
   * @brief Procedure move
   * Pergerakan binatang dari point ke point yang dituju berdasarkan int yang dipilih
   * @param int dir adalah pilihan swicth untuk 1.moveup 2.moveright 3.movedown 4.moveleft
   */
  void Move(int);
  /**
  * @brief Function GetID()
  * Getter cage id
  */
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
  /**
  * @brief Function GetTame()
  * Getter untuk kejinakkan hewan
  */
  bool GetTame();
  /**
  * @brief Function GetHab()
  * Getter content dari habitat animal
  */
  char* GetHab();
  /**
  * @brief Function GetSize()
  * Getter untuk jumlah content habitat
  */
  virtual int GetSize() = 0;
  /**
  * @brief Function GetContent()
  * Getter char content animal
  */
  virtual char GetContent() = 0;
  /**
  * @brief Procedure GiveFood()
  * Mengeluarkan jumlah makanan yang dimakan binatang
  */
  void GiveFood();
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
