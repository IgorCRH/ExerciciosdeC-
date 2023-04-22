#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED
#include <iostream>

using namespace std;

class Pessoa {
protected:
string nome, email;
int cpf;

public:
Pessoa(std::string nome, double cpf, std::string email){
this->nome = nome;
this->cpf = cpf;
this->email = email;
}

std::string getNome() {
return nome;
}

double getCpf() {
return cpf;
}

std::string getEmail() {
return email;
}
};

#endif
