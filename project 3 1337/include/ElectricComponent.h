#ifndef ELECTRICCOMPONENT_H
#define ELECTRICCOMPONENT_H

#include <string>
class ElectricComponent {
protected:
    double value;
    std ::string units;

public:

    void setValue (double v){value = v;}
    void setUnits (std :: string u){units = u;}

    virtual double getVal() const = 0;
    virtual std ::string getUnit() const = 0;
    virtual std ::string to_string() const = 0;

    virtual ~ElectricComponent (){
    };

    void operator= (const ElectricComponent& obj){ // overloading =
    value = obj.value;
    units = obj.units;
    }
    friend std::ostream &operator<< (std ::ostream &output, const ElectricComponent &obj){ // overloading << for cout
    output << obj.to_string();
    return output;
    }
};

#endif // ELECTRICCOMPONENT_H
