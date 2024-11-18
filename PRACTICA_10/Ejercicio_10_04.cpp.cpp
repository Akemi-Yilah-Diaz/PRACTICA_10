/*
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 18/11/2024
// Numero de ejercicio: 4
// Problema planteado:Personal de la UCB
Descripción: Se tiene una lista de empleados de la UCB y esta se almacena en
una variable tipo struct llamada “empleado”. La información con la que se cuenta
es:
• nombre (cadena de caracteres)
• genero (cadena de caracteres)
• salario (decimal)
Realizar un programa en C++ que lea un array de estructuras los datos de los N
trabajadores de la empresa e imprima los datos de los empleados con menor y
mayor salario
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Empleado 
{
    string nombre, genero;
    float salario;
};

int main() 
{
    int n;
    cout << "Cantidad de empleados ";
    cin >> n;
    cin.ignore();

    vector<Empleado> empleados(n);

    int i = 0;
    while (i < n)
    {
        cout << "Nombre "; getline(cin, empleados[i].nombre);
        cout << "Genero "; getline(cin, empleados[i].genero);
        cout << "Salario "; cin >> empleados[i].salario; cin.ignore();
        i++;
    }

    Empleado menor = empleados[0], mayor = empleados[0];
    i = 1;
    while (i < n) 
    {
        if (empleados[i].salario < menor.salario) menor = empleados[i];
        if (empleados[i].salario > mayor.salario) mayor = empleados[i];
        i++;
    }

    cout << "\nEmpleado con menor salario\nNombre " << menor.nombre 
         << " Genero " << menor.genero << " Salario " << menor.salario << endl;

    cout << "\nEmpleado con mayor salario\nNombre " << mayor.nombre 
         << " Genero " << mayor.genero << " Salario " << mayor.salario << endl;

    return 0;
}
