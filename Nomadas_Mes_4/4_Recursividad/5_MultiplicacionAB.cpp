//Obtén el producto de dos enteros a y b de manera recursiva.
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Título" << "\033[0m" << endl<<endl;
}
int multiplicacion (int x, int y) {
    if(y == 1) return x;
    return x + multiplicacion(x, y - 1);
}
int main() {
    titulo();
    int num1, num2;
    cout<<"Ingrese el primer número: "; cin>>num1;
    cout<<"Ingrese el segundo número: "; cin>>num2;
    cout<<"El resultado de "<<num1<<" x "<<num2<<" es "<<multiplicacion(num1, num2);

    return 0;
}