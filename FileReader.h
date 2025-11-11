#ifndef FILEREADER_H
#define FILEREADER_H

#include <string>

class FileReader {
public:
    static std::string read(const std::string& filename);
};

#endif

