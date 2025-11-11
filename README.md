# Projet de chiffrement en C++

## 🧩 Description
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

Ce projet implémente un programme de chiffrement et déchiffrement de fichiers texte en **C++** à l’aide de la **programmation orientée objet** et du **polymorphisme dynamique**.
Il propose trois niveaux de sécurité :

1. **César** – décalage des caractères.
2. **XOR** – chiffrement logique à clé.
3. **Combiné** – application successive de César et XOR.

L’utilisateur choisit le fichier source, le mode de chiffrement et le fichier de destination directement depuis la console.

---

## 🏗️ Architecture du projet

Le code est conçu pour être **modulaire, clair et extensible**, avec une classe par responsabilité :

| Classe        | Rôle                                                                         |
| ------------- | ---------------------------------------------------------------------------- |
| `IEncryption` | Interface abstraite définissant le contrat commun (`encrypt`, `decrypt`)     |
| `Caesar`      | Implémente le chiffrement de type César                                      |
| `Xor`         | Implémente le chiffrement XOR                                                |
| `Combined`    | Combine les deux modes (César + XOR)                                         |
| `FileReader`  | Lecture complète d’un fichier texte                                          |
| `FileWriter`  | Écriture d’un texte dans un fichier                                          |
| `main.cpp`    | Point d’entrée : choix utilisateur et exécution du chiffrement/déchiffrement |

---

## ⚙️ Compilation

Un **Makefile** est fourni. Pour compiler le projet :

```bash
make
```

Pour exécuter :

```bash
./main
```

Pour nettoyer les fichiers objets :

```bash
make clean
```

---

## 📖 Exemple d’utilisation

1. Lancer le programme.
2. Choisir **1** pour chiffrer ou **2** pour déchiffrer.
3. Sélectionner le mode :

   * 1 → César
   * 2 → XOR
   * 3 → Combiné
4. Indiquer le fichier source et le fichier de destination.
5. Le résultat chiffré ou déchiffré est écrit dans le fichier choisi.

---

## 🧠 Concepts clés utilisés

* **Programmation orientée objet (POO)**
* **Polymorphisme dynamique** via l’interface `IEncryption`
* **Encapsulation** et séparation claire des responsabilités
* **Gestion mémoire sécurisée** avec `std::unique_ptr`
* **Flux fichiers (`std::ifstream`, `std::ofstream`)**
