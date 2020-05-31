#include "container.h"

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
    new_ptr[array_size++] = object;
    delete []ptr;
    ptr = new_ptr;
}

template <typename T>
T& Container<T>::operator[](int index)
{
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
