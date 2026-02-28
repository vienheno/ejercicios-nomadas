#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Ordenamiento por Insercion" << "\033[0m" << endl<<endl;
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
void insertionSort (int arreglo[], int tam) {
    for (int i = 0; i < tam - 1; i++) {
        for (int j = i + 1; j > 0; j--) {
            if (arreglo[j] <= arreglo[j - 1]) intercambioElementosArray (arreglo, j, j - 1);
            cout<<"Paso["<<i<<"]["<<j<<"]: ";
            imprimirArreglo(arreglo, tam);
        }  
    }
}

int main() {
    titulo();
    int tam;
    cout<<"Tamaño de arreglo: "; cin>>tam;
    int array[tam];
    crearArreglo(array, tam);
    cout<<"Arreglo Original: ";
    imprimirArreglo(array, tam);
    insertionSort (array, tam);
    cout<<"Arreglo Ordenado: ";
    imprimirArreglo(array, tam);

    return 0;
}