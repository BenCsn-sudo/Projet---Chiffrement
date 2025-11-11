#include <iostream>
#include <memory>
#include "IEncryption.h"
#include "Caesar.h"
#include "Xor.h"
#include "Combined.h"
#include "FileReader.h"
#include "FileWriter.h"

int main() {
	std::string inputFile, outputFile;
	int config, mode;

	std::cout << "Chiffrement (1) / Dechiffrement (2) : ";
	std::cin >> config;

	std::cout << "Mode de chiffrement/déchiffrement (1=Cesar, 2=XOR, 3=Les2) : ";
	std::cin >> mode;

	std::cout << "Nom du fichier source : ";
	std::cin >> inputFile;

	std::cout << "Nom du fichier de destination : ";
	std::cin >> outputFile;

	std::unique_ptr<IEncryption> code;

	if (mode == 1) code = std::make_unique<Caesar>(3);
	else if (mode == 2) code = std::make_unique<Xor>("KEY");
	else if (mode == 3) code = std::make_unique<Combined>(3, "KEY");
	else {
		std::cerr << "Mode invalide\n";
		return 1;
	}

	try {
		std::string content = FileReader::read(inputFile);
		std::string res;

		if (config == 1) {
			res = code->encrypt(content);
		} else if (config == 2) {
			res = code->decrypt(content);
		} else {
			std::cerr << "Choix invalide. \n";
			return 1;
		}
		FileWriter::write(outputFile, res);
		std::cout << "Fichier traité avec succès.\n";
	}
	catch (const std::exception& e) {
		std::cerr << "Erreur : "<< e.what() << "\n";
		return 1;
	}

	return 0;
}
