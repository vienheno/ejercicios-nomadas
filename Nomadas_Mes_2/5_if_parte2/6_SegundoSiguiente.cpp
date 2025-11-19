/*
Dada la hora del dia en horas, minutos y segundo, encuentre la hora del siguiente segundo.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
cout<<endl<<"--------------- Inicio del código -----------------"<<endl<<endl; 
int horas, minutos, segundos;
cout << "Ingrese una hora del dia en formato HH/MM/SS"<<endl;
cout << "Ingrese la hora (HH): ";
cin >> horas;
cout << "Ingrese los minutos (MM): ";
cin >> minutos;
cout << "Ingrese los segundos (SS): ";
cin >> segundos;

if ((horas < 24 && horas >= 0) && (minutos >= 0 && minutos < 60) && (segundos >= 0 && segundos < 60)) {
    cout << "Hora ingresada: "<<horas<<":"<<minutos<<":"<<segundos<<endl;
    if (segundos + 1 == 60) {
        segundos = 00;
        if (minutos + 1 == 60) {
            minutos = 00;
            if (horas + 1 == 24) horas = 00;
        } else minutos ++;            
    } else segundos ++;      
    cout << "Luego de 1 segundo, la hora es: "<<horas<<":"<<minutos<<":"<<segundos<<endl;
} else cout << "La hora ingresada es INCORRECTA"<<endl;

cout<<endl<<"----------------- Fin del código ------------------"<<endl; 
    
    return 0;
}