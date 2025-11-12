#include <iostream>
#include <ostream>
#include "Animal.h"
#include "Bird.h"
#include "Visitor.h"
#include "Enclosure.h"
#include "Mammal.h"
#include "Reptile.h"
using namespace std;

void Animal::display() {
    cout << "Animal::display()" << endl;
}
void Animal::feed() {}
int Animal::getAge() {
    return age;
}
void Animal::setAge(int age) {
    this->age = age;
}
string Animal::getName() {
    return name;
}
Animal::~Animal() {}
Animal::Animal(string name, int age) {
    this->name = name;
    this->age = age;
}
Animal::Animal() {
    this->name = "";
    this->age = 0;
}

void Enclosure::displayanimals() {
    cout << "Enclosure" << endl;
}
void Enclosure::addanimal(Animal *animal) {}
Enclosure::~Enclosure() {}
void Enclosure::setAnimal(Animal *animal) {
    this->animal = animal;
}
Animal *Enclosure::getAnimal() {
    return animal;
}
Enclosure::Enclosure(Animal *animal, int capacity) {
    this->animal = animal;
    this->capacity = capacity;
}
Enclosure::Enclosure() {
    this->animal = NULL;
    this->capacity = 0;
}

void Visitor::setticketsbought(int ticketsbought) {
    this->ticketsbought = ticketsbought;
    cout << "Visitor" << endl;
}
void Visitor::setvisitorname(string visitorname) {
    this->visitorname = visitorname;
    cout << "Visitor::setvisitorname()" << endl;
}
void Visitor::displayInfo() {
    cout << "Visitor" << endl;
}
Visitor::Visitor(string visitorname, int ticketsbought) {
    this->ticketsbought = ticketsbought;
    this->visitorname = visitorname;
    cout << "Visitor" << endl;
}

void Mammal::display() {
    cout << "Mammal" << endl;
}
string Mammal::getFurcolor() {
    return furcolor;
}
Mammal::Mammal() {
    this->furcolor = "";
    cout << "Mammal" << endl;
}
Mammal::Mammal(string name, int age, string furcolor) : Animal(name, age) {
    this->furcolor = furcolor;
}
Mammal::~Mammal() {
    cout << "Mammal delete" << endl;
}

void Bird::display() {
    cout << "Bird" << endl;
}
Bird::Bird() : Animal() {
    cout << "Bird" << endl;
}
Bird::Bird(string name, int age, float wingspan) : Animal(name, age) {
    this->wingspan = wingspan;
}
float Bird::getWingspan() {
    return wingspan;
}
Bird::~Bird() {
    wingspan = 0;
    cout << "Bird delete" << endl;
}
void Reptile::display() {
    cout << "Reptile" << endl;
}
bool Reptile::getIsvenomous() {
    return isvenomous;
}
Reptile::Reptile() : Animal() {
    this->isvenomous = false;
}
Reptile::Reptile(string name, int age, bool isvenomous) : Animal(name, age) {
    this->isvenomous = isvenomous;
}
Reptile::~Reptile() {
    cout << "Reptile not venom" << endl;
}

int main() {
    Animal* a1 = new Animal("Lion", 5);
    Mammal* m1 = new Mammal("Tiger", 4, "Orange");
    Bird* b1 = new Bird("Parrot", 2, 0.5);
    Reptile* r1 = new Reptile("Snake", 3, true);

    a1->display();
    m1->display();
    b1->display();
    r1->display();

    Visitor visitor("Omar", 2);
    visitor.displayInfo();

    Enclosure enclosure;
    enclosure.setAnimal(a1);
    enclosure.displayanimals();
    cout << enclosure.getAnimal()->getName() << endl;
    delete a1;
    delete m1;
    delete b1;
    delete r1;
    
    return 0;
}
