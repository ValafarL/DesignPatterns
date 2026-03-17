#include "Car.h"
#include <iostream>

using namespace std;

Car::Car() {}

void Car::setEngine(const string& engine) {
    this->engine = engine;
}

void Car::setCarBody(const string& body) {
    this->body = body;
}
void Car::setColor(const string& color) {
    this->color = color;
}
void Car::setSeats(int seats) {
    this->seats = seats;
}
void Car::setGPS(bool gps) {
    this->gps = gps;
}
void Car::setSunroof(bool sunroof) {
    this->sunroof = sunroof;
}
void Car::setTripComputer(bool tripComputer) {
    this->tripComputer = tripComputer;
}
void Car::getEngine() const {
    cout << "Engine: " << engine << endl;
}
void Car::getCarBody() const {
    cout << "Car Body: " << body << endl;
}
void Car::getColor() const {
    cout << "Color: " << color << endl;
}
void Car::getSeats() const {
    cout << "Seats: " << seats << endl;
}
void Car::getGPS() const {
    cout << "GPS: " << (gps ? "Yes" : "No") << endl;
}
void Car::getSunroof() const {
    cout << "Sunroof: " << (sunroof ? "Yes" : "No") << endl;
}
void Car::getTripComputer() const {
    cout << "Trip Computer: " << (tripComputer ? "Yes" : "No") << endl;
}
