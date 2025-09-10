
using namespace std;
#include "Alumnos.h"
#include <iostream>
#include <string>

Alumno::Alumno(int Id, string Nombre, string Apellido, string Carrera, string FechaIngreso) {
    this -> Id = Id;
    this ->Nombre = Nombre;
    this ->Apellido = Apellido;
    this ->Carrera = Carrera
    ;this ->FechaDeIngreso = FechaIngreso;
}

int Alumno::getId() { return Id; }
string Alumno::getNombre()  { return Nombre; }
string Alumno::getApellido()  { return Apellido; }
string Alumno::getCarrera() { return Carrera; }
string Alumno::getFechaDeIngreso() { return FechaDeIngreso; }

void Alumno::setNombre(string nombre) { Nombre = nombre; }
void Alumno::setApellido(string apellido) { Apellido = apellido; }
void Alumno::setCarrera(string carrera) { Carrera = carrera; }
void Alumno::setFechaDeIngreso(string fechaIngreso) { FechaDeIngreso = fechaIngreso; }

void Alumno::mostrarInfo() {
    cout << "ID: " << Id << endl;
    cout << "Nombre: " << Nombre << endl;
    cout << "Carrera: " << Carrera << endl;
    cout << "Fecha de ingreso: " << FechaDeIngreso << endl;
}

Alumno::~Alumno() { cout << "se elimino " << Nombre;}
