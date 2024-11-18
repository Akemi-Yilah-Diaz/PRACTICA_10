/*
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 18/11/2024
// Numero de ejercicio: 8
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
#include <string>

using namespace std;

struct Atleta 
{
    string nombre;
    string departamento;
    int medallas;
};

int main() 
{
    int n;
    cin >> n;
    cin.ignore();

    vector<Atleta> atletas(n);
    vector<string> departamentos;
    vector<int> medallas_por_departamento;

    for (int i = 0; i < n; ++i)
    {
        getline(cin, atletas[i].nombre);
        getline(cin, atletas[i].departamento);
        cin >> atletas[i].medallas;
        cin.ignore();

        bool encontrado = false;
        for (int j = 0; j < departamentos.size(); ++j) 
        {
            if (departamentos[j] == atletas[i].departamento) 
            {
                medallas_por_departamento[j] += atletas[i].medallas;
                encontrado = true;
                break;
            }
        }

        if (!encontrado)
        {
            departamentos.push_back(atletas[i].departamento);
            medallas_por_departamento.push_back(atletas[i].medallas);
        }
    }

    for (int i = 0; i < departamentos.size(); ++i)
    {
        cout << departamentos[i] << ": " << medallas_por_departamento[i] << " medallas" << endl;
    }

    return 0;
}
