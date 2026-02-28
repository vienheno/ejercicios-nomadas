/*
Escribe un programa que permita al usuario ingresar un arreglo. Luego, busca un número
dado y muestra la posición de su primera y última aparición en el arreglo usando una
función de búsqueda secuencial.
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Busqueda Secuencial" << "\033[0m" << endl<<endl;
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

void busquedaSecuencial (int arreglo[], int tam, int buscar) {
    int arrIndexEncontrados[tam];
    int contarE = -1;
    for (int i = 0; i < tam; i++) {
        if (buscar == arreglo[i]) {
            contarE++;
            arrIndexEncontrados[contarE] = i;
        }  
    }
    if (contarE == -1) cout<<"El número "<<buscar<<" NO se encuentra";
    else {
        cout<<endl<<"La primera aparicion del número "<<buscar<<" fue en la posicion ["<<arrIndexEncontrados[0]<<"]";
        cout<<endl<<"La última aparicion del número "<<buscar<<" fue en la posicion ["<<arrIndexEncontrados[contarE]<<"]";
    }
}

int main() {
    titulo();
    int tam, buscar;
    cout<<"Tamaño de arreglo: "; cin>>tam;
    int array[tam];
    crearArreglo(array, tam);
    cout<<"Arreglo Original: ";
    imprimirArreglo(array, tam); cout<<endl;
    cout<<"Elemento a buscar: "; cin>>buscar;
    busquedaSecuencial(array, tam, buscar);

    return 0;
}