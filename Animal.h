#ifndef ANIMAL_H_INCLUDED
#define ANIMAL_H_INCLUDED
#include <iostream>
using namespace std;
#include <string>
private:
    string name;
    int age;
    bool isHungry;
public:
    Animal();
    Animal(string name, int age, bool isHungry);
    ~Animal();
    void display();
    void feed();
    string getName();
    void setName();
     int getAge();
    void setAge();
     bool getisHungry();
    void setisHungry();



#endif // ANIMAL_H_INCLUDED
