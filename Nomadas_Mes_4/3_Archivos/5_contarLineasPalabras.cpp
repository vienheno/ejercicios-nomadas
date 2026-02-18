//Escribe un programa que lea un archivo de texto y cuente el número de líneas y palabras
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Contar lineas y palabras" << "\033[0m" << endl<<endl;
}

int main() {
    titulo();
    int contarPalabra = 0, contarFila = 0;
    ifstream fileRead("Peliculas.txt", ios::in);
    if (!fileRead) {
        cerr<<"Error al abrir archivo"<<endl;
        return 1;
    }
    string linea;
    while(getline(fileRead, linea)) {
        stringstream frase(linea);
        string palabra;
        while (frase >> palabra) {
            contarPalabra++;
        }
        contarFila++;
    }
    fileRead.close();
    cout<<"En el archivo hay "<<contarFila<<" lineas y "<<contarPalabra<<" palabras";
    return 0;
}