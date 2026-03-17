#include <iostream>
#include <random>
#include "abstract-factory.h"
#include "animal-factories.h"

AnimalFactory* selectFactory(int choice) {
    if (choice == 1) return new WildAnimalFactory();
    return new DomesticAnimalFactory();
}

void run(AnimalFactory* factory) {
    Animal*  animal  = factory->createAnimal();
    Food*    food    = factory->createFood();
    Habitat* habitat = factory->createHabitat();

    habitat->describe();
    food->describe();
    animal->makeSound();
    animal->move();

    delete animal;
    delete food;
    delete habitat;
}

int main() {
    static std::mt19937 gen(std::random_device{}());
    static std::uniform_int_distribution<int> dist(1, 2);

    int choice = dist(gen);
    std::cout << "=== Abstract Factory - Animals ===\n\n";
    std::cout << "Factory: " << (choice == 1 ? "Wild" : "Domestic") << "\n\n";

    AnimalFactory* factory = selectFactory(choice);
    run(factory);
    delete factory;
    return 0;
}