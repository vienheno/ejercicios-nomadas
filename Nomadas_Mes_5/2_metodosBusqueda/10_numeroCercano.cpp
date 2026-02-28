/*
Escribe un programa que permita ingresar un arreglo, ordene los elementos, y encuentre el
número más cercano a un valor dado usando búsqueda binaria.
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Número Cercano" << "\033[0m" << endl<<endl;
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

int busquedaBinaria (int arreglo[], int tam, int buscar) {
    int indexL = 0, indexR = tam - 1, difDerecha, difIzquierda, cercano;
    while (indexL <= indexR) {
        int indexC = (indexL + indexR) / 2;
        if (arreglo[indexC] == buscar) {
            difIzquierda = buscar - arreglo[indexC - 1];
            difDerecha = arreglo[indexC + 1] - buscar;
            if (difDerecha >= difIzquierda) cercano = arreglo[indexC - 1];
            else cercano = arreglo[indexC + 1]; 
            return cercano;
        } else if (indexR == indexL + 1) {
            difIzquierda = buscar - arreglo[indexL];
            difDerecha = arreglo[indexR] - buscar;
            if (difDerecha >= difIzquierda) cercano = arreglo[indexL];
            else cercano = arreglo[indexR];   
            return cercano;  
        } else if (arreglo[indexC] < buscar) indexL = indexC + 1;
        else indexR = indexC - 1;
        
    }
    return cercano;
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
    int tam, buscar, cercano;
    cout<<"Tamaño de arreglo: "; cin>>tam;
    int array[tam];
    crearArreglo(array, tam);
    cout<<"Arreglo Original: ";
    imprimirArreglo(array, tam); cout<<endl;
    cout<<"Arreglo Ordenado: ";
    quickSort(array, 0, tam - 1);
    imprimirArreglo(array, tam); cout<<endl;
    cout<<"Elemento a buscar: "; cin>>buscar; 
    cercano = busquedaBinaria (array, tam, buscar);
    cout<<"El valor más cercano a "<<buscar<<" es el número "<<cercano<<endl;

    return 0;
}