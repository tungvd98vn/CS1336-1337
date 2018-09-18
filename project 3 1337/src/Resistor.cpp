#include "Resistor.h"
#include <sstream>
#include <string>


    std::string Resistor::to_string() const {
    std::ostringstream sstream;
    sstream << value;

    return "Resistor value (" + sstream.str() + " " + units + ")";
    }
