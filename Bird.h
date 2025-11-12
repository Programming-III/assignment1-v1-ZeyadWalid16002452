#ifndef BIRD_H_INCLUDED
#define BIRD_H_INCLUDED
#include <iostream>
using namespace std;
#include <string>
#include "Animal.h"
private:
    float wingSpan;
public:
    Bird();
    Bird(float wingSpan);
    ~Bird();
    float getWingSpan();
    void setWingSpan();


#endif // BIRD_H_INCLUDED

