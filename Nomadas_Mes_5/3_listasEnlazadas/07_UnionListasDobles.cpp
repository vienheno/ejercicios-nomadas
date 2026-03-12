/*
Escribe un programa que permita al usuario crear dos listas enlazadas dobles ingresando números
enteros por teclado. Luego, implementa una función que combine ambas listas en una tercera lista
enlazada doble. Muestra la tercera lista resultante.
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

void UnionListasDobles (Nodo *&cab1, Nodo *&cab2, Nodo *&cola1, Nodo *&cola2) {
    cola1 -> next = cab2;
    cab2 -> before = cola1; 
    //cab2 = NULL;
}

void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Union de Listas Dobles" << "\033[0m" << endl<<endl;
}

int main() {
    titulo();
    Nodo *cabeza1 = NULL;
    Nodo *cola1 = NULL;

    Nodo *cabeza2 = NULL;
    Nodo *cola2 = NULL;

    int cant, valor;
    cout<<"Cantidad de elementos de la primera lista: "; cin>>cant;
    for (int i = 1; i <= cant; i++) {
        cout<<"Elemento "<<i<<": "; cin>>valor;
        insertarFinal (cabeza1, valor, cola1);        
    }
    cout<<"Cantidad de elementos de la segunda lista: "; cin>>cant;
    for (int i = 1; i <= cant; i++) {
        cout<<"Elemento "<<i<<": "; cin>>valor;
        insertarFinal (cabeza2, valor, cola2);        
    }
    cout<<endl<<"Lista 1: "<<endl;
    mostrarListaAdelante(cabeza1);
    cout<<endl<<"Lista 2: "<<endl;
    mostrarListaAdelante(cabeza2);
    UnionListasDobles(cabeza1, cabeza2, cola1, cola2);
    cout<<endl<<"Listas Unidas: "<<endl;
    mostrarListaAdelante(cabeza1);
    

    return 0;
}