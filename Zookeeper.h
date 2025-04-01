#ifndef ZOOKEEPER_H
#define ZOOKEEPER_H

#include <vector>
#include "Pet.h"

class Zookeeper {
private:
    std::vector<Pet*> pets;
    static int totalPets;

public:
    void addPet(Pet* pet);
    void listAllPets() const;
    void interactWithPets();
    static int getTotalPets();
    ~Zookeeper();
};

#endif
