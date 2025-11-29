/*
Muestra las tablas de multiplicar del 1 al 15.
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
cout<<endl<<"--------------- Inicio del código -----------------"<<endl<<endl; 
for (int i = 0; i <= 15; i++)
{
    for (int j = 0; j <= 15; j++) cout <<i<<" x "<<j<<" = "<<i*j<<endl;
    cout <<endl;    
}

cout<<endl<<"----------------- Fin del código ------------------"<<endl<<endl; 
    
    return 0;
}