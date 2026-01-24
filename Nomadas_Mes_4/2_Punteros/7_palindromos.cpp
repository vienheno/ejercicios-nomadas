/*
Escribe un programa que determine si una palabra ingresada por el usuario es un palíndromo (se lee igual al derecho y al revés). 
Utiliza punteros para realizar la comparación.
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Palabra Palindromo" << "\033[0m" << endl<<endl;
}
bool palindormo(string *ptr_palabra) {
    int tam = (*ptr_palabra).length();
    bool palabraPalindromo = true;
    for (int i = 0; i < tam/2; i++) {
        if ((*ptr_palabra)[i] != (*ptr_palabra)[tam - 1 - i]) {
            palabraPalindromo = false;
            return palabraPalindromo;
        } 
    }
    return palabraPalindromo;
}

int main() {
    titulo();
    string palabra;
    cout<<"ingrese una palabra: "; cin>>palabra;
    string *ptr_palabra = &palabra;

    cout<<"La palabra es: "<<*ptr_palabra;
    if(palindormo(ptr_palabra)) cout<<endl<<"La palabra SÍ es palindromo";
    else cout<<endl<<"La palabra NO es palindromo";

    return 0;
}