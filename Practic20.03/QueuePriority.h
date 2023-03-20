#pragma once
#include <iostream>
using namespace std;
class QueuePriority
{
	int* Wait;				// очередь
	int* Pri;				// приоритет
	int MaxQueueLength;
	int QueueLength;

public:
	QueuePriority(int);		// конструктор
	~QueuePriority();		// деструктор
	void Add(int, int);			// добавление элемента
	int Extract();			// извлечение элемента
	void Clear();			// очистка очереди
	bool IsEmpty();			// проверка на существование элементов в очереди
	bool IsFull();			// проверка на переполнение очереди
	int GetCount();			// кол-во элементов в очереди
	void Show();			// вывод на экран очередь
};

