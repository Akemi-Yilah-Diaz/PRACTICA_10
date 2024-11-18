/*
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 18/11/2024
// Numero de ejercicio: 3
// Problema planteado:Estudiantes de Programación I:
Descripción: Desarrolle una estructura que guarde los datos de los n alumnos de
la materia Programación I y los muestres por pantalla, la estructura debe tener los
siguientes datos:
• cedula (entero)
• nombre (cadena de caracteres)
• apellido (cadena de caracteres)
• edad (entero)
• profesión (cadena de caracteres)
• lugar_nacimiento (cadena de caracteres)
• dirección (cadena de caracteres)
• teléfono (entero)
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Estudiante
{
    int cedula, edad, telefono;
    string nombre, apellido, profesion, lugar_nacimiento, direccion;
};

int main()
{
    int n;
    cout << "Cantidad de estudiantes ";
    cin >> n;
    cin.ignore();

    vector<Estudiante> estudiantes(n);

    for (auto& e : estudiantes)
    {
        cout << "Cedula "; cin >> e.cedula; cin.ignore();
        cout << "Nombre "; getline(cin, e.nombre);
        cout << "Apellido "; getline(cin, e.apellido);
        cout << "Edad "; cin >> e.edad; cin.ignore();
        cout << "Profesion "; getline(cin, e.profesion);
        cout << "Lugar nacimiento "; getline(cin, e.lugar_nacimiento);
        cout << "Direccion "; getline(cin, e.direccion);
        cout << "Telefono "; cin >> e.telefono; cin.ignore();
    }

    for (const auto& e : estudiantes) 
    {
        cout << "\nCedula " << e.cedula << " Nombre " << e.nombre 
             << " Apellido " << e.apellido << " Edad " << e.edad
             << " Profesion " << e.profesion << " Lugar nacimiento " 
             << e.lugar_nacimiento << " Direccion " << e.direccion 
             << " Telefono " << e.telefono << endl;
    }

    return 0;
}
