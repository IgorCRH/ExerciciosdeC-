#ifndef MOTO_H_INCLUDED
#define MOTO_H_INCLUDED
#include <iostream>
#include "CVeiculos.h"

using namespace std;

class Moto : public CVeiculos {
private:
int ano;

public:
Moto (std::string nome,int codigo, double preco,int ano) : CVeiculos (nome,codigo,preco){ // Construtor da Classe Moto
this->ano = ano;
}

std::string getClasse (){ // Se for Moto, o método retorna Moto
return "Moto";
}

std::string getInfo() { // Reune as informações da classe Moto, incluindo as que são reunidas pelo printDados da CVeiculos
return CVeiculos::printDados() + getClasse () + "\n" + "Ano: " + std::to_string(ano);
}

void atualizaNovoPreco(double novoprecomoto){ // Método que atualiza o preco da moto, passando por argumento a variavel do novopreco e que chama o metodo setPreco da CVeiculos
CVeiculos::setPreco(novoprecomoto);
}

};
#endif
