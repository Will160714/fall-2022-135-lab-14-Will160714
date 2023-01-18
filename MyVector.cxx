#include "MyVector.h"

template <class T>
T& MyVector<T>::operator[](int n){
    if(n < size_of_array)
        return data[n];
    return data[-1];
}

template <class T>
MyVector<T>::MyVector(){
    size_of_array = 0;
    capacity_of_array = 20;
    data = new T[capacity_of_array];
}

template <class T>
MyVector<T>::MyVector(int n){
    size_of_array = 0;
    capacity_of_array = n;
    data = new T[capacity_of_array];
}

template <class T>
int MyVector<T>::size(){
    return size_of_array;
}

template <class T>
int MyVector<T>::capacity(){
    return capacity_of_array;
}

template <class T>
bool MyVector<T>::empty(){
    if(size_of_array == 0)
        return true;
    return false;
}

template <class T>
void MyVector<T>::push_back(T x){
    if(size_of_array >= capacity_of_array){
        T* newData = new T[capacity_of_array * 2];
        size_of_array = capacity_of_array;
        for(int x = 0; x < capacity_of_array; x++){
            newData[x] = data[x];
        }
        capacity_of_array = capacity_of_array * 2;
        data = newData;
    }
    data[size_of_array] = x;
    size_of_array++;
}

template <class T>
void MyVector<T>::pop_back(){
    size_of_array --;
}

template <class T>
void MyVector<T>::pop_back(int x){
    for(int y = 0; y < x; y++){
        pop_back();
    }
}

template <class T>
void MyVector<T>::clear(){
    size_of_array = 0;
    data = new T[capacity_of_array];
}
    