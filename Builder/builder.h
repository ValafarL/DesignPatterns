#pragma once
#include <string>
using namespace std;
class Builder {
public:
    Builder() = default;
    ~Builder() = default;
    virtual void reset() = 0;
    virtual void setEngine(const string& engine) = 0;
    virtual void setCarBody(const string& body) = 0;
    virtual void setColor(const string& color) = 0;
    virtual void setSeats(int seats) = 0;
    virtual void setGPS(bool gps) = 0;
    virtual void setSunroof(bool sunroof) = 0;
    virtual void setTripComputer(bool tripComputer) = 0;
};