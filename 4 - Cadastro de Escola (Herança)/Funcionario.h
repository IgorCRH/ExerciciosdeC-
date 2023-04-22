#ifndef CONTAPOUPANCA_H_INCLUDED // Gere o ifndef para a classe ser incluida no arquivo com a função main
#define CONTAPOUPANCA_H_INCLUDED
#include <iostream> // Insere as bibiliotecas de entrada e saída e de string
#include <string>
#include <vector> // Inclui a biblioteca de vetores para o vetor que guardará as contas poupança

using namespace std;

class Funcionario: public Pessoa{
private:
double salario;
string cargo, departamento;
std::vector<Funcionario> funcionarios;

public:
Funcionario(string nome, double cpf, string email, double salario, string cargo, string departamento) : Pessoa(nome,cpf,email), salario (salario), cargo (cargo), departamento (departamento){
this->salario = salario;
this->cargo = cargo;
this->departamento = departamento;
}

void cadastrafuncionario(){
cout<<"Entre com o nome do funcionario";
cin>>nome;

cout<<"Entre com o CPF do funcionario";
cin>>cpf;

cout<<"Entre com o email do funcionario";
cin>>email;

cout<<"Entre com o salario do funcionario";
cin>>salario;

cout<<"Entre com o cargo do funcionario";
cin>>cargo;

cout<<"Entre com o departamento do funcionario";
cin>>departamento;

Funcionario novofuncionario = Funcionario(nome,cpf,email,salario,cargo,departamento);
funcionarios.push_back(novofuncionario);
}

void atualizafuncionario(){
string nomenovo, emailnovo, cargonovo, departamentonovo;
double salarionovo, cpfnovo, attfuncionariocpf;

cout << "Entre com o cpf do funcionario que deseja atualizar:\n";
cin >> attfuncionariocpf;

for (auto &func : funcionarios) {
if (func.cpf == attfuncionariocpf){
cout<<"Entre com o nome do aluno";
cin>>nomenovo;

cout<<"Entre com o CPF do aluno";
cin>>cpfnovo;

cout<<"Entre com o email do aluno";
cin>>emailnovo;

cout<<"Entre com o salario do funcionario";
cin>>salarionovo;

cout<<"Entre com o cargo do funcionario";
cin>>cargonovo;

cout<<"Entre com o departamento do funcionario";
cin>>departamentonovo;

func.nome = nomenovo;
func.cpf = cpfnovo;
func.email = emailnovo;
func.salario = salarionovo;
func.cargo = cargonovo;
func.departamento = departamentonovo;
} else {
cout << "Aluno não encontrado.\n";
}
}
}

void exibirfuncionarios(){
cout << "Listagem dos Funcionarios:\n";
for (auto &func : funcionarios) {
cout << "Nome: " << func.nome << endl;
cout << "CPF: " << func.cpf << endl;
cout << "E-mail: " << func.email << endl;
cout << "Salario: " << func.salario << endl;
cout << "Cargo: " << func.cargo << endl;
cout << "Departamento: " << func.departamento << endl;
}
}

void reajustarsalario (double valor){
double reajustefuncionariocpf;
cout << "Entre com o cpf do funcionario que deseja reajustar salario:\n";
cin >> reajustefuncionariocpf;

for (auto &func : funcionarios) {
if (func.cpf == reajustefuncionariocpf){
func.salario += valor;
} else {
cout << "Funcionario não existe.";
}
}
}
};

#endif
