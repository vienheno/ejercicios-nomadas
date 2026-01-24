/*
Crea un programa que simule el lanzamiento de un dado de 6 caras. El usuario debe ingresar la cantidad de veces que desea lanzar el dado. El programa debe mostrar el resultado de cada lanzamiento y, al final, la cantidad de veces que apareció cada número (1 a 6).
*/
#include <iostream>
#include <string>

using namespace std;

void titulo();
void lanzarDado(int i);

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    titulo();
    srand(time(0));
    int cant = 0;
    cout<<"Cantidad de lanzamientos: ";
    cin>>cant;

    for (int i = 0; i < cant; i++) {
        lanzarDado(i);
    }
    

    cout << endl << endl << "----------------- Fin del código ------------------" << endl << endl; 
    return 0;
}

void titulo() {
    system("cls");
    cout << "--------------- Lanzamiento de Dados -----------------" << endl;
}

void lanzarDado(int i) {
    int valorDado = rand()%6 + 1;
    cout<<i+1<<"° lanzamiento: "<<valorDado<<endl;
}