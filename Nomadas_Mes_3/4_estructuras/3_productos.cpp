/*
Crear una estructura Producto para almacenar el nombre, precio y cantidad en stock de un producto en una tienda. El programa permitirá al
usuario ingresar los datos de varios productos, luego buscará el producto con el mayor precio y el que tenga la mayor cantidad en stock, y
mostrará sus detalles.
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Producto {
    string nombre;
    double precio;
    int cantidad;
};

void titulo();

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    titulo(); 
    int cantProductos;

    cout<<"¿Cúantos productos va a registrar?: ";
    cin>>cantProductos;

    Producto articulos[cantProductos];
    int indiceMayorPrecio = 0, indiceMayorCantidad = 0;
    int mayorPrecio = 0, mayorCantidad = 0;

    for (int i = 0; i < cantProductos; i++) {
        titulo();
        cout<<"Nombre del "<<i+1<<"° producto: ";
        cin>>articulos[i].nombre;
        cout<<"Precio del "<<i+1<<"° producto: ";
        cin>>articulos[i].precio;
        cout<<"Cantidad del "<<i+1<<"° producto: ";
        cin>>articulos[i].cantidad;

        if (articulos[i].precio >= mayorPrecio) {
            mayorPrecio = articulos[i].precio;
            indiceMayorPrecio = i;
        }
        if (articulos[i].cantidad >= mayorCantidad) {
            mayorCantidad = articulos[i].cantidad;
            indiceMayorCantidad = i;
        }
    }

    titulo();
    cout<<endl<<"Lista de productos"<<endl;
    cout<<left<<setw(15)<<"Nombre"<<setw(15)<<"Precio"<<setw(15)<<"Cantidad"<<endl;
    for (int i = 0; i < cantProductos; i++) {
        cout<<left<<setw(15)<<articulos[i].nombre<<left<<setw(15)<<articulos[i].precio<<left<<setw(15)<<articulos[i].cantidad<<endl;
    }
    cout<<endl<<"Articulo de mayor precio:"<<endl;
    cout<<"Nombre: "<<articulos[indiceMayorPrecio].nombre<<
        ", Precio: "<<articulos[indiceMayorPrecio].precio<<
        ", Cantidad: "<<articulos[indiceMayorPrecio].cantidad<<endl;
    
    cout<<endl<<"Articulo de mayor cantidad:"<<endl;
    cout<<"Nombre: "<<articulos[indiceMayorCantidad].nombre<<
        ", Precio: "<<articulos[indiceMayorCantidad].precio<<
        ", Cantidad: "<<articulos[indiceMayorCantidad].cantidad;   

    cout << endl << endl << "----------------- Fin del código ------------------" << endl << endl; 
    
    return 0;
}

void titulo() {
    system("cls");
    cout << "--------------- Inventario de Productos -----------------" << endl;
}