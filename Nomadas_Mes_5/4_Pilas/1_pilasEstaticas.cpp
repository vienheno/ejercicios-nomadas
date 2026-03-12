/*
Elabora un menú que permita gestionar una pila de números enteros y que tenga las siguientes opciones: apilar elemento, desapilar elemento, ver pila y destruir pila. Usa pilas estáticas.
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

using namespace std;

const int MAX = 5;

void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Pilas estáticas - Arreglos" << "\033[0m" << endl<<endl;
}
void pausar() {
    cout << "\n\nPresiona ENTER para continuar...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

void apilarElemento (int pila[] , int &tope) {
    if (tope == MAX -1) {
        cout<<"Error: La Pila esta llena"<<endl;
        return;
    }
    int dato;
    cout<<"Ingrese el número a apilar: "; cin>>dato;
    tope++;
    pila[tope] = dato;
    cout<<"Elemento apilado correctamente"<<endl;
}

void desapilarElemento (int pila[], int &tope) {
    if (tope == -1) {
        cout<<"Error: La Pila está vacia"<<endl;
        return;
    }
    cout<<"Se eliminará el elemento "<<pila[tope]<<endl;
    tope --;
}

void destruirPila (int &tope) {
    tope = -1;
}

void mostrarPila (int pila[], int &tope) {
    if (tope == -1) {
        cout<<"Error: La Pila está vacia"<<endl;
        return;
    }
    cout<<endl<<"Elementos de pila: ";
    cout<<"[ ";
    for (int i = tope; i >= 0; i--) {
        cout<<pila[i]<<" ";
    }
    cout<<"]";
}

int main() {
    titulo();
    int pila[MAX];
    int tope = -1, opcion;

    do {
        titulo();
        cout<<"1. Apilar elemento"<<endl;
        cout<<"2. Desapilar elemento"<<endl;
        cout<<"3. Ver Pila"<<endl;
        cout<<"4. Destruir Pila"<<endl;
        cout<<"5. Salir"<<endl;

        cout<<"Elija una opcion: "; cin>>opcion;

        switch (opcion)
        {
        case 1:
            apilarElemento(pila, tope);
            break;
        case 2:
            desapilarElemento(pila, tope);
            break;
        case 3:
            mostrarPila(pila, tope);
            break;
        case 4:
            destruirPila(tope);
            break;
        case 5:
            
            break;
        
        default:
            cout<<"Opcion inválida"<<endl;
            break;
        }
        //if (opcion != 3) mostrarPila(pila, tope);
        pausar();

    } while (opcion != 5);
    

    return 0;
}