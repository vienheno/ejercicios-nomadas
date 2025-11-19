/*
Dada 3 longitudes, comprueba si pueden formar un triangulo.
Clasifica el tipo de triangulo (Escaleno, isoceles o equilatero)
*/
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
cout<<endl<<"--------------- Inicio del código -----------------"<<endl<<endl;
float lado1, lado2, lado3;

cout << "Ingresa los 3 lados del triangulo: "<<endl;
cin >>lado1>>lado2>>lado3;

if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0){
    cout << "No puede haber logitudes negativas, vuelva ejecutar el programa"<<endl<<endl;
    return 0;
}
if (lado1 < lado2 + lado3 && lado1 > abs(lado2 - lado3)){
    cout << "SÍ se puede formar un triangulo con esas longitudes"<<endl;
    if ((lado1 == lado2) && (lado2 == lado3)) cout <<"El triangulo es EQUILATERO";
    else if ((lado1 != lado2) &&(lado1 != lado3) && (lado2 != lado3)) cout <<"El triangilo es ESCALENO";
    else cout << "El triangulo es ISOCELES";
} else cout << "No se puede formar un triangulo con esas longitudes";

cout<<endl<<endl<<"----------------- Fin del código ------------------"<<endl; 
    
    return 0;
}