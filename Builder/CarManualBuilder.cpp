#include "CarManualBuilder.h"
#include <string>

using namespace std;

void CarManualBuilder::reset() {
	if (manual) {
		delete manual;
	}
	manual = new CarManual();
}

void CarManualBuilder::setEngine(const string& engine) {
	manual->setEngine("Engine configuration: " + engine);
}

void CarManualBuilder::setCarBody(const string& body) {
	manual->setCarBody("Body type: " + body);
}

void CarManualBuilder::setColor(const string& color) {
	manual->setColor("Color: " + color);
}

void CarManualBuilder::setSeats(int seats) {
	manual->setSeats("Number of seats: " + to_string(seats));
}

void CarManualBuilder::setSeats(const string& seats) {
	manual->setSeats(seats);
}

void CarManualBuilder::setSeats(const char* seats) {
	manual->setSeats(seats);
}

void CarManualBuilder::setGPS(bool gps) {
	manual->setGPS(string("GPS available: ") + (gps ? "Yes" : "No"));
}

void CarManualBuilder::setGPS(const string& gps) {
	manual->setGPS(gps);
}

void CarManualBuilder::setGPS(const char* gps) {
	manual->setGPS(gps);
}

void CarManualBuilder::setSunroof(bool sunroof) {
	manual->setSunroof(string("Sunroof available: ") + (sunroof ? "Yes" : "No"));
}

void CarManualBuilder::setSunroof(const string& sunroof) {
	manual->setSunroof(sunroof);
}

void CarManualBuilder::setSunroof(const char* sunroof) {
	manual->setSunroof(sunroof);
}

void CarManualBuilder::setTripComputer(bool tripComputer) {
	manual->setTripComputer(string("Trip computer available: ") + (tripComputer ? "Yes" : "No"));
}

void CarManualBuilder::setTripComputer(const string& tripComputer) {
	manual->setTripComputer(tripComputer);
}

void CarManualBuilder::setTripComputer(const char* tripComputer) {
	manual->setTripComputer(tripComputer);
}

CarManual* CarManualBuilder::getResult() const {
	return manual;
}
