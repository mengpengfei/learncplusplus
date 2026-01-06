//
// Created by root on 1/6/26.
//
#include "iostream"
#include "globalconst.h"
using namespace std;
int ext1=10;
int ext2=11;
int ext3=12;
int ext4=13;
double arctan(double x) {
    double head = x;
    int tail = 1;
    double art = 0;
    while (double(head / tail) > 1e-15) {
        art = (tail % 4 == 1) ? art + head / tail : art - head / tail;
        head *= x * x;
        tail += 2;
//        cout << "---------------" << endl;
//        cout << tail << endl;
//        cout << "---------------" << endl;
    }
    return art;
}