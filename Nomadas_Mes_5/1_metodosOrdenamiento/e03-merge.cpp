#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Título" << "\033[0m" << endl<<endl;
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
            indexL++;
        } else {
            arrMerge[indexM] = arrR[indexR];
            indexR++;
        }  
        indexM++;
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

int main() {
    titulo();
    int tamL, tamR;
    cout << "Tamaño del arreglo L: "; cin>>tamL;
    cout << "Tamaño del arreglo R: "; cin>>tamR;
    cout<<"Digite los elementos del arreglo L: "<<endl; 
    int arregloL[tamL], arregloR[tamR];
    crearArreglo (arregloL, tamL);
    cout<<endl<<"Digite los elementos del arreglo R: "<<endl;
    crearArreglo (arregloR, tamR);
    cout<<endl<<"Arreglo L: ";
    imprimirArreglo (arregloL, tamL);
    cout<<endl<<"Arreglo R: ";
    imprimirArreglo (arregloR, tamR);
    cout<<endl<<"Arreglo Unido y Ordenado: ";
    merge(arregloL, tamL, arregloR, tamR);

    return 0;
}