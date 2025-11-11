#ifndef XOR_H
#define XOR_H

#include "IEncryption.h"
#include <string>

class Xor : public IEncryption {

private:
	std::string key;

public:
	// Constructor
	Xor();
	Xor(std::string k);

	// Method
	std::string encrypt(const std::string& text) override;
	std::string decrypt(const std::string& text) override;
};

#endif
