#ifndef ANIMAL_H_INCLUDED
#define ANIMAL_H_INCLUDED
#include <iostream>

using namespace std;

class Animal{
public: // Métodos da classe abstrata/interface Animal
std::string getNome();
std::string getEspecie();
int getNumpatas();
int getCodigo();
std::string getCor();
};
#endif
