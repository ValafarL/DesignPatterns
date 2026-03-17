#include "animal-factories.h"

Animal*  WildAnimalFactory::createAnimal()  const { return new Wolf();    }
Food*    WildAnimalFactory::createFood()    const { return new RawMeat(); }
Habitat* WildAnimalFactory::createHabitat() const { return new Forest();  }

Animal*  DomesticAnimalFactory::createAnimal()  const { return new Dog();    }
Food*    DomesticAnimalFactory::createFood()    const { return new Kibble(); }
Habitat* DomesticAnimalFactory::createHabitat() const { return new Farm();   }
