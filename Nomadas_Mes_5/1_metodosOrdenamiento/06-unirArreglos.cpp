#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Unir Arreglos" << "\033[0m" << endl<<endl;
}

void crearArreglo (int arreglo[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout<<"Elemento "<<i+1<<": ";
        cin>>arreglo[i];
    }
}

void imprimirArreglo (int arreglo[], int tam) {
    cout<<"[ ";
    for (int i = 0; i < tam; i++) {
        cout<<arreglo[i]<<" ";
    }
    cout<<"]"<<endl;
}

void intercambioElementosArray (int arreglo[], int index1, int index2) {
    int aux = arreglo[index1];
    arreglo[index1] = arreglo[index2];
    arreglo[index2] = aux;
}

void unirArreglos (int arr1[], int tam1, int arr2[], int tam2, int arrTotal[]) {
    for (int i = 0; i < tam1 + tam2; i++) {
        if (i < tam1) arrTotal[i] = arr1[i];
        else arrTotal[i] = arr2[i - tam1];
    }
}

void ordenarArreglo (int arreglo[], int tam) {
    for (int i = 0; i < tam; i++) {
        int minIndex = i;
        for (int j = i + 1; j < tam; j++) {
            if(arreglo[j] < arreglo[minIndex]) minIndex = j;
        }
        intercambioElementosArray(arreglo, i, minIndex);
    }
}

int main() {
    titulo();
    int tam_1, tam_2, tam_3;
    cout << "Tamaño del arreglo 1: "; cin>>tam_1;
    cout << "Tamaño del arreglo 2: "; cin>>tam_2;
    tam_3 = tam_1 + tam_2;
    int arreglo_1[tam_1], arreglo_2[tam_2], arreglo_3[tam_1 + tam_2];

    cout<<"Digite los elementos del arreglo 1: "<<endl; 
    crearArreglo (arreglo_1, tam_1);
    cout<<"Arreglo 1: ";
    imprimirArreglo (arreglo_1, tam_1);
    cout<<"Digite los elementos del arreglo 1: "<<endl;
    crearArreglo (arreglo_2, tam_2);
    cout<<"Arreglo 2: ";
    imprimirArreglo (arreglo_2, tam_2);
    unirArreglos (arreglo_1, tam_1, arreglo_2, tam_2, arreglo_3);
    cout<<"Arreglo Unidos: ";
    imprimirArreglo (arreglo_3, tam_3);
    ordenarArreglo (arreglo_3, tam_3);
    cout<<"Arreglo Ordenado: ";
    imprimirArreglo (arreglo_3, tam_3);

    return 0;
}