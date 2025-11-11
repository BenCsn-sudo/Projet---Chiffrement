#include "Xor.h"

Xor::Xor() : key("A") {}
Xor::Xor(std::string k) : key(k) {}


std::string Xor::encrypt(const std::string& text) {
	std::string result = text;
	for (size_t i = 0; i < result.size(); ++i) {
		// A security if the key size is smaller than result
		result[i] = result[i] ^ key[i % key.size()];
	}
	return result;
}

std::string Xor::decrypt(const std::string& text) {
	// XOR is symmetrical so there's no need to redo it
	return encrypt(text);
}
