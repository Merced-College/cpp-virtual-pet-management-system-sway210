#ifndef DRAGON_H
#define DRAGON_H

#include "Pet.h"

class Dragon : public Pet {
private:
    double wingspan;
    bool canBreatheFire;

public:
    Dragon(const std::string& name, int age, int hungerLevel, 
           double wingspan, bool canBreatheFire);
    
    void printInfo() const override;
    void makeSound() const override;
    void play() override;
    void fly() const;
    void breatheFire() const;
};

#endif
