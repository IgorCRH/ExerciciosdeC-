#ifndef CONTABANCARIA_H_INCLUDED
#define CONTABANCARIA_H_INCLUDED
#include <iostream>

using namespace std;

class ContaBancaria {
protected: // Área de declaração das variáveis da Classe
    std::string cliente;
    int numconta;
    float saldo;

public: // Área da construção da classe e das funções-métodos GET
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
