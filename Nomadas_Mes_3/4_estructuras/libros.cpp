/*
Crear una estructura Libro para almacenar el título, autor y año de publicación. Después,
crear una función que reciba un objeto de tipo Libro y muestre los datos del libro.
*/

#include <iostream>
#include <string>

using namespace std;

struct Libro {    
    string titulo;
    string autor;
    int anioPulbli;
}
libro1 = {"Cien años de soledad", "Gabriel Garcia Márquez", 1967},
libro2 = {"El resplandor", "Stephen King", 1949},
libro3 = {"Harry potter y el prisionero de Azkaban", "J.K. Rowling", 1997};

void  datosLibros (Libro libroN) {
    cout<<"Titulo: "<<libroN.titulo<<endl;
    cout<<"Autor: "<<libroN.autor<<endl;
    cout<<"Año de publicacion: "<<libroN.anioPulbli<<endl;
    cout<<endl;
}

int main() {
setlocale(LC_ALL, "es_ES.UTF-8");
system("clear");
cout<<endl<<"--------------- Inicio del código -----------------"<<endl<<endl; 

datosLibros (libro1);
datosLibros (libro2);
datosLibros (libro3);

cout<<endl<<"----------------- Fin del código ------------------"<<endl<<endl; 
    
    return 0;
}