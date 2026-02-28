#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Ordenamiento Quick Sort" << "\033[0m" << endl<<endl;
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

void intercambioElementosArray (int arreglo[], int index1, int index2) {
    int aux = arreglo[index1];
    arreglo[index1] = arreglo[index2];
    arreglo[index2] = aux;
}

void quickSort (int arreglo[], int indexInicial, int indexFinal) {
    if (indexInicial < indexFinal) {
        //int tam = indexFinal - indexInicial + 1;
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
    int tam;
    cout<<"Tamaño de arreglo: "; cin>>tam;
    int array[tam];
    crearArreglo(array, tam);
    cout<<"Arreglo Original: ";
    imprimirArreglo(array, tam); cout<<endl;
    quickSort(array, 0, tam - 1);
    cout<<"Arreglo Ordenado: ";
    imprimirArreglo(array, tam);
    return 0;
}