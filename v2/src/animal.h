// File: animal.h

#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include <bits/stdc++.h>
using namespace std;

class Animal {
public:
  /**
   * @brief Constructor.
   * Menciptakan Animal kosong.
   */
  Animal(int _x, int _y, int id,char con);
  /**
   * @brief Destructor
   */
  ~Animal();
  /**
   * @brief Overloading Operator "="
   * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit wise
   * @param a adalah Animal yang hendak disalin
   */
  Animal& operator=(const Animal& a);

  /**
  * @brief Function interact
  * Interact pada binatang berupa string
  */
  string Interact();
  /**
   * @brief Procedure move
   * Pergerakan binatang dari point ke point yang dituju berdasarkan int yang dipilih
   * @param int dir adalah pilihan swicth untuk 1.moveup 2.moveright 3.movedown 4.moveleft
   */
  void move(int);
  /**
   * @brief Getter size
   * Mengambil size
   * @return size
   */
  int GetSize();
  /**
   * @brief Getter content
   * Mengambil content simbol yang mendefinisikan Animal
   * @return content simbol yang mendefinisikan Animal
   */
  char GetContent();
  /**
   * @brief Getter my_weight
   * Mengambil berat dari Animal
   * @return berat dari Animal
   */
  float GetWeight();
  /**
   * @brief Getter how_much_i_eat
   * Mengambil seberapa banyak Animal harus makan berdasarkan berat badannya
   * @return banyak Animal harus makan berdasarkan berat badannya
   */
  float GetEat();
  /**
   * @brief Getter cage_id
   * Mengambil id Cage tempat Animal berada 
   * @return id Cage tempat Animal berada
   */
  int GetID();
  /**
   * @brief Getter what_i_eat
   * Mengembalikan jenis makanan yang dimakan oleh Animal
   * @return jenis makanan yang dimakan oleh Animal
   */
  int GetWEat();
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
   * @brief Getter is_tame
   * Mengembalikan apakah Animal jinak
   * @return boolean apakah Animal jinak
   */
  bool GetTame();
  /**
   * @brief Getter hab
   * Mengembalikan hab
   * @return hab
   */
  char* GetHab();

protected:
  string interaction;
  char content;
  int x;
  int y;
  int cage_id;
  float my_weight;
  float how_much_i_eat;
  char what_i_eat;
  bool is_tame;
  char* hab;
  int size;
};
#endif
