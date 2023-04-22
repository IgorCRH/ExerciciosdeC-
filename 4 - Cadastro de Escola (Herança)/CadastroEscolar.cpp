#include <iostream> // Insere biblioteca de entrada e saída
#include "Pessoa.h" // Insere as três classes, incluindo as herdeiras no arquivo principal
#include "Aluno.h"
#include "Funcionario.h"

using namespace std;

int main(){
string nome, email, cargo, departamento; // Declara as vari�veis a serem usadas nas classes
int opc, escolhe, matricula, cpf;
double salario, cr, valor;
Aluno al = Aluno(nome,cpf,email,matricula,cr); // Criação dos objetos das classe
Funcionario fu = Funcionario(nome,cpf,email,salario,cargo,departamento);

do {
cout << "Digite a opcao desejada: " << endl;
cout << "1 - Cadastrar Aluno" << endl;
cout << "2 - Cadastrar Funcionario" << endl;
cout << "3 - Listar Alunos" << endl;
cout << "4 - Listar Funcionarios" << endl;
cout << "5 - Anular Matricula de Aluno" << endl;
cout << "6 - Reajustar Salario de Funcinario" << endl;
cout << "7 - Atualizar Informacoes de um Aluno" << endl;
cout << "8 - Atualizar Informacoes de um Funcinario" << endl;
cout << "9 - Sair" << endl;
cin >> opc;

switch (opc){
case 1:
al.cadastraaluno(); //
break;
case 2:
fu.cadastrafuncionario(); //
break;
break;
case 3:
al.exibiralunos();
break;
case 4:
fu.exibirfuncionarios();
break;
case 5:
al.anulamatricula();
break;
case 6:
cout << "Entre com o valor do reajuste: \n";
cin >> valor;
fu.reajustarsalario(valor);
break;
case 7:
al.atualizaaluno();
break;
case 8:
fu.atualizafuncionario();
break;
}
} while (opc != 9);
}
