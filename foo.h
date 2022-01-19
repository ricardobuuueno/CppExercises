#ifndef foo_h
#define foo_h

#include <iostream>

template<typename T>
class Foo {
    T _val;
public:
    T getValue();
    void setValue(T val);
};

#include "foo.cpp"

#endif