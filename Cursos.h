#pragma once
#include <string>
using namespace std;

class Curso {
private:
    int Codigo;
    string Nombre;
    int MaxEstudiantes;
    string Carrera;
    string Profesor;

public:

    int static staticCodigo;

    Curso(string nombre, int maxEstudiantes, string carrera, string profesor);

    int getCodigo();
    string getNombre();
    int getMaxEstudiantes();
    string getCarrera();
    string getProfesor();

    void setNombre(string nombre);
    void setMaxEstudiantes(int max);
    void setCarrera(string carrera);
    void setProfesor(string profesor);
    bool operator==(const Curso &otro) const;
    void mostrarInfo();
    void AlumnoInscrito();

    ~Curso();
};