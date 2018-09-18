#include "Battery.h"
#include <sstream>
#include <string>

    std::string Battery::to_string() const {
    std::ostringstream sstream;
    sstream << value;

    return "Battery value (" + sstream.str() + " " + units + ")";
    }
