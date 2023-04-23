#include "CarbonFootprint.h"
#include "Building.h"
#include "Car.h"
#include <iostream>
#include <vector>

using namespace std;

main (){
int opc, numlampada, pessoas; // Variaveis a serem utilizadas
double kwhconsumomensal, milhas, mpg, kwhmes, conslampada, consenerg, consac, energrenov;
float cilindradas;
std::string checausorenovavel, checausoac;
bool usoenergrenov, usoac;
std::vector<Building> buildings; // Vetores para guardar as informações e pegadas de carbono de carros e predios
std::vector<Car> cars;

do {
// Área de inserção das informações do Predio
cout << "Entre com o numero de pessoas do predio:  \n";
cin >> pessoas;

cout << "Entre com o número de lampadas: \n";
cin >> numlampada;

cout << "Entre com o consumo das lampadas: \n";
cin >> conslampada;

cout << "Entre com o consumo restante: \n";
cin >> consenerg;

cout << "Há o uso de energia renovável? \n";
cin >> checausorenovavel;
usoenergrenov = (checausorenovavel[0] == 'S' || checausorenovavel[0] == 's'); // Se a string de checagem para determinar se ha uso de energia renovavel for sim, esse sera o valor verdadeiro (0) na variavel booleana

cout << "Há o uso de ar condicionado? \n";
cin >> checausoac;
usoac = (checausoac[0] == 'S' || checausoac[0] == 's'); // Se a string de checagem para determinar se ha uso de ar condicionado for sim, esse sera o valor verdadeiro (0) na variavel booleana

kwhconsumomensal = pessoas*(numlampada*conslampada)+consenerg; // Formula para calcular o KWH mensal

if (usoenergrenov){ // Se a variavel booleana for verdadeira, isto eh, s for digitado
cout << "Entre com o uso renovável do prédio:  \n";
cin >> energrenov;
kwhconsumomensal -= energrenov;
}

if (usoac){ // Se a variavel booleana for verdadeira, isto eh, s for digitado
cout << "Entre com o consumo do ar condicionado:  \n";
cin >> consac;
kwhconsumomensal += consac;
}

Building newbuilding = Building(kwhconsumomensal); // Instancia objeto da classe Building para inserir o novo predio com as informacoes
buildings.push_back(newbuilding); // Adiciona o predio ao vetor que guarda as informacoes

// Área de entrada com as informações da classe Car
cout << "Entre com a milha ao ano do Carro 1:  \n";
cin >> milhas;
cout << "Entre com a milhas por galao do Carro 1:  \n";
cin >> mpg;
cout << "Entre com a cilindrada:  \n";
cin >> cilindradas;
Car newcar = Car(milhas,mpg,cilindradas); // Instancia objeto da classe Car para cadastrar as informações
cars.push_back(newcar); // Adiciona novo item carro com as informações ao vetor
cout << "Deseja continuar cadastrando? Sim ou Não (2)?";
cin >> opc;
} while (opc !=2);

cout << "Pegada de Carbono:  \n"; // Lista o nível de pegada de carbono
cout << "Carros:  \n";
for (auto &carbftprintcar : cars) {
cout << "" << carbftprintcar.getCarbonFootprint() << endl;
}
cout << "Predios:  \n";
for (auto &carbftprintbuilding : buildings) {
cout << "" << carbftprintbuilding.getCarbonFootprint() << endl;
}
}
