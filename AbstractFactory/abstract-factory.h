#pragma once
#include "animal.h"
#include "food.h"
#include "habitat.h"

class AnimalFactory {
public:
    virtual ~AnimalFactory() {}
    virtual Animal*  createAnimal()  const = 0;
    virtual Food*    createFood()    const = 0;
    virtual Habitat* createHabitat() const = 0;
};
