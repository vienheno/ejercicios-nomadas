/*
Elabora un menú que permita gestionar una pila de números enteros y que tenga las siguientes opciones: apilar elemento, desapilar elemento, ver pila y destruir pila. Usa pilas dinámicas.
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

using namespace std;

struct NodoPila {
    int dato;
    NodoPila *next;
    NodoPila *before;
};

void pausar() {
    cout << "\nPresiona ENTER para continuar...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Pilas Dinamicas - Listas enlazadas dobles" << "\033[0m" << endl<<endl;
}

void apilarElemento (NodoPila *&cab, int valor, NodoPila *&cola) {
    NodoPila *nuevo = new NodoPila();
    nuevo -> dato = valor;
    nuevo -> next = NULL;
    nuevo -> before = NULL;
    if (cab == NULL) {
        cab = nuevo;
        cola = nuevo;
    } else {
        cab -> before = nuevo;
        nuevo -> next = cab;
        cab = nuevo;
    }
    cout<<"Elemento Apilado..."<<endl;
}

void desapilarElemento (NodoPila *&cab) {
    if (cab == NULL) {
        cout<<"Pila Vacia"<<endl;
        return;
    } else {
        NodoPila *tope = cab;
        cab = cab -> next;
        delete tope;
    }
    cout<<"Elemento desapilado..."<<endl;
}

void mostrarPila (NodoPila *&cab) {
    if (cab == NULL) {
        cout<<"La Pila esta vacia"<<endl;
    } else {
        NodoPila *actual = cab;
        cout<<"Pila: ";
        while (actual != NULL) {
            cout<<"("<<actual -> dato<<") ";
            actual = actual -> next;
        } 
        cout<<endl; 
    }
}

void eliminarPila (NodoPila *&cab, NodoPila *&cola) {
    if (cab == NULL) {
        cout<<"La Pila ya esta vacia";
        return;
    }

    NodoPila *actual;
    while (cab != NULL) {
        actual = cab;
        cab = cab -> next;
        if (cab != NULL) cab -> before = NULL;
        else cola = NULL;

        delete actual;
    }
    cout<<"Pila Eliminada..."<<endl;
}

int main() {
    NodoPila *cab = NULL;
    NodoPila *cola = NULL;
    int valor, option;
    do {
        titulo();
        cout<<" 1. Ver Pila."<<endl;
        cout<<" 2. Apilar Elemento."<<endl;
        cout<<" 3. Desapilar Elemento."<<endl;
        cout<<" 4. Eliminar Pila."<<endl;
        cout<<" 5. Salir."<<endl;
        cout<<"\033[1mElija una opción: \033[0m"; cin>>option;

        switch (option)
        {
        case 1:
            mostrarPila(cab);
            break;
        
        case 2:
            cout<<"Escriba el número para apilar: "; cin>>valor;
            apilarElemento(cab, valor, cola);
            break;

        case 3:
            desapilarElemento(cab);
            break;

        case 4:
            eliminarPila(cab, cola);
            break;
        
        case 5: 
            cout<<"Fin del programa..."<<endl;
            break;
        
        default:
            cout<<"Opción incorrecta, elija otra opción..."<<endl;
            break;
        }
        pausar();

    } while (option != 5);
    
    return 0;
}