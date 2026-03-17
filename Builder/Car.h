#pragma once
#include <string>
using namespace std;
class Car {
private:
    string engine;
    string body;
    string color;
    int seats;
    bool gps;
    bool sunroof;
    bool tripComputer;

public:
    Car ();
    void setEngine(const string& engine);
    void setCarBody(const string& body);
    void setColor(const string& color);
    void setSeats(int seats);
    void setGPS(bool gps);
    void setSunroof(bool sunroof);
    void setTripComputer(bool tripComputer);
    void getEngine() const;
    void getCarBody() const;
    void getColor() const;
    void getSeats() const;
    void getGPS() const;
    void getSunroof() const;
    void getTripComputer() const;
};