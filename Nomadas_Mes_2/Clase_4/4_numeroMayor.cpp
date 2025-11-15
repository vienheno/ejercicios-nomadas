/*
Encuentra el mayor valor de tres números dados.
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
//cout<<endl<<"--------------- Inicio del código -----------------"<<endl<<endl; 
int num1 = 0, num2 = 0, num3 = 0;
cout << "Ingrese el primer número: ";
cin >> num1;
cout << "Ingrese el segundo número: ";
cin >> num2;
cout << "Ingrese el tercer número: ";
cin >> num3;

if (num1 >= num2 & num1 > num3) cout << "El mayor es el número "<<num1;
else if (num2 >= num3) cout << "El mayor es el número "<<num2;
else if (num1 == num2 == num3) cout << "Los números son iguales";
else cout << "El mayor es el número "<<num3;

cout<<endl;



//cout<<endl<<"----------------- Fin del código ------------------"<<endl; 
    
    return 0;
}