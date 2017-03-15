// File: cage.h

#ifndef CAGE_H
#define CAGE_H
#include "cell/turunancell/habitat.h"
#include "animal/animal.h"
#include "animal/turunananimal/Binatang/tiger.h"
#include "animal/turunananimal/Binatang/panda.h"
#include "animal/turunananimal/Binatang/anoa.h"
#include "animal/turunananimal/Binatang/rhino.h"
#include "animal/turunananimal/Binatang/kangaroo.h"
#include "animal/turunananimal/Binatang/dolphin.h"
#include "animal/turunananimal/Binatang/whale.h"
#include "animal/turunananimal/Binatang/shark.h"
#include "animal/turunananimal/Binatang/kelelawar.h"
#include "animal/turunananimal/Binatang/elang_botak.h"
#include "animal/turunananimal/Binatang/toucan.h"
#include "animal/turunananimal/Binatang/penguin.h"
#include "animal/turunananimal/Binatang/crocodile.h"
#include "animal/turunananimal/Binatang/hippopotamus.h"
#include "animal/turunananimal/Binatang/ostrich.h"
#include "animal/turunananimal/Binatang/kasuari.h"
#include "animal/turunananimal/Binatang/kiwi.h"
#include "animal/turunananimal/Binatang/flying_fish.h"
#include "animal/turunananimal/Binatang/pelikan.h"
#include "animal/turunananimal/Binatang/cormorants.h"
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
   * @brief Getter array of habitat
   * Mengambil array of habitat
   * @return array of habitat
   */
  Habitat* GetHabitat();
  /**
   * @brief Getter neff
   * Mengambil neff dari array of pointer to Animal
   * @return neff dari array of pointer to Animal
   */
  int GetNeff();
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
   * @brief Method IsFull
   * Mengecek apakah Cage penuh dengan Animal
   * @return boolean apakah Cage penuh dengan Animal
   */
  bool IsFull();
  /**
   * @brief Method IsEmpty
   * Mengecek apakah Cage tidak memiliki Animal
   * @return boolean apakah Cage memiliki Animal
   */
  bool IsEmpty();
  /**
   * @brief Method UpdatePosition
   * Mengupdate map dengan posisi animal baru
   */
  void UpdatePosition();
  /**
   * @brief Method InsideCage
   * Mengecek apakah sebuah habitat berada di cage
   */
  bool InsideCage(int x,int y);
private:
  Habitat* h;
  Animal** a;
  int size;
  int neff;
};
#endif
