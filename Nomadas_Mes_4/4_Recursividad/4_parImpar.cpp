//Usando recursividad, determina si un número es par o impar.
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Par o Impar" << "\033[0m" << endl<<endl;
}
bool parImpar (int numero) {
    if (numero == 0) return true;
    if (numero == 1) return false;

    return parImpar(numero - 2);
}
int main() {
    titulo();
    int numero;
    cout<<"Ingrese un número positivo: "; cin>>numero;
    if(parImpar(numero)) cout<<"El número es PAR";
    else cout<<"El numero es IMPAR";

    return 0;
}