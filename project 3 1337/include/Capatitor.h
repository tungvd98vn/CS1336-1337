#ifndef CAPATITOR_H
#define CAPATITOR_H

#include <ElectricComponent.h>


class Capatitor : public ElectricComponent {
public:
    Capatitor(double v){value = v;};
    virtual double getVal() const {return value;}
    virtual std::string getUnit() const {return units;}
    virtual std::string to_string() const;

    virtual ~Capatitor(){};
};

#endif // CAPATITOR_H
