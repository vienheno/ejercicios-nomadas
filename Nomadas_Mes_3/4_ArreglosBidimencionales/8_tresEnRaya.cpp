//Escribe un programa que permita jugar 3 en raya contra la computadora.
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <chrono>

using namespace std;
void pausarYContinuar();
void imprimirMatriz (char matriz[3][3]);
void miTurno (char (&matriz3raya)[3][3]);
void turnoPc (char (&matriz3raya)[3][3]);

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("cls");

//Semilla de numero aleatorio en nanosegundos
auto ahora = chrono::high_resolution_clock::now();
auto semilla = ahora.time_since_epoch().count();
srand((unsigned int)semilla);

cout<<endl<<"--------------- Tres en raya -----------------"<<endl; 
char matriz3raya[3][3] = {{'-','-','-'},{'-','-','-'},{'-','-','-'}};
imprimirMatriz(matriz3raya);
do {
    miTurno(matriz3raya);
    imprimirMatriz(matriz3raya);
    turnoPc(matriz3raya);
    imprimirMatriz(matriz3raya);
} while (true);



cout<<endl<<endl<<"----------------- Fin del código ------------------"<<endl<<endl; 
    
    return 0;
}

void imprimirMatriz (char matriz[3][3]) {
    system("cls");
    cout<<endl<<"--------------- Tres en raya -----------------"<<endl;
    cout<<setw(4)<<"1"<<setw(5)<<"2"<<setw(5)<<"3";
    for (int i = 0; i < 3; i++) {
        cout<<setw(0)<<endl<<i+1<<setw(3);
        for (int j = 0; j < 3; j++) cout<<matriz[i][j]<<setw(5);
    }
}

void miTurno (char (&matriz3raya)[3][3]) {
    int fila, columna;
    cout<<endl<<endl<<"TU TURNO - Elige posición (fila - columna): ";
    cin>>fila>>columna;
    matriz3raya[fila - 1][columna - 1] = 'O';
}

void turnoPc (char (&matriz3raya)[3][3]) {
    int fila = (rand() % 3) +1;
    int columna = (rand() % 3) +1;
    cout <<endl<<endl<<"TURNO DE PC - Pc eligió la posición "<<fila<<" - "<<columna<<endl;
    matriz3raya[fila - 1][columna - 1] = 'X';
    pausarYContinuar();
}

void pausarYContinuar() {
    cout << "\nPresione ENTER para continuar...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}