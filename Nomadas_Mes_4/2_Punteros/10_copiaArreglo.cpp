/*
Escribe un programa que cree un arreglo dinámico, lo llene con valores ingresados por el usuario y luego cree una copia exacta del arreglo en otra ubicación de memoria dinámica usando punteros. Muestra ambos arreglos al final.
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Copia de Arreglo" << "\033[0m" << endl<<endl;
}
void printArray (int *array, int tamanio) {
    cout<<"[";
    for (int i = 0; i < tamanio; i++) {
        cout<<*(array + i)<<"  ";
    }  
    cout<<"]"<<endl;
    cout<<"Dirección: ";
    for (int i = 0; i < tamanio; i++) {
        cout<<array + i<<"  ";
    }
}
void copiaArreglo (int *array, int *arrayCopia, int tamanio) {
    for (int i = 0; i < tamanio; i++) {
        *(arrayCopia + i) = *(array + i);
    }
    
}

int main() {
    titulo();
    int tam;
    cout<<"Tamaño del arreglo: "; cin>>tam;

    int *arrayNumeros = new int[tam];
    int *copiaArray = new int[tam];

    for (int i = 0; i < tam; i++) {
        cout<<"Elemento "<<i+1<<": "; cin>>*(arrayNumeros + i);
    }
    cout<<endl<<"Arreglo original: ";
    printArray(arrayNumeros, tam);
    copiaArreglo(arrayNumeros, copiaArray, tam);
    cout<<endl<<endl<<"Arreglo copia: ";
    printArray(copiaArray, tam);

    return 0;
}