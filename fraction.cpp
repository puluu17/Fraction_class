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

//Mutator
void fraction::setnumerator(int n) {
    num = n;
}
void fraction::setdenominator(int d) {
    denom = d;
}

//Accessor
int fraction::getnumerator() {
    return num;
}

int fraction::getdenominator() {
    return denom;
}