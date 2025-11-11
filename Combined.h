#ifndef COMBINED_H
#define COMBINED_H

#include "IEncryption.h"
#include "Caesar.h"
#include "Xor.h"
#include <string>

class Combined : public IEncryption {
private:
    Caesar cesar;
    Xor xorCipher;

public:
    Combined(int shift, const std::string& key);

    std::string encrypt(const std::string& text) override;
    std::string decrypt(const std::string& text) override;
};

#endif
