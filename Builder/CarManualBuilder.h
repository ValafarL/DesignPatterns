#pragma once
#include "builder.h"
#include "CarManual.h"

class CarManualBuilder : public Builder {
public:
    CarManualBuilder() = default;
    void reset() override;  
    void setEngine(const string& engine) override;
    void setCarBody(const string& body) override;
    void setColor(const string& color) override;
    void setSeats(int seats) override;
    void setSeats(const string& seats);
    void setSeats(const char* seats);
    void setGPS(bool gps) override;
    void setGPS(const string& gps);
    void setGPS(const char* gps);
    void setSunroof(bool sunroof) override;
    void setSunroof(const string& sunroof);
    void setSunroof(const char* sunroof);
    void setTripComputer(bool tripComputer) override;
    void setTripComputer(const string& tripComputer);
    void setTripComputer(const char* tripComputer);
    CarManual* getResult() const;
private:
    CarManual* manual = new CarManual();
};