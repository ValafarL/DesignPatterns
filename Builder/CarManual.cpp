#include "CarManual.h"
#include <iostream>

using namespace std;

void CarManual::setEngine(const string& engine) {
    this->engine = engine;
}

void CarManual::setCarBody(const string& body) {
    this->body = body;
}

void CarManual::setColor(const string& color) {
    this->color = color;
}

void CarManual::setSeats(const string& seats) {
    this->seats = seats;
}

void CarManual::setGPS(const string& gps) {
    this->gps = gps;
}

void CarManual::setSunroof(const string& sunroof) {
    this->sunroof = sunroof;
}

void CarManual::setTripComputer(const string& tripComputer) {
    this->tripComputer = tripComputer;
}

void CarManual::getEngine() const {
    cout << "Engine: " << engine << endl;
}

void CarManual::getCarBody() const {
    cout << "Car Body: " << body << endl;
}

void CarManual::getColor() const {
    cout << "Color: " << color << endl;
}

void CarManual::getSeats() const {
    cout << "Seats: " << seats << endl;
}

void CarManual::getGPS() const {
    cout << "GPS: " << gps << endl;
}

void CarManual::getSunroof() const {
    cout << "Sunroof: " << sunroof << endl;
}

void CarManual::getTripComputer() const {
    cout << "Trip Computer: " << tripComputer << endl;
}

