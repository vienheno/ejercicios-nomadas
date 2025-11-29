/*
A un trabajador se le paga una tarifa fija las horas normales de
labores. Se consideran horas normales a todas las horas trabajadas hasta
un total de 140 al mes. Las horas adicionales a 140 se consideran
extras. Por una hora extra se paga el equivalente a 1,5 horas normales.
Los impuestos varían según el monto obtenido por el trabajador. Si el
sueldo es menor o igual a S/. 2000 no paga impuestos, por los
siguientes S/. 2000 paga el 10%, mientras que para montos mayores a S/.
4000 para el 15% sobre el adicional, ¿Cuál es el sueldo neto del
trabajador y cuál es el monto en impuestos que debe pagar?
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
cout<<endl<<"--------------- Inicio del código -----------------"<<endl<<endl; 

int horasMensuales = 0, horasExtras = 0;
float tarifaPorHora = 0, sueldoMensual = 0, impuestos = 0, sueldoNeto = 0;
cout << "Cúal es la tarifa por hora del trabajador: ";
cin >> tarifaPorHora;
cout << "¿Cuántas horas mensuales trabajó: ";
cin >> horasMensuales;
if (tarifaPorHora > 0 && (horasMensuales > 0 && horasMensuales <= 720))
{
    //Cálculo de sueldo mensual
    if (horasMensuales <= 140) sueldoMensual = tarifaPorHora*horasMensuales;
    else if (horasMensuales > 140) {
        horasExtras = horasMensuales - 140;
        sueldoMensual = 140*tarifaPorHora + 1.5*tarifaPorHora*horasExtras;
    }

    //Cálculo de impuestos
    if (sueldoMensual <= 2000) impuestos = 0;
    else if (sueldoMensual > 2000 && sueldoMensual <= 4000) impuestos = 0.1*(sueldoMensual - 2000);
    else impuestos = 0.1*2000 + 0.15*(sueldoMensual - 4000);

    //Cáculo de sueldo neto
    sueldoNeto = sueldoMensual - impuestos;

    cout <<endl<< "El sueldo mensual del trabajador es "<<sueldoMensual<< " soles";
    cout <<endl<< "Los impuestos a pagar son "<<impuestos<< " soles";
    cout <<endl<< "El sueldo neto a recibir es "<<sueldoNeto<< " soles"<<endl;
    
} else cout << "Datos Incorrectos, ejecute nuevamente el programa"<<endl;


cout<<endl<<"----------------- Fin del código ------------------"<<endl; 
    
    return 0;
}