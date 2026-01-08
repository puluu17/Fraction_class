#include<iostream>
#include "fraction.h"
using namespace std;

int main() {

    fraction f1;
    fraction f2(3);
    fraction f3(4,5);

    f1.output();
    (f3-f2).output();

    ++f2;
    f2.output();

    return 0;
}