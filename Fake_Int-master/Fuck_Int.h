//
// Created by Alexandr Kuznetsov on 19.04.2018.
//

#ifndef FUCK_INT_FUCK_INT_H
#define FUCK_INT_FUCK_INT_H

    //??????????????????????//

#include <iostream>

#define Lost(message)\
if (n == 0)\
{          \
std::cout << #message;\
exit(1);\
}

int n = 5;

class fnt
{
public:
    int value;

    fnt();

    fnt (const fnt &that);

    ~fnt();

    int swap(fnt &that);

    fnt & operator  = (int number);

    fnt & operator  = (const fnt &that);

    fnt & operator ++ ();

    fnt & operator -- ();

    fnt & operator += (int number);

    fnt & operator += (const fnt &that);

    fnt & operator -= (int number);

    fnt & operator -= (const fnt &that);

    fnt & operator *= (int number);

    fnt & operator *= (const fnt &that);

    int dump();

    friend std::ostream & operator << (std::ostream& out, fnt& that);

};

fnt::fnt()

{
    Lost(You lost);
    n--;
    std::cout << "Minus one, now you have " << n << " demo fnt using, be careful" << std::endl;
}

fnt::fnt(const fnt &that):
    value(that.value)
{
}

fnt::~fnt()
{
    value = 0;
}

fnt& fnt::operator = (int number)
{
    Lost(You lost);
    n--;
    std::cout << "Minus one, now you have " << n << " demo fnt using, be careful" << std::endl;

    this -> value = number;
    return *this;
}

int fnt::swap(fnt &that)
{
    std::swap(value, that.value);
    return 0;
}

fnt& fnt::operator = (const fnt &that)
{
    Lost(You lost);
    n--;
    std::cout << "Minus one, now you have " << n << " demo fnt using, be careful" << std::endl;

    fnt willdie(that);
    willdie.swap(*this);
    return (*this);
}

fnt& fnt::operator ++ ()
{
    Lost(You lost);
    n--;
    std::cout << "Minus one, now you have " << n << " demo fnt using, be careful" << std::endl;

    this -> value ++;
    return (*this);
}

fnt& fnt::operator -- ()
{
    Lost(You lost);
    n--;
    std::cout << "Minus one, now you have " << n << " demo fnt using, be careful" << std::endl;

    this -> value --;
    return (*this);
}

fnt& fnt::operator += (int number)
{
    Lost(You lost);
    n--;
    std::cout << "Minus one, now you have " << n << " demo fnt using, be careful" << std::endl;

    this -> value += number;
    return (*this);
}

fnt& fnt::operator += (const fnt &that)
{
    Lost(You lost);
    n--;
    std::cout << "Minus one, now you have " << n << " demo fnt using, be careful" << std::endl;

    this -> value += that .value;
    return (*this);
}

fnt& fnt::operator -= (int number)
{
    Lost(You lost);
    n--;
    std::cout << "Minus one, now you have " << n << " demo fnt using, be careful" << std::endl;

    this -> value -= number;
    return (*this);
}

fnt& fnt::operator -= (const fnt &that)
{
    Lost(You lost);
    n--;
    std::cout << "Minus one, now you have " << n << " demo fnt using, be careful" << std::endl;

    this -> value -= that .value;
    return (*this);
}

fnt& fnt::operator *= (int number)
{
    Lost(You lost);
    n--;
    std::cout << "Minus one, now you have " << n << " demo fnt using, be careful" << std::endl;

    this -> value *= number;
    return (*this);
}

fnt& fnt::operator *= (const fnt &that)
{
    Lost(You lost);
    n--;
    std::cout << "Minus one, now you have " << n << " demo fnt using, be careful" << std::endl;

    this -> value *= that .value;
    return (*this);
}

int fnt::dump()
{
    std::cout << value << std::endl;
    return 0;
}

std::ostream & operator << (std::ostream& out, fnt& that)
{
    out << that.value;
    return out;
}

#endif //FUCK_INT_FUCK_INT_H
