#include<iostream>
#include "fraction.h"
using namespace std;

int main() {

    fraction f1;
    fraction f2(3);
    fraction f3(4,5);

    f1.output();

    (f1-f2).output();

    return 0;
}