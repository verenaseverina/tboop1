#include "Cell.h"
#ifndef QUEUE_H
#define QUEUE_H
#define defaultsize 50 //

class Queue {
public:
	/**
	 * @brief Constructor.
	 * Menciptakan Queue kosong.
	 */
	Queue();

	/**
	 * @brief CopyConstructor.
	 * Membuat salinan dari Queue lain ke objek
	 * @param q adalah Queue yang hendak disalin
	 */
	Queue(const Queue& q);

	/**
	 * @brief Destructor.
	 */
	~Queue();

	/**
	 * @brief Overloading Operator "="
	 * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
	 * @param q adalah Queue yang hendak disalin
	 */
	Queue& operator=(const Queue& q);

	/**
	 * @brief Method Add
	 * Prosedur untuk menambahkan Cell pada Queue
	 * @param c adalah Cell yang akan ditambahkan ke Queue
	 */
	void Add(Cell c);

	/**
	 * @brief Method Del
	 * Prosedur untuk menghapus Cell pada Queue 
	 * @return Cell yang akan dihapus
	 */
	Cell Del();

	/**
	 * @brief Method isEmpty
	 * Mengecek apakah Queue kosong atau tidak
	 * @return boolean yang menunjukkan Queue kosong atau tidak
	 */
	bool isEmpty();

private:
	Cell* mem;
	const int size;
	int Tail;
	int Head;
};
#endif