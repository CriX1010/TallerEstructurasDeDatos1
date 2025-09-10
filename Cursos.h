#pragma once
#include <string>
using namespace std;

class Curso {
private:
    string Codigo;
    string Nombre;
    int MaxEstudiantes;
    string Carrera;
    string Profesor;

public:
    Curso(string codigo, string nombre, int maxEstudiantes, string carrera, string profesor);

    string getCodigo();
    string getNombre();
    int getMaxEstudiantes();
    string getCarrera();
    string getProfesor();

    void setNombre(string nombre);
    void setMaxEstudiantes(int max);
    void setCarrera(string carrera);
    void setProfesor(string profesor);

    void mostrarInfo();

    ~Curso();
};