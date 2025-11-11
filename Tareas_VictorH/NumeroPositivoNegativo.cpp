//Solicita dos números enteros, si ambos números son positivos muestra: “Ambos son
//positivos”. Si al menos uno es negativo muestra: “Al menos uno es negativo”.

#include <iostream>
#include <string>

using namespace std;

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
cout<<endl<<"--------------- Inicio del código -----------------"<<endl<<endl; 

int numX = 0, numY = 0;

cout << "Ingrese el primer número: ";
cin >> numX;
cout << "Ingrese el segundo número: ";
cin >> numY;
cout << ((numX > 0 && numY > 0) ?  "Ambos son positivos" : ((numX < 0 || numY < 0) ?  "Alguno de ellos es negativo" :  "Los numneros son Ceros o Hay un positivo y un Cero"));

cout<<endl<<endl<<"----------------- Fin del código ------------------"<<endl; 
    
    return 0;
}