/*
Lee un número menor a 4000 y conviértelo a números romanos.
 */
#include <iostream>
#include <string>

using namespace std;

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
cout<<endl<<"--------------- Numeros Romanos -----------------"<<endl<<endl; 
int num = 0, miles = 0, centenas = 0, decenas = 0;
int opcion = 0, max_centena = 0, max_decena = 0, max_unidad = 0;

cout << "Ingrese un número mayor a CERO hasta 4000: ";
cin >> num;
if (num > 0 && num <= 4000)
{
    if(num >= 1000 && num < 4000) opcion = 1;
    else if(num >=100 && num < 1000) opcion = 2;
    else if(num >=10 && num < 100) opcion = 3;
    else if(num >=0 && num < 10) opcion = 4; 

    cout <<"El numero "<<num<<" en romanos es: ";
        
    switch (opcion)
    {
        case 1:
            miles = num/1000;
            for (int i = 1; i <= miles; i++) cout <<"M";
            num = num%1000;
        
        case 2: 
            centenas = num/100;
            if (num < 400) for (int i = 1; i <= centenas; i++) cout<<"C";
            else if(num >=400 && num <500) cout <<"CD";
            else if (num >= 500 && num < 900){
                cout <<"D";
                max_centena = (num - 500)/100;
                for (int i = 1; i <= max_centena; i++) cout <<"C"; 
            } else if (num >=900) cout <<"CM";            
            num = num%100;

        case 3: 
            decenas = num/10;
            if (num <40) for (int i = 1; i <= decenas; i++) cout<<"X";
            else if (num >=40 && num <50) cout <<"XL";
            else if (num >=50 && num < 90){
                cout<<"L";
                max_decena = (num - 50)/10;
                for (int i = 1; i <= max_decena; i++) cout<<"X";
            } else if (num >= 90) cout<<"XC";
            num = num%10;
        
        case 4:
            if (num < 4) for (int i = 1; i <= num; i++ ) cout<<"I";
            else if (num >= 4 && num < 5) cout<<"IV";
            else if (num >=5 && num < 9){
                cout<<"V";
                max_unidad = num - 5;
                for (int i = 1; i <= max_unidad; i++) cout<<"I";
            } else if (num >= 9) cout<<"IX";
    }
} else cout <<"Numero fuera de rango, vuelva a ejecutar el programa"<<endl;

cout<<endl<<"----------------- Fin del código ------------------"<<endl<<endl; 
    
    return 0;
}