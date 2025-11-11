#ifndef IENCRYPTION_H
#define IENCRYPTION_H

#include <string>

class IEncryption {

public:
	// Virtual permet de choisir la bonne version lors de l'exécution et = 0 obliges a redéfinir la fonction
	virtual std::string encrypt(const std::string& text) = 0;
	virtual std::string decrypt(const std::string& text) = 0;
	// Destructeur
	virtual ~IEncryption() = default;
};

#endif
