#ifndef VISITOR_H
#define VISITOR_H
using namespace std;
#include "Animal.h"
#include <string>

class Visitor {
private:
    string visitorname;
    int ticketsbought;
    public:
    Visitor(string visitorname, int ticketsbought);
    void displayInfo();
    void setvisitorname(string visitorname);
    void setticketsbought(int ticketsbought);
};
#endif
