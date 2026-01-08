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

void fraction::output() {
    cout << num << "/" << denom << endl;
}

//Operator Overloading
fraction operator+(fraction f1, fraction f2) {
    return fraction(
        f1.num * f2.denom + f2.num * f1.denom,
        f1.denom * f2.denom
    );
}

fraction operator-(fraction f1, fraction f2) {
    return fraction(
        f1.num * f2.denom - f2.num * f1.denom,
        f1.denom * f2.denom
    );
}

fraction operator*(fraction f1, fraction f2) {
    return fraction(
        f1.num * f2.num,
        f1.denom * f2.denom
    );
}

fraction operator/(fraction f1, fraction f2) {
    return fraction(
        f1.num * f2.denom,
        f1.denom * f2.num
    );
}

//Increment and Decrement 
fraction fraction::operator++() {
    num += denom;
    return fraction(num, denom);
}

fraction fraction::operator--() {
    num -= denom;
    return fraction(num, denom);
}

//Comparison Operators
bool operator==(fraction f1, fraction f2) {
    return (f1.num * f2.denom) == (f2.num * f1.denom);
}

bool operator!=(fraction f1, fraction f2) {
    return !(f1 == f2);
}

bool operator<(fraction f1, fraction f2) {
    return (f1.num * f2.denom) < (f2.num * f1.denom);
}

bool operator>(fraction f1, fraction f2) {
    return (f1.num * f2.denom) > (f2.num * f1.denom);
}

bool operator<=(fraction f1, fraction f2) {
    return (f1 < f2) || (f1 == f2);
}

bool operator>=(fraction f1, fraction f2) {
    return (f1 > f2) || (f1 == f2);
}