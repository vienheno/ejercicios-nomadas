/*
Crea un programa que pida la temperatura de una ciudad y
determine si es frío (menos de 10 grados), templado
(entre 10 y 25 grados) o caliente (más de 25 grados).
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
//cout<<endl<<"--------------- Inicio del código -----------------"<<endl<<endl; 
int temp = 0;
cout << "Ingrese la temperatura de la ciudad: ";
cin >> temp;

if (temp < 10) cout << "Es un clima frio"<<endl<<endl;
else if (temp >= 10 && temp < 25) cout << "El clima es templado"<<endl<<endl;
else if (temp >= 25 && temp < 50) cout << "El clima es caliente"<<endl<<endl;
else cout << "Estas en el infierno"<<endl<<endl;

//cout<<endl<<"----------------- Fin del código ------------------"<<endl; 
    
    return 0;
}