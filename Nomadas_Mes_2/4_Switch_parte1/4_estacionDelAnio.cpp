/*
Lee un día y mes cualquiera y determina la estación a la que pertenece.
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
cout<<endl<<"--------------- Inicio del código -----------------"<<endl<<endl; 
int hemisferio = 0;
cout << "¿En que hemisferio vives?"<<endl;
cout << "Hemisferio NORTE, digita 1."<<endl;
cout << "Hemisferio SUR, digita 2."<<endl;
cout << "Digite una opción: ";
cin >> hemisferio;

if (hemisferio != 1 && hemisferio != 2) {
    cout << "Hemisferio no válido, vuelva a ejecutar el programa"<<endl<<endl;
    return 0;
}

int dia = 0, mes = 0;
cout << "Ingresa el día de la fecha: ";
cin >> dia;
cout << "Ingresa el mes: ";
cin >> mes;

if ((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) && dia > 31) {
    cout << "La fecha ingresada no es válida, vuelva a ejecutar el programa"<<endl;
    return 0;
}else if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) {
    cout << "La fecha ingresada no es válida, vuelva a ejecutar el programa"<<endl;
    return 0;
}else if (mes == 2 && dia > 29) {
    cout << "La fecha ingresada no es válida, vuelva a ejecutar el programa"<<endl;
    return 0;
}


switch (mes)
{
case 1:
    if (hemisferio == 1) cout << "La estacion es Invierno"<<endl;
    else cout << "La estación es Verano"<<endl;
    break;
case 2:
    if (hemisferio == 1) cout << "La estacion es Invierno"<<endl;
    else cout << "La estación es Verano"<<endl;
    break;
case 3:
    switch (hemisferio)
    {
    case 1:
        if (dia < 20) cout << "La estación es INVIERNO"<<endl;
        else if (dia >= 20) cout << "La estación es PRIMAVERA"<<endl;
        else cout << "La fecha no es validad, ejecute nuevamente el programa"<<endl;
        break;
    case 2:
        if (dia < 20) cout << "La estación es VERANO"<<endl;
        else if (dia >= 20) cout << "La estación es OTOÑO"<<endl;
        else cout << "La fecha no es validad, ejecute nuevamente el programa"<<endl;
        break;
    
    default:
        break;
    }
    break;
    
case 4:
    if (hemisferio == 1) cout << "La estacion es PRIMAVERA"<<endl;
    else cout << "La estación es OTOÑO"<<endl;
    break;
case 5:
    if (hemisferio == 1) cout << "La estacion es PRIMAVERA"<<endl;
    else cout << "La estación es OTOÑO"<<endl;
    break;
case 6:
    switch (hemisferio)
    {
    case 1:
        if (dia < 21) cout << "La estación es PRIMAVERA"<<endl;
        else if (dia >= 21) cout << "La estación es VERANO"<<endl;
        else cout << "La fecha no es validad, ejecute nuevamente el programa"<<endl;
        break;
    
    case 2:
        if (dia < 21) cout << "La estación es OTOÑO"<<endl;
        else if (dia >= 21) cout << "La estación es INVIERNO"<<endl;
        else cout << "La fecha no es validad, ejecute nuevamente el programa"<<endl;
        break;
    
    default:
        break;
    }
    
case 7:
    if (hemisferio == 1) cout << "La estacion es VERANO"<<endl;
    else cout << "La estación es INVIERNO"<<endl;
    break;
case 8:
    if (hemisferio == 1) cout << "La estacion es VERANO"<<endl;
    else cout << "La estación es INVIERNO"<<endl;
    break;
case 9:
    switch (hemisferio)
    {
    case 1:
        if (dia < 22) cout << "La estación es VERANO"<<endl;
        else if (dia >= 22) cout << "La estación es OTOÑO"<<endl;
        else cout << "La fecha no es validad, ejecute nuevamente el programa"<<endl;
        break;
    case 2:
        if (dia < 22) cout << "La estación es INVIERNO"<<endl;
        else if (dia >= 22) cout << "La estación es PRIMAVERA"<<endl;
        else cout << "La fecha no es validad, ejecute nuevamente el programa"<<endl;
        break;
    
    default:
        break;
    }
    
case 10:
    if (hemisferio == 1) cout << "La estacion es OTOÑO"<<endl;
    else cout << "La estación es PRIMAVERA"<<endl;
    break;
case 11:
    if (hemisferio == 1) cout << "La estacion es OTOÑO"<<endl;
    else cout << "La estación es PRIMAVERA"<<endl;
    break;
case 12:
    switch (hemisferio)
    {
    case 1:
        if (dia < 21) cout << "La estación es OTOÑO"<<endl;
        else if (dia >= 21) cout << "La estación es INVIERNO"<<endl;
        else cout << "La fecha no es validad, ejecute nuevamente el programa"<<endl;
        break;

    case 2:
        if (dia < 21) cout << "La estación es PRIMAVERA"<<endl;
        else if (dia >= 21) cout << "La estación es VERANO"<<endl;
        else cout << "La fecha no es validad, ejecute nuevamente el programa"<<endl;
        break;
    
    default:
        break;
    }   

default:
    cout << "El mes es incorrecto, vuelva a ejecutar el programa."<<endl;
    break;
}
    
    return 0;
}