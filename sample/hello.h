#include <string>

/** @class Hello
  * Contoh kelas sederhana
  */
class Hello {
  public:
    /** @brief Constructor.
      * Melakukan inisialisasi kelas
      */
    Hello();
    /** @brief Mencetak isi kelas
      */
    void Print();
    /** @brief Getter untuk text
      * @return text dalam kelas.
      */
    std::string GetText();
  private:
    std::string text;
};
