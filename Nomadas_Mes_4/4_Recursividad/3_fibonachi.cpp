//Calcula el enésimo número Fibonacci mediante una función recursiva.
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Fibinacci" << "\033[0m" << endl<<endl;
}

int fibonacci (int nFibonacci) {
    if (nFibonacci == 0) return 0;
    if (nFibonacci == 1) return 1;
    nFibonacci = fibonacci(nFibonacci - 1) + fibonacci(nFibonacci - 2);
    return nFibonacci;
}

int main() {
    titulo();
    int num;
    cout << "Enesimo Fibonacci: "; cin>>num;
    cout << "El fibonacci en la posicion "<<num<<" es "<<fibonacci(num - 1);

    return 0;
}