#ifndef CONTAPOUPANCA_H_INCLUDED // Gere o ifndef para a classe ser incluida no arquivo com a fun��o main
#define CONTAPOUPANCA_H_INCLUDED
#include <iostream> // Insere as bibiliotecas de entrada e sa�da e de string
#include <string>
#include <vector> // Inclui a biblioteca de vetores para o vetor que guardar� as contas poupan�a

using namespace std;

class ContaPoupanca: public ContaBancaria{ // Sinaliza que a Classe ContaPoupanca herda da classe ContaBancaria
private: // Declara a vari�vel pr�pria da classe ContaPoupanca
float rendimento;
std::vector<ContaPoupanca> poupancas; // Vetor que guardar� as contas poupan�a registradas

public: // Construtor da Classe
ContaPoupanca (string cliente, int numconta, float saldo, float rendimento) : ContaBancaria(cliente, numconta, saldo), rendimento(rendimento){ // Construtor da classe ContaPoupanca herdando os atributos da ContaBancaria
this->rendimento = rendimento;
}

// Fun��es da Classe
void novosaldo(){
int numpesq;
cout << "Entre com o n�mero da conta no qual deseja analisar o futuro saque com o rendimento: ";
cin >> numpesq;

for (auto &poup : poupancas) {
if (poup.numconta == numpesq){
cout<<"Entre com o rendimento";
cin >> poup.rendimento;

float novosaldo = poup.saldo*poup.rendimento;
cout<<"O novo saldo � de: "<<novosaldo<<"\n";
}
}
}

void cadastraconta(){
cout<<"Entre com o nome do cliente";
cin>>cliente;

cout<<"Entre com o numero da conta do cliente";
cin>>numconta;

cout<<"Entre com o saldo da conta do cliente";
cin>>saldo;

ContaPoupanca novaConta = ContaPoupanca(cliente, numconta, saldo,rendimento); // cria um novo objeto referente ao novo cliente a ser cadastrado
poupancas.push_back(novaConta); // Registra o cliente no vetor de contas poupan�a
}

void pesquisa(){
int pesquisa;
cout<<"Entre com o n�mero da conta do cliente que deseja pesquisar";
cin>>pesquisa;


for (auto &poup : poupancas) { // Percorre o vetor das contas poupan�a e imprime os clientes que atendem a pesquisa
if (pesquisa == poup.numconta){
cout << "Nome: " << poup.cliente << endl; // Imprime as informa��es dos clientes usando o objeto poup
cout << "N�mero da Conta: " << poup.numconta << endl;
cout << "Saldo: " << poup.saldo << endl;
} else {
cout << "N�o encontrado.\n";
}
}
}

void exibir (){
cout << "Dados dos Clientes:\n";
for (auto &poup : poupancas) { // Percorre o vetor das contas poupan�a e imprime os clientes
cout << "Nome: " << poup.cliente << endl; // Imprime as informa��es dos clientes usando o objeto poup
cout << "N�mero da Conta: " << poup.numconta << endl;
cout << "Saldo: " << poup.saldo << endl;
}
}

void sacar (float quantia){
int numsaque;
cout << "Entre com o n�mero da conta no qual deseja sacar: ";
cin >> numsaque;

for (auto &poup : poupancas) { // Atualiza as informa��es dos clientes usando o objeto poup
if (poup.numconta == numsaque && poup.saldo > quantia){
poup.saldo -= quantia; // Atualiza o saldo do cliente registrado no vetor. O acesso ao saldo � feito pelo objeto poup
} else if (poup.numconta == numsaque && saldo < quantia){
cout << "N�o h� o saldo disponivel para saques.";
} else if (poup.numconta != numsaque) {
cout << "Conta n�o existe.";
}
}
}

void depositar (float quantia){
int numdeposito;
cout << "Entre com o n�mero da conta no qual deseja depositar: ";
cin >> numdeposito;

for (auto &poup : poupancas) {
if (poup.numconta == numdeposito){
poup.saldo += quantia; // Atualiza o saldo do cliente registrado no vetor. O acesso ao saldo � feito pelo objeto poup
} else {
cout << "Conta n�o existe.";
}
}
}
};

#endif // Concluir o ifndef
