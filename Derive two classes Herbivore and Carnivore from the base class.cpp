#include <iostream>
#include <string>

// Base class
class Animal {
public:
    // Virtual function eat
    virtual void eat() const {
        std::cout << "Animal is eating...\n";
    }
};

class Herbivore : public Animal {
public:
    void eat() const override {
        std::cout << "Herbivore is eating plants...\n";
    }
};

class Carnivore : public Animal {
public:
    void eat() const override {
        std::cout << "Carnivore is eating other animals...\n";
    }
};

int main() {
    const Animal* animalPtr;

    Herbivore herb;
    Carnivore carn;

    animalPtr = &herb;
    animalPtr->eat(); 

    animalPtr = &carn;
    animalPtr->eat(); 

    return 0;
}

