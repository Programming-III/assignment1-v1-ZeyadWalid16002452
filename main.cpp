#include <iostream>
using namespace std;
#include <string>
#include"Animal.h"
#include"Mammal.h"
#include"Bird.h"
#include"Reptile.h"
#include"Enclosure.h"
#include"Visitor.h"
Animal::Animal{
private:
 string name;
    int age;
    bool isHungry;
public:
     Animal(string name, int age,bool isHungry){
     this->name=name;
     this->age=age;
     this->isHungry=isHungry;
     }
    void display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Is Hungry: "<<isHungry<<endl;
    }
    void feed(){
    cout<<isHungry<<endl;}

    ~Animal()
}
Mammal::Mammal{
private:
string furColor;
public:
Mammal(string furColor){
this->furColor=furColor
}
~Mammal()

}
Bird::Bird{
private:
flot wingSpan;
public:
Bird(float wingSpan){
this->wingSpan=wingSpan
}
~Bird()
}
Reptile::Reptile{
private:
bool isVenomous;
public:
Reptile(bool isVenomous){
    this->isVenomous=isVenomous;
}
~Reptile()
}
Enclosure::Enclosure{
private:
    Animal* a;
    int capacity;
    int currentCount;
public:
    Enclosure(Animal* a, int capacity,int currentCount0){
    this->a=a;
    this->capacity=capacity;
    this->currentCount=currentCount;
    }
    void addAnimal(Animal* a){
    cout<<a<<endl;
    }
    void displayAnimals(){
    cout<<Mammal<<endl;
    cout<<Bird<<endl;
    cout<<Reptile<<endl;
    }
    ~Enclosure()
}
Visitor::Visitor{
private:
    string visitorName;
    int ticketsBought;
public:
    Visitor(string visitorName,int ticketsBought){
    this->visitorName=visitorName;
    this->ticketsBought=ticketsBought;
    }
    void displayInfo(){
    cout<<"Name: "<<visitorName<<endl;
    cout<<"Tickets Bought: "<<endl;
    }
    ~Visitor()


    }
    int main(){
       Enclosure e(2,2,2);
       Animal m("Donkey",55,true);
       Animal s("Parrot",3,false);
       Animal z("Snake",5,true);
       Visitor v("Zeyad",3);
       e.displayInfo();


    }
