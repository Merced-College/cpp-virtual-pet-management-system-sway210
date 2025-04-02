#ifndef PET_H
#define PET_H

#include <string>
#include <iostream>

class Pet {
protected:
    std::string name;
    std::string species;
    int age;
    int hungerLevel;

public:
    Pet(const std::string& name, const std::string& species, int age, int hungerLevel);
    virtual ~Pet();

    // Accessors
    std::string getName() const;
    std::string getSpecies() const;
    int getAge() const;
    int getHungerLevel() const;

    // Mutators
    void setName(const std::string& name);
    void setSpecies(const std::string& species);
    void setAge(int age);
    void setHungerLevel(int level);

    // Virtual methods
    virtual void printInfo() const;
    virtual void makeSound() const;
    virtual void play();

    // Comparison
    int compareTo(const Pet& other) const;
};

#endif
