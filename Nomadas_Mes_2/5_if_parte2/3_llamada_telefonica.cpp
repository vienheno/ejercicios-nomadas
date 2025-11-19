/*
Una llamada telefónica cuesta 0.5 soles los primeros 3 minutos, 
y cada minuto adicional cuesta 0.1 soles. 
Calcule el costo de la llamada de una duración de llamada ingresada por el usuario.
*/
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
cout<<endl<<"--------------- Inicio del código -----------------"<<endl<<endl; 

float duracionLlamada = 0, costoLlamada = 0, duracionRedonda = 0;

cout << "¿Cúanto duró la llamada?: ";
cin >> duracionLlamada;

if (duracionLlamada >= 0 && duracionLlamada <= 3) costoLlamada = 0.5;
else if (duracionLlamada > 3) {
    duracionRedonda = ceil(duracionLlamada);
    costoLlamada = 0.5 + 0.1*(duracionRedonda - 3);
} else {
    cout << "Duracion de llamada inválida";
    return 0;
}
cout << "El costo de la llamada es "<<costoLlamada<<" soles";

cout<<endl<<endl<<"----------------- Fin del código ------------------"<<endl; 
    
    return 0;
}