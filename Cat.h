#ifndef CAT_H
#define CAT_H

#include "Pet.h"

class Cat : public Pet {
private:
    std::string favoriteToy;

public:
    Cat(const std::string& name, int age, int hungerLevel, const std::string& favoriteToy);
    
    void printInfo() const override;
    void makeSound() const override;
    void play() override;
    void purr() const;
};

#endif
