/*
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 18/11/2024
// Numero de ejercicio: 5
// Problema planteado:Sistema de gestión de películas
Descripción: Define una estructura llamada Pelicula con los siguientes campos:
• titulo (cadena de caracteres)
• director (cadena de caracteres)
• duracion (entero, en minutos)
• anio_estreno (entero)
• genero (cadena de caracteres)
Escribe un programa que permita al usuario registrar N películas en un arreglo de
estructuras y luego realice lo siguiente:
• Mostrar todas las películas de un género específico introducido por el usuario.
• Mostrar todas las películas dirigidas por un director específico introducido por
el usuario
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Pelicula
{
    string titulo, director, genero;
    int duracion, anio_estreno;
};

int main()
{
    int n;
    cout << "Cantidad de peliculas: ";
    cin >> n;
    cin.ignore();

    vector<Pelicula> peliculas(n);

    for (int i = 0; i < n; ++i)
    {
        cout << "\nPelicula " << i + 1 << endl;
        cout << "Titulo: "; getline(cin, peliculas[i].titulo);
        cout << "Director: "; getline(cin, peliculas[i].director);
        cout << "Duracion en minutos: "; cin >> peliculas[i].duracion;
        cout << "Año de estreno: "; cin >> peliculas[i].anio_estreno;
        cin.ignore();
        cout << "Genero: "; getline(cin, peliculas[i].genero);
    }

    string genero_buscar, director_buscar;
    cout << "\nGenero a buscar: "; getline(cin, genero_buscar);
    cout << "Director a buscar: "; getline(cin, director_buscar);

    cout << "\nPeliculas del genero " << genero_buscar << ":\n";
    for (int i = 0; i < n; ++i) {
        if (peliculas[i].genero == genero_buscar) {
            cout << peliculas[i].titulo << " - " << peliculas[i].anio_estreno << " | Duración: " << peliculas[i].duracion << " minutos | Director: " << peliculas[i].director << endl;
        }
    }

    cout << "\nPeliculas dirigidas por " << director_buscar << ":\n";
    for (int i = 0; i < n; ++i) 
    {
        if (peliculas[i].director == director_buscar) {
            cout << peliculas[i].titulo << " - " << peliculas[i].anio_estreno << " | Duración: " << peliculas[i].duracion << " minutos | Género: " << peliculas[i].genero << endl;
        }
    }

    return 0;
}
