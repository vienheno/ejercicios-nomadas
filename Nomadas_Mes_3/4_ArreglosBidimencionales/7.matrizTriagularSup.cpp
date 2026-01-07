//Dada una matriz di si es una matriz triangular superior.
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
const int MAX_FIL = 100;
const int MAX_COL = 100;

void imprimirMatriz (int filas, int columnas, float matriz[MAX_FIL][MAX_COL]);
bool matrizTriangularSuperior (int filas, int columnas, float matriz[MAX_FIL][MAX_COL]);

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
cout<<endl<<"--------------- Inicio del código -----------------"<<endl<<endl; 
int filasA = 0, columnasA = 0;
float matrizA[MAX_FIL][MAX_COL];
//Número de filas y columnas
cout<<"Ingrese el número de filas: ";
cin>>filasA;
cout<<"Ingrese el número de columnas: ";
cin>>columnasA;

//Dando valores de elemtos de la matriz
for (int i = 0; i < filasA; i++) {
    for (int j = 0 ; j < columnasA; j++) {
        cout<<"Elemento a["<<i+1<<"]["<<j+1<<"]: ";
        cin>>matrizA[i][j];
    } 
}

//Imprimiendo matriz
cout<<endl<<"Matriz A";
imprimirMatriz(filasA, columnasA, matrizA);
cout<<endl;
if (matrizTriangularSuperior(filasA, columnasA, matrizA) == true) cout<<endl<<"La matriz A si es TRIANGULAR SUPERIOR";
else cout<<endl<<"La matriz A no es TRIANGULAR SUPERIOR";

cout<<endl<<"----------------- Fin del código ------------------"<<endl<<endl; 
    
    return 0;
}

void imprimirMatriz (int filas, int columnas, float matriz[MAX_FIL][MAX_COL]) {
    for (int i = 0; i < filas; i++) {
        cout<<setw(0)<<endl;
        for (int j = 0; j < columnas; j++) cout<<matriz[i][j]<<setw(5);
    }
}

bool matrizTriangularSuperior (int filas, int columnas, float matriz[MAX_FIL][MAX_COL]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (i > j && matriz[i][j] != 0) return false;
        }   
    }
    return true;  
}