#include "Cursos.h"
#include <iostream>
#include <string>
using namespace std;

Curso::Curso(string codigo, string nombre, int maxEstudiantes, string carrera, string profesor) {
    Codigo = codigo;
    Nombre = nombre;
    MaxEstudiantes = maxEstudiantes;
    Carrera = carrera;
    Profesor = profesor;
}

string Curso::getCodigo() { return Codigo; }
string Curso::getNombre() { return Nombre; }
int Curso::getMaxEstudiantes() { return MaxEstudiantes; }
string Curso::getCarrera() { return Carrera; }
string Curso::getProfesor() { return Profesor; }

void Curso::setNombre(string nombre) { Nombre = nombre; }
void Curso::setMaxEstudiantes(int max) { MaxEstudiantes = max; }
void Curso::setCarrera(string carrera) { Carrera = carrera; }
void Curso::setProfesor(string profesor) { Profesor = profesor; }

void Curso::mostrarInfo() {
    cout << "Codigo: " << Codigo << endl;
    cout << "Max Estudiantes: " << MaxEstudiantes << endl;
    cout << "Carrera: " << Carrera << endl;
    cout << "Profesor: " << Profesor << endl;
}
Curso::~Curso() {}
