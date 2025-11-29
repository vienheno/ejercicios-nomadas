/*
Los trabajadores de una fábrica tienen tres turnos: mañana, tarde y
noche. La tarifa de los turnos de la mañana y tarde son iguales,
mientras que de noche son 30% mayores. Construye un programa que lea el
número de horas laboradas por un trabajador y su tarifa. Calcula el
salario semanal. Considera que durante la semana el trabajador se
encuentra siempre en el mismo turno.
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
cout<<endl<<"--------------- Inicio del código -----------------"<<endl<<endl; 
int turno = 0, horasPorDia = 0, diasPorSemana = 0;
float tarifa = 0, sueldo = 0;
cout << "Cúal es la tarifa de horas por día en soles: ";
cin >> tarifa;
if (tarifa < 0) {
    cout << "La tarifa debe ser positiva, vuelva ejecutar el programa";
    return 0;
}
cout << "¿En que turno trabaja?"<<endl;
cout << "1.Turno Mañana   2.Turno tarde   3.Turno Noche: ";
cin >> turno;
if (turno != 1 && turno != 2 && turno != 3) {
    cout << "Elección Incorrecta, vuelva ejecutar el programa"<<endl;
    return 0;
}
cout << "¿Cuantas horas al dia trabajas?: ";
cin >> horasPorDia;
if (horasPorDia > 24 || horasPorDia < 0) {
    cout << "Horas incorrectas, vuelva ejecutar el programa"<<endl;
    return 0;
}
cout << "¿Cuántos días a la semana trabajas?: ";
cin >> diasPorSemana;
if (diasPorSemana > 7 || diasPorSemana < 0) {
    cout << "Días incorrectos, vuelva ejecutar el programa"<<endl;
    return 0;
}

if (turno == 1 || turno == 2) sueldo = tarifa*horasPorDia*diasPorSemana;
else sueldo = 1.3*tarifa*horasPorDia*diasPorSemana;
cout << "El sueldo semanal del trabajador es: "<<sueldo<<" soles."<<endl;

cout<<endl<<"----------------- Fin del código ------------------"<<endl; 
    
    return 0;
}