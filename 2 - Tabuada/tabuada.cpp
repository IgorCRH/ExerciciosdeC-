#include <iostream> // Biblioteca usada para entrada e sa�da

using namespace std; // Usar os recursos de entrada e sa�da da bibilioteca iostream

int main(){
int i, num;

cout <<"Entre com o numero desejado";
cin >> num;

for (i=0;i<10;i++){ // For que multiplica o n�mero desejado por 0 at� 9 que � o intervalo.
cout <<" " << num << "*" << i << " " << i*num << "\n";
}

}
