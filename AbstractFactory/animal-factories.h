#pragma once
#include "abstract-factory.h"

class WildAnimalFactory : public AnimalFactory {
public:
    Animal*  createAnimal()  const override;
    Food*    createFood()    const override;
    Habitat* createHabitat() const override;
};

class DomesticAnimalFactory : public AnimalFactory {
public:
    Animal*  createAnimal()  const override;
    Food*    createFood()    const override;
    Habitat* createHabitat() const override;
};
