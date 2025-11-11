#ifndef CAESAR_H
#define CAESAR_H

#include "IEncryption.h"
#include <string>

class Caesar : public IEncryption {

private:
	int decalage;

public:
	// Constructor
	Caesar();
	Caesar(int d);

	// Method
	std::string encrypt(const std::string& text) override;
	std::string decrypt(const std::string& text) override;
};

#endif
