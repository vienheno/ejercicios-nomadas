//Escribe un algoritmo que permita escribir un archivo.
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Crear o Escribir Archivo" << "\033[0m" << endl<<endl;
}

int main() {
    titulo();
    ofstream archivo("Peliculas.txt", ios::app);
    string nombrePelicula;
    if (!archivo){
        cerr<<"Error al abrir el archivo"<<endl;
        return 1;
    }
    cout<<"Escriba el nombre de una pelicula: ";
    getline(cin,nombrePelicula);
    archivo<<nombrePelicula<<endl;
    archivo.close();
    cout<<"--- Pelicula guardada ---";    

    return 0;
}