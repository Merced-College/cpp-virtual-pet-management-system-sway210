#include <iostream>
#include "Pet.h"
#include "Dog.h"


int main() {
    Pet pet1("Rex", "Dog", 3, 6);
    Pet pet2("Whiskers", "Cat", 2, 4);

    std::cout << "Pet 1 Info:\n";
    pet1.printInfo();

    std::cout << "\nPet 2 Info:\n";
    pet2.printInfo();

    std::cout << "\nComparing pets by name: ";
    int result = pet1.compareTo(pet2);
    if (result < 0) 
        std::cout << pet1.getName() << " comes before " << pet2.getName() << "\n";
    else if (result > 0) std::cout << pet1.getName() << " comes after " << pet2.getName() << "\n";
    else std::cout << "Both pets have the same name.\n";

    pet2.makeSound();
    pet1.makeSound();

    //testing the dog object
    Dog dog1("Buddy", "Dog", 5, 3, "Golden Retriever");
    std::cout << "\nDog Info:\n";
    dog1.printInfo();
    dog1.makeSound();

    //polymorphism
    Pet* petPtr = new Dog("Fluffy", "Dog", 12, 9, "poodle");
    petPtr->printInfo();
    petPtr->makeSound();
    delete petPtr; // Clean up the dynamically allocated Dog object

    return 0;
}
