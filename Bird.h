#ifndef BIRD_H
#define BIRD_H
class Bird :public Animal {
private:
    float wingspan;
public:
    Bird();
    ~Bird();
    Bird(string name, int age, float wingspan);
    void display();
    float getWingspan();
};
#endif //BIRD_H
