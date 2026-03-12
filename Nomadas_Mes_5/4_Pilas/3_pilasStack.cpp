/*
Elabora un menú que permita gestionar una pila de números enteros y que tenga las siguientes opciones: apilar elemento, desapilar elemento, ver pila y destruir pila. Usa pilas estáticas y las funciones predefinidas de stack (de la Standad Template Library de C++).
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <stack>
#include <limits>

using namespace std;

void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Pilas Estáticas Stack" << "\033[0m" << endl<<endl;
}

void pausar() {
    cout << "\nPresiona ENTER para continuar...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

void mostrarPila(stack<int> pila) {
    if (pila.empty()) {
        cout << "La pila esta vacia." << endl;
        return;
    }
    cout << "Pila: ";
    while (!pila.empty()) {
        cout << "(" << pila.top() << ") ";
        pila.pop();
    }
    cout << endl;
}

void eliminarPila (stack<int> &pila) {
    if (pila.empty()) {
        cout << "La pila ya esta eliminada." << endl;
        return;
    }
    while (!pila.empty()) {
        pila.pop();
    }
    cout<<"Pila destruida..."<<endl;
}

int main() {
    stack<int> pila;
    int opt, valor;
    do {
        titulo();   
        cout<<" 1. Ver Pila."<<endl;
        cout<<" 2. Apilar Elemento."<<endl;
        cout<<" 3. Desapilar Elemento."<<endl;
        cout<<" 4. Destruir Pila."<<endl;
        cout<<" 5. Salir."<<endl;
        cout<<"\033[1mElija una opción: \033[0m"; cin>>opt;  
        
        switch (opt)
        {
        case 1:
            mostrarPila(pila);
            break;
        
        case 2:
            cout<<"Escriba el número para apilar: "; cin>>valor;
            pila.push(valor);
            cout<<valor<<" apilado correctamente..."<<endl;
            break;

        case 3:
            if (pila.empty()) {
                cout << "La pila esta vacia." << endl;
            } else {
                pila.pop();
                cout<<"Elemento de tope eliminado..."<<endl;
            }
            break;

        case 4:
            eliminarPila(pila);
            break;
        
        case 5:
            cout<<"Fin del programa"<<endl;
            break;
        
        default:
            cout<<"Opción incorrecta, elija otra opcion..."<<endl;
            break;
        }
        pausar();
    } while (opt != 5);
    

    return 0;
}