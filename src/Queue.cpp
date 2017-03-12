#include "Queue.h"
Queue::Queue() : size(defaultsize)
{
	mem = new Habitat[size];
	Head = 0;
	Tail = 0;
}

Queue::Queue(const Queue& q) : size(q.size)
{
	mem = new Habitat[size];
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

	mem = new Habitat[size];
	Head = q.Head;
	Tail = q.Tail;
	for (int i = 0; i < size; i++)
	{
		mem[i] = q.mem[i];
	}

	return *this;
}

void Queue::Add(Habitat h)
{
	Tail++;
	mem[Tail] = h;
}

Habitat Queue::Del()
{
	Habitat retval;

	retval = mem[Head];
	Head++;
	return retval;
}

bool Queue::isEmpty()
{
	return (Head == Tail);
}

bool Queue::isInQueue(Habitat h)
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