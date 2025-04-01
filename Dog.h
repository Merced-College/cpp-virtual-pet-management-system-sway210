#ifndef DOG_H
#define DOG_H

#include "Pet.h" // Assuming Pet is the base class

#include <string>
#include <iostream>

class Dog : public Pet {
private:
    std::string breed;

public:
    // Default constructor
    Dog();

    // Constructor with parameters
    Dog(const std::string& name, const std::string& species, int age, int hungerLevel, const std::string& breed);

    // Setter for breed
    void setBreed(const std::string& breed);

    // Getter for breed
    std::string getBreed() const;

    // Override printInfo
    void printInfo() const override;

    // Override makeSound
    void makeSound() const override;
};

#endif // DOG_H