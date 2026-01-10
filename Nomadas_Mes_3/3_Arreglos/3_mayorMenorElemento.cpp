#include <iostream>
#include <string>

using namespace std;

int mayorElemento (int arreglo[], int tamanio);
int menorElemento (int arreglo[], int tamanio);

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("clear");
    cout<<endl<<"--------------- Inicio del código -----------------"<<endl<<endl; 
    int tamanio = 0;
    cout<<"Tamaño del arreglo: ";
    cin>>tamanio;
    int arrayNumeros [tamanio];
    for (int i = 0; i < tamanio; i++) {
        int valor = 0;
        cout<<i+1<<"° elemento: ";
        cin>>valor;
        arrayNumeros[i] = valor;
    }
    cout<<endl<<"Arreglo original: ";
    for (int i = 0; i < tamanio; i++) {
        cout<<arrayNumeros[i]<<" ";
    }
    cout<<endl<<"El elemento mayor es: "<<mayorElemento(arrayNumeros, tamanio);
    cout<<endl<<"El elemento menor es: "<<menorElemento(arrayNumeros, tamanio);
    cout<<endl<<endl<<"----------------- Fin del código ------------------"<<endl<<endl; 
    
    return 0;
}

int mayorElemento (int arreglo[], int tamanio) {
    int mayor = arreglo[0];
    for (int i = 0; i < tamanio - 1; i++) {
        if (arreglo [i + 1] > mayor) mayor = arreglo [i + 1];
    }
    return mayor;
}

int menorElemento (int arreglo[], int tamanio) {
    int menor = arreglo[0];
    for (int i = 0; i < tamanio - 1; i++) {
        if (arreglo [i + 1] < menor) menor = arreglo [i + 1];
    }
    return menor;
}