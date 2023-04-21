#ifndef CONTABANCARIA_H_INCLUDED
#define CONTABANCARIA_H_INCLUDED
#include <iostream>

using namespace std;

class ContaBancaria {
protected: // �rea de declara��o das vari�veis da Classe
    std::string cliente;
    int numconta;
    float saldo;

public: // �rea da constru��o da classe e das fun��es-m�todos GET
    ContaBancaria(std::string cliente, int numconta, float saldo) {
        this->cliente = cliente;
        this->numconta = numconta;
        this->saldo = saldo;
    }

    std::string getCliente() {
        return cliente;
    }

    int getNumConta() {
        return numconta;
    }

    float getSaldo() {
        return saldo;
    }
};

#endif // CONTABANCARIA_H_INCLUDED
