/*
Desarrolla un programa que permita encontrar el menor elemento de un arreglo.
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Menor Elemento" << "\033[0m" << endl<<endl;
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

void busquedaSecuencial (int arreglo[], int tam, int arrMenor[]) {
    arrMenor[0] = arreglo[0];
    arrMenor[1] = 0;
    for (int i = 1; i < tam; i++) {
        if (arreglo[i] < arrMenor[0]) {
            arrMenor[0] = arreglo[i];
            arrMenor[1] = i;
        }
    }
}

int main() {
    titulo();
    int tam, posicion;
    cout<<"Tamaño de arreglo: "; cin>>tam;
    int array[tam], arrMenor[2]; //arrMenor[0] ==> Numero menor, arrMenor[1] ==> Su ubicacion
    crearArreglo(array, tam);
    cout<<"Arreglo Original: ";
    imprimirArreglo(array, tam); cout<<endl;
    busquedaSecuencial (array, tam, arrMenor);
    cout<<"El número menor es "<<arrMenor[0]<<" y esta en la posicion ["<<arrMenor[1]<<"]";
    return 0;
}