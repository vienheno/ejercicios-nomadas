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

if (anio < 0) {
    cout << "El año no puede ser negativo, vuelva ejecutar el programa"<<endl;
    return 0;
}
if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0) bisiesto = true;
else bisiesto = false;

switch (mes)
{
case 1:
    if (dia >= 1 && dia <= 31) cout << "La fecha "<<dia<<"/"<<mes<<"/"<<anio<<" sí es valido";
    else cout <<"Fecha INCORRECTA, Enero no tiene "<<dia<<" dias";
    break;

case 2:
    if (bisiesto && dia >= 1 && dia <= 29) cout << "La fecha "<<dia<<"/"<<mes<<"/"<<anio<<" sí es valido";
    else if (bisiesto = false && dia >= 1 && dia <= 28) cout << "La fecha "<<dia<<"/"<<mes<<"/"<<anio<<" sí es valido";
    else cout <<"Fecha INCORRECTA, Febrero no tiene "<<dia<<" dias";
    break;

case 3:
    if (dia >= 1 && dia <= 31) cout << "La fecha "<<dia<<"/"<<mes<<"/"<<anio<<" sí es valido";
    else cout <<"Fecha INCORRECTA, Marzo no tiene "<<dia<<" dias";
    break;

case 4:
    if (dia >= 1 && dia <= 30) cout << "La fecha "<<dia<<"/"<<mes<<"/"<<anio<<" sí es valido";
    else cout <<"Fecha INCORRECTA, Abril no tiene "<<dia<<" dias";
    break;

case 5:
    if (dia >= 1 && dia <= 31) cout << "La fecha "<<dia<<"/"<<mes<<"/"<<anio<<" sí es valido";
    else cout <<"Fecha INCORRECTA, Mayo no tiene "<<dia<<" dias";
    break;

case 6:
    if (dia >= 1 && dia <= 30) cout << "La fecha "<<dia<<"/"<<mes<<"/"<<anio<<" sí es valido";
    else cout <<"Fecha INCORRECTA, Junio no tiene "<<dia<<" dias";
    break;

case 7:
    if (dia >= 1 && dia <= 31) cout << "La fecha "<<dia<<"/"<<mes<<"/"<<anio<<" sí es valido";
    else cout <<"Fecha INCORRECTA, Julio no tiene "<<dia<<" dias";
    break;

case 8:
    if (dia >= 1 && dia <= 31) cout << "La fecha "<<dia<<"/"<<mes<<"/"<<anio<<" sí es valido";
    else cout <<"Fecha INCORRECTA, Agosto no tiene "<<dia<<" dias";
    break;

case 9:
    if (dia >= 1 && dia <= 30) cout << "La fecha "<<dia<<"/"<<mes<<"/"<<anio<<" sí es valido";
    else cout <<"Fecha INCORRECTA, Setiembre no tiene "<<dia<<" dias";
    break;

case 10:
    if (dia >= 1 && dia <= 31) cout << "La fecha "<<dia<<"/"<<mes<<"/"<<anio<<" sí es valido";
    else cout <<"Fecha INCORRECTA, Octubre no tiene "<<dia<<" dias";
    break;

case 11:
    if (dia >= 1 && dia <= 30) cout << "La fecha "<<dia<<"/"<<mes<<"/"<<anio<<" sí es valido";
    else cout <<"Fecha INCORRECTA, Noviembre no tiene "<<dia<<" dias";
    break;

case 12:
    if (dia >= 1 && dia <= 31) cout << "La fecha "<<dia<<"/"<<mes<<"/"<<anio<<" sí es valido";
    else cout <<"Fecha INCORRECTA, Diciembre no tiene "<<dia<<" dias";
    break;

default: cout << "El mes ingresado en invalido";
    break;
}

cout<<endl<<endl<<"----------------- Fin del código ------------------"<<endl; 
    
    return 0;
}