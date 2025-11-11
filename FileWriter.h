#ifndef FILEWRITER_H
#define FILEWRITER_H

#include <string>

class FileWriter {
public:
    static void write(const std::string& filename, const std::string& content);
};

#endif
