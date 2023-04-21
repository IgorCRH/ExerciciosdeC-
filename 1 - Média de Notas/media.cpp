#include <iostream>
#include <iomanip> // Inclui a biblioteca do setprecision para imprimir com limite de casas decimais

using namespace std;

int main (){
int p1, p2, p3;
float media;
string situacao;

cout <<"Entre com a nota da primeira avaliacao do aluno";
cin >> p1;
cout <<"Entre com a nota da segunda avaliacao do aluno";
cin >> p2;
cout <<"Entre com a nota da terceira avaliacao do aluno";
cin >> p3;
media = (p1+p2+p3)/3.0;
situacao= (media >= 5) ? "O aluno foi aprovado" : "O aluno foi reprovado"; // String como operador ternário que retorna a situação do aluno

cout <<"" << situacao << "Media: " << fixed << setprecision(2) << media; // Usa o fixed e o setprecision para imprimir a média com até duas casas decimais
}
