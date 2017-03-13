// File: cage.h

#ifndef CAGE_H
#define CAGE_H
#include "habitat.h"
#include "animal.h"
#include "Binatang/tiger.h"
#include "Binatang/panda.h"
#include "Binatang/anoa.h"
#include "Binatang/rhino.h"
#include "Binatang/kangaroo.h"
#include "Binatang/dolphin.h"
#include "Binatang/whale.h"
#include "Binatang/shark.h"
#include "Binatang/kelelawar.h"
#include "Binatang/elang_botak.h"
#include "Binatang/toucan.h"
#include "Binatang/penguin.h"
#include "Binatang/crocodile.h"
#include "Binatang/hippopotamus.h"
#include "Binatang/ostrich.h"
#include "Binatang/kasuari.h"
#include "Binatang/kiwi.h"
#include "Binatang/flying_fish.h"
#include "Binatang/pelikan.h"
#include "Binatang/cormorants.h"
#include <math.h>
#include <vector>

using namespace std;

class Cage {
public:
  /**
   * @brief Constructor.
   * Menciptakan Cage kosong.
   */
  Cage(int _size, vector<Habitat> &buf);

  /**
   * @brief CopyConstructor.
   * Membuat salinan dari Cage lain ke objek
   * @param c adalah Cage yang hendak disalin
   */
  Cage(const Cage& c);

  /**
   * @brief Destructor.
   */
  ~Cage();

  /**
   * @brief Overloading Operator "="
   * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit wise
   * @param c adalah Cage yang hendak disalin
   */
  Cage& operator=(const Cage& c);

  /**
   * @brief Overloading Operator "="
   * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit wise
   * @param v adalah vektor yang hendak disalin
   */
  Cage& operator=(const vector<Habitat>& v);

  /**
   * @brief Getter size
   * Mengambil size dari Cage
   * @return size dari Cage
   */
  int GetSize();

  /**
   * @brief Getter Array of pointer to Animal
   * Mengambil array of pointer to Animal
   * @return array of pointer to Animal
   */
  Animal** GetAnimal();
	
  /**
   * @brief Method addAnimal
   * Menambahkan animal ke dalam array of animal
   * @param animal jenis animal yang ingin dimasukkan ke dalam Cage
   */
  void AddAnimal(char animal, int i);

  /**
   * @brief Method containAnimals
   * Mengecek apakah terdapat animal pada Habitat tersebut
   * @param x adalah absis dari Habitat yang ingin dicek
   * @param y adalah ordinat dari Habitat yang ingin dicek
   * @return boolean apakah ada animal pada Habitat yang dicek 
   */
  bool ContainAnimal(int x, int y);
	
  /**
   * @brief Method isFull
   * Mengecek apakah Cage penuh dengan Animal
   * @return boolean apakah Cage penuh dengan Animal
   */
  bool IsFull();

  /**
   * @brief Method isEmpty
   * Mengecek apakah Cage tidak memiliki Animal
   * @return boolean apakah Cage memiliki Animal
   */
  bool IsEmpty();


private:
  Habitat* h;
  Animal** a;
  int size;
  static int neff;
};
#endif
