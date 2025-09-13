#pragma once
#include "Cursos.h"
#include "LinkedList.h"

class Inscripcion {
private:
    Curso CursoIns;
public:

    LinkedList<double> Notas;

    Inscripcion(Curso* C);
    ~Inscripcion();

    Curso* getCurso();
    LinkedList<double> getNotas();
    void AddNota(double e);
    double Promedio();
};

