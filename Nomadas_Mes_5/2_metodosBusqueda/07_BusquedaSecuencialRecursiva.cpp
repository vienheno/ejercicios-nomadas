//Escribe un programa que realice una búsqueda secuencial recursiva en un arreglo.
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Busqueda Secuencial Recursiva" << "\033[0m" << endl<<endl;
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

int busquedaSecuencialRecursiva (int arreglo[], int tam, int buscar, int index) {
    while (index < tam) {
        index++;
        if (buscar == arreglo[index]) return index;
        else return busquedaSecuencialRecursiva (arreglo, tam, buscar, index);
    }
    return -1;   
}

int main() {
    titulo();
    int tam, buscar, index = -1, posicion;
    cout<<"Tamaño de arreglo: "; cin>>tam;
    int array[tam];
    crearArreglo(array, tam);
    cout<<"Arreglo Original: ";
    imprimirArreglo(array, tam); cout<<endl;
    cout<<"Elemento a buscar: "; cin>>buscar;
    posicion = busquedaSecuencialRecursiva(array, tam, buscar, index);
    if (posicion == -1) cout<<"No se encontró el número en el arreglo"<<endl;
    else cout<<"El número "<<buscar<<" se encontró en la posición ["<<posicion<<"]"<<endl;
    return 0;
}