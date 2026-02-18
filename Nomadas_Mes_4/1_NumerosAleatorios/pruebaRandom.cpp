#include <iostream>
#include <string>
#include <iomanip>
#include <random>

using namespace std;

void titulo() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    system("cls");
    cout << "\033[4m" << "Probando Aleatorios" << "\033[0m" << endl<<endl;
}

int main() {
    titulo();
    srand(time(0));
    int numero1;
    for (int i = 0; i < 10; i++) {
        numero1 = 5 + rand()%21; // 5 + rand()%(25 - 5 +1)
        cout<<numero1<<"  ";
    }

    cout<<endl;

    int numero2;
    random_device rd;
    mt19937 maquina(rd());
    uniform_int_distribution<int> intervalo(5,25);
 
    for (int i = 0; i < 10; i++) {
        numero2 = intervalo(maquina);
        cout<<numero2<<"  ";
    }
    
    

    return 0;
}