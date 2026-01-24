/*
Escribe un programa que invierta los elementos de un arreglo utilizando una función con punteros. 
El programa debe imprimir el arreglo antes y después de invertirlo.
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void titulo();
void printArray (int *array, int tamanio);
void invertirArray (int *array, int tamanio);

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    titulo();
    int tam;
    cout<<"Tamaño del arreglo: "; cin>>tam;

    int *arrayNumeros = new int[tam];

    for (int i = 0; i < tam; i++) {
        cout<<"Elemento "<<i+1<<": "; cin>>*(arrayNumeros + i);
    }
    cout<<"Arreglo original: ";
    printArray(arrayNumeros, tam);
    invertirArray(arrayNumeros, tam);

    cout << endl << endl << "----------------- Fin del código ------------------" << endl << endl; 
    return 0;
}

void titulo() {
    system("cls");
    cout << "--------------- Invertir Arreglo -----------------" << endl;
}

void printArray (int *array, int tamanio) {
    for (int i = 0; i < tamanio; i++) {
        cout<<*(array + i)<<"  ";
    }  
}

void invertirArray (int *array, int tamanio) {
    int temp;
    for (int i = 0; i < tamanio/2; i++) {
        temp = *(array + i);
        *(array + i) = *(array + tamanio - 1 - i);
        *(array + tamanio - 1 - i) = temp;
    }
    cout<<endl<<"Arreglo invertido: ";
    printArray (array, tamanio);
    
}