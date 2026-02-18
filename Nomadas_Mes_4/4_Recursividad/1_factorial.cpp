//Calcula el factorial de un número mediante una función recursiva.
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Título" << "\033[0m" << endl<<endl;
}
int factorial(int num) {
    //int factN = 1;
    if (num == 0) num = 1;
    else num = num * factorial(num - 1);
    return num;
}
int main() {
    titulo();
    int num;
    cout<<"Ingrese un número: "; cin>>num;
    cout<<endl<<"El factorial de "<<num<<" es "<<factorial(num);
    return 0;
}