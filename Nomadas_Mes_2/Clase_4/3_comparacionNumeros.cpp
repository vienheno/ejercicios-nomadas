/*
Escribe un algoritmo que lea dos números y determina cómo
es respecto al otro (menor, igual o mayor).
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
//cout<<endl<<"--------------- Inicio del código -----------------"<<endl<<endl; 
int num1 = 0, num2 = 0;
cout << "Ingresa el primer número: ";
cin >> num1;
cout << "Ingresa el segundo número: ";
cin >> num2;

if (num1 < num2) cout << "El numero "<<num1<<" es menor que "<<num2<<endl;
else if (num1 > num2) cout << "El numero "<<num1<<" es mayor que "<<num2<<endl;
else cout << "Los 2 números son iguales"<<endl;

//cout<<endl<<"----------------- Fin del código ------------------"<<endl; 
    
    return 0;
}