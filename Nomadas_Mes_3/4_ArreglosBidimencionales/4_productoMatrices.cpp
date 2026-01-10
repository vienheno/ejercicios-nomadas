//Lee dos matrices y obtén el producto.
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void productoMatrices (int matriz1[100][100], int matriz2[100][100], int filas1, int filas2, int columnas1, int columnas2);
void imprimirMatriz (int matriz[100][100], int filas, int columnas);

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
cout<<endl<<"--------------- Inicio del código -----------------"<<endl<<endl; 
int matrizA[100][100], matrizB[100][100];
int filasA = 0, columnasA = 0;
int filasB = 0, columnasB = 0;

do
{
    if (columnasA != filasB) {
    cout<<endl<<"Las matrices no se pueden multiplicar"<<endl;
    cout<<"Las columnas de la matriz A tiene que ser igual a las filas de la matriz B"<<endl;
    }
    cout<<"Ingrese el número de filas de la matriz A: ";
    cin>>filasA;
    cout<<"Ingrese el número de columnas de la matriz A: ";
    cin>>columnasA;
    cout<<"Ingrese el número de filas de la matriz B: ";
    cin>>filasB;
    cout<<"Ingrese el número de columnas de la matriz A: ";
    cin>>columnasB;
    
} while (columnasA != filasB);

cout<<"Elementos de la matriz A: "<<endl;
for (int i = 0; i < filasA; i++) {
    for (int j = 0; j < columnasA; j++) {
        cout<<"Elemento a["<<i+1<<"]["<<j+1<<"]: ";
        cin>>matrizA[i][j];
    } 
}

cout<<endl<<"Elementos de la matriz B: "<<endl;
for (int i = 0; i < filasB; i++) {
    for (int j = 0; j < columnasB; j++) {
        cout<<"Elemento b["<<i+1<<"]["<<j+1<<"]: ";
        cin>>matrizB[i][j];
    } 
}
system("clear");
cout<<"Matriz A"<<endl;
imprimirMatriz(matrizA, filasA, columnasA);
cout<<endl<<"Matriz B"<<endl;
imprimirMatriz(matrizB, filasB, columnasB);
cout<<endl<<"Producto de matrices"<<endl;
productoMatrices(matrizA, matrizB, filasA, filasB, columnasA, columnasB);

cout<<endl<<"----------------- Fin del código ------------------"<<endl<<endl; 
    
    return 0;
}

void productoMatrices (int matriz1[100][100], int matriz2[100][100], int filas1, int filas2, int columnas1, int columnas2) {
    int matrizProducto[100][100];
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            for (int k = 0; k < filas2; k++){
              matrizProducto[i][j] += matriz1[i][k]*matriz2[k][j];                    
            }
        } 
    }  
    imprimirMatriz (matrizProducto, filas1, columnas2); 
}

void imprimirMatriz (int matriz[100][100], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout<<matriz[i][j]<<setw(5);
        }
        cout<<setw(0)<<endl;
    }
    
}