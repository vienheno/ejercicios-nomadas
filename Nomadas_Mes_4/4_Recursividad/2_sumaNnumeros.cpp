//Usando métodos recursivos, obtén la suma de los n primeros números naturales positivos.
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Suma de numeros" << "\033[0m" << endl<<endl;
}

int sumaNnumeros (int n) {
    if (n == 1) return 1;
    else n = n + sumaNnumeros(n - 1);
    return n;
}

int main() {
    titulo();
    int num = 1;
    cout<<"Cantidad de números: "; cin>>num;
    cout<<"La suma de los "<<num<<" números es "<<sumaNnumeros(num)<<endl;

    return 0;
}