#include <iostream>
#include <string>

using namespace std;

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
cout<<endl<<"--------------- Inicio del código -----------------"<<endl<<endl;

int x = 1, area = 0, areaMax = 0;

do
{
    area = x*(20-x);
    if (area > areaMax) areaMax = area;
    x++;
    //cout <<area<<endl;
} while (x < 20);

cout << "El area máxima es: "<<areaMax;

cout<<endl<<endl<<"----------------- Fin del código ------------------"<<endl; 
    
    return 0;
}