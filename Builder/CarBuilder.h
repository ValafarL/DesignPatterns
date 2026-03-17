#pragma once
#include "builder.h"
#include "Car.h"
#include <string>
using namespace std;
class CarBuilder : public Builder {
public:
    void reset() override;
    void setEngine(const string& engine);
    void setCarBody(const string& body);
    void setColor(const string& color);
    void setSeats(int seats);
    void setGPS(bool gps);
    void setSunroof(bool sunroof);
    void setTripComputer(bool tripComputer);
    Car* getResult() const;

private:
    Car* car = new Car();
};