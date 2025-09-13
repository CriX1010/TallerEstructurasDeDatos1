
#include <stdint.h>
using namespace std;
#include "Alumnos.h"
#include "Cursos.h"
#include <iostream>
#include <string>

Alumno::Alumno(string nombre, string apellido, string carrera, string fechaIngreso) {
    Id = staticId;
    staticId +=1;
    Nombre = nombre;
    Apellido = apellido;
    Carrera = carrera;
    FechaDeIngreso = fechaIngreso;
}

int Alumno::staticId = 1;
LinkedList<Inscripcion*> Inscripciones;

int Alumno::getId() { return Id; }
string Alumno::getNombre()  { return Nombre; }
string Alumno::getApellido()  { return Apellido; }
string Alumno::getCarrera() { return Carrera; }
string Alumno::getFechaDeIngreso() { return FechaDeIngreso; }

void Alumno::setNombre(string nombre) { Nombre = nombre; }
void Alumno::setApellido(string apellido) { Apellido = apellido; }
void Alumno::setCarrera(string carrera) { Carrera = carrera; }
void Alumno::setFechaDeIngreso(string fechaIngreso) { FechaDeIngreso = fechaIngreso; }

void Alumno::InscribirAlumno(Curso* C) {
    Inscripcion Ins = Inscripcion(C);
    Inscripciones.insertarFinal(&Ins);
}


void Alumno::mostrarInfo() {
    cout << "ID: " << Id << endl;
    cout << "Nombre: " << Nombre << " " << Apellido << endl;
    cout << "Carrera: " << Carrera << endl;
    cout << "Fecha de ingreso: " << FechaDeIngreso << endl;
}

Alumno::~Alumno() { cout << "se elimino " << Nombre;}

void Alumno::ImprimirCursos() {
    cout << "Cursos Inscritos:" << endl;
    for (int i = 0 ; i < Inscripciones.size(); i++) {
        cout << i << ") " << Inscripciones.getObject(i)->getCurso()->getCodigo()<< endl;
    }
}

double Alumno::CalcularPromedioGeneral()  {
    double Suma = 0;
    for (int i = 0 ; i < Inscripciones.size(); i++) {
        Inscripcion* Aux = Inscripciones.getObject(i);
        Suma += Aux -> Promedio();
    }
    return Suma/Inscripciones.size();
}

double Alumno::CalcularPromedio(Curso* C) {
    Inscripcion* Aux;
    for (int i = 0 ; i < Inscripciones.size(); i++) {
        if (Inscripciones.getObject(i)->getCurso() == C) {
            Aux = Inscripciones.getObject(i);
        }
    }
    return Aux -> Promedio();
}

