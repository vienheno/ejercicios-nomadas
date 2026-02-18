//Escribe un algoritmo que permita leer un archivo.
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Leer Archivo" << "\033[0m" << endl<<endl;
}

int main() {
    titulo();
    ifstream archivo("mesesEstaciones.txt");
    if (!archivo) {
        cerr<<"Error al abrir archivo"<<endl;
        return 1;
    }
    string linea;
    while(getline(archivo, linea)) {
        cout<<linea<<endl;
    }
    archivo.close();

    return 0;
}