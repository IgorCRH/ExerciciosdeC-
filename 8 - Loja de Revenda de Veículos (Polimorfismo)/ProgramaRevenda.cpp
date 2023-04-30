#include "CVeiculos.h" // Inclui as classes
#include "Carro.h"
#include "Moto.h"
#include <iostream> // Inclui as bibiliotecas de entrada e saída de valores e vetores
#include <vector>

using namespace std;

main (){
std::string nome, resp;
int codigo, ano, i, cont = 0, opc;
double preco, km, totalPrecoscarro = 0.0, totalPrecosmoto = 0.0, totalPrecos;
std::vector<Carro> carros; // Vetores que vão guardar os carros e motos
std::vector<Moto> motos;

do {
cout << "Area de insercao de dados:\n";
cout << "Entre com o nome do veiculo: ";
cin >> nome;
cout << "Entre com o codigo do veiculo: ";
cin >> codigo;
cout << "Entre com o preco do veiculo: ";
cin >> preco;

cout << "Carro (C) ou Moto (M)?";
cin.ignore();
getline(cin, resp);
if (resp == "C" || resp == "c"){
cout << "Entre com a quilometragem do carro: ";
cin >> km;
Carro novocarro = Carro(nome,codigo,preco,km); // Cria objeto da classe Carro e salva as informações nele
carros.push_back(novocarro); // Guarda o objeto criado no vetor de carros, oficializando o registro do carro em questão
if (km > 100000){
cout << "O preco anterior era de: \n" << preco;
double novoprecocarro = preco*0.92; // Guarda o novo preco em uma nova variável
cout << "O novo preco eh de: \n" << novoprecocarro;
carros.back().atualizaNovoPreco(novoprecocarro); // Atualiza o preço do último objeto (carro) salvo no vetor de carros, passando a nova variável por parâmetro pro método que atualiza
}
} else if (resp == "M" || resp == "m"){
cout << "Entre com o ano da moto: ";
cin >> ano;
Moto novamoto = Moto(nome,codigo,preco,ano); // Cria objeto da classe Moto e salva as informações nele
motos.push_back(novamoto); // Guarda o objeto criado no vetor de motos, oficializando o registro da moto em questão
if (ano > 2008){
cout << "O preco anterior era de: \n" << preco;
double novoprecomoto = preco*1.1;
cout << "O novo preco eh de: \n" << novoprecomoto;
motos.back().atualizaNovoPreco(novoprecomoto); // Atualiza o preço do último objeto (moto) salvo no vetor de motos, passando a nova variável por parâmetro pro método que atualiza

}
} else {
cout << "Opcao invalida.";
}

cout << "Deseja continuar cadastrando? 1 para Encerrar.";
cin >> opc;
} while (opc != 1);

cout << "Lista de carros registrados:" << endl;
for (auto& carromostra : carros) { // Percorre o vetor de carros até o seu tamanho atual
totalPrecoscarro += carromostra.getPreco(); // Varivel soma os precos dos carros registrados no vetor
cout << carromostra.getInfo() << endl; // Mostra as informações dos carros
}

cout << "Lista de motos registradas:" << endl;
for (auto& motosmostra : motos) { // Percorre o vetor de motos até o seu tamanho atual
totalPrecosmoto += motosmostra.getPreco(); // Varivel soma os precos das motos registradas no vetor
cout << motosmostra.getInfo() << endl; // Mostra as informações das motos
}
totalPrecos = totalPrecoscarro + totalPrecosmoto; // Total dos precos somando o total dos precos de carros e motos do for
cout << "Total de precos: " << totalPrecos << endl;
}
