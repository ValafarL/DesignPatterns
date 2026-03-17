#pragma once
#include <string>
using namespace std;
class CarManual {

private:
    string engine;
    string body;
    string color;
    string seats;
    string gps;
    string sunroof;
    string tripComputer;
public:
    CarManual() = default;
    void setEngine(const string& engine);
    void setCarBody(const string& body);
    void setColor(const string& color);
    void setSeats(const string& seats);
    void setGPS(const string& gps);
    void setSunroof(const string& sunroof);
    void setTripComputer(const string& tripComputer);
    void getEngine() const;
    void getCarBody() const;
    void getColor() const;
    void getSeats() const;
    void getGPS() const;
    void getSunroof() const;
    void getTripComputer() const;
};