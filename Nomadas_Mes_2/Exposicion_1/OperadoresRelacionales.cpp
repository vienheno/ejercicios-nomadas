#include <iostream>
#include <string>

using namespace std;

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");

int numA = 10, numB = 6; //Declaracion de variables enteras

if (numA > numB) cout << "El número " << numA << " es mayor que " << numB << endl; 
if (numA < numB) cout << "El número " << numA << " es menor que " << numB << endl;
if (numA == numB) cout << "El número " << numA << " es igual que " << numB << endl;
if (numA != numB) cout << "El número " << numA << " es diferente que " << numB << endl; 
if (numA >= numB) cout << "El número " << numA << " es mayor o igual que " << numB << endl; 
if (numA <= numB) cout << "El número " << numA << " es menor o igual que " << numB << endl;

    return 0;
}