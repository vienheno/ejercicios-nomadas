/*
Crea un programa que permita realizar operaciones básicas (suma, resta, multiplicación y división) entre dos números. 
Usa una función que reciba punteros para devolver los resultados.
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Operaciones Matemáticas" << "\033[0m" << endl<<endl;
}
double operaciones(double *ptr_numA, double *ptr_numB, int option) {
    double resultado;
    switch (option)
    {
    case 1: //suma
        resultado = *ptr_numA + *ptr_numB;
        break;
    case 2: //resta
        resultado = *ptr_numA - *ptr_numB;
        break;
    case 3: //multiplicacion
        resultado = *ptr_numA * *ptr_numB;
        break;
    case 4: //division
        resultado = *ptr_numA / *ptr_numB;
        break;
    
    default:
        break;
    }
    return resultado;
}

int main() {
    titulo();
    double num1, num2;
    int option = 0;
    cout<<"Ingrese 2 números"<<endl;
    cout<<"1° número: "; cin>>num1;
    cout<<"2° número: ";cin>>num2;
    double *ptr_num1 = &num1;
    double *ptr_num2 = &num2;
    titulo();
    cout<<"los números ingresados son "<<*ptr_num1<<" y "<<*ptr_num2<<endl;
    cout<<"¿Qué operación desea hacer?"<<endl;
    while (option != 1 && option != 2 && option != 3 && option != 4)
    {
        cout<<"Suma (Digite 1)   Resta (Digite 2)   Multiplicación (Digite 3)   División (Digite 4):  ";
        cin>>option;
        if (option != 1 && option != 2 && option != 3 && option != 4) {
            cout << "\033[A\033[2K\033[A\033[2K"; //Sube el cursor 2 lineas arriba y las borra
            cout << "\r"; //posiciona el curso al inicio de la linea
            cout<<"Opcion Incorrecta, elija una opción"<<endl;
        } 
    }
    if(isinf(operaciones(ptr_num1, ptr_num2, option))) cout<<"Operacion invalida en los Reales";
    else cout<<"La operación es: "<<operaciones(ptr_num1, ptr_num2, option);
    

    return 0;
}