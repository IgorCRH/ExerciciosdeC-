#include <iostream> // Insere biblioteca de entrada e sa�da
#include "ContaBancaria.h" // Insere as tr�s classes, incluindo as herdeiras no arquivo principal
#include "ContaPoupanca.h"
#include "ContaEspecial.h"

using namespace std;

int main(){
string cliente; // Declara as vari�veis a serem usadas nas classes
int opc, escolhe, numconta;
float saldo, quantia, limite, rendimento;
ContaBancaria b = ContaBancaria(cliente, numconta, saldo); // Cria��o dos objetos das classe
ContaPoupanca c = ContaPoupanca(cliente, numconta, saldo,rendimento);
ContaEspecial e = ContaEspecial(cliente, numconta, saldo, limite);

do {
cout << "Digite a op��o desejada: " << endl;
cout << "1 - Cadastrar Cliente" << endl;
cout << "2 - Realizar Saque" << endl;
cout << "3 - Realizar Dep�sito" << endl;
cout << "4 - Exibir Novo Saldo a partir do Rendimento" << endl;
cout << "5 - Pesquisar Cliente" << endl;
cout << "6 - Listar Clientes" << endl;
cout << "7 - Sair" << endl;
cin >> opc;

switch (opc){
case 1:
cout << "Deseja cadastrar conta poupan�a (1) ou especial (2)?: \n";
cin >> escolhe;
if (escolhe == 1) {
c.cadastraconta(); // Chamada ao m�todo cadastraconta da Classe ContaPoupanca por meio do objeto c
break;
} else if (escolhe == 2) {
e.cadastraconta(); // Chamada ao m�todo cadastraconta da Classe ContaEspecial por meio do objeto e
}
break;
case 2:
cout << "Entre com a quantia: \n";
cin >> quantia;
cout << "Sua conta �: conta poupan�a (1) ou especial (2)?: \n";
cin >> escolhe;
if (escolhe == 1) {
c.sacar(quantia); // Chamada ao m�todo sacar da Classe ContaPoupanca por meio do objeto c, usando o valor quantia passado por argumento.
} else if (escolhe == 2) {
e.saqueespecial(quantia); // Chamada ao m�todo sacaresp da Classe ContaEspecial por meio do objeto e, usando o valor quantia passado por argumento.
}
break;
case 3:
cout << "Entre com a quantia: \n";
cin >> quantia;
cout << "Sua conta �: conta poupan�a (1) ou especial (2)?: \n";
cin >> escolhe;
if (escolhe == 1) {
c.depositar(quantia); // Chamada ao m�todo depositar da Classe ContaPoupanca por meio do objeto c, usando o valor quantia passado por argumento.
} else if (escolhe == 2) {
e.depositar(quantia); // Chamada ao m�todo depositar da Classe ContaEspecial por meio do objeto e, usando o valor quantia passado por argumento.
}
break;
case 4:
c.novosaldo(); // Chamada ao m�todo novosaldo da Classe ContaPoupanca por meio do objeto c
break;
case 5:
cout << "Sua conta �: conta poupan�a (1) ou especial (2)?: \n";
cin >> escolhe;
if (escolhe == 1) {
c.pesquisa(); // Chamada ao m�todo pesquisa da Classe ContaPoupanca por meio do objeto c, para listar os dados da conta, se esta for poupan�a.
} else if (escolhe == 2) {
e.pesquisa(); // Chamada ao m�todo pesquisa da Classe ContaPoupanca por meio do objeto c, para listar os dados da conta, se esta for especial.
}
break;
case 6:
cout << "Listagem dos Clientes: \n";
cout << "Contas Poupan�a: \n";
c.exibir();
cout << "Contas Especiais: \n";
e.exibir(); // Chamada ao m�todo exibir da classe ContaEspecial, usando o objeto e
break;
}
} while (opc != 7);
}
