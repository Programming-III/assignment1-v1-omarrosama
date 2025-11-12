
#ifndef REPTILE_H
#define REPTILE_H
class Reptile :public Animal {
private:
    bool isvenomous;
public:
    Reptile();
    ~Reptile();
    Reptile(string name, int age, float wingspan);
    void display();
    bool getIsvenomous();
};
#endif //REPTILE_H
