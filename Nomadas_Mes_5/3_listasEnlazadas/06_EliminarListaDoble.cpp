/*
Crea un programa que permita al usuario construir una lista enlazada doble ingresando números enteros
por teclado. El programa debe incluir una función para eliminar un nodo que contenga un valor
específico ingresado por el usuario. Luego, muestra la lista actualizada.
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
    cout << "\033[4m" << "Título" << "\033[0m" << endl<<endl;
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

void eliminarElemento (Nodo *&cab, int eliminar, Nodo *&cola) {
    if (cab == NULL) {
        cout << "La lista esta vacia" << endl;
    } else {
        Nodo *ptr = cab;
        while (ptr != NULL && ptr -> dato != eliminar) {
            ptr = ptr -> next;
        }
        if (ptr == NULL) {
            cout<<"No se encontró el elemento"<<endl;
        } else if (ptr == cab) {
            cab = ptr -> next;
        } else if (ptr == cola) {
            cola = ptr -> before;
            cola -> next = NULL;
        //} else if (ptr -> next == NULL) {
        //   ptr -> before -> next = NULL;
        } else {
            ptr -> before -> next = ptr -> next;
            ptr -> next -> before = ptr -> before;
        } 
        delete ptr;   
    }
}

int main() {
    titulo();
    Nodo* cabeza = NULL;
    Nodo* cola = NULL;
    int cant, valor, eliminar;
    cout<<"Cantidad de elementos de la lista: "; cin>>cant;
    for (int i = 1; i <= cant; i++) {
        cout<<"Elemento "<<i<<": "; cin>>valor;
        insertarFinal (cabeza, valor, cola);        
    }
    cout<<endl<<"Lista original: "<<endl;
    mostrarListaAdelante(cabeza);
    cout<<"Elemento a eliminar: "; cin>>eliminar;
    eliminarElemento(cabeza, eliminar, cola);
    cout<<endl<<"Lista actualizada: "<<endl;
    mostrarListaAdelante(cabeza);

    return 0;
}
