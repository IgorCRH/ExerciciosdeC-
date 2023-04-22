#ifndef ANIMALID_H_INCLUDED
#define ANIMALID_H_INCLUDED
#include <iostream>

using namespace std;

class AnimalID: public Animal{
private: // Variáveis da classe AnimalID específica
std::string nome, especie, cor;
int numpatas, codigo;

public: // Construtor da Classe AnimalID
AnimalID (std::string nome, std::string especie, std::string cor, int numpatas, int codigo){
this->nome = nome;
this->especie = especie;
this->cor = cor;
this->numpatas = numpatas;
this->codigo = codigo;
}

// Métodos SET para determinar as variáveis da classe recebendo os valores da main como argumento
void setNome(string nome){
nome = nome;
}

void setEspecie(string especie){
especie = especie;
}

void setCor(string cor){
cor = cor;
}

void setNumpatas(int numpatas){
numpatas = numpatas;
}

void setCodigo(int codigo){
codigo = codigo;
}

// Área de implementação dos métodos GET da interface/classe abstrata Animal
std::string getNome(){
return nome;
}

std::string getEspecie(){
return especie;
}

std::string getCor(){
return cor;
}

int getNumpatas(){
return numpatas;
}

int getCodigo(){
return codigo;
}
};
#endif
