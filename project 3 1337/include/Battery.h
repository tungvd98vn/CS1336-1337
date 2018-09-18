#ifndef BATTERY_H
#define BATTERY_H

#include <ElectricComponent.h>


class Battery : public ElectricComponent {
public:
    Battery(double v){value = v;};
    virtual double getVal() const {return value;}
    virtual std::string getUnit() const {return units;}
    virtual std::string to_string() const;

    virtual ~Battery (){};
};

#endif // BATTERY_H
