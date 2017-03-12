#include "Queue.h"
Queue::Queue() : size(defaultsize)
{
	mem = new Cell[size];
	Head = 0;
	Tail = 0;
}

Queue::Queue(const Queue& q) : size(q.size)
{
	mem = new Cell[size];
	Head = q.Head;
	Tail = q.Tail;
	for (int i = 0; i < size; i++)
	{
		mem[i] = q.mem[i];
	}
}

Queue::~Queue()
{
	delete [] mem;
}

Queue& Queue::operator=(const Queue& q)
{
	delete [] mem;

	mem = new Cell[size];
	Head = q.Head;
	Tail = q.Tail;
	for (int i = 0; i < size; i++)
	{
		mem[i] = q.mem[i];
	}

	return *this;
}

void Queue::Add(Cell c)
{
	Tail++;
	mem[Tail] = c;
}

Cell Queue::Del()
{
	Cell retval;

	retval = mem[Head];
	Head++;
	return retval;
}

bool Queue::isEmpty()
{
	return (Head == Tail);
}

bool Queue::isInQueue(Cell c)
{
	int i = Head;
	bool found = false;
	while ((i <= Tail) && (!found))
	{
		if (mem[i] == c)
		{
			found = true;
		}
		else
		{
			i++;
		}
	}

	return found;
}