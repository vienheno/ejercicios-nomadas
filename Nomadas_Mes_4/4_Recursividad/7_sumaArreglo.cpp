//Calcula la suma de los elementos de un arreglo. Usa funciones recursivas.
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Suma de elementos de un arreglo" << "\033[0m" << endl<<endl;
}
void crearArreglo (int &tam, int *arrayNumeros) {
    for (int i = 0; i < tam; i++) {
        cout<<"Elemento "<<i+1<<": "; cin>>*(arrayNumeros + i);
    }   
}
void imprimirArreglo (int &tam, int *arrayNumeros) {
    cout<<endl<<"Arreglo [ ";
    for (int i = 0; i < tam; i++) cout<<*(arrayNumeros + i)<<" ";
    cout<<"]";
}

int sumaArreglo (int &tam, int *arrayNumeros) {
    int suma = *(arrayNumeros + 0);
    if (tam == 1) return arrayNumeros[0];
    int *arrayTemporal = new int[tam - 1];
    for (int i = 1; i < tam; i++) {
        arrayTemporal[i - 1] = arrayNumeros[i];
    }
    tam = tam - 1;
    arrayNumeros = arrayTemporal;
    //imprimirArreglo(tam, arrayNumeros);
    suma = suma + sumaArreglo(tam, arrayNumeros);
    return suma;
}

int main() {
    titulo();
    int tam;
    cout<<"Tamaño del arreglo: "; cin>>tam;
    int *arrayNumeros = new int[tam];
    crearArreglo(tam, arrayNumeros);
    imprimirArreglo(tam, arrayNumeros);
    cout<<endl<<"La suma de los elementos es: "<<sumaArreglo(tam, arrayNumeros);
    return 0;
}