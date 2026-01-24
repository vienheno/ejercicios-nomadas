/*
Crea un programa que genere una lista de números aleatorios en un rango definido por el usuario y separe los números en pares e impares.
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void titulo();
void aleatorioGenerado(int minimo, int maximo, int longitud);

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    titulo();
    srand(time(0));
    int valorMinimo, valorMaximo, longitud;
    cout<<"Longitud del Aleatorio: ";
    cin>>longitud;
    cout<<"Aleatorio Mínimo: ";
    cin>>valorMinimo;
    cout<<"Aleatorio Máximo: ";
    cin>>valorMaximo;

    aleatorioGenerado(valorMinimo, valorMaximo, longitud);

    cout << endl << endl << "----------------- Fin del código ------------------" << endl << endl; 
    return 0;
}

void titulo() {
    system("cls");
    cout << "--------------- Rango de Aleatorios -----------------" << endl;
}

void aleatorioGenerado(int minimo, int maximo, int longitud) {
    int numAleatorio[longitud];
    for (int i = 0; i < longitud; i++) {
        numAleatorio[i] = minimo + rand() % (maximo - minimo + 1);
    }
    cout<<"Numeros aleatorios: ";
    for (int i = 0; i < longitud; i++) {
        cout<<numAleatorio[i]<<" ";
    }
    cout<<endl<<"Numeros pares: ";
    for (int i = 0; i < longitud; i++) {
        if (numAleatorio[i] % 2 == 0) cout<<numAleatorio[i]<<" ";
    }
    cout<<endl<<"Numeros impares: ";
    for (int i = 0; i < longitud; i++) {
        if (numAleatorio[i] % 2 != 0) cout<<numAleatorio[i]<<" ";
    }
    
}