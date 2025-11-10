#include <iostream>
#include <string>

#define SALUDO = "Hola Mundo"

using namespace std;

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
cout<<endl<<"--------------- Constantes -----------------"<<endl<<endl; 
const int MAX_NOTAS = 100;
const float PI = 3.14159;
const char SEPARADOR = '-';
const bool ES_ADMIN = true;

//Área de un circulo.
float radio = 0, area = 0;
cout << "Ingrese el radio del circulo";
cin >> radio;
area = PI*radio*radio;
cout << "El área del circulo de radio "<<radio<<" es: "<<area<<endl;
cout<<endl<<"----------------- Fin del código ------------------"<<endl; 
    
    return 0;
}