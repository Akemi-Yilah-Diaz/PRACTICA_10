/*
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 18/11/2024
// Numero de ejercicio: 7
// Problema planteado:Inventario de productos en una tienda
Descripción: Define una estructura llamada Producto con los siguientes campos:
• nombre (cadena de caracteres)
• codigo (cadena de caracteres)
• precio (decimal)
• cantidad_en_inventario (entero)
• observaciones (cadena de caracteres)
Luego, escribe un programa que permita:
• Registrar N productos en el inventario.
• Mostrar el producto más caro en el inventario.
• Mostrar la cantidad total de productos en inventario.
• Si un producto se encuentra con cantidad_en_inventario menor a 5, en el
campo observaciones debe tener un mensaje de advertencia “PRUDUCTO
CON BAJA CANTIDAD DE INVENTARIO”.  sigue las mismas reglas
*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Producto {
    string nombre;
    string codigo;
    float precio;
    int cantidad_en_inventario;
    string observaciones;
};

void registrarProducto(vector<Producto>& productos, int n) {
    for (int i = 0; i < n; ++i) {
        cout << "\nProducto " << i + 1 << endl;
        cout << "Nombre: "; getline(cin, productos[i].nombre);
        cout << "Código: "; getline(cin, productos[i].codigo);
        cout << "Precio: "; cin >> productos[i].precio;
        cout << "Cantidad en inventario: "; cin >> productos[i].cantidad_en_inventario;
        if (productos[i].cantidad_en_inventario < 5) {
            productos[i].observaciones = "Producto con baja cantidad de intervalo";
        } else {
            productos[i].observaciones = "";
        }
        cin.ignore();
    }
}

void mostrarProductoMasCaro(const vector<Producto>& productos) 
{
    float maxPrecio = 0;
    Producto productoCaro;
    for (int i = 0; i < productos.size(); ++i)
    {
        if (productos[i].precio > maxPrecio)
        {
            maxPrecio = productos[i].precio;
            productoCaro = productos[i];
        }
    }
    cout << "\nProducto más caro: " << productoCaro.nombre << endl;
    cout << "Precio: " << productoCaro.precio << endl;
}

void mostrarCantidadTotal(const vector<Producto>& productos)
{
    int cantidadTotal = 0;
    for (int i = 0; i < productos.size(); ++i) {
        cantidadTotal += productos[i].cantidad_en_inventario;
    }
    cout << "\nCantidad total de productos en inventario " << cantidadTotal << endl;
}

int main() 
{
    int n;
    cout << "Cantidad de productos ";
    cin >> n;
    cin.ignore();

    vector<Producto> productos(n);

    registrarProducto(productos, n);
    mostrarProductoMasCaro(productos);
    mostrarCantidadTotal(productos);

    return 0;
}
