#include "Combined.h"

Combined::Combined(int shift, const std::string& key)
    : cesar(shift), xorCipher(key) {}

std::string Combined::encrypt(const std::string& text) {
    std::string temp = cesar.encrypt(text);
    return xorCipher.encrypt(temp);
}

std::string Combined::decrypt(const std::string& text) {
    std::string temp = xorCipher.decrypt(text);
    return cesar.decrypt(temp);
}
