#include "animal.h"

void Wolf::makeSound() const { std::cout << "Wolf howls"          << std::endl; }
void Wolf::move()      const { std::cout << "Wolf runs" << std::endl; }

void Eagle::makeSound() const { std::cout << "Eagle screeches"     << std::endl; }
void Eagle::move()      const { std::cout << "Eagle soars" << std::endl; }

void Dog::makeSound() const { std::cout << "Dog barks"               << std::endl; }
void Dog::move()      const { std::cout << "Dog trots"    << std::endl; }

void Hen::makeSound() const { std::cout << "Hen clucks"       << std::endl; }
void Hen::move()      const { std::cout << "Hen walks"     << std::endl; }
