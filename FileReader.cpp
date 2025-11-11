#include "FileReader.h"
#include <fstream>
#include <sstream>
#include <stdexcept>

std::string FileReader::read(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error("Unable to open the file : " + filename);
    }

    std::ostringstream buffer;
    buffer << file.rdbuf();
    return buffer.str();
}
