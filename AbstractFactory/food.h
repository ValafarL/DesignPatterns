#pragma once
#include <iostream>

class Food {
public:
    virtual ~Food() {}
    virtual void describe() const = 0;
};

class RawMeat : public Food {
public:
    void describe() const override;
};

class Kibble : public Food {
public:
    void describe() const override;
};
