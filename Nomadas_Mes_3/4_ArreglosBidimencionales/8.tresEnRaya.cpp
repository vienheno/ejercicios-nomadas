//Escribe un programa que permita jugar 3 en raya contra la computadora.
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
void imprimirMatriz (char matriz[3][3]);

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
cout<<endl<<"--------------- Tres en raya -----------------"<<endl; 
char matriz3raya[3][3] = {{'-','-','-'},{'-','-','-'},{'-','-','-'}};
imprimirMatriz(matriz3raya);


cout<<endl<<endl<<"----------------- Fin del código ------------------"<<endl<<endl; 
    
    return 0;
}

void imprimirMatriz (char matriz[3][3]) {
    cout<<setw(4)<<"1"<<setw(5)<<"2"<<setw(5)<<"3";
    for (int i = 0; i < 3; i++) {
        cout<<setw(0)<<endl<<i+1<<setw(3);
        for (int j = 0; j < 3; j++) cout<<matriz[i][j]<<setw(5);
    }
}