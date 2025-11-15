#include <iostream>
#include <string>

using namespace std;

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");

int numA = 10, numB = 3, resultado1 = 0; //Declaracion de variables enteras
float numC = 4.5, numD = 3.5, resultado2 = 0.0; //Declaracion de variables flotantes

resultado1 = numA + numB;  //Suma 10 + 3 = 13
cout << "El resultado de la suma es: " << resultado1 << endl;
resultado1 = numA - numB;  //Resta 10 - 3 = 7
cout << "El resultado de la resta es: " << resultado1 << endl;
resultado2 = numC * numD;  //Multiplicacion 4.5 * 3.5 = 15.75
cout << "El resultado de la multiplicacion es: " << resultado2 << endl;
resultado2 = numC / numB;  //Division 4.5 / 3 = 1.5
cout << "El resultado de la division es: " << resultado2 << endl;
resultado1 = numA % numB;  //Resto 0 módulo 10 % 3 = 1
cout << "El resultado del modulo es: " << resultado1 << endl;
    
    return 0;
}