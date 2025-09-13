#include <iostream>
using namespace std;
#include "Alumnos.h"
#include "Cursos.h"
#include "Sistema.h"
#include <vector>

void ManejoDeAlumnos();
void ManejoDeCursos();
void ManejoDeInscripciones();
void ManejoDeNotas();
void ConsultarReportes();
int CtrlErrInt();

Sistema S;

#include "LinkedList.h"
#include "Alumnos.h"
int main() {

    int Comprobador = -1;

    while (Comprobador != 6) {

        cout << "Menu Principal: "<< endl;
        cout << "1- Manejo de Alumnos" << endl;
        cout << "2- Manejo de Cursos" << endl;
        cout << "3- Manejo de Inscripciones" << endl;
        cout << "4- Manejo de Notas:" << endl;
        cout << "5- Consultar Reportes" << endl;
        cout << "6- Salir" << endl;
        Comprobador = S.CtrlErrInt(true);

        switch (Comprobador) {
            case 1:
                ManejoDeAlumnos();
                break;
            case 2:
                ManejoDeCursos();
                break;
            case 3:
                ManejoDeInscripciones();
                break;
            case 4:
                ManejoDeNotas();
                break;
            case 5:
                ConsultarReportes();
                break;
            case 6:
                cout << "Saliendo del programa" << endl;
                break;
            default:
                cout << "Valor introducido fuera de rango" << endl;
                break;
        }

    }
    return 0;
}


void ManejoDeAlumnos() {

    int Eleccion = -1;

    while (Eleccion != 4) {
        cout << "Menu: Manejo de Alumnos" << endl;
        cout << "1- Crear Alumno" << endl;
        cout << "2- Buscar Alumno" << endl;
        cout << "3- Eliminar Alumno" << endl;
        cout << "4- Volver al menu principal" << endl;
        Eleccion = S.CtrlErrInt(true);

        switch (Eleccion) {
            case 1:
                S.CrearAlumno();
                break;
            case 2:
                S.BuscarAlumno();
                break;
            case 3:
                S.EliminarAlumno();
                break;
            case 4:
                cout << "Seleccionaste volver al menu" << endl << endl;
                break;
            default:
                cout << "Valor introducido fuera de rango" << endl << endl;
        }
    }

}

void ManejoDeCursos() {
    int Eleccion = -1;

    while (Eleccion != 4) {
        cout << "Menu: Manejo de Cursos" << endl;
        cout << "1- Crear Curso" << endl;
        cout << "2- Buscar Curso" << endl;
        cout << "3- Eliminar Curso" << endl;
        cout << "4- Volver al menu principal" << endl;
        cout << "Introduzca un numero: ";
        Eleccion = S.CtrlErrInt(true);

        switch (Eleccion) {
            case 1:
                S.CrearCurso();
                break;
            case 2:
                S.BuscarCurso();
                break;
            case 3:
                S.EliminarCurso();
                break;
            case 4:
                cout << "Seleccionaste volver al menu" << endl << endl;
                break;
            default:
                cout << "Valor introducido fuera de rango" << endl << endl;
        }
    }
}

void ManejoDeInscripciones() {
    int Eleccion = -1;

    while (Eleccion != 3) {
        cout << "Menu: Manejo de Inscripciones" << endl;
        cout << "1- Inscribir Alumno a un Curso" << endl;
        cout << "2- Eliminar un alumno de un Curso" << endl;
        cout << "3- Volver al menu principal" << endl;
        cout << "Introduzca un numero: ";
        Eleccion = S.CtrlErrInt(false);

        switch (Eleccion) {
            case 1:
                S.InscribirAlumno();
                break;
            case 2:
                S.DesInscribirAlumno();
                break;
            case 3:
                cout << "Seleccionaste volver al menu" << endl << endl;
                break;
            default:
                cout << "Valor introducido fuera de rango" << endl << endl;
        }
    }
}

void ManejoDeNotas() {

    int Eleccion = -1;

    while (Eleccion != 2) {
        cout << "Menu: Manejo de Notas" << endl;
        cout << "1- Registrar Nota" << endl;
        cout << "2- Volver al menu principal" << endl;
        cout << "Introduzca un numero: ";
        Eleccion = S.CtrlErrInt(true);

        switch (Eleccion) {
            case 1:
                S.RegistrarNota();
                break;
            case 2:
                cout << "Seleccionaste volver al menu" << endl << endl;
                break;
            default:
                cout << "Valor introducido fuera de rango" << endl << endl;
        }
    }
}

void ConsultarReportes() {

    int Eleccion = -1;

    while (Eleccion != 5) {
        cout << "Menu: Consultar y Reportes" << endl;
        cout << "1- Obtener Alumnos Por Carrera" << endl;
        cout << "2- Todos los Cusos de un Alumno" << endl;
        cout << "3- Promedio de Notas de un Alumno en un Curso" << endl;
        cout << "4- Promedio General de un Alumno" << endl;
        cout << "5- Volver al menu principal" << endl;
        cout << "Introduzca un numero: ";
        Eleccion = S.CtrlErrInt(true);

        switch (Eleccion) {
            case 1:
                S.ReporteAlumnosxCarrera();
                break;
            case 2:
                S.ReporteCursosxAlumno();
                break;
            case 3:
                S.ReportePromedioAlumnoxCurso();
                break;
            case 4:
                S.ReportePromedioAlumno();
                break;
            case 5:
                cout << "Seleccionaste volver al menu" << endl << endl;
                break;
            default:
                cout << "Valor introducido fuera de rango;" << endl << endl;
        }
    }
}