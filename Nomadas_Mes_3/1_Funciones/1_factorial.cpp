#include <iostream>
#include <string>

using namespace std;

int factorialNumero(int numero);

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("cls");
cout<<endl<<"--------------- Inicio del código -----------------"<<endl<<endl; 
int num = 0;
do {
    cout << "Ingrese un número entero positivo: ";
    cin >> num;
    if (num <= 0) cout << "Número Invalido"<<endl;
} while (num <= 0);
cout << "El factorial del número "<<num<<" es: "<<factorialNumero(num)<<endl;

cout<<endl<<"----------------- Fin del código ------------------"<<endl<<endl; 
    
    return 0;
}

int factorialNumero (int numero) {
    int factorial_n = numero;
    for (int i = numero - 1; i >= 1; i--) factorial_n *= i;
    
    return factorial_n;   
}