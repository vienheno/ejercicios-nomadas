/*
Lee tres números que representen el día, el mes y el año, y di si forman una fecha correcta. Considera años bisiestos.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
cout<<endl<<"--------------- Inicio del código -----------------"<<endl<<endl; 
int dia = 0, mes = 0, anio = 0;
bool bisiesto = false;

cout << "Ingrese un día del mes: ";
cin >> dia;
cout << "Ingrese el mes del año (Del 1 al 12): ";
cin >> mes;
cout << "Ingrese un año: ";
cin >> anio;

if (anio < 1582) {
    cout << "No pertenece al año Gregoriano, vuelva ejecutar el programa"<<endl;
    return 0;
}
if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0) bisiesto = true;
//else bisiesto = false;

switch (mes)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
    if (dia >= 1 && dia <= 31) cout << "La fecha "<<dia<<"/"<<mes<<"/"<<anio<<" sí es valido";
    else cout <<"Fecha INCORRECTA, este mes no tiene "<<dia<<" dias";
    break;

case 2:
    if (bisiesto && (dia >= 1 && dia <= 29)) cout << "La fecha "<<dia<<"/"<<mes<<"/"<<anio<<" sí es valido";
    else if (bisiesto == false && (dia >= 1 && dia <= 28)) cout << "La fecha "<<dia<<"/"<<mes<<"/"<<anio<<" sí es valido";
    else cout <<"Fecha INCORRECTA, Febrero no tiene "<<dia<<" dias";
    break;

case 4:
case 6:
case 9:
case 11:
    if (dia >= 1 && dia <= 30) cout << "La fecha "<<dia<<"/"<<mes<<"/"<<anio<<" sí es valido";
    else cout <<"Fecha INCORRECTA, Este mes no tiene "<<dia<<" dias";
    break;

default: cout << "El mes ingresado en invalido";
    break;
}

cout<<endl<<endl<<"----------------- Fin del código ------------------"<<endl; 
    
    return 0;
}