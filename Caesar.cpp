#include "Caesar.h"

Caesar::Caesar() : decalage(1) {}
Caesar::Caesar(int d) : decalage(d) {}

std::string Caesar::encrypt(const std::string& text) {
	std::string result = text;
	for (char& c : result) c += decalage;
	return result;
}

std::string Caesar::decrypt(const std::string& text) {
	std::string result = text;
	for (char& c : result) c -= decalage;
	return result;
}
