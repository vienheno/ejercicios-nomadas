//Dado un arreglo de números enteros, ordénalo de menor a mayor utilizando el método burbuja o selección.
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Metodo Burbuja" << "\033[0m" << endl<<endl;
}

int main() {
    titulo();
    int tam;
    cout<<"Tamaño del arreglo: "; cin>>tam;
    int arrayNumeros[tam];
    
    //Dando valores al arreglo
    for (int i = 0; i < tam; i++) {
        cout<<"Elemento "<<i+1<<": ";
        cin>>arrayNumeros[i];
    }

    //Imprimiendo arreglo
    cout<<endl<<"[ ";
    for (int i = 0; i < tam; i++) {
        cout<<arrayNumeros[i]<<" ";
    }
    cout<<"]";

    //Ordenando por metodo burbuja
    
    

    

    return 0;
}