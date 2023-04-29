#ifndef CD_H_INCLUDED
#define CD_H_INCLUDED
#include <iostream>
#include <vector>
#include "CMidia.h"

using namespace std;

class CD: public CMidia{
private:
int nmusicas;

public:
CD (std::string nome,int codigo, double preco,int nmusicas) : CMidia (nome,codigo,preco){
this->nmusicas = nmusicas;
}

std::string getTipo (){
return "CD";
}

std::string getInfo() {
return CMidia::printDados() + getTipo () + "\n" + "Quantidade de Músicas: " + std::to_string(nmusicas);
}
};
#endif
