#include "CarBuilder.h"
#include <iostream>

using namespace std;

void CarBuilder::reset() {
    if(car) {
        delete car;
    }
    car = new Car();
}

void CarBuilder::setEngine(const string& engine) {
    car->setEngine(engine);
}

void CarBuilder::setCarBody(const string& body) {
    car->setCarBody(body);
}
void CarBuilder::setColor(const string& color) {
    car->setColor(color);
}
void CarBuilder::setSeats(int seats) {
    car->setSeats(seats);
}
void CarBuilder::setGPS(bool gps) {
    car->setGPS(gps);
}
void CarBuilder::setSunroof(bool sunroof) {
    car->setSunroof(sunroof);
}
void CarBuilder::setTripComputer(bool tripComputer) {
    car->setTripComputer(tripComputer);
}
Car* CarBuilder::getResult() const {
    return car;
}