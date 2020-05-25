// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <iostream>
//#include "Container.h"

using namespace std;
template <typename T>
class Container
{
public:
	Container();
	virtual ~Container();
	void add(T object);
	int length();
	T& operator[](int);
	bool isEmpty();
	void clear();
protected:

private:
	int array_size = 0;
	T *ptr;

};

template <typename T>
Container<T>::Container()
{
	ptr = new T[array_size];
}
template <typename T>
void Container<T>::add(T object){
	T *new_ptr = new T[array_size + 1];
	for (int i = 0; i<array_size; i++){
		new_ptr[i] = ptr[i];
	}
	new_ptr[array_size] = object;
	array_size++;
	delete ptr;
	ptr = new_ptr;
}

template <typename T>
T& Container<T>::operator[](int index)
{
	if (index >= array_size) {
		cout << "Array index out of bound, exiting";
		exit(0);
	}
	return ptr[index];
}

template <typename T>
int Container<T>::length(){
	return array_size;
}
template <typename T>
bool Container<T>::isEmpty(){
	return array_size == 0;
}

template <typename T>
void Container<T>::clear(){
	array_size = 0;
	delete ptr;
	ptr = new T[array_size];
}
template <typename T>
Container<T>::~Container()
{
	delete ptr;
}


int main()
{
	Container<int> c;
	cout << c.isEmpty() << endl;
	c.add(77);
	c.add(45);
	c.add(78);
	//c.clear();
	for (int i = 0; i<c.length(); i++){
		cout << c[i] << "\t";
	}
	int val;
	cin >> val;
	
	

}
