/*
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 18/11/2024
// Numero de ejercicio: 9
// Problema planteado:Olimpiada Nacional
Descripción: El viceministerio de deportes hace una olimpiada a nivel nacional de
los siguientes deportes:
• Tiro con arco
• Atletismo
• Boxeo
• Ciclismo
• Natación
• Esgrima
También se registra los nombres de los atletas y que departamento representa y
que deporte practica.
Realizar un programa en C++ que simule y registre cuantas medallas ha ganado un
atleta y que me muestre el medallero final por departamento.
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Alumno
{
    string nombre;
    float T1, T2, T3, T4, EF, NF;
};

int main() 
{
    int n;
    cin >> n;
    cin.ignore();

    vector<Alumno> alumnos(n);

    for (int i = 0; i < n; ++i) 
    {
        getline(cin, alumnos[i].nombre);
        cin >> alumnos[i].T1 >> alumnos[i].T2 >> alumnos[i].T3 >> alumnos[i].T4 >> alumnos[i].EF;
        cin.ignore();
        float NP = (alumnos[i].T1 + alumnos[i].T2 + alumnos[i].T3 + alumnos[i].T4) / 4;
        alumnos[i].NF = 0.7 * NP + 0.3 * alumnos[i].EF;
    }

    float promedio = 0, minNota = alumnos[0].NF, maxNota = alumnos[0].NF;

    for (int i = 0; i < n; ++i) 
    {
        promedio += alumnos[i].NF;
        minNota = min(minNota, alumnos[i].NF);
        maxNota = max(maxNota, alumnos[i].NF);
    }

    promedio /= n;

    cout << "Promedio: " << promedio << endl;
    cout << "Nota mínima: " << minNota << endl;
    cout << "Nota máxima: " << maxNota << endl;

    return 0;
}
