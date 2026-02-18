/*
Escribe un programa que lea números enteros de un archivo y genere otro archivo que contenga solo los numeros Positivos.
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Numeros Positivos" << "\033[0m" << endl<<endl;
}

int main() {
    titulo();
    
    ifstream archivoTotales("numerosEnteros.txt");
    ofstream archivoPositivos("numerosPositivos.txt");
    if (!archivoTotales || !archivoPositivos) {
        cerr<<"Error al abrir archivo"<<endl;
        return 1;
    }
    string linea;
    while(getline(archivoTotales, linea)) {
        cout<<linea<<" ";
        stringstream ss(linea);
        int numero;
        while (ss >> numero) {
            if (numero > 0) archivoPositivos << numero << " ";
        }
    }
    archivoTotales.close();
    archivoPositivos.close();
    return 0;
}