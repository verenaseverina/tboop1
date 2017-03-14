// File: cage.h

#ifndef CAGE_H
#define CAGE_H
#include "animal.h"
#include "cell.h"
#include <math.h>
#include <vector>

using namespace std;

class Cage {
public:
  /**
   * @brief Constructor.
   * Menciptakan Cage kosong.
   */
  Cage(int _size, vector<Cell> &buf);
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
  Cage& operator=(const vector<Cell>& v);
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
  Cell* GetHabitat();
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

private:
  Cell* h;
  Animal** a;
  int size;
  int neff;
};
#endif
