/*
Escribe un programa que lea una serie de números enteros de un archivo de texto, 
calcule el promedio de los números y lo imprima en la consola. 
El programa debe manejar correctamente los casos en los que el archivo esté vacío o contenga datos no válidos.
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Título" << "\033[0m" << endl<<endl;
}

int main() {
    titulo();
    int contarNumero = 0, numeroInt;
    double promedio, suma = 0;
    ifstream archivo("numerosEnteros.txt");
    if (!archivo) {
        cerr<<"Error al abrir archivo"<<endl;
        return 1;
    }
    string linea;
    while(getline(archivo, linea)) {
        cout<<linea<<endl;
        stringstream ss(linea);
        double numero;
        while (ss >> numero) {
            suma = suma + numero;
            contarNumero++;
        }
    }
    archivo.close();
    promedio = suma/contarNumero;
    cout<<endl<<"El promedio es: "<<promedio;

    return 0;
}