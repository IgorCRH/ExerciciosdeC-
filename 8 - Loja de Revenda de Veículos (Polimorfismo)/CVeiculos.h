#ifndef CVEICULOS_H_INCLUDED
#define CVEICULOS_H_INCLUDED
#include <iostream>
#include "Veiculos.h"
#include <sstream>

using namespace std;

class CVeiculos: public Veiculos {
private:
std::string nome;
int codigo;
double preco;

public:
CVeiculos (std::string nome,int codigo, double preco){ // Construtor da classe CVeiculos
this->nome = nome;
this->codigo = codigo;
this->preco = preco;
}

std::string getNome(){ // Métodos GET
return nome;
}

int getCodigo(){
return codigo;
}

void setPreco(double novopreco){ // E o método SET para atualizar o preço do veiculo em questao
this->preco = novopreco;
}

double getPreco(){
return preco;
}

std::string getClasse(){ // Prepara a impressão do tipo do veiculo
return "Tipo de Veiculo: \n";
}

std::string getInfo(){ // Reune as informacoes comuns a todos os veiculos
 std::stringstream ss;
    ss << "Nome: " << getNome() << "\n"
       << "Codigo: " << getCodigo() << "\n"
       << "Preco: " << getPreco() << "\n";
    return ss.str();
}

std::string printDados() { // Imprime as informações por meio de uma string
std::string print = getInfo() + getClasse();
return print;
}
};
#endif
