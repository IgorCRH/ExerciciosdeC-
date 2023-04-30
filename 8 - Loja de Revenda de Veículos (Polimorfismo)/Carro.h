#ifndef CARRO_H_INCLUDED
#define CARRO_H_INCLUDED
#include <iostream>
#include "CVeiculos.h"

using namespace std;

class Carro : public CVeiculos {
private:
double km;

public:
Carro (std::string nome,int codigo, double preco,double km) : CVeiculos (nome,codigo,preco){ // Construtor da classe Carro
this->km = km;
}

std::string getClasse (){ // Se for Carro, o método retorna Carro
return "Carro";
}

std::string getInfo() { // Reune as informações da classe Carro, incluindo as que são reunidas pelo printDados da CVeiculos
return CVeiculos::printDados() + getClasse () + "\n" + "Quilometragem: " + std::to_string(km);
}

void atualizaNovoPreco(double novoprecocarro){ // Método que atualiza o preco do carro, passando por argumento a variavel do novopreco e que chama o metodo setPreco da CVeiculos
CVeiculos::setPreco(novoprecocarro);
}

};
#endif
