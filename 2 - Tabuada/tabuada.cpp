#include <iostream> // Biblioteca usada para entrada e saída

using namespace std; // Usar os recursos de entrada e saída da bibilioteca iostream

int main(){
int i, num;

cout <<"Entre com o numero desejado";
cin >> num;

for (i=0;i<10;i++){ // For que multiplica o número desejado por 0 até 9 que é o intervalo.
cout <<" " << num << "*" << i << " " << i*num << "\n";
}

}
