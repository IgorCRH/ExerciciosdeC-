#ifndef DVD_H_INCLUDED
#define DVD_H_INCLUDED
#include <iostream>
#include <vector>
#include "CMidia.h"

using namespace std;

class DVD: public CMidia{
private:
int nfaixas;

public:
DVD (std::string nome,int codigo, double preco,int nfaixas) : CMidia (nome,codigo,preco){
this->nfaixas = nfaixas;
}

std::string getTipo (){
return "DVD";
}

std::string getInfo() {
    return CMidia::printDados() + getTipo () + "\n" + "Quantidade de Faixas: " + std::to_string(nfaixas);
}
};
#endif
