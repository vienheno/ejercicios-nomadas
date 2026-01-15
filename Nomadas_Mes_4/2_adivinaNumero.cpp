/*
Crea un programa en el que la computadora elija un número aleatorio entre 1 y 100. El usuario debe intentar adivinar el número. 
El programa indicará si el número ingresado es mayor o menor que el número a adivinar. 
El juego termina cuando el usuario acierta, y el programa debe mostrar cuántos intentos tomó.
*/

#include <iostream>
//#include <string>
//#include <random>
//#include <ctime>

using namespace std;

const int INTENTOS = 7;

void adivinarNumero (int numAleatorio, int numUser, int intentos);

int main () {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    srand(time(0));
    int numRamdon = rand()%100 + 1;
    int numUsuario = 0;
    int cantIntentos = 0;
    
    adivinarNumero (numRamdon, numUsuario, cantIntentos);
    
    return 0;
}

void adivinarNumero (int numRamdon, int numUsuario, int cantIntentos) {
    do {
        cantIntentos++;
        cout<<"Digite un número del 1 al 100: ";
        cin>>numUsuario;
        if (numUsuario == numRamdon) {
            cout<<"Felicidades adivinaste el Número"<<endl;
            cout<<"Lo lograste en "<<cantIntentos<<" intentos."<<endl;
            break;
        } else if (cantIntentos == 7) {
                cout<<"PERDISTE :-("<<endl;
                break;
        } else if (numUsuario < numRamdon) {
                cout<<"El número es MAYOR. "<<endl;
        } else cout<<"El número es MENOR. "<<endl;
              
    } while (cantIntentos < INTENTOS);
}