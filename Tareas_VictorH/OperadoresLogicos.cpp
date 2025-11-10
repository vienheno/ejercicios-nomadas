#include <iostream>
#include <string>

using namespace std;

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");

bool valor_V = true, valor_F =false; //Declaracion de variables booleanas
//Conjuncion:
cout <<valor_V <<" && "<< valor_V <<" = " << (valor_V && valor_V) << endl; //1 && 1 = 1
cout <<valor_V <<" && "<< valor_F <<" = " << (valor_V && valor_F) << endl; //1 && 0 = 0
cout <<valor_F <<" && "<< valor_V <<" = " << (valor_F && valor_V) << endl; //0 && 1 = 0
cout <<valor_F <<" && "<< valor_F <<" = " << (valor_F && valor_F) << endl<<endl; //0 && 0 = 0

//Disyuncion:
cout <<valor_V <<" || "<< valor_V <<" = " << (valor_V || valor_V) << endl; //1 || 1 = 1
cout <<valor_V <<" || "<< valor_F <<" = " << (valor_V || valor_F) << endl; //1 || 0 = 1
cout <<valor_F <<" || "<< valor_V <<" = " << (valor_F || valor_V) << endl; //0 || 1 = 1
cout <<valor_F <<" || "<< valor_F <<" = " << (valor_F || valor_F) << endl<<endl; //0 || 0 = 0

//Negacion:
cout << "!"<< valor_V <<" = " << (!valor_V) << endl; // !1 = 0
cout << "!"<< valor_F <<" = " << (!valor_F) << endl<<endl; // !0 = 1

    return 0;
}