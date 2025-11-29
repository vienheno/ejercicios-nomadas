/*
Crea un programa que simule un menú de opciones para
realizar operaciones aritméticas simples: suma, resta,
multiplicación, división y potencia.
*/
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
//cout<<endl<<"--------------- Inicio del código -----------------"<<endl<<endl; 
int operacion = 0;
float num1 = 0, num2 =0;
double potencia = 0;

cout <<"Ingrese 2 números que desee operar"<<endl;
cout << "Digite el primer número: ";
cin >> num1;
cout << "Digite el segundo número: ";
cin >> num2;
cout <<endl<<"¿Qué operacion desea realizar:"<<endl;
cout << "1) Suma        2) Resta        3) Multiplicación"<<endl;
cout << "4) División    5) Potencia"<<endl<<endl;

cout << "Ingrese una opción: ";
cin >> operacion;

switch (operacion)
{
case 1:   
    cout << "La suma de los dos números es :"<<num1 + num2;
    break; 
case 2:
    cout << "La resta de los dos números es :"<<num1 - num2;
    break;
case 3:
    cout << "El producto de los dos números es :"<<num1 * num2;
    break;
case 4:
    if (num2 == 0) cout << "No se puede dividir entre CERO";
    break;
case 5:
    potencia = pow(num1,num2);
    cout << "La potencia de los dos números es :"<<potencia;
    break;

default:
    cout << "Operación ingresada invalida";
    break;
}

cout << endl;

//cout<<endl<<"----------------- Fin del código ------------------"<<endl; 
    
    return 0;
}