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

void merge (int arrL[], int tamL, int arrR[], int tamR) { //arrL[] y arrR[] tienen que estar ordenados
    int tamM = tamL + tamR;
    int arrMerge[tamM];
    int indexL = 0, indexR = 0, indexM = 0;
    for (int i = 0; i < tamM; i++) {
        if (arrL[indexL] <= arrR[indexR]) {
            arrMerge[indexM] = arrL[indexL];
            indexM++;
            indexL++;
        } else {
            arrMerge[indexM] = arrR[indexR];
            indexM++;
            indexR++;
        }  
        if (indexL == tamL || indexR == tamR) break;     
    }

    if (indexL == tamL - 1) {
        indexR--;
        for (int i = indexM; i < tamM; i++) {
            arrMerge[i] = arrR[indexR];
            indexR++;
        } 
    }
    if (indexR == tamR - 1) {
       indexL--;
        for (int i = indexM; i < tamM; i++) {
            
            arrMerge[i] = arrL[indexL];
            indexL++;
        } 
    } 
    imprimirArreglo(arrMerge, tamM);
}

void intercambioElementosArray (int arreglo[], int index1, int index2) {
    int aux = arreglo[index1];
    arreglo[index1] = arreglo[index2];
    arreglo[index2] = aux;
}

void mergeSort (int arreglo[], int tam) {
    if (tam == 1) return; //Caso base para la recursividad
    int indexMedio = tam/2;
    int tamL = indexMedio, tamR = tam - indexMedio;
    int arrL[tamL], arrR[tamR];
 
    //Asignamos los valores de los arreglos IzQuierda y Derecha
    int indexL = -1, indexC = -1, indexR = -1;
    for (int i = 0; i < indexMedio; i++) {   
        indexL++;
        arrL[indexL] = arreglo[i]; 
    }
    for (int i = indexMedio; i < tam; i++) {
        indexR++;
        arrR[indexR] = arreglo[i];
    }
    //cout<<endl;
    imprimirArreglo(arrL, tamL);
    imprimirArreglo(arrR, tamR);
    
    mergeSort(arrL, tamL);
    mergeSort(arrR, tamR);
    //merge(arrL, tamL, arrR, tamR);
}

int main() {
    titulo();
    int tam;
    cout<<"Tamaño de arreglo: "; cin>>tam;
    int array[tam];
    crearArreglo(array, tam);
    cout<<"Arreglo Original: ";
    imprimirArreglo(array, tam); cout<<endl;
    mergeSort(array, tam);
    //merge(array, tam, array, tam);

    return 0;
}