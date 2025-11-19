/*
Escribe un algoritmo que lea el promedio de un alumno y diga cual es su rendimiento,
considera: datos erroneos, rendimiento pésimo, rendimiento deficiente, rendimiento regular y redimiento bueno.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
cout<<endl<<"--------------- Inicio del código -----------------"<<endl<<endl; 
float promedio;
cout << "Ingrese el promedio del alumno (0 - 20): ";
cin >> promedio;
if (promedio >= 0 && promedio <= 5) cout << "Rendimiento PÉSIMO";
else if (promedio > 5 && promedio <= 10) cout << "Rendimiento DEFICIENTE";
else if (promedio > 10 && promedio < 15) cout << "Rendimiento REGULAR";
else if (promedio >= 15 && promedio <= 20) cout << "Rendimiento BUENO";
else cout <<"El promedio ingresado en ÍNVALIDO";

cout<<endl<<endl<<"----------------- Fin del código ------------------"<<endl; 
    
    return 0;
}