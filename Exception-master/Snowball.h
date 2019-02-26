//
// Created by Alexandr Kuznetsov on 06.04.2018.
//

#ifndef THROW_THROW_H
#define THROW_THROW_H

#include <cstdio>
#include <cstdio>
#include <iostream>

class Snowball
{
public:
    //Access_Memory "What a Muc" 5 int main() /Users/alexandrkuznetsov/CLionProjects/Snowball/main.cpp
//    char* _error_type;
    const char* _my_comment;
    int _line;
    const char* _pretty_function;
    const char* _file;
    Snowball* _cascade = nullptr;

//private:

    Snowball(const char* _my_comment, int line, const char* _pretty_function, const char* file, Snowball* cascade);

    Snowball (const Snowball &that);

    Snowball & operator = (const Snowball &that);

    int Swap(Snowball & that);

    int Dump();

};

Snowball::Snowball(const char* my_comment, int line, const char* pretty_function, const char* file, Snowball* cascade):
        _my_comment(my_comment),
        _line(line),
        _pretty_function(pretty_function),
        _file(file),
        _cascade(cascade) {}

Snowball::Snowball(const Snowball &that):
    _my_comment(that._my_comment),
    _line(that._line),
    _pretty_function(that._pretty_function),
    _file(that._file),
    _cascade(that._cascade)
{}

int Snowball::Swap(Snowball & that)
{
    std::swap(_my_comment, that._my_comment);
    std::swap(_line, that._line);
    std::swap(_pretty_function, that._pretty_function);
    std::swap(_file, that._file);
    std::swap(_cascade, that._cascade);
    return 0;
}

Snowball& Snowball::operator=(const Snowball &that)
{
    Snowball willdie(that);
    willdie.Swap(*this);
    return *this;

}
//Snowball::
int Snowball::Dump()
{
    printf("My comment is '%s'\nLine = %d\nError function is '%s'\nError file is '%s' \nPointer is %p \n\n",
           _my_comment,
           _line,
           _pretty_function,
           _file,
           _cascade);

    while( this -> _cascade != nullptr )
    {
        printf("My comment is '%s'\nLine = %d\nError function is '%s'\nError file is '%s' \nPointer is %p \n\n",
               this -> _cascade -> _my_comment,
               this -> _cascade -> _line,
               this -> _cascade -> _pretty_function,
               this -> _cascade -> _file,
               this -> _cascade -> _cascade);

        this -> _cascade = this -> _cascade -> _cascade;
    }

    return 0;
}

#endif //THROW_THROW_H
