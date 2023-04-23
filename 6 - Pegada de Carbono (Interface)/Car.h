#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED

class Car: public CarbonFootprint{
private:
double miporgalao, mianual; // Variáveis específicas de classe
float cilindradas;

public:
Car (double milhas, double mpg, float cilindradas){ // Construtor da Classe
this->mianual = milhas;
this->miporgalao = mpg;
this->cilindradas = cilindradas;
}

void setCilindrada (float cilindradas){ // Métodos SET para definir as variáveis
cilindradas = cilindradas;
}

void setMilhas (double milhas){
mianual = milhas;
}

void setMiporGalao (double mpg){
miporgalao = mpg;
}

double getMilhas (){ // Métodos GET para retornar os valores
return mianual;
}

double getMiPorGalao (){
return miporgalao;
}

float getCilindrada(){
return cilindradas;
}

double getCarbonFootprint (){ // Implementa o método getCarbonFootprint da interface CarbonFootprint
return miporgalao*mianual*cilindradas;
}
};

#endif
