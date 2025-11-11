# Nom de l'exécutable
TARGET = main

# Compilateur
CXX = g++

# Options de compilation
CXXFLAGS = -Wall -Wextra -std=c++17

# Fichiers sources (.cpp)
SRC = main.cpp \
      Caesar.cpp \
      Xor.cpp \
      Combined.cpp \
      FileReader.cpp \
      FileWriter.cpp \

# Fichiers objets (.o)
OBJ = $(SRC:.cpp=.o)

# Règle par défaut
all: $(TARGET)

# Construction de l'exécutable
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Règle de compilation générique pour chaque .cpp
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Nettoyage des fichiers compilés
clean:
	rm -f $(OBJ)

# Nettoyage complet (objets + exécutable)
fclean: clean
	rm -f $(TARGET)

# Reconstruction complète
re: fclean all
