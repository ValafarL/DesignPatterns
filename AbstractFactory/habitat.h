#pragma once
#include <iostream>

class Habitat {
public:
    virtual ~Habitat() {}
    virtual void describe() const = 0;
};

class Forest : public Habitat {
public:
    void describe() const override;
};

class Farm : public Habitat {
public:
    void describe() const override;
};
