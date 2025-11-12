#ifndef REPTILE_H_INCLUDED
#define REPTILE_H_INCLUDED
#include <iostream>
using namespace std;
#include <string>
#include "Animal.h"
private:
    bool isVenomous;
public:
    Reptile();
    Reptile(float wingSpan);
    ~Reptile();
    bool getIsVenomus();
    void setIsVenoums();



#endif // REPTILE_H_INCLUDED
