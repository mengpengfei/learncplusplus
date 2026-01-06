//
// Created by root on 1/5/26.
//
#include "iostream"
#include "definetest.h"
using namespace std;
//https://light-city.github.io/stories_things/cpp-things/const/
void test1(){
    const int b = 10;
//    b = 0; // error
    const string s = "helloworld";
//    const int i, j = 0, 0; //error, cannt define >1 const variable
    printf("const definetest is called\n");
}

//void f(const int i){
//    i++; //error!
//}
