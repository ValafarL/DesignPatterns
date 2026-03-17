#include "CarBuilder.h"
#include "CarManualBuilder.h"
#include <iostream>
using namespace std;
int main(){
    CarBuilder builder;
    builder.reset();
    builder.setEngine("V8");
    builder.setCarBody("Sedan");
    builder.setColor("Red");
    builder.setSeats(5);
    builder.setGPS(true);
    builder.setSunroof(true);
    builder.setTripComputer(false);
    Car* car = builder.getResult();

    cout << "Car built with the following specifications:" << endl;
    car->getCarBody();
    car->getColor();
    car->getSeats();
    car->getGPS();
    car->getSunroof();
    car->getTripComputer();

    CarManualBuilder manualBuilder;
    manualBuilder.reset();
    manualBuilder.setEngine("Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua...");
    manualBuilder.setCarBody("Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua...");
    manualBuilder.setColor("Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua...");
    manualBuilder.setSeats("Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua...");
    manualBuilder.setGPS("Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua...");
    manualBuilder.setSunroof("Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua...");
    manualBuilder.setTripComputer("Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua...");
    CarManual* carManual = manualBuilder.getResult();

    cout << "Car Manual built with the following specifications:" << endl;
    carManual->getEngine();
    carManual->getCarBody();
    carManual->getColor();
    carManual->getSeats();
    carManual->getGPS();
    carManual->getSunroof();
    carManual->getTripComputer();


    delete car;
    delete carManual;
    return 0;
}