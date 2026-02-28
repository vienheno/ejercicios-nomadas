/*
Escribe un programa que permita al usuario ingresar un arreglo y busque la frecuencia de
un número dado usando una función y la búsqueda secuencial.
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Frecuencia de un número - Busqueda Secuencial" << "\033[0m" << endl<<endl;
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

int busquedaSecuencialFrecuencia (int arreglo[], int tam, int buscar) {
    int contarBuscar = 0;
    for (int i = 0; i < tam; i++) {
        if (buscar == arreglo[i]) contarBuscar ++;
    }
    return contarBuscar;
}

int main() {
    titulo();
    int tam, buscar, frecuencia;
    cout<<"Tamaño de arreglo: "; cin>>tam;
    int array[tam];
    crearArreglo(array, tam);
    cout<<"Arreglo Original: ";
    imprimirArreglo(array, tam); cout<<endl;
    cout<<"Elemento a buscar: "; cin>>buscar;
    frecuencia = busquedaSecuencialFrecuencia (array, tam, buscar);
    cout<<"El elemento "<<buscar<<" se repite "<<frecuencia<<" veces";

    return 0;
}