//Diseña un programa que lea un archivo de texto y genere una copia con todas las letras convertidas a mayúsculas.
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <algorithm>
#include <cctype>

using namespace std;

void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Archivos en mayusculas" << "\033[0m" << endl<<endl;
}

int main() {
    titulo();
    ifstream fileRead("Peliculas.txt", ios::in);
    ofstream fileWrite("PeliculasMayusculas.txt", ios::out);
    if (!fileRead && !fileWrite) {
        cerr<<"Error al abrir archivo"<<endl;
        return 1;
    }
    string linea;
    while(getline(fileRead, linea)) {
        transform(linea.begin(), linea.end(), linea.begin(), ::toupper);
        fileWrite<<linea<<endl;
    }
    fileRead.close();
    fileWrite.close();
    cout<<endl<<"Copia realizada";

    return 0;
}