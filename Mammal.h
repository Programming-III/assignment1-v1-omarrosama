#ifndef MAMMAL_H
#define MAMMAL_H
class Mammal : public Animal {
private:
    string furcolor;
public:
    Mammal();
    ~Mammal();
    Mammal(string name, int age, string furcolor);
    void display();
    string getFurcolor();
};
#endif //MAMMAL_H
