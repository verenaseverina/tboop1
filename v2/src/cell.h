// File: cell.h

#ifndef CELL_H
#define CELL_H

class Cell {
public:
  /**
   * @brief Constructor.
   Mennciptakan Cell kosong tanpa parameter.
   */
  Cell();

  /**
   * @brief Constructor.
   * Menciptakan Cell kosong dengan parameter.
   */
  Cell(int x, int y);

  /**
   * @brief CopyConstructor.
   * Membuat salinan dari Cell lain ke objek
   * @param c adalah Cell yang hendak disalin
   */
  Cell(const Cell& c);

  /**
   * @brief Destructor.
   */
  ~Cell();

  /**
   * @brief Overloading Operator "="
   * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
   * @param c adalah Cell yang hendak disalin
   */
  Cell& operator=(const Cell& c);

  /**
   * @brief Getter isi Cell
   * @return isi dari Cell
   */
  char GetCellContent();

  /**
   * @brief Getter baris dari Cell
   * @return baris dari Cell
   */
  int GetCellRow();

  /**
   * @brief Getter kolom dari Cell
   * @return kolom dari Cell
   */
  int GetCellCol();

protected:
  char content; // Untuk mengidentifikasi isi dari Cell
  int cell_id_row; // Untuk mengetahui posisi baris Cell pada matriks
  int cell_id_col; // Untuk mengetahui posisi kolom Cell pada matriks
};
#endif
