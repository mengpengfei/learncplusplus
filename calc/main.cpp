#include <iostream>
#include "stdio.h"
#include "cmaketest/head.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    int a = 20;
    int b = 12;
    printf("a=%d,b=%d\n",a,b);
    printf("%d add %d = %d\n",a,b, add(a,b));
    printf("%d sub %d = %d \n",a,b, subtract(a,b));

    return 0;
}
