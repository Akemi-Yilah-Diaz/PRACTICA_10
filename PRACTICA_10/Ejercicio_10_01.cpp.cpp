/*
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 18/11/2024
// Numero de ejercicio: 1
// Problema planteado: Registro de una biblioteca
Descripción: Define una estructura llamada Libro con los siguientes campos:
• titulo (cadena de caracteres)
• autor (cadena de caracteres)
• anio_publicacion (entero)
• disponible (booleano, que indica si el libro está disponible o no)
Escribe un programa que permita al usuario registrar los datos de 1 libros, y luego
muestre los datos del libro, indicando si está o no disponible.
*/
#include <iostream>
#include <string>

using namespace std;

struct Libro
{
    string titulo;
    string autor;
    int aniopubli;
    bool disponible;
};

int main()
{
    Libro libro;

    cout << "Registro de un libro\n";
    cout << "Titulo ";
    getline(cin, libro.titulo);
    cout << "Autor ";
    getline(cin, libro.autor);
    cout << "Ano de publicacion ";
    cin >> libro.aniopubli;
    cout << "Disponible (1 = si, 0 = no) ";
    cin >> libro.disponible;

    cout << "\nInformacion del libro\n";
    cout << "Titulo " << libro.titulo << endl;
    cout << "Autor " << libro.autor << endl;
    cout << "Ano " << libro.aniopubli << endl;
    cout << "Disponible " << (libro.disponible ? "Si" : "No") << endl;

    return 0;
}
