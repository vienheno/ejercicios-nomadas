/*
Escribe un programa que mediante un menú, gestione los datos de un conjunto de alumnos en
un curso determinado. Deberá tener las opciones de ingreso, consulta, modificación,
eliminación y listado.
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <thread>

using namespace std;
const int CANT_MAX = 100;

struct Alumno {
    string nombreApellido;
    int edad;
    int dni;
    char genero;
    bool repitente;
};

void titulo();
int menuOsalir();
void continuarPrograma();
void imprimirEstudiante (Alumno estudiantes[CANT_MAX], int indice);


int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    //titulo();

    Alumno estudiantes[CANT_MAX];
    int option, tamActual = 0;

    do
    {
        titulo();
        cout<<"Opción 1: Consultar alumno."<<endl;
        cout<<"Opción 2: Registrar alumno."<<endl;
        cout<<"Opción 3: Modificar registro."<<endl;
        cout<<"Opción 4: Eliminar registro."<<endl;
        cout<<"Opción 5: Listado de Alumnos."<<endl;
        cout<<"Opción 6: Salir."<<endl;
        cout<<"Elija una opción: ";
        cin>>option;
        
        switch (option)
        {
        case 1: //Consultar alumno
            titulo();
            if (tamActual == 0) {
                cout<<"No hay ningún alumno registrado"<<endl;
                option = menuOsalir();
                break;
            }
            int consultarDNI, indice;
            cout<<"Ingrese el número de DNI: ";
            cin>>consultarDNI;
            for (int i = 0; i < tamActual; i++) {
                if (consultarDNI == estudiantes[0].dni) {
                    indice == i;
                    break;
                }
            }
            imprimirEstudiante (estudiantes, indice);  
            option = menuOsalir();
            break;
        
        case 2: //Registrar Alumno
            int conditionDNI;
            char conditionGenero;
            titulo();
            cout<<"\033[4m"<<"Regitro"<<"\033[0m"<<endl;
            do{
                cout<<"DNI: ";
                cin>>estudiantes[tamActual].dni;
                conditionDNI = to_string(estudiantes[tamActual].dni).length();
                if (conditionDNI != 8) cout<<"El DNI debe tener 8 digitos, ";
            } while (conditionDNI != 8);

            cout<<"Nombre y Apellido: ";
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Limpia el buffer para poder ingresar otro string
            getline(cin, estudiantes[tamActual].nombreApellido);

            do
            {
                cout<<"Genero (M o F): ";
                cin>>estudiantes[tamActual].genero;
                estudiantes[tamActual].genero = toupper(estudiantes[tamActual].genero);
                conditionGenero = estudiantes[tamActual].genero;
                if (conditionGenero != 'M' && conditionGenero != 'F') cout<<"Escriba solo 'M' o 'F', ";
            } while (conditionGenero != 'M' && conditionGenero != 'F');
            
            do {
                cout<<"Edad: ";
                cin>>estudiantes[tamActual].edad;
                cout<<"";
            } while (estudiantes[tamActual].edad <= 0);
            
            
            cout<<"Repitente (Y o N): ";
            cin>>estudiantes[tamActual].repitente;
            imprimirEstudiante (estudiantes, tamActual);
            tamActual++;
            option = menuOsalir();
            break;
        
        default:
            titulo();
            cout<<"Opción incorrecta"<<endl;
            continuarPrograma();
            break;
        }
        
    } while (option != 6);
    

    

    cout << endl << endl << "----------------- Fin del código ------------------" << endl << endl; 
    return 0;
}

void titulo() {
    system("cls");
    cout << "--------------- Data de Alumnos -----------------" << endl;
}

int menuOsalir() {
    int optionTemp;
    cout<<endl<<left<<setw(25)<<"Menú (Opción 1)"<<"Salir (Opción 2): ";
    cin>>optionTemp;
    if (optionTemp == 2) optionTemp = 6;
    return optionTemp;
}

void imprimirEstudiante (Alumno estudiantes[CANT_MAX], int indice) {
    cout<<endl;
    cout<<left<<setw(15)<<"DNI"<<setw(20)<<"Nombres"<<setw(15)<<"Genero"<<setw(15)<<"Edad"<<setw(15)<<"Repitente"<<endl;
    cout<<left<<setw(15)<<estudiantes[indice].dni
        <<left<<setw(20)<<estudiantes[indice].nombreApellido
        <<left<<setw(15)<<estudiantes[indice].genero
        <<left<<setw(15)<<estudiantes[indice].edad
        <<left<<setw(15)<<estudiantes[indice].repitente<<endl;
}

void continuarPrograma() {
    for(int i = 5; i >= 0; i--) {
    this_thread::sleep_for(chrono::seconds(1));
    cout <<"\rRegresando al menú en: "<< i <<" "<< flush; // flush asegura que se impriman los numeros al instante
    }

}