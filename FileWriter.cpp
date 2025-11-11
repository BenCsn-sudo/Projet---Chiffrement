#include "FileWriter.h"
#include <fstream>
#include <stdexcept>

void FileWriter::write(const std::string& filename, const std::string& content) {
    std::ofstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error("Impossible d'ouvrir le fichier : " + filename);
    }

    file << content;
}
