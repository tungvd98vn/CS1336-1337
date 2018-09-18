#include "Capatitor.h"
#include <sstream>
#include <string>

    std::string Capatitor::to_string() const {
    std::ostringstream sstream;
    sstream << value;

    return "Capatitor value (" + sstream.str() + " " + units + ")";
}
