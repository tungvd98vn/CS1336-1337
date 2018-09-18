#ifndef RESISTOR_H
#define RESISTOR_H

#include <ElectricComponent.h>


class Resistor : public ElectricComponent {
public:
    Resistor(double v){value = v;};
    virtual double getVal() const {return value;}
    virtual std ::string getUnit() const {return units;}
    virtual std ::string to_string() const;

    virtual ~Resistor (){};
};

#endif // RESISTOR_H
