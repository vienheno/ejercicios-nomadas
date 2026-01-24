/*
Escribe un programa que encuentre el valor máximo de un arreglo de enteros usando una función que manipule punteros.
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void titulo();

int mayorElemento (int *array, int tamanio);
void printArray (int *array, int tamanio);

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    titulo();
    int tam;
    cout<<"Tamaño del arreglo: "; cin>>tam;

    int *arrayNumeros = new int[tam];

    for (int i = 0; i < tam; i++) {
        cout<<"Elemento "<<i+1<<": "; cin>>*(arrayNumeros + i);
    }
    cout<<"Arreglo: ";
    printArray(arrayNumeros, tam);
    
    cout<<endl<<"El mayor número del arreglo es: "<<mayorElemento(arrayNumeros, tam);

    delete[] arrayNumeros;

    cout << endl << endl << "----------------- Fin del código ------------------" << endl << endl; 
    return 0;
}

void titulo() {
    system("cls");
    cout << "--------------- Título del Proyecto -----------------" << endl;
}

int mayorElemento (int *array, int tamanio) {
    int mayor = *(array + 0);
    for (int i = 0; i < tamanio; i++) {
        if (mayor <= *(array + i)) mayor = *(array + i);
    }
    return mayor;
}

void printArray (int *array, int tamanio) {
    for (int i = 0; i < tamanio; i++) {
        cout<<*(array + i)<<"  ";
    }  
}