/*
Escribe un programa que lea un número entre 1 y 7, y que
muestre el nombre del día de la semana correspondiente.
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
//cout<<endl<<"--------------- Inicio del código -----------------"<<endl<<endl; 
int numDia = 0;

cout << "Ingrese un número entre el 1 y el 7: ";
cin >> numDia;

switch (numDia){

case 1:
    cout << "Día Lunes";
    break;
case 2:
    cout << "Día Martes";
    break;
case 3:
    cout << "Día Miercoles";
    break;
case 4:
    cout << "Día Jueves";
    break;
case 5:
    cout << "Día Viernes";
    break;
case 6:
    cout << "Día Sábado";
    break;
case 7:
    cout << "Día Domingo";
    break;

default:
    cout << "El número ingresado es inválido";
    break;
}
cout << endl;

//cout<<endl<<"----------------- Fin del código ------------------"<<endl; 
    
    return 0;
}