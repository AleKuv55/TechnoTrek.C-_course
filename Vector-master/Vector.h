//
// Created by Alexandr Kuznetsov on 26.03.2018.
//

#ifndef VECTOR_VECTOR_H
#define VECTOR_VECTOR_H

#define VECTOR_SIZE 4

#include <cstdio>
#include <iostream>
using namespace std;


template <typename DataT>
class Vector
{
private:
    DataT* buffer_= nullptr;
    size_t size_= 0;
    size_t capacity_ = 0;


public:
    explicit Vector(size_t capacity = VECTOR_SIZE);     //constructor

    ~Vector();

    Vector(const Vector <DataT> &that);     //copy constructor

    Vector ( Vector <DataT> &&that) noexcept;        //move semantix

    int push_back(DataT value);    //change input const DataT &value

    DataT& operator [] (int pos) const;

    Vector & operator + (Vector <DataT> &that);

    Vector & operator * (double number);

    friend Vector & operator * (double number,  Vector & v); /// IN DEVELOPING

    Vector & operator = (const Vector <DataT> &that);

    Vector & operator = (Vector && that) noexcept;

    int swap ( Vector <DataT> &that);

    int dump();

};
template <typename DataT>
Vector<DataT>& operator * (double number,  Vector <DataT> &v);
//----------________-----------
//          FOR DUMP
/*int PrintfPlease(int i);
int PrintfPlease(double i);
int PrintfPlease(char i);*/
//
//

#include "Vector.cpp"

#endif //VECTOR_VECTOR_H
