/*
Pide al usuario e imprime un contador desde N hasta 0, usando for
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
cout<<endl<<"--------------- Inicio del código -----------------"<<endl<<endl; 
int numero = 0;
cout << "Ingrese un número: ";
cin >> numero;

if (numero > 0) {for (int i = numero; i >= 0; i--) cout << i << " ";}
else cout<< "Numero invalido";

cout<<endl<<"----------------- Fin del código ------------------"<<endl<<endl; 
    
    return 0;
}