#pragma once
#include "Alumnos.h"
#include "Cursos.h"
#include <vector>

class Sistema {
private:


public:
    Sistema();
    void CrearAlumno();
    void BuscarAlumno();
    void EliminarAlumno();
    void CrearCurso();
    void BuscarCurso();
    void EliminarCurso();
    void InscribirAlumno();
    void DesInscribirAlumno();
    void RegistrarNota();
    void ReporteAlumnosxCarrera();
    void ReporteCursosxAlumno();
    void ReportePromedioAlumnoxCurso();
    void ReportePromedioAlumno();
    ~Sistema();
};
