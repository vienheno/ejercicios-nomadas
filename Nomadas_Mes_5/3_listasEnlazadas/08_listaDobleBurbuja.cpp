/*
Escribe un programa que permita al usuario ingresar una lista enlazada simple de números enteros.
Luego, implementa una función que ordene los elementos de la lista utilizando el algoritmo de
ordenamiento por burbuja (Bubble Sort). Al final, muestra la lista ordenada.
*/

//Falta corregir

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

void intercambiarElementosListaDoble (Nodo *&cab, int cambio1, int cambio2, Nodo *&cola) {
    Nodo *ptr1 = cab;
    Nodo *ptr2 = cab;

    while (ptr1 -> dato != cambio1) ptr1 = ptr1 -> next;
    while (ptr2 -> dato != cambio2) ptr2 = ptr2 -> next;
    
    Nodo *before1 = ptr1 -> before;
    Nodo *before2 = ptr2 -> before;
    Nodo *next1 = ptr1 -> next;
    Nodo *next2 = ptr2 -> next;

    if (ptr1 == ptr2) {
        cout<<"No hay nada que intercambiar"<<endl;
    } else {
        ptr1 -> before = before2;
        ptr1 -> next = next2;
        ptr2 -> before = before1;
        ptr2 -> next = next1;
        if (before1 != NULL) before1 -> next = ptr2;
        else cab = ptr2;
        next1 -> before = ptr2;
        before2 -> next = ptr1;
        if (next2 != NULL) next2 -> before = ptr1;
        else cola = ptr1;   
    }
}

void ordenamientoBurbuja (Nodo *&cab, Nodo*&cola) {
    if (cab == NULL || cab -> next == NULL) {
        cout<<"Lista vacio o de un solo elemento"<<endl;
    } else {
        bool finIntercambio;
        do {
            finIntercambio = true;
            Nodo *ptr1 = cab;
            Nodo *ptr2 = cab -> next;
            while (ptr2 != NULL) {
                if (ptr1 -> dato > ptr2 -> dato) {
                    Nodo *sig = ptr2 -> next;
                    intercambiarElementosListaDoble(cab, ptr1 -> dato, ptr2 -> dato, cola);
                    finIntercambio = false;
                    ptr1 = ptr2;
                    ptr2 = sig;
                } else {
                    ptr1 = ptr2;
                    ptr2 = ptr2 -> next;
                }
            }       
        } while (finIntercambio == false);
    }
}

void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Ordenar Lista" << "\033[0m" << endl<<endl;
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
    cout<<endl<<"Lista original: "<<endl;
    mostrarListaAdelante(cabeza);  
    ordenamientoBurbuja(cabeza, cola); 
    mostrarListaAdelante(cabeza);

    return 0;
}