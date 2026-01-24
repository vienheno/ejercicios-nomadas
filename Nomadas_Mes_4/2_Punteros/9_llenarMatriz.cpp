/*
Escribe un programa que cree una matriz dinámica de tamaño m x n, permita al usuario llenarla y luego la imprima en forma de tabla. 
Usa punteros para manejar la memoria dinámica.
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Matriz mxn" << "\033[0m" << endl<<endl;
}
void llenarMatriz(int fila, int columna, int *matriz) {
    cout<<"Complete la matriz"<<endl;
    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < columna; j++) {
            cout<<"Elemento ["<<i<<"]["<<j<<"]: ";
            cin>>matriz[i * columna + j];
        }
    }
}
void imprimirMatriz(int fila, int columna, int *matriz) {
    cout<<endl<<"Matriz completa:"<<endl;
    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < columna; j++) {
            cout<<matriz[i * columna + j]<<" ";
        }
        cout<<endl;
    }
    
}
int main() {
    titulo();
    int fil = 0, col = 0;
    cout<<"Número de filas: "; cin>>fil;
    cout<<"Número de columnas: ";cin>>col;
    int *matrizNum = new int[fil * col]; //Forma de declarar una matriz con punteros
    llenarMatriz(fil, col, matrizNum);
    imprimirMatriz(fil, col, matrizNum);
    
    return 0;
}