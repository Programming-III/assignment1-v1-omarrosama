#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
using namespace std;
class Animal {
private:
    string name;
    int age;
    bool isHungry;
    public:
    Animal();
    ~Animal();
    Animal(string name, int age);
    virtual void display();
    virtual void feed();
    string getName();
    int getAge();
    void setAge(int age);
};

#endif
