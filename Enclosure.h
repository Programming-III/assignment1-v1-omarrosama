#ifndef ENCLOSURE_H
#define ENCLOSURE_H
#include "Animal.h"
class Enclosure {
    private:
    Animal* animal;
    int capacity;
    int currentcount;
    public:
    Enclosure();
    ~Enclosure();
    void setAnimal(Animal*);
    Animal* getAnimal();
    Enclosure(Animal* animal, int capacity);
    void addanimal(Animal* animal);
    void displayanimals();
};
#endif
