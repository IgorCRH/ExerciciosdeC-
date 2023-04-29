#ifndef CMIDIA_H_INCLUDED
#define CMIDIA_H_INCLUDED
#include <iostream>
#include <vector>
#include <sstream>
#include "Midia.h"

using namespace std;

class CMidia: public Midia {
private:
std::string nome;
int codigo;
double preco;

public:
CMidia (std::string nome,int codigo, double preco){
this->nome = nome;
this->codigo = codigo;
this->preco = preco;
}

std::string getNome(){
return nome;
}

int getCodigo(){
return codigo;
}

double getPreco(){
return preco;
}

std::string getTipo(){
return "Tipo de Midia: \n";
}

std::string getInfo(){
 std::stringstream ss;
    ss << "Nome: " << getNome() << "\n"
       << "Codigo: " << getCodigo() << "\n"
       << "Preco: " << getPreco() << "\n";
    return ss.str();
}


std::string printDados() {
std::string print = getInfo() + getTipo();
return print;
}
};
#endif
