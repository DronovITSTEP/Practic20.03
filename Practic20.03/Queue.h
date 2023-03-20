#pragma once
#include <iostream>

using namespace std;

class Queue
{
	int* Wait;
	int MaxQueueLength;
	int QueueLength;

public:
	Queue(int);		// конструктор
	~Queue();		// деструктор
	void Add(int);		// добавление элемента
	int Extract();	// извлечение элемента
	void Clear();	// очистка очереди
	bool IsEmpty(); // проверка на существование элементов в очереди
	bool IsFull();	// проверка на переполнение очереди
	int GetCount(); // кол-во элементов в очереди
	void Show();	// вывод на экран очередь
};

