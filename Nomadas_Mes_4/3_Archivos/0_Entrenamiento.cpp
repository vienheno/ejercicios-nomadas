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
    //Crea el archivo "numeros.txt"
    ofstream archivo("numeros.txt", ios::app);

    //Creamos un arreglo con varios números
    int numeros[10] = {12, 42, 11, 13, 18, 46, 31, 34, 62, 91};

    //Escribimos los numeros en el archivo
    archivo << "Todos los números: ";
    for (int i = 0; i < 10; i++) archivo << numeros[i]<<" ";
    archivo << endl;

    
    //IMPORTANTE: Al final cerrar el archivo
    archivo.close();
    

    return 0;
}