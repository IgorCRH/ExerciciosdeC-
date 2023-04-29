#include "CMidia.h"
#include "CD.h"
#include "DVD.h"
#include <iostream>
#include <vector>

using namespace std;

main (){
std::string nome, resp;
int codigo, nmusicas, nfaixas, cont = 0, opc;
double preco;
std::vector<CD> cds;
std::vector<DVD> dvds;

do {
cout << "Area de insercao de dados.\n";
cout << "Entre com o nome do produto: ";
cin >> nome;
cout << "Entre com o codigo do produto: ";
cin >> codigo;
cout << "Entre com o preco do produto: ";
cin >> preco;

cout << "CD ou DVD?";
cin.ignore();
getline(cin, resp);
if (resp == "CD" || resp == "cd"){
cout << "Entre com o numero de musicas do CD: ";
cin >> nmusicas;
CD novocd = CD(nome,codigo,preco,nmusicas);
cds.push_back(novocd);
cont++;
} else if (resp == "DVD" || resp == "dvd"){
cout << "Entre com o numero de faixas do DVD: ";
cin >> nfaixas;
DVD novodvd = DVD(nome,codigo,preco,nfaixas);
dvds.push_back(novodvd);
cont++;
} else {
cout << "Opcao invalida.";
}


if (cont == 60) {
cout << "Limite de produtos alcançado.";
break;
}

cout << "Deseja continuar cadastrando? 1 para Encerrar.";
cin >> opc;
} while (opc != 1);

cout << "Lista de CDs registrados:" << endl;
for (auto& cdmostra : cds) {
cout << cdmostra.getInfo() << endl;
}

cout << "Lista de DVDs registrados:" << endl;
for (auto& dvdmostra : dvds) {
cout << dvdmostra.getInfo() << endl;
}
}

