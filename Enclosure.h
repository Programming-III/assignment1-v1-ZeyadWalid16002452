#ifndef ENCLOSURE_H_INCLUDED
#define ENCLOSURE_H_INCLUDED
#include <iostream>
using namespace std;
#include <string>
#include"Animal.h"
#include"Mammal.h"
#include"Bird.h"
#include"Reptile.h"
private:
    Animal* a;
    int capacity;
    int currentCount;
public:
    Enclosure();
    Enclosure(Animal* a,int capacity,int currentCount);
    ~Enclosure();
    void addAnimal(Animal* a);
    void displayAnimals();
    Animal geta;
    void seta;
    int getCapacity;
    void setCapacity;
    int getCurrentCount;
    void setCurrentCount;
#endif // ENCLOSURE_H_INCLUDED
