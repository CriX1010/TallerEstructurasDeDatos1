
#pragma once
#include <string>
#include "LinkedList.h"
using namespace std;

class Alumno {
private:
    int Id;
    string Nombre;
    string Apellido;
    string Carrera;
    string FechaDeIngreso;
public:
    int static staticId;
    Alumno(string nombre, string apellido, string carrera, string fechaIngreso);

    int getId();
    string getNombre();
    string getApellido();
    string getCarrera();
    string getFechaDeIngreso();

    void setNombre(string nombre);
    void setApellido(string apellido);
    void setCarrera(string carrera);
    void setFechaDeIngreso(string fechaIngreso);
    void InscribirCurso(Curso C);

    void mostrarInfo();

    ~Alumno();
};