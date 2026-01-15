/*
Crea un programa que simule un sorteo de lotería en el que el usuario puede elegir 5 números diferentes entre 1 y 50. 
El programa debe generar 5 números aleatorios entre 1 y 50 como el resultado del sorteo y luego comparar los números elegidos por el usuario con los generados. El programa debe mostrar cuántos números acertó.
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void titulo();
void numerosElegidos(int (&tusNumeros)[5]);
void numerosGanadores(int (&bolillas)[5]);
void numerosAcertados(int tusNumeros[5], int bolillas[5]);

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    titulo();
    srand(time(0));
    int bolillas[5], tusNumeros[5];
    numerosElegidos(tusNumeros);
    cout<<endl;
    numerosGanadores(bolillas);
    numerosAcertados(tusNumeros, bolillas);    

    cout << endl << endl << "----------------- Fin del código ------------------" << endl << endl; 
    return 0;
}

void titulo() {
    system("cls");
    cout << "--------------- Sorteo -----------------" << endl;
}

void numerosElegidos(int (&tusNumeros)[5]) {
    cout<<"Elige tus números"<<endl;
    for (int i = 0; i < 5; i++) {
        cout<<i+1<<"° número: ";
        cin>>tusNumeros[i];
    }
    cout<<endl<<"Números elegidos: ";
    for (int i = 0; i < 5; i++) {
        cout<<tusNumeros[i]<<" ";
    }
}

void numerosGanadores(int (&bolillas)[5]) {
    for (int i = 0; i < 5; i++) {
        bolillas[i] = rand()%50 + 1;
    }
    cout<<"Números ganadores: ";
    for (int i = 0; i < 5; i++) {
        cout <<bolillas[i]<<" ";
    } 
}

void numerosAcertados(int tusNumeros[5], int bolillas[5]) {
    int aciertos = 0;
    cout<<endl<<"Números acertados: ";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (tusNumeros[i] == bolillas[j]){
                cout<<bolillas[j]<<" ";
                aciertos++;
                break;
            }
        }    
    }
    cout<<endl<<"cantidad de aciertos: "<<aciertos;
}