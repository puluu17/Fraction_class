#ifndef FRACTION_H
#define FRACTION_H

class fraction {

public:
    // Constructors
    fraction();                
    fraction(int n);             
    fraction(int n, int d);     

    //Mutator
    void setnumerator(int n);
    void setdenominator(int d);

    //Accessor
    int getnumerator();
    int getdenominator();

    void output();

    

private:
    int num;    
    int denom;  
};

#endif // FRACTION_H