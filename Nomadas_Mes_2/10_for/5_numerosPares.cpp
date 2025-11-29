//Escribe un programa que pida un numero N y muestre todos los numeros pares desde 2 hasta N.
#include <iostream>
#include <string>

using namespace std;

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
cout<<endl<<"--------------- Números pares -----------------"<<endl<<endl; 
int numero = 0;
cout << "Ingrese un número: ";
cin >> numero;
if (numero > 0) {for (int i = 2; i <= numero; i++) if (i % 2 == 0) cout << "Número: "<<i<<endl;}
else cout << "Número Invalido"<<endl;

cout<<endl<<"----------------- Fin del código ------------------"<<endl<<endl; 
    
    return 0;
}