/*
Crea un programa que generennúmeros aleatorios entre un rango definido por el usuario, 
los almacene en un arreglo y determine cuál es el mayor.
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void titulo();
void numerosAleatorios(int cantidad, int numMin, int numMax);

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    titulo();
    srand(time(0));
    int cantAleatorios, numMaximo, numMinimo;

    cout<<"Cantidad de números aleatorios: ";
    cin>>cantAleatorios;
    cout<<"Numero MINIMO: ";
    cin>>numMinimo;
    cout<<"Numero MAXIMO: ";
    cin>>numMaximo;
    numerosAleatorios(cantAleatorios, numMinimo, numMaximo);
    cout << endl << endl << "----------------- Fin del código ------------------" << endl << endl; 
    return 0;
}

void titulo() {
    system("cls");
    cout << "--------------- Aleatorio Mayor -----------------" << endl;
}

void numerosAleatorios(int cantidad, int numMin, int numMax) {
    int arrayAleatorios[cantidad];
    int mayor;
    for (int i = 0; i < cantidad; i++) arrayAleatorios[i] =numMin + rand()%(numMax - numMin + 1);
    mayor = arrayAleatorios[0];
    for (int i = 0; i < cantidad; i++) {
        cout<<arrayAleatorios[i]<<" ";
        if (arrayAleatorios[i] >= mayor) mayor = arrayAleatorios[i];        
    }
    cout<<endl<<"El numero mayor es: "<<mayor;
    
}