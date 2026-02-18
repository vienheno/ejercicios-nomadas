//Escribe un programaque lea un archivo y lo copie hacia otro
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Copia de archivo" << "\033[0m" << endl<<endl;
}

int main() {
    titulo();
    ifstream fileRead("Peliculas.txt", ios::in);
    ofstream fileWrite("copiaPeliculas.txt", ios::out);
    if (!fileRead || !fileWrite) {
        cerr<<"Error al abrir archivo"<<endl;
        return 1;
    }
    string linea;
    while(getline(fileRead, linea)) {
        fileWrite<<linea<<endl;
    }
    fileRead.close();
    fileWrite.close();
    cout<<endl<<"Copia realizada";

    return 0;
}