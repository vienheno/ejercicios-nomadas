/*
Escribe un programa que permita un arreglo y determine si todos los elementos son
mayores a un valor dado por el usuario. Usa una función de búsqueda secuencial.
*/ 
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Mayores a un número" << "\033[0m" << endl<<endl;
}

void crearArreglo (int arreglo[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout<<"Elemento "<<i+1<<": ";
        cin>>arreglo[i];
    }
}

void imprimirArreglo (int arreglo[], int tam) {
    cout<<" [ ";
    for (int i = 0; i < tam; i++) {
        cout<<arreglo[i]<<" ";
    }
    cout<<"] ";
}

bool compararSecuencial (int arreglo[], int tam, int numComp) {
    for (int i = 0; i < tam; i++) {
        if (numComp >= arreglo[i]) return false;
    } 
    return true;
}

int main() {
    titulo();
    int tam, numComp;
    bool valorVerdad;
    cout<<"Tamaño de arreglo: "; cin>>tam;
    int array[tam];
    crearArreglo(array, tam);
    cout<<"Arreglo Original: ";
    imprimirArreglo(array, tam); cout<<endl;
    cout<<"Elemento a comparar: "; cin>>numComp;
    valorVerdad = compararSecuencial(array, tam, numComp);
    if(valorVerdad) cout<<"Todos los elementos del arreglo son mayores que "<<numComp<<endl;
    else cout<<"Hay elementos del arreglo que son menores o igual a "<<numComp<<endl;

    return 0;
}