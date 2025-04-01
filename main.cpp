#include <iostream>
#include <vector>
#include "Pet.h"
#include "Dog.h"
#include "Cat.h"         // Added
#include "Dragon.h"      // Added
#include "Zookeeper.h"   // Added

int main() {
    // Your original tests (preserved exactly)
    Pet pet1("Rex", "Dog", 3, 6);
    Pet pet2("Whiskers", "Cat", 2, 4);
    pet1.printInfo();
    pet2.printInfo();
    pet1.compareTo(pet2);
    pet1.makeSound();
    pet2.makeSound();
    
    Dog dog1("Buddy", "Dog", 5, 3, "Golden Retriever");
    dog1.printInfo();
    dog1.makeSound();
    
    Pet* petPtr = new Dog("Fluffy", "Dog", 12, 9, "poodle");
    petPtr->makeSound();
    delete petPtr;

    // ===== NEW ADDITIONS =====
    
    // 1. Added Cat and Dragon objects
    Cat cat("Mittens", 2, 4, "Yarn Ball");  
    Dragon dragon("Smaug", 150, 6, 15.5, true);
    
    // 2. Enhanced polymorphism demo
    std::vector<Pet*> pets;
    pets.push_back(&dog1);
    pets.push_back(&cat);      // Upcasting
    pets.push_back(&dragon);   // Upcasting
    
    for (Pet* pet : pets) {    // Calls correct makeSound() for each
        pet->makeSound();      
    }
    
    // 3. Zookeeper challenge implementation
    Zookeeper zookeeper;
    zookeeper.addPet(new Dog("Max", 4, 5, "Labrador"));
    zookeeper.addPet(new Cat("Luna", 1, 2, "Feather"));
    zookeeper.interactWithPets();  // Shows menu system
    
    // 4. Static pet counter
    std::cout << "Total pets: " << Zookeeper::getTotalPets(); 
    
    return 0;
}
