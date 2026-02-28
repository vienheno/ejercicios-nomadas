/*
Escribe un programa que permita ingresar un arreglo, lo ordene y permita buscar múltiples
números con una función de búsqueda binaria.
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std;

void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Busqueda Multiple - Binaria" << "\033[0m" << endl<<endl;
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

void busquedaBinariaMultiple (int arreglo[], int tam, int arrBuscar[], int tamBuscar) {  
    for (int i = 0; i < tamBuscar; i++) {
        int indexL = 0, indexR = tam - 1;
        bool encontrado = false;
        while (indexL <= indexR) {
            int indexC = (indexL + indexR) / 2;
            if (arreglo[indexC] == arrBuscar[i]){
                encontrado = true;
                cout<<"El número "<<arrBuscar[i]<<" se encontró en el índice ["<<indexC<<"]."<<endl;
                break;
            }
            else if (arreglo[indexC] < arrBuscar[i]) indexL = indexC + 1;
            else indexR = indexC - 1;
        }
        if (encontrado == false) cout<<"El número "<<arrBuscar[i]<<" NO se encontró"<<endl;
    }
}

void intercambioElementosArray (int arreglo[], int index1, int index2) {
    int aux = arreglo[index1];
    arreglo[index1] = arreglo[index2];
    arreglo[index2] = aux;
}

void quickSort (int arreglo[], int indexInicial, int indexFinal) {
    if (indexInicial < indexFinal) {
        int indexPiv = indexFinal, indexAux = indexInicial - 1;
        for (int i = indexInicial; i < indexFinal ; i++) {
            if (arreglo[i] <= arreglo[indexPiv]) {
                indexAux++;
                intercambioElementosArray(arreglo, i, indexAux);
            }
        }
        intercambioElementosArray(arreglo, indexAux + 1, indexPiv);
        indexAux++;
        quickSort(arreglo, indexInicial, indexAux - 1);
        quickSort(arreglo, indexAux + 1, indexFinal);
    }  
}

int main() {
    titulo();
    
    int tam, tamBuscar;
    cout<<"Tamaño de arreglo: "; cin>>tam;
    int array[tam];
    crearArreglo(array, tam);
    titulo();
    cout<<"Arreglo Original: ";
    imprimirArreglo(array, tam); cout<<endl;
    cout<<"¿Cuantos elementos desea buscar?: ";cin>>tamBuscar; 
    int arrBuscar[tamBuscar];
    for (int i = 0; i < tamBuscar; i++) {
        cout<<"Digite el "<<i+1<<"° elemento: "; cin>>arrBuscar[i];
    }
    cout<<"Elementos a buscar: ";
    imprimirArreglo(arrBuscar, tamBuscar);
    cout<<endl<<"Arreglo Ordenado: ";
    quickSort(array, 0, tam - 1);
    imprimirArreglo(array, tam); cout<<endl;
    busquedaBinariaMultiple(array, tam, arrBuscar, tamBuscar);

    return 0;
}