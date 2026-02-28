//Dado un arreglo de precios de productos, ordénalos de mayor a menor utilizando el método burbuja.
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Precios (Burbuja descendente)" << "\033[0m" << endl<<endl;
}

int main() {
    titulo();
    int tam;
    cout<<"Tamaño del arreglo: "; cin>>tam;
    double arrayPrecios[tam];
    
    for (int i = 0; i < tam; i++) {
        cout<<"Elemento "<<i+1<<": ";
        cin>>arrayPrecios[i];
    }

    for (int i = 0; i < tam - 1; i++) {
        for (int j = 0; j < tam - 1 - i; j++) {
            if (arrayPrecios[j] < arrayPrecios[j+1]) {
                double aux = arrayPrecios[j];
                arrayPrecios[j] = arrayPrecios[j+1];
                arrayPrecios[j+1] = aux;
            }
        }
    }
        
    cout<<endl<<"[ ";
    for (int i = 0; i < tam; i++) {
        cout<<arrayPrecios[i]<<"  ";
    }
    cout<<"]";

    return 0;
}