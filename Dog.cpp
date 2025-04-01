#include "Dog.h"

// Default constructor
Dog::Dog() : Pet(), breed("Unknown") {}

// Constructor with parameters
Dog::Dog(const std::string& name, const std::string& species, int age, int hungerLevel, const std::string& breed)
    : Pet(name, species, age, hungerLevel), breed(breed) {}

// Setter for breed
void Dog::setBreed(const std::string& breed) {
    this->breed = breed;
}

// Getter for breed
std::string Dog::getBreed() const {
    return breed;
}

// Override printInfo
void Dog::printInfo() const {
    Pet::printInfo(); // Call base class printInfo
    std::cout << "Breed: " << breed << std::endl;
}

// Override makeSound
void Dog::makeSound() const {
    std::cout << "Woof! Woof!" << std::endl;
}