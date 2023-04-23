#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED

class Car: public CarbonFootprint{
private:
double miporgalao, mianual; // Vari�veis espec�ficas de classe
float cilindradas;

public:
Car (double milhas, double mpg, float cilindradas){ // Construtor da Classe
this->mianual = milhas;
this->miporgalao = mpg;
this->cilindradas = cilindradas;
}

void setCilindrada (float cilindradas){ // M�todos SET para definir as vari�veis
cilindradas = cilindradas;
}

void setMilhas (double milhas){
mianual = milhas;
}

void setMiporGalao (double mpg){
miporgalao = mpg;
}

double getMilhas (){ // M�todos GET para retornar os valores
return mianual;
}

double getMiPorGalao (){
return miporgalao;
}

float getCilindrada(){
return cilindradas;
}

double getCarbonFootprint (){ // Implementa o m�todo getCarbonFootprint da interface CarbonFootprint
return miporgalao*mianual*cilindradas;
}
};

#endif
