/*
Escribe un programa que cuente cuántos números pares hay en un arreglo. Usa una función que manipule punteros para realizar el conteo.
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void titulo();
void printArray(int *arrayNumeros, int tamanio);
void paresArray(int *arrayNumeros, int tamanio);

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    titulo();
    int tam = 0;
    int *arrayNum = new int[tam];
    cout<<"Tamaño del arreglo: "; cin>>tam;
    for (int i = 0; i < tam; i++) {
        cout<<"Elemento "<<i + 1<<": "; cin>>*(arrayNum + i);
    }
    printArray(arrayNum, tam);
    paresArray(arrayNum, tam);
    delete[] arrayNum;
    cout << endl << endl << "----------------- Fin del código ------------------" << endl << endl; 
    return 0;
}

void titulo() {
    system("cls");
    cout << "--------------- Pares en Arreglo -----------------" << endl;
}
void printArray(int *arrayNumeros, int tamanio) {
    cout<<endl<<"Arreglo Original: ";
    for (int i = 0; i < tamanio; i++) {
        cout<<*(arrayNumeros + i)<<"  ";
    }   
}
void paresArray(int *arrayNumeros, int tamanio) {
    int conteo = 0;
    cout<<endl<<"Números Pares: ";
    for (int i = 0; i < tamanio; i++) {
        if(*(arrayNumeros + i) % 2 == 0) {
            conteo ++;
            cout<<*(arrayNumeros + i)<<"  ";
        }
    }
    cout<<endl<<"En el arreglo hay "<<conteo<<" números pares";
    
}