/*
Construye una calculadora que lea dos números y un operador,
efectúa la operación indicada. La calculadora debe ser capaz de
realizar las siguientes operaciones: suma, resta, multiplicación,
división y potencia.
*/
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
cout<<endl<<"--------------- Inicio del código -----------------"<<endl<<endl; 

double a = 0.0, b = 0.0;
int operacion = 0;
cout << "Ingrese 2 números reales: ";
cin >> a >> b;
cout << "¿Qué operacion desea hacer?"<<endl;
cout << "1.Suma     2.Resta     3.Multiplicación    4.División      5.Potencia  : ";
cin >> operacion;

switch (operacion)
{
case 1:
    cout <<a<<" + "<<b<<" = "<<a+b<<endl;
    break;
case 2:
    cout <<a<<" - "<<b<<" = "<<a-b<<endl;
    break;
case 3:
    cout <<a<<" x "<<b<<" = "<<a*b<<endl;
    break;
case 4:
    if (b != 0) cout <<a<<" / "<<b<<" = "<<a/b<<endl;
    else cout << "No se puede dividir entre CERO"<<endl;
    break;
case 5:
    if (a != 0) cout <<a<<" elevado a la "<<b<<" = "<<pow(a,b)<<endl;
    else if (a == 0 && b > 0) cout <<a<<" elevado a la "<<b<<" = "<<pow(a,b)<<endl;
    else if (a == 0 && b <= 0) cout << "Operación Indeterminada"<<endl;
    break;

default: 
    cout <<"Opcion Incorrecta, vuelva a ejecutar el programa"<<endl;
    break;
}
cout<<endl<<"----------------- Fin del código ------------------"<<endl; 
    
    return 0;
}