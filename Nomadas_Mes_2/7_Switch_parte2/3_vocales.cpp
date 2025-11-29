/*
Si las vocales se representan con números del 1 al 5, lea un
número y diga qué vocal es.
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
cout<<endl<<"--------------- Inicio del código -----------------"<<endl<<endl; 

int numVocal = 0;
cout << "Ingrese un número del 1 a 5: ";
cin >> numVocal;

switch (numVocal)
{
case 1:
    cout << "La vocal es (A)"<<endl;
    break;
case 2:
    cout << "La vocal es (E)"<<endl;
    break;
case 3:
    cout << "La vocal es (I)"<<endl;
    break;
case 4:
    cout << "La vocal es (O)"<<endl;
    break;
case 5:
    cout << "La vocal es (U)"<<endl;
    break;

default: cout << "El numero ingresado es INCORRECTO"<<endl;
    break;
}


cout<<endl<<"----------------- Fin del código ------------------"<<endl; 
    
    return 0;
}