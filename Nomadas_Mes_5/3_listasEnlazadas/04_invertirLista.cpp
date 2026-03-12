/*
Crea un programa que permita al usuario ingresar una lista de números enteros en una lista enlazada
simple. Luego, implementa una función que invierta el orden de los elementos de la lista. Finalmente,
muestra la lista invertida.
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Nodo {
    int dato;
    Nodo *next;
};

void insertarInicio (Nodo*& cab, int valor) { 
    Nodo* nuevoNodo = new Nodo();   
    nuevoNodo -> dato = valor;      
    nuevoNodo -> next = cab;        
    cab = nuevoNodo;                
}

void insertarFinal (Nodo*& cab, int valor) {
    Nodo* nuevoNodo = new Nodo();
    nuevoNodo -> dato = valor;
    if (cab == NULL) {
        cab = nuevoNodo;
        nuevoNodo -> next = NULL;
    } else {
        Nodo* ptr = cab;
        while (ptr -> next != NULL) {
            ptr = ptr -> next;
        }
        ptr -> next = nuevoNodo;
        nuevoNodo -> next = NULL;
    }
}

void mostrarLista (Nodo* cab) {
    if (cab == NULL) {
        cout<<"La lista esta vacia"<<endl;      
    } else {
        Nodo* ptr = cab;
        while (ptr != NULL) {
            cout<<"["<<ptr -> dato<<"] -> ";  
            ptr = ptr -> next; 
        } 
        cout<<"NULL"<<endl; 
    }
}

Nodo *invertirLista (Nodo* cab) {
    Nodo *ptr = cab;
    Nodo *listaInv = NULL;
    int valor;
    while (ptr != NULL) {
        valor = ptr -> dato;
        insertarInicio (listaInv, valor);
        ptr = ptr -> next;
    }
    return listaInv;
}


void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Invertir elementos de un Lista" << "\033[0m" << endl<<endl;
}

int main() {
    titulo();
    Nodo* lista = NULL;
    int cant, valor;
    cout<<"Cantidad de elementos de la lista: "; cin>>cant;
    for (int i = 1; i <= cant; i++) {
        cout<<"Elemento "<<i<<": "; cin>>valor;
        insertarFinal (lista, valor);        
    }
    cout<<endl<<"Lista original: "<<endl;
    mostrarLista(lista);
    cout<<endl<<"Lista Invertida: "<<endl;
    mostrarLista(invertirLista (lista));

    return 0;
}