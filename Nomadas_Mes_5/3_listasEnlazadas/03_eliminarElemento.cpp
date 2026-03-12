/*
Crea un programa que permita al usuario ingresar una lista de números enteros. El programa debe
incluir una función para eliminar un nodo de la lista en función de su valor. Finalmente, muestra los
elementos restantes de la lista actualizada.
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Nodo {
    int dato;
    Nodo* next;
};

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

void eliminarElemento (Nodo*& cab, int eliminar) {
    if (cab == NULL) {
        cout<<"La lista esta vacia, no hay nada que eliminar"<<endl;
        return;
    } else if (cab -> dato == eliminar) {
        Nodo* ptr = cab;
        cab = cab -> next;
        delete ptr;
        return;
    } else {
        Nodo* ptrBefore = cab;
        while (ptrBefore -> next != NULL && ptrBefore -> next -> dato != eliminar) {
            ptrBefore = ptrBefore -> next;
        }
        if (ptrBefore -> next == NULL){
            cout<<"El número "<<eliminar<<" no se encontró en la lista"<<endl;
            return;
        }
        Nodo* datoEliminar = ptrBefore -> next;
        ptrBefore -> next = datoEliminar -> next;
        delete datoEliminar;
    }
}


void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Eliminar Elemento" << "\033[0m" << endl<<endl;
}

int main() {
    titulo();
    Nodo* lista = NULL;
    int cant, eliminar, valor;
    cout<<"Cantidad de elementos de la lista: "; cin>>cant;
    for (int i = 1; i <= cant; i++) {
        cout<<"Elemento "<<i<<": "; cin>>valor;
        insertarFinal (lista, valor);        
    }
    mostrarLista(lista);
    char op = 's';
    do {
        cout<<"Elemento a eliminar: "; cin>>eliminar;
        eliminarElemento(lista, eliminar);
        mostrarLista(lista);
        cout<<"¿Desea eliminar otro elemento? SI(s) NO(n): "; cin>>op;
        cout<<"\033[A\033[2K\r"<<flush;
    } while (op == 's');
    
     

    return 0;
}