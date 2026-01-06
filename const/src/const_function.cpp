//
// Created by root on 1/6/26.
//
#include <iostream>
#include "const_function.h"
using namespace std;

void const_f(const int i) {
//    i = 10; // error: assignment of read-only parameter ‘i’
    cout<< "---------const function---------";
    cout << i << endl;
    cout<< "---------const functione---------";
}
