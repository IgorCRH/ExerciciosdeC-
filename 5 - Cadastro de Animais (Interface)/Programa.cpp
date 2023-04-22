#include "Animal.h"
#include "AnimalID.h"
#include <iostream>
#include <vector>

using namespace std;

int main (){
std::vector<AnimalID> animais; // Vetor que guardará os animais
string nome, especie, cor; // Variáveis a serem usadas na classe e no arquivo principal
int numpatas, codigo, opc;

do {
cout << "Entre com o nome do animal: \n"; // Área de cadastro dos animais
cin >> nome;

cout << "Entre com a especie do animal: \n";
cin >> especie;

cout << "Entre com a cor do animal: \n";
cin >> cor;

cout << "Entre com o numero de patas do animal: \n";
cin >> numpatas;

cout << "Entre com o codigo do animal: \n";
cin >> codigo;

AnimalID novoanimal = AnimalID(nome,especie,cor,numpatas,codigo); // Cria um novo objeto novoaninal para cadastrar as informações do novo animal no sistema
animais.push_back(novoanimal); // Inclui o novo animal cadastro no vetor que guarda os animais registrados

cout << "Deseja continuar cadastrando? Sim ou Não (2)?";
cin >> opc;
} while (opc != 2);
cout << "Listagem dos Animais Cadastrados:\n";
for (auto &anim : animais) { // Percorre o vetor e lista os animais registrados
cout << "Nome: " << anim.getNome() << endl; // Vai ao método público na classe AnimalID que implementa os da interface animal e pega a variável contida ali
cout << "Especie: " << anim.getEspecie() << endl;
cout << "Cor: " << anim.getCor() << endl;
cout << "Numero de Patas: " << anim.getNumpatas() << endl;
cout << "Codigo: " << anim.getCodigo() << endl;
}
}
