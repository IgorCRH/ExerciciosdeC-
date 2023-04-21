#ifndef CONTAESPECIAL_H_INCLUDED // Gere o ifndef para a classe ser incluida no arquivo com a fun��o main
#define CONTAESPECIAL_H_INCLUDED
#include <iostream> // Insere as bibiliotecas de entrada e sa�da e de string
#include <string>
#include <vector>

using namespace std;

class ContaEspecial: public ContaBancaria{
private:
float limite; // Vari�vel pr�pria da classe ContaEspecial
std::vector<ContaEspecial> especiais; // Vetor que guardar� as contas especiais registradas

public: // Construtor da Classe
ContaEspecial (string cliente, int numconta, float saldo, float limite) : ContaBancaria(cliente, numconta, saldo), limite(limite) { // Construtor da classe ContaEspecial herdando os atributos da ContaBancaria
this->limite = limite;
}

// Fun��es da Classe
void cadastraconta(){
cout<<"Entre com o nome do cliente";
cin>>cliente;

cout<<"Entre com o numero da conta do cliente";
cin>>numconta;

cout<<"Entre com o saldo da conta do cliente";
cin>>saldo;

cout<<"Entre com o limite da conta do cliente";
cin>>limite;
ContaEspecial novaConta2 = ContaEspecial(cliente, numconta, saldo,limite); // cria um novo objeto referente ao novo cliente a ser cadastrado
especiais.push_back(novaConta2); // Registra o cliente no vetor de contas especiais
}

void pesquisa(){
int pesquisa;
cout<<"Entre com o n�mero da conta do cliente que deseja pesquisar";
cin>>pesquisa;

for (auto &esp : especiais) { // Percorre o vetor das contas poupan�a e imprime as informa��es do cliente escolhido
if (esp.numconta == pesquisa){ // Usa o objeto esp para acessar os n�meros das contas do vetor das contas especiais, para chegar qual � igual ao n�mero de conta digitado
cout << "Nome: " << esp.cliente << endl; // Imprime as informa��es dos clientes usando o objeto esp
cout << "N�mero da Conta: " << esp.numconta << endl;
cout << "Saldo: " << esp.saldo << endl;
cout << "Limite: " << esp.limite << endl;
} else {
cout << "N�o encontrado.\n";
}
}
}

void exibir (){
cout << "Dados dos Clientes:\n";
for (auto &esp : especiais) { // Percorre o vetor das contas poupan�a e imprime os clientes
cout << "Nome: " << esp.cliente << endl; // Imprime as informa��es dos clientes usando o objeto esp
cout << "N�mero da Conta: " << esp.numconta << endl;
cout << "Saldo: " << esp.saldo << endl;
cout << "Limite: " << esp.limite << endl;
}
}

void saqueespecial (float quantia){
int numsaque;
cout << "Entre com o n�mero da conta no qual deseja sacar: ";
cin >> numsaque;

for (auto &esp : especiais) { // Percorre o vetor das contas especiais e procura a qual for igual ao n�mero da conta digitado
if (esp.numconta == numsaque && esp.saldo > quantia && esp.saldo > limite){
esp.saldo -= quantia; // Atualiza o saldo do cliente registrado no vetor. O acesso ao saldo � feito pelo objeto esp
} else if (esp.numconta == numsaque && esp.saldo < quantia || esp.saldo < limite){
cout << "N�o h� o saldo ou limite disponivel para saques.";
} else if (esp.numconta != numsaque) {
cout << "Conta n�o existe.";
}
}
}

void depositar (float quantia){
int numdeposito;
cout << "Entre com o n�mero da conta no qual deseja depositar: ";
cin >> numdeposito;

for (auto &esp : especiais) { // Percorre o vetor das contas especiais e procura a qual for igual ao n�mero da conta digitado
if (esp.numconta == numdeposito){
esp.saldo += quantia; // Atualiza o saldo do cliente registrado no vetor. O acesso ao saldo � feito pelo objeto esp
} else {
cout << "Conta n�o existe.";
}
}
}
};

#endif // Concluir o ifndef
