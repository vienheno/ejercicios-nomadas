//Encuentra el promedio de N números.

#include <iostream>
#include <string>

using namespace std;

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
cout<<endl<<"--------------- Inicio del código -----------------"<<endl<<endl; 
int cant = 0; 
float numero = 0, suma = 0;
cout << "Ingrese la cantidad de números a promediar: ";
cin >> cant;
for (int i = 1; i <= cant; i++)
{
    cout << "Ingrese el "<<i<<"° número: ";
    cin >> numero;
    suma += numero;
}
cout << "El promedio de los números es "<<suma/cant<<endl;

cout<<endl<<"----------------- Fin del código ------------------"<<endl<<endl; 
    
    return 0;
}