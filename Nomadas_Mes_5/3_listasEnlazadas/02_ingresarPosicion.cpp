/*
Escribe un programa que permita al usuario ingresar una lista de números en una lista enlazada
simple. El programa debe incluir una opción para insertar un nuevo número en una posición específica.
Finalmente, imprime los elementos de la lista actualizada.
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

void insertarPosicion (Nodo*& cab, int valor) {
    Nodo* nuevoNodo = new Nodo();
    nuevoNodo -> dato = valor;
    Nodo* ptr = cab;
    if (cab == NULL) {
        cab = nuevoNodo;
        nuevoNodo -> next = NULL;
    } else  {
        int contar = 1, pos;
        while (ptr -> next != NULL) {
            ptr = ptr -> next;
            contar++;
        }
        //cout<<"Cantidad de elementos: "<<contar<<endl;
        do {   
            cout<<"Digite la posicion de ingreso: "; cin>>pos;
            if (contar < pos - 1 || pos < 1) cout<<"La posición debe ser máximo 1 más que el tamaño de la lista"<<endl;
        } while (contar < pos - 1 || pos < 1); 
        
        if (pos == 1) {
            nuevoNodo -> dato = valor;
            nuevoNodo -> next = cab;
            cab = nuevoNodo;
        } else {
            ptr = cab;
            contar = 1;               
            while (contar < pos - 1) {       
                ptr = ptr -> next; 
                contar++;                 
            }                                     
            nuevoNodo -> next = ptr -> next;   
            ptr -> next = nuevoNodo;  
        }                
    }
}

void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Insertar en posición" << "\033[0m" << endl<<endl;
}

int main() {
    titulo();
    Nodo* lista = NULL;
    int valor;
    
    do {
        cout<<"Dato a ingresar: "; cin>>valor;
        insertarPosicion(lista, valor);
        mostrarLista(lista);
    } while (true);
    

    return 0;
}