//Escribe un programa que solicite la edad de una persona y
//determine si es mayor de edad (18 años o más) o no.

#include <iostream>
#include <string>

using namespace std;

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
//cout<<endl<<"--------------- Mayor de Edad -----------------"<<endl<<endl; 
int edad = 0;
cout << "Ingrese la edad de una persona: ";
cin >> edad;

if (edad >= 0 && edad < 18) cout << "La persona es menor de edad"<<endl<<endl;
else if (edad >= 18 && edad <= 100) cout <<"La persona es mayor de edad"<<endl<<endl;
else if (edad > 100) cout << "La persona esté posiblemente muerta"<<endl<<endl;
else cout << "La edad ingresada no es valida"<<endl<<endl;

//cout<<endl<<"----------------- Fin del código ------------------"<<endl; 
    
    return 0;
}