#include "Cursos.h"
#include <iostream>
#include <string>
using namespace std;

Curso::Curso(string nombre, int maxEstudiantes, string carrera, string profesor) {
    Codigo = staticCodigo;
    staticCodigo+=1;
    Nombre = nombre;
    MaxEstudiantes = maxEstudiantes;
    Carrera = carrera;
    Profesor = profesor;
}

int Curso::staticCodigo = 1;
int Curso::getCodigo() { return Codigo; }
string Curso::getNombre() { return Nombre; }
int Curso::getMaxEstudiantes() { return MaxEstudiantes; }
string Curso::getCarrera() { return Carrera; }
string Curso::getProfesor() { return Profesor; }

void Curso::setNombre(string nombre) { Nombre = nombre; }
void Curso::setMaxEstudiantes(int max) { MaxEstudiantes = max; }
void Curso::setCarrera(string carrera) { Carrera = carrera; }
void Curso::setProfesor(string profesor) { Profesor = profesor; }
bool Curso::operator==(const Curso& otro) const {return Codigo == otro.Codigo;}

void Curso::mostrarInfo() {
    cout << "Codigo: " << Codigo << endl;
    cout << "Max Estudiantes: " << MaxEstudiantes << endl;
    cout << "Carrera: " << Carrera << endl;
    cout << "Profesor: " << Profesor << endl;
}
Curso::~Curso() {}
