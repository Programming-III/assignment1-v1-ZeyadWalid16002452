#ifndef VISITOR_H_INCLUDED
#define VISITOR_H_INCLUDED
#include <iostream>
using namespace std;
#include <string>
private:
    string visitorName;
    int ticketsBought;
public:
    Visitor();
    Visitor(string visitorName,int ticketsBought);
    ~Visitor();
    void displayInfo();
    string getVisitorName();
    void setVisitorName();
    int getTicketsBought();
    void setTicketsBought();


#endif // VISITOR_H_INCLUDED
