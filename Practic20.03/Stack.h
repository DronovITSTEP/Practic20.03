#pragma once
#include <iostream>

using namespace std;

class Stack
{
	enum {EMPTY = -1, FULL = 20};

	char st[FULL + 1];
	int top;

public:
	Stack();			//конструктор
	void Push(char c);	// добавление элемента
	char Pop();			// извлечение элемента
	void Clear();		// очистка стека
	bool IsEmpty();		//проверка существования элементов в стеке
	bool IsFull();		//проверка на переполнение стека
	int GetCount();		// кол-во элементов в стеке
};

