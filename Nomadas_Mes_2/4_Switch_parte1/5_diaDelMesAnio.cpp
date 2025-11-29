/*
Lee un mes y año y determina cuántos días tiene ese mes.
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
cout<<endl<<"--------------- Inicio del código -----------------"<<endl<<endl; 
int mes = 0, anio = 0;
bool bisiesto = false;

cout << "Ingrese el mes del año (Del 1 al 12): ";
cin >> mes;
cout << "Ingrese un año: ";
cin >> anio;

if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0) bisiesto = true;
else bisiesto = false;
/*
if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) dias = 31;
else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) dias = 30;
else if (mes == 2 && bisiesto == true) dias = 29;
else if (mes == 2 && bisiesto == false) dias = 28;
*/

switch (mes)
{
case 1:
    cout << "Enero del año "<<anio<<" tiene 31 dias"<<endl;
    break;
case 2:
    if (bisiesto) cout << "Febrero del año "<<anio<<" tiene 29 dias"<<endl;
    else cout << "Febrero del año "<<anio<<" tiene 28 dias"<<endl;
    break;
case 3:
    cout << "Marzo del año "<<anio<<" tiene 31 dias"<<endl;
    break;
case 4:
    cout << "Abril del año "<<anio<<" tiene 30 dias"<<endl;
    break;
case 5:
    cout << "Mayo del año "<<anio<<" tiene 31 dias"<<endl;
    break;
case 6:
    cout << "Junio del año "<<anio<<" tiene 30 dias"<<endl;
    break;
case 7:
    cout << "Julio del año "<<anio<<" tiene 31 dias"<<endl;
    break;
case 8:
    cout << "Agosto del año "<<anio<<" tiene 31 dias"<<endl;
    break;
case 9:
    cout << "Setiembre del año "<<anio<<" tiene 30 dias"<<endl;
    break;
case 10:
    cout << "Octubre del año "<<anio<<" tiene 31 dias"<<endl;
    break;
case 11:
    cout << "Noviembre del año "<<anio<<" tiene 30 dias"<<endl;
    break;
case 12:
    cout << "Diciembre del año "<<anio<<" tiene 31 dias"<<endl;
    break;
default:
    cout << "El mes ingresado es INCORRECTO, vuelva ejecutar el programa"<<endl;
    break;
}



    
    return 0;
}