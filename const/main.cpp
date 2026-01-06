//
// Created by root on 1/5/26.
//
#include <iostream>
using namespace std;
#include "definetest.h"
#include "const_function.h"
int main() {
    printf("test start");
    test1();
    int a=1;
    const_f(a);
    return 0;
}