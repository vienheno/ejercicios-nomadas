//Dada una matriz encuentre el mayor elemento de cada fila.
#include <iostream>
#include <string>

using namespace std;

int mayorElemento (int mNumeros[4][5], int f, int c);

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
cout<<endl<<"--------------- Inicio del código -----------------"<<endl<<endl; 

int matrizNumeros[4][5] = {
                            {4, -5, 5, 3, 7},
                            {-7, 5, -8, 0, 11},
                            {10, -4, 6, 7, 12},
                            {3, -10, 14, 9, -6}};

for (int i = 0; i < 4; i++) {
    cout<<"El mayor elemento de la fila "<<i+1<<" es: "<<mayorElemento (matrizNumeros, i, 5)<<endl;
}
cout<<endl<<"----------------- Fin del código ------------------"<<endl<<endl; 
    
    return 0;
}
int mayorElemento (int mNumeros[4][5], int f, int c) {
    int mayor = mNumeros[f][0];
    for (int j = 1; j < c; j++) {
        if (mNumeros[f][j] > mayor) mayor = mNumeros[f][j];
    }
    return mayor;  
}