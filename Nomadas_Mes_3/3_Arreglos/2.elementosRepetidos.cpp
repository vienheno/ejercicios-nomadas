//Usando funciones y arreglos, elimina los elementos repetidos de un arreglo de numeros
#include <iostream>
#include <string>

using namespace std;

void arregloSinRepeticiones(int arrayElementos[], int tamanio);

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
cout<<"Arreglo original: ";
for (int i = 0; i < tamanio; i++) {
    cout<<arrayNumeros[i]<<" ";
}
cout<<endl<<"Arreglo sin repeticiones: ";
arregloSinRepeticiones (arrayNumeros, tamanio);

cout<<endl<<"----------------- Fin del código ------------------"<<endl<<endl; 
    
    return 0;
}

void arregloSinRepeticiones(int arrayElementos[], int tamanio) {
    for (int i = 0; i < tamanio; i++) {
        for (int j = i + 1; j < tamanio - 1; j++){
            if (arrayElementos[i] == arrayElementos[j]) {
                for (int k = j; k < tamanio; k++) arrayElementos[k] = arrayElementos[k+1];
                j--;
                tamanio --;
            }
        }
        
    }

    for (int i = 0; i < tamanio; i++) {
        cout<<arrayElementos[i]<<" ";
    }
    
    
}