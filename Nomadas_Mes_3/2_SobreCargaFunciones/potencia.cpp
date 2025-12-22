#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double potenciaNumero (int base, int potencia);
double potenciaNumero (double base, double potencia);
double potenciaNumero (int base, double potencia);
double potenciaNumero (double base, int potencia);


int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
cout<<endl<<"--------------- Inicio del código -----------------"<<endl<<endl; 
int baseEntera = 0, potenciaEntera = 0;
double baseDouble = 0.0, potenciaDouble = 0.0;
cout<<"Resultado de Potencia: "<<potenciaNumero(2.3, 5.1)<<endl;

cout<<endl<<"----------------- Fin del código ------------------"<<endl<<endl; 
    
    return 0;
}

double potenciaNumero (int base, int potencia) {
    double resultado = pow(base, potencia);
    return resultado;
}

double potenciaNumero (double base, double potencia) {
    double resultado = pow(base, potencia);
    return resultado;
}

double potenciaNumero (double base, int potencia) {
    double resultado = pow(base, potencia);
    return resultado;
}

double potenciaNumero (int base, double potencia) {
    double resultado = pow(base, potencia);
    return resultado;
}