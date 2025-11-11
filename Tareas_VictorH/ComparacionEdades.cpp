/*
* Escribe un programa que solicite dos edades y muestre si tienen la misma edad o cuál es mayor.
∗ Solicita un valor booleano y muestra el valor contrario.
∗ Solicita dos números enteros, si ambos números son positivos muestra: “Ambos son positivos”. Si al menos uno es negativo muestra: “Al menos uno es negativo”.
∗ Declara una variable x con un valor ingresado por teclado. Luego, aumenta su valor en 5 usando el operador de asignación y muéstralo.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
cout<<endl<<"--------------- Inicio del código -----------------"<<endl<<endl; 

int edad1 = 0, edad2 = 0;
cout << "Digite la primera edad: ";
cin >> edad1;
cout << "Digite la segunda edad: ";
cin >> edad2;

(edad1 == edad2) ? cout << "Las edades son iguales" : ((edad1 < edad2) ? cout << "La edad1 es menor que la edad2" : cout <<"La edad1 es mayor que la edad2");
cout<<endl<<endl<<"----------------- Fin del código ------------------"<<endl; 
    
    return 0;
}