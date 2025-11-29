#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
cout<<endl<<"--------------- Inicio del código -----------------"<<endl<<endl; 
int numero = 1;
double piCuartos = 0.0, fraccion = 0.0;
do
{
    fraccion = 1/static_cast<double>(2*numero -1);
    piCuartos += pow(-1,numero+1)*fraccion; 
    numero++;
} while (fraccion > 0.000001);

cout << "El numero PI es igual a: "<<4*piCuartos;

cout<<endl<<endl<<"----------------- Fin del código ------------------"<<endl; 
    
    return 0;
}