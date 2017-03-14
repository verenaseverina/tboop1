//File: zoo.h

#ifndef ZOO_H
#define ZOO_H

#include <vector>
#include "state.h"
#include "cage.h"
#include "cell.h"
#include "habitat.h"
#include "facility.h"
class Zoo
{
public:
  /**
   * @brief Constructor.
   * Menginisialisasi map dan cage.
   */
  Zoo();
  /**
      * @brief Destructor
      * Melakukan dealokasi pada cage dan map
      */ 
  ~Zoo();
  /**
   * @brief Method GetAllCage
      * Mengisi semua cage dari input state
   * @param s adalah kelas state yang berisi map zoo 
   */
  void GetAllCage(State& s);
  /**
   * @brief Method GetCage
   * Mengisi sebuah cage dengan pendekatan BFS 
   * @param h adalah koordinat awal habitat
   */
  vector<Habitat> GetCage(Cell* h);
  /**
   * @brief Method Incage
   * Mengeluarkan output apakah sebuah cage telah dikunjungi
   * @param v adalah kumpulan habitat yang telah dikunjungi
   * @param h adalah habitat yang ingin dilakukan pengecekan
   */
  bool InCage(vector<Habitat>& v, Cell* c);
  /**
   * @brief Getter Map
   * Mengembalikan matriks map dari Zoo
   * @return matriks map dari Zoo
   */
  Cell*** GetMap();
  /**
   * @brief Getter Cages
   * Mengembalikan atribut Cages dari Zoo
   * @return vektor Cages dari Zoo
   */
  vector<Cage> GetCages();
  /**
   * @brief Method GetHeight
   * Mengembalikan tinggi dari zoo
   */
  int GetHeight();
  /**
   * @brief Method GetWidth
   * Mengembalikan lebar dari zoo
   */
  int GetWidth();
  /**
   *  @brief Method IsHabitat
   *  Membandingkan apakah suatu karakter c termasuk habitat
   *  @param c adalah karakter pada map yang akan diperiksa
   *  @return boolean apakah karakter termasuk habitat
   */
  bool IsHabitat(char c);
  /**
   *  @brief Method IsFacility
   *  Membandingkan apakah suatu karakter c termasuk facility
   *  @param c adalah karakter pada map yang akan diperiksa
   *  @return boolean apakah karakter termasuk facility
   */
  bool IsFacility(char c);
  //Elemen constructor
  //Pindahin semua State ke map
  //void MasukkanAnimal();
  //void CekCage(int* arr,Animal H);
  /**
   *  @brief Method MasukkanAnimal
   *  
   *  @details More details
   */
  void MasukkanAnimal();
  /**
   *  @brief Method CekCage
   *  
   *  @param Animal 
   *  @param int* 
   *  @details More details
   */
  void CekCage(bool*, Animal*);

  void apaaja();
private:
  vector<Cage> cages;
  Cell*** map;
  int height;
  int width;
};

#endif
