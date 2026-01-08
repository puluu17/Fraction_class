#include <iostream>
#include "fraction.h"
using namespace std;

//Constructor
fraction::fraction() {
    num = 0;
    denom = 1;
}

fraction::fraction(int n) {
    num = n;
    denom = 1;
}

fraction::fraction(int n, int d) {
    num = n;
    denom = d;
}