/*
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 18/11/2024
// Numero de ejercicio: 2
// Problema planteado: Datos de un atleta
Descripción: Crea una estructura llamada Atleta que contenga los siguientes
campos:
• nombre (cadena de caracteres)
• pais (cadena de caracteres)
• edad (entero)
• mejor_tiempo (entero, en segundos)
Escribe un programa que permita al usuario ingresar los datos de N atletas y, al final,
muestre el nombre y país del atleta con el mejor tiempo registrado.
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Atleta 
{
    string nombre;
    string pais;
    int edad;
    int mejor_tiempo;
};

int main() 
{
    int n;
    cout << "Cuantos atletas deseas registrar ";
    cin >> n;
    cin.ignore();

    vector<Atleta> atletas(n);

    for (int i = 0; i < n; i++) {
        cout << "\nAtleta " << i + 1 << endl;
        cout << "Nombre ";
        getline(cin, atletas[i].nombre);
        cout << "Pais ";
        getline(cin, atletas[i].pais);
        cout << "Edad ";
        cin >> atletas[i].edad;
        cout << "Mejor tiempo ";
        cin >> atletas[i].mejor_tiempo;
        cin.ignore();
    }

    int mejor_tiempo = atletas[0].mejor_tiempo;
    int indice_mejor = 0;

    for (int i = 1; i < n; i++) {
        if (atletas[i].mejor_tiempo < mejor_tiempo) {
            mejor_tiempo = atletas[i].mejor_tiempo;
            indice_mejor = i;
        }
    }

    cout << "\nAtleta con el mejor tiempo\n";
    cout << "Nombre " << atletas[indice_mejor].nombre << endl;
    cout << "Pais " << atletas[indice_mejor].pais << endl;

    return 0;
}
