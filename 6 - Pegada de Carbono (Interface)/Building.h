#ifndef BUILDING_H_INCLUDED
#define BUILDING_H_INCLUDED
#include <iostream>
#include <string.h>

using namespace std;

class Building: public CarbonFootprint{
private:
int meses = 12;
double kwhconsumomensal;

public:
Building (double kwhconsumomensal){
this->kwhconsumomensal = kwhconsumomensal;
}

void setKwhmes(double kwhconsumomensal){
this->kwhconsumomensal = kwhconsumomensal;
}

double getKwhmes(){
return kwhconsumomensal;
}

double getCarbonFootprint(){
return meses*kwhconsumomensal;
}
};

#endif
