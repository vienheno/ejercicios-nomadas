/*
Simula un reloj rápido que muestre en pantalla las horas,
los minutos y los segundos.
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
cout<<endl<<"--------------- Inicio del código -----------------"<<endl<<endl; 
int hora = 0, minuto = 0, segundos = 0;
for (int i = 0; i <= 23; i++)
{
    for (int j = 0; j <= 59; j++)
    {
        for (int k = 0; k <= 59; k++)
        {
            cout <<i<<" : "<<j<<" : "<<k<<endl;
        }
        
    }
    
}

cout<<endl<<"----------------- Fin del código ------------------"<<endl<<endl; 
    
    return 0;
}