#pragma once
#include <string>
#include <iostream>

class Animal {
protected:
    std::string name;
public:
    Animal(std::string name) : name(name) {}
    virtual ~Animal() {}
    virtual void makeSound() const = 0;
    virtual void move()      const = 0;
    std::string getName() const { return name; }
};

class Wolf : public Animal {
public:
    Wolf() : Animal("Wolf") {}
    void makeSound() const override;
    void move()      const override;
};

class Eagle : public Animal {
public:
    Eagle() : Animal("Eagle") {}
    void makeSound() const override;
    void move()      const override;
};

class Dog : public Animal {
public:
    Dog() : Animal("Dog") {}
    void makeSound() const override;
    void move()      const override;
};

class Hen : public Animal {
public:
    Hen() : Animal("Hen") {}
    void makeSound() const override;
    void move()      const override;
};
