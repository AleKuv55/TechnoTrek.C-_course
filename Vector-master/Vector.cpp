//
// Created by Alexandr Kuznetsov on 31.03.2018.
//
#ifndef EXTRAPOLATION_VECTOR_CPP
#define EXTRAPOLATION_VECTOR_CPP

#include "Vector.h"

//          the code with constructors and destructors
template <typename DataT>
Vector<DataT>:: Vector(size_t capacity):
//buffer_((DataT)calloc(size_, sizeof(DataT)))
        buffer_(new DataT [capacity]{}),        // change capacity_ <-> capacity
        size_ (0),
        capacity_ (capacity)
{
    std::cout << "==========" << this << "Construct"  << "=========" << endl;
}

template <typename DataT>
Vector<DataT>:: Vector(const Vector &that):
        size_(that.size_),
        capacity_(that.capacity_),
        buffer_(new DataT [that.capacity_]{})
{
    for(int i = 0; i < capacity_; i++)
    {
        this -> buffer_[i] = that.buffer_[i];
    }
}

template <typename DataT>
Vector<DataT>:: Vector(Vector<DataT> &&that) noexcept :
        size_(that.size_),
        capacity_(that.capacity_),
        buffer_(that.buffer_)
{
    that.buffer_ = nullptr;
}
// DESTRUCTION //
template <typename DataT>
Vector<DataT>::~Vector()
{
    std::cout << "≠≠≠≠≠≠≠≠≠≠≠≠≠≠" << this << "Destruct"  << "≠≠≠≠≠≠≠≠≠≠≠≠≠≠"<< endl;
    delete[] buffer_;
    buffer_ = nullptr;

}
//          the code with fucntions

template <typename DataT>
int Vector<DataT>::push_back(DataT value)
{
    buffer_[size_++] = value;
    return 0;
}


//          the code with operators and functions for them //

template <typename DataT>
DataT& Vector<DataT>::operator[](int pos) const
{
//    if (pos > size_)
//       size_ = pos;
    return buffer_[pos];

}

template <typename DataT>
int Vector<DataT>::swap( Vector <DataT> &that)
{
    std:: swap(size_, that.size_);
    std:: swap(capacity_, that.capacity_);
    std:: swap(buffer_, that.buffer_);
    return 0;
}

template <typename DataT>
Vector<DataT>& Vector<DataT>::operator = (const Vector<DataT> &that)
{
    Vector <DataT> willdie(that);
    willdie.swap(*this);
    return *this;
}

template <typename DataT>
Vector<DataT>& Vector<DataT>::operator = (Vector && that) noexcept
{
    if (this != &that)
    {
        buffer_ = that.buffer_;
        size_ = that.size_;
        capacity_ = that.capacity_;
    }
    return *this;
}

template <typename DataT>
Vector<DataT>& Vector<DataT>::operator + (Vector <DataT> &that)
{
    Vector <DataT>& willdie(that);
    for ( int i = 0; i < capacity_; i++)
    {
        willdie[i] = (*this)[i] + (that[i]);
    }
    return willdie;
}

template <typename DataT>
Vector<DataT>& Vector<DataT>::operator * (double number)
{
    cout << "HEY";
    Vector <DataT>& willdie(*this);
    for(int i = 0; i <= capacity_ ; i++)
    {
        willdie.buffer_[i] = willdie.buffer_[i] * number;
    }
    return willdie;
}

template <typename DataT>///IN DEVELOPING
Vector<DataT>& operator * (double number,  Vector <DataT> &v)
{
    cout << "HII";
    Vector <DataT>& willdie(v);
    for(int i = 0; i <= v.capacity_ ; i++)
    {
        willdie.buffer_[i] = v.buffer_[i] * number;
    }
    return willdie;
}

template <typename DataT>
int Vector<DataT>::dump()
{
    for (int i = 0; i < capacity_; i++)
    {
        cout << "b[" << i << "] = " << buffer_[i] << endl;
    }
    return 0;
}





/*
//----------________-----------
//          FOR DUMP
int PrintfPlease(int i)
{
    printf("%d\n", i);
    return 0;
}
int PrintfPlease(double i)
{
    printf("%lg\n", i);
    return 0;
}
int PrintfPlease(char i)
{
    printf("%c\n", i);
    return 0;
}
*/
//
//
// operator [] +++
// + +++
// * +++
// constructor copy +++
// operator = && +++
// exception
#endif