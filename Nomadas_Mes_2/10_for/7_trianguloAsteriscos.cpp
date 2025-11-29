/*
Muestra una figura de asteriscos con validacion (Triangulo)
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
cout<<endl<<"--------------- Inicio del código -----------------"<<endl<<endl; 
int filas = 0;
cout<<"¿Cuantas fila tendrá el triangulo?: ";
cin >> filas;
if (filas >= 1 && filas <= 10) {
    for (int i = 1 ; i <= filas; i++)
    {        
        for (int j = 1; j <= i; j++)
        {
            cout <<"*";
        }
        cout <<endl;  
         
    }
} else cout << "Números de filas incorrectos"<<endl;


cout<<endl<<"----------------- Fin del código ------------------"<<endl<<endl; 
    
    return 0;
}