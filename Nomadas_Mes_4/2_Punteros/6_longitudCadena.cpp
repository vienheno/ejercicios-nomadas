/*
Escribe un programa que calcule la longitud de una cadena de caracteres (tipochar) sin usar la funciónstrlen. 
Utiliza punteros para recorrer la cadena.
*/      
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void titulo();
int tamanioCadena (char *texto);

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    titulo();
    char *texto = new char[50];
    cout<<"Ingrese un palabra o frase: ";
    cin.getline(texto, 50);
    cout<<endl<<"Cadena de caracteres: "<<texto;
    cout<<endl<<"Tamaño de cadena: "<<tamanioCadena(texto)<<" caracteres";

    delete[] texto;
    cout << endl << endl << "----------------- Fin del código ------------------" << endl << endl; 
    return 0;
}

void titulo() {
    system("cls");
    cout << "--------------- Longitud de Cadena -----------------" << endl;
}        
int tamanioCadena (char *texto) {
    int contar = 0;
    while (*(texto + contar) != '\0') {
        contar++;
    }
    return contar;
}                          