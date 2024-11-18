/*
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 18/11/2024
// Numero de ejercicio: 6
// Problema planteado:Gestión de empleados con funciones
Descripción: Define una estructura llamada Empleado que contenga los siguientes
campos:
• nombre (cadena de caracteres)
• id (entero)
• sueldo (decimal)
• antiguedad (entero, en años)
Escribe un programa que permita:
• Ingresar los datos de N empleados.
• Crear una función que reciba un arreglo de empleados y un valor de sueldo y
devuelva cuántos empleados tienen un sueldo mayor a ese valor.
• Crear otra función que reciba el arreglo y calcule el promedio de antigüedad
de todos los empleados.
*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Empleado
{
    string nombre;
    int id;
    float sueldo;
    int antiguedad;
};

int contarSueldoMayorA(const vector<Empleado>& empleados, float sueldo) 
{
    int contador = 0;
    for (int i = 0; i < empleados.size(); ++i) 
    {
        if (empleados[i].sueldo > sueldo) contador++;
    }
    return contador;
}

float calcularPromedioAntiguedad(const vector<Empleado>& empleados)
{
    int suma = 0;
    for (int i = 0; i < empleados.size(); ++i) 
    {
        suma += empleados[i].antiguedad;
    }
    return float(suma) / empleados.size();
}

int main() {
    int n;
    cout << "Cantidad de empleados: ";
    cin >> n;
    cin.ignore();

    vector<Empleado> empleados(n);

    for (int i = 0; i < n; ++i) {
        cout << "\nEmpleado " << i + 1 << endl;
        cout << "Nombre: "; getline(cin, empleados[i].nombre);
        cout << "ID: "; cin >> empleados[i].id;
        cout << "Sueldo: "; cin >> empleados[i].sueldo;
        cout << "Antigüedad: "; cin >> empleados[i].antiguedad;
        cin.ignore();
    }

    float sueldoLimite;
    cout << "\nIngrese sueldo limite: ";
    cin >> sueldoLimite;

    int empleadosMayorSueldo = contarSueldoMayorA(empleados, sueldoLimite);
    cout << "\nEmpleados con sueldo mayor a " << sueldoLimite << ": " << empleadosMayorSueldo << endl;

    float promedioAntiguedad = calcularPromedioAntiguedad(empleados);
    cout << "Promedio antigüedad: " << promedioAntiguedad << " años." << endl;

    return 0;
}
