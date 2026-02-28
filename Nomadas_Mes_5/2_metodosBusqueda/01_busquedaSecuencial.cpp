/*
Escribe un programa que permita al usuario ingresar un arreglo y buscar un número específico.
 Implementa la búsqueda secuencial como una función.
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Busqueda Secuencial" << "\033[0m" << endl<<endl;
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

int busquedaSecuencial (int arreglo[], int tam, int buscar) {
    for (int i = 0; i < tam; i++) {
        if (buscar == arreglo[i]) return i;
    }
    return -1;
}

int main() {
    titulo();
    int tam, buscar, posicion;
    cout<<"Tamaño de arreglo: "; cin>>tam;
    int array[tam];
    crearArreglo(array, tam);
    cout<<"Arreglo Original: ";
    imprimirArreglo(array, tam); cout<<endl;
    cout<<"Elemento a buscar: "; cin>>buscar;
    
    posicion = busquedaSecuencial (array, tam, buscar);
    if (posicion != -1) cout<<"El elemento "<<buscar<<" se encuentra en la posición i = "<<posicion;
    else cout<<"El elemento no se encuentra en el arreglo";

    return 0;
}