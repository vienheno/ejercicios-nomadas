#include <iostream>
#include <string>

using namespace std;

void arregloInvertido (int arrayEnteros[], int iterador);

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
cout<<endl<<"--------------- Inicio del código -----------------"<<endl<<endl; 

int tamanio = 0;
cout<<"¿Cuántos elementos tendrá el arreglo?: ";
cin>>tamanio;
int arrayEnteros[tamanio] = {0};
for (int i = 0; i < tamanio; i++)
{
    cout<<"Ingrese el elemento "<<i<<" :";
    cin>>arrayEnteros[i];
    //cout<<endl;
}

cout<<"Arreglo original: [";
for (int i = 0; i < tamanio; i++) cout<<arrayEnteros[i]<<" ";
cout<<"]"<<endl;

cout<<"Arreglo invertido: [";
arregloInvertido (arrayEnteros, tamanio);
cout<<"]";

cout<<endl<<"----------------- Fin del código ------------------"<<endl<<endl; 
    
    return 0;
}

void arregloInvertido (int arrayEnteros[], int tamanio) {
    int arrayInvertido [tamanio];
    for (int i = 0; i < tamanio; i++) arrayInvertido[i] = arrayEnteros[tamanio - 1 - i];
    for (int i = 0; i < tamanio; i++) cout<<arrayInvertido[i]<<" ";
}