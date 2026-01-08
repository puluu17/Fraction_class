#ifndef FRACTION_H
#define FRACTION_H

class fraction {

public:
    // Constructors
    fraction();                
    fraction(int n);             
    fraction(int n, int d);     

private:
    int num;    
    int denom;  
};

#endif // FRACTION_H