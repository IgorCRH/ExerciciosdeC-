#ifndef ALUNO_H_INCLUDED // Gere o ifndef para a classe ser incluida no arquivo com a função main
#define ALUNO_H_INCLUDED
#include <iostream> // Insere as bibiliotecas de entrada e saída e de string
#include <string>
#include <vector> // Inclui a biblioteca de vetores para o vetor que guardará as contas poupança

using namespace std;

class Aluno: public Pessoa{
private: // Declaração das variáveis próprias da Classe
int matricula;
double cr;
std::vector<Aluno> alunos; // Vetor que vai guardar todos os alunos registrados

public:
Aluno (string nome, double cpf, string email, int matricula, double cr) : Pessoa(nome,cpf,email), matricula(matricula), cr(cr){
this->matricula = matricula;
this->cr = cr;
}

void cadastraaluno(){
cout<<"Entre com o nome do aluno";
cin>>nome;

cout<<"Entre com o CPF do aluno";
cin>>cpf;

cout<<"Entre com o email do aluno";
cin>>email;

cout<<"Entre com a matricula do aluno";
cin>>matricula;

cout<<"Entre com o CR do aluno";
cin>>cr;

Aluno novoaluno = Aluno(nome,cpf,email,matricula,cr);
alunos.push_back(novoaluno);
}

void exibiralunos (){
cout << "Listagem dos Alunos:\n";
for (auto &aln : alunos) { // Percorre o vetor das contas poupança e imprime os alunos
cout << "Nome: " << aln.nome << endl; // Imprime as informações dos alunos usando o objeto aln
cout << "CPF: " << aln.cpf << endl;
cout << "E-mail: " << aln.email << endl;
cout << "Matricula: " << aln.matricula << endl;
cout << "CR: " << aln.cr << endl;
}
}

void anulamatricula(){
int matriculaanula;
cout << "Entre com o numero da matricula que deseja anular:\n";
cin >> matriculaanula;

for (auto &aln : alunos) {
if (aln.matricula == matriculaanula){
aln.matricula = 0;
} else {
cout << "Não encontrado.\n";
}
}
}

void atualizaaluno (){
string nomenovo, emailnovo;
int matriculanova, matriculaatt;
double cpfnovo, crnovo;

cout << "Entre com o numero da matricula do aluno que deseja atualizar:\n";
cin >> matriculaatt;

for (auto &aln : alunos) {
if (aln.matricula == matriculaatt){
cout<<"Entre com o nome do aluno";
cin>>nomenovo;

cout<<"Entre com o CPF do aluno";
cin>>cpfnovo;

cout<<"Entre com o email do aluno";
cin>>emailnovo;

cout<<"Entre com a matricula do aluno";
cin>>matriculanova;

cout<<"Entre com o CR do aluno";
cin>>crnovo;

aln.nome = nomenovo;
aln.cpf = cpfnovo;
aln.email = emailnovo;
aln.matricula = matriculanova;
aln.cr = crnovo;
} else {
cout << "Aluno não encontrado.\n";
}
}
}
};

#endif
