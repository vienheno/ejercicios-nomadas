/*
Escribe un programa que permita al usuario construir una lista enlazada doble ingresando números
enteros por teclado. Luego, recorre e imprime los elementos en ambos sentidos:
○ Desde el inicio al final.
○ Desde el final al inicio.
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Nodo {
    int dato;
    Nodo *next;
    Nodo *before;
};


void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Lista enlazada doble" << "\033[0m" << endl<<endl;
}

void insertarFinal (Nodo *&cab, int valor, Nodo *&cola) {
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo -> dato = valor;
    nuevoNodo -> next = NULL;
    nuevoNodo -> before = NULL;
    if (cab == NULL) {  
        cab = nuevoNodo;
        cola = nuevoNodo;
    } else {
        cola -> next = nuevoNodo;
        nuevoNodo -> before = cola;   
        cola = nuevoNodo;     
    }   
}

void mostrarListaAdelante (Nodo *&cab) {
    if (cab == NULL) {
        cout<<"La lista esta vacia"<<endl;
    } else {
        Nodo *ptr = cab;
        cout<<"NULL <=> ";
        while (ptr != NULL) {
            cout<<"["<<ptr -> dato<<"] <=> ";
            ptr = ptr -> next;
        } 
        cout<<" NULL"<<endl;
    }
}

void mostrarListaAtras (Nodo *&cola) {
    if (cola == NULL) {
        cout<<"La lista esta vacia"<<endl;
    } else {
        Nodo *ptr = cola;
        cout<<"NULL <=> ";
        while (ptr != NULL) {
            cout<<"["<<ptr -> dato<<"] <=> ";
            ptr = ptr -> before;
        } 
        cout<<" NULL"<<endl;
    }
}

int main() {
    titulo();
    Nodo* cabeza = NULL;
    Nodo* cola = NULL;
    int cant, valor;
    cout<<"Cantidad de elementos de la lista: "; cin>>cant;
    for (int i = 1; i <= cant; i++) {
        cout<<"Elemento "<<i<<": "; cin>>valor;
        insertarFinal (cabeza, valor, cola);        
    }
    cout<<endl<<"Lista hacia adelante: "<<endl;
    mostrarListaAdelante(cabeza);
    cout<<endl<<"Lista Invertida: "<<endl;
    mostrarListaAtras(cola);

    return 0;
}