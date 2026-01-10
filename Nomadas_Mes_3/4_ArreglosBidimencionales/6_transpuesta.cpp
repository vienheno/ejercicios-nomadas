//Encuentra la transpuesta de una matriz.
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
const int MAX_FIL = 100;
const int MAX_COL = 100;

void imprimirMatriz (int filas, int columnas, float matriz[MAX_FIL][MAX_COL]);
void matrizTranspuesta (int filas, int columnas, float matriz[MAX_FIL][MAX_COL]);

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
cout<<endl<<"--------------- Matriz Transpuesta -----------------"<<endl<<endl; 
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
cout<<"Matriz A";
imprimirMatriz(filasA, columnasA, matrizA);

//Calculando e imprimiento la matriz Transpuesta
cout<<endl<<endl<<"Matriz transpuesta de A";
matrizTranspuesta(filasA, columnasA, matrizA);

cout<<endl<<endl<<"----------------- Fin del código ------------------"<<endl<<endl; 
    
    return 0;
}



void imprimirMatriz (int filas, int columnas, float matriz[MAX_FIL][MAX_COL]) {
    for (int i = 0; i < filas; i++) {
        cout<<setw(0)<<endl;
        for (int j = 0; j < columnas; j++) cout<<matriz[i][j]<<setw(5);
    }
}

void matrizTranspuesta (int filas, int columnas, float matriz[MAX_FIL][MAX_COL]) {
    float matrizTr[MAX_COL][MAX_FIL];
    for (int i = 0; i < columnas; i++) {
        for (int j = 0; j < filas; j++) {
            matrizTr[i][j] = matriz[j][i];
        }   
    }
    imprimirMatriz(columnas, filas, matrizTr);
}