//Lee un número en base 10 y muestre su equivalente en base 2 por métodos recursivos.
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Número en base 2" << "\033[0m" << endl<<endl;
}

void numeroBase2 (int num) {
    int resto;
    
    if (num == 0) {
        return;
    }
    resto = num % 2;
    
    numeroBase2(num / 2);
    cout<<resto;
}

int main() {
    titulo();
    int num;
    cout<<"Ingrese un numero: "; cin>>num;
    cout<<"El número en base 2 es ";
    numeroBase2(num);

    return 0;
}