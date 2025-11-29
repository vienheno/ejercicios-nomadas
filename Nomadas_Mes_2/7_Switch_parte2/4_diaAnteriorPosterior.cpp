//Dada una fecha, di la fecha del día de ayer y del dia posterior.
#include <iostream>
#include <string>

using namespace std;

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
cout<<endl<<"--------------- Inicio del código -----------------"<<endl<<endl; 
int dia = 0, mes = 0, anio = 0; 
int diaAnterior = 0, mesAnterior = 0, anioAnterior = 0;
int diaSiguiente = 0, mesSiguiente = 0, anioSiguiente = 0;
bool bisiesto = false, fechaCorrecta = false;

cout << "Ingrese un día del mes: ";
cin >> dia;
cout << "Ingrese el mes del año (Del 1 al 12): ";
cin >> mes;
cout << "Ingrese un año: ";
cin >> anio;

if (anio < 1582 || (mes < 1 && mes > 12)) {
    cout << "No pertenece al año Gregoriano, vuelva ejecutar el programa"<<endl;
    return 0;
}
if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0) bisiesto = true;

//Cálculo fecha anterior
if (dia == 1 && (mes == 12 || mes == 10 || mes == 7 || mes == 5)) diaAnterior = 30;
else if (dia == 1 && (mes == 1 || mes == 11 || mes == 9 || mes == 6 || mes == 4 || mes == 2)) diaAnterior = 31;
else if ((dia == 1 && mes == 2) && bisiesto == true) diaAnterior = 29;
else if ((dia == 1 && mes == 2) && bisiesto == false) diaAnterior = 28;
else if (dia > 1){
    diaAnterior = dia - 1;
    mesAnterior = mes;
    anioAnterior = anio;
}
if (dia == 1) {
    if (mes == 1) {
        mesAnterior = 12;
        anioAnterior = anio - 1;
    }else {
        mesAnterior = mes - 1;
        anioAnterior = anio; 
    }
}

//Cálculo fecha posterior
if (dia == 31 && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)) diaSiguiente = 1;
else if (dia == 30 && (mes == 4 || mes == 6 || mes == 9 || mes == 11)) diaSiguiente = 1;
else if ((dia == 29 && mes == 2) && bisiesto == true) diaSiguiente = 1;
else if ((dia == 28 && mes == 2) && bisiesto == false) diaSiguiente = 1;
else {
    diaSiguiente = dia + 1;
    mesSiguiente = mes;
    anioSiguiente = anio;
}
if (diaSiguiente == 1) {
    if (mes == 12) {
        mesSiguiente = 1;
        anioSiguiente = anio + 1;
    } else {
        mesSiguiente= mes + 1;
        anioSiguiente = anio;
    }
}
cout << "La fecha del dia anterior es "<<diaAnterior<<" / "<<mesAnterior<<" / "<<anioAnterior<<endl;
cout << "La fecha del dia siguiente es "<<diaSiguiente<<" / "<<mesSiguiente<<" / "<<anioSiguiente<<endl;
cout<<endl<<"----------------- Fin del código ------------------"<<endl<<endl; 
    
    return 0;
}