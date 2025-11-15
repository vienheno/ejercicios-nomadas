/*
Ingresa el día y mes de nacimiento de una persona y di cuál es su signo del zodiaco.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
cout<<endl<<"--------------- Inicio del código -----------------"<<endl<<endl; 
int dia = 0, mes = 0;
cout << "Ingresa el día de tu nacimiento: ";
cin >> dia;
cout << "Ingresa el mes de tu nacimiento: ";
cin >> mes;
/*
if ((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) && dia > 31) {
    cout << "La fecha ingresada no es válida, vuelva a ejecutar el programa"<<endl;
    return 0;
}
if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) {
    cout << "La fecha ingresada no es válida, vuelva a ejecutar el programa"<<endl;
    return 0;
}
if (mes == 2 && dia > 29) {
    cout << "La fecha ingresada no es válida, vuelva a ejecutar el programa"<<endl;
    return 0;
}
*/

switch (mes) {
case 1:
    if (dia >= 20 && dia <= 31) cout << "El signo de la persona es ACUARIO"<<endl;
    else if (dia < 20 && dia > 0) cout << "El signo de la persona es CAPRICORNIO"<<endl;
    else cout << "La fecha ingresada no es válida, vuelva a ejecutar el programa"<<endl;
    break;
case 2:
    if (dia >= 19 && dia <= 29) cout << "El signo de la persona es PISIS"<<endl;
    else if (dia < 19 && dia > 0) cout << "El signo de la persona es ACUARIO"<<endl;
    else cout << "La fecha ingresada no es válida, vuelva a ejecutar el programa"<<endl;
    break;
case 3:
    if (dia >= 21 && dia <= 31) cout << "El signo de la persona es ARIES"<<endl;
    else if (dia < 21 && dia > 0) cout << "El signo de la persona es PISIS"<<endl;
    else cout << "La fecha ingresada no es válida, vuelva a ejecutar el programa"<<endl;
    break;
case 4:
    if (dia >= 20 && dia <= 30) cout << "El signo de la persona es TAURO"<<endl;
    else if (dia < 20 && dia > 0) cout << "El signo de la persona es ARIES"<<endl;
    else cout << "La fecha ingresada no es válida, vuelva a ejecutar el programa"<<endl;
    break;
case 5:
    if (dia >= 21 && dia <= 31) cout << "El signo de la persona es GEMINIS"<<endl;
    else if (dia < 21 && dia > 0) cout << "El signo de la persona es TAURO"<<endl;
    else cout << "La fecha ingresada no es válida, vuelva a ejecutar el programa"<<endl;
    break;
case 6:
    if (dia >= 21 && dia <= 30) cout << "El signo de la persona es CANCER"<<endl;
    else if (dia < 21 && dia > 0) cout << "El signo de la persona es GEMINIS"<<endl;
    else cout << "La fecha ingresada no es válida, vuelva a ejecutar el programa"<<endl;
    break;
case 7:
    if (dia >= 23 && dia <= 31) cout << "El signo de la persona es LEO"<<endl;
    else if (dia < 23 && dia > 0) cout << "El signo de la persona es CANCER"<<endl;
    else cout << "La fecha ingresada no es válida, vuelva a ejecutar el programa"<<endl;
    break;
case 8:
    if (dia >= 23 && dia <= 31) cout << "El signo de la persona es VIRGO"<<endl;
    else if (dia < 23 && dia > 0) cout << "El signo de la persona es LEO"<<endl;
    else cout << "La fecha ingresada no es válida, vuelva a ejecutar el programa"<<endl;
    break;
case 9:
    if (dia >= 23 && dia <= 30) cout << "El signo de la persona es LIBRA"<<endl;
    else if (dia < 23 && dia > 0) cout << "El signo de la persona es VIRGO"<<endl;
    else cout << "La fecha ingresada no es válida, vuelva a ejecutar el programa"<<endl;
    break;
case 10:
    if (dia >= 23 && dia <= 31) cout << "El signo de la persona es ESCORPIO"<<endl;
    else if (dia < 23 && dia > 0) cout << "El signo de la persona es LIBRA"<<endl;
    else cout << "La fecha ingresada no es válida, vuelva a ejecutar el programa"<<endl;
    break;
case 11:
    if (dia >= 22 && dia <= 30) cout << "El signo de la persona es SAGITARIO"<<endl;
    else if (dia < 22 && dia > 0) cout << "El signo de la persona es ESCORPIO"<<endl;
    else cout << "La fecha ingresada no es válida, vuelva a ejecutar el programa"<<endl;
    break;
case 12:
    if (dia >= 22 && dia <= 31) cout << "El signo de la persona es CAPRICORNIO"<<endl;
    else if (dia < 22 && dia > 0) cout << "El signo de la persona es SAGITARIO"<<endl;
    else cout << "La fecha ingresada no es válida, vuelva a ejecutar el programa"<<endl;
    break;

default: 
    cout << "La fecha ingresada no es válida, vuelva a ejecutar el programa"<<endl;
    break;
}

cout<<endl<<"----------------- Fin del código ------------------"<<endl; 
    
    return 0;
}