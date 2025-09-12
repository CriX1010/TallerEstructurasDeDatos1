#include "Sistema.h"
#include <iostream>
#include "LinkedList.h"

using namespace std;

LinkedList<Alumno*> AlumnosList;
LinkedList<Curso*> CursosList;

void Sistema::CrearDatosPrueba() {
    AlumnosList.insertarFinal(new Alumno("Cristian","Perez","ICCI","10102005"));
    AlumnosList.insertarFinal(new Alumno("Lucia","Cortes","Medicina","01082005"));
    AlumnosList.insertarFinal(new Alumno("Catalina","Gonzales","ICI","24092005"));
    AlumnosList.insertarFinal(new Alumno("Catalina","Perez","Enfermeria","24012001"));

    CursosList.insertarFinal(new Curso("Electrodinamica",40,"ICCI","Hector Leon"));
    CursosList.insertarFinal(new Curso("Programacion",30,"ICCI","Rabi"));
    CursosList.insertarFinal(new Curso("Estadistica",50,"ICI","Bahamonde"));
    CursosList.insertarFinal(new Curso("Economia",20,"ICI","Diego Rojas"));
}


int Sistema::CtrlErrInt(bool x) {
    int numero;
    while (true) {
        if (x) {
        cout << "Introduzca un numero: ";
        }
        cin >> numero;

        if (cin.fail()) {
            cin.clear();
            char basura;
            while (cin.get(basura) && basura != '\n') {}
            cout << "Entrada invalida. Intente de nuevo." << endl;
        } else {
            char basura;
            while (cin.get(basura) && basura != '\n') {}
            return numero;
        }
    }
}
double Sistema::CtrlErrDouble(bool x) {
    double numero;
    while (true) {
        if (x) {
            cout << "Introduzca un numero: ";
        }
        cin >> numero;

        if (cin.fail()) {
            cin.clear();
            char basura;
            while (cin.get(basura) && basura != '\n') {}
            cout << "Entrada invalida. Intente de nuevo." << endl;
        } else {
            char basura;
            while (cin.get(basura) && basura != '\n') {}
            return numero;
        }
    }
}
bool Sistema::CompInt(string a) {
    try {
        int n = stoi(a);
        return true;
    } catch (invalid_argument& e) {
        return false;
    } catch (out_of_range& e) {
        return false;
    }
}

Sistema::Sistema() {}

void Sistema::CrearAlumno() {

    cout << "Entraste a Crear Alumno" << endl;
    string nombre;
    string apellido;
    string carrera;
    string fechaDeIngreso;

    cout << "Introduce el nombre del alumno: " ;
    cin >> nombre;
    cout << "Introduce el apellido del alumno: " ;
    cin >> apellido;
    cout << "Introduce la carrera del alumno: " ;
    cin >> carrera;
    cout << "Introduce la fecha de ingreso del alumno: " ;
    cin >> fechaDeIngreso;

    AlumnosList.insertarFinal(new Alumno(nombre,apellido,carrera,fechaDeIngreso));
}
void Sistema::BuscarAlumno() {

    cout << "Entraste a Buscar Alumno" << endl << endl;
    cout << "Introduzca el ID o nombre: ";

    string Busqueda;
    int cont = 0;
    cin >> Busqueda;

    if (CompInt(Busqueda)) {
        for (int i = 0; i < AlumnosList.size(); i++) {
            if (AlumnosList.getObject(i)->getId() == stoi(Busqueda)) {
                AlumnosList.getObject(i)->mostrarInfo();
                cont+=1;
                cout << endl;
            }

        }
    }
    else {
        for (int i = 0; i < AlumnosList.size(); i++) {
            if (AlumnosList.getObject(i)->getNombre() == Busqueda) {
                AlumnosList.getObject(i)->mostrarInfo();
                cont+=1;
                cout << endl;
            }
        }
    }
    if (cont==0) {cout << "No se encontraron candidatos" << endl << endl;}
}
void Sistema::EliminarAlumno() {

    cout << "Entraste a Eliminar Alumno" << endl << endl;

    cout << "Introduzca el ID del Alumno a Eliminar: ";

    int Busqueda;
    Busqueda = CtrlErrInt(false);

    for (int i = 0; i < AlumnosList.size(); i++) {
        if (AlumnosList.getObject(i)->getId() == Busqueda) {
            cout << "Alumno a eliminar:" << endl;
            AlumnosList.getObject(i)->mostrarInfo();
            AlumnosList.eliminar(AlumnosList.getObject(i));
            cout << endl;
        }
    }
}

void Sistema::CrearCurso() {
    cout << "Entraste a Crear Curso" << endl << endl;

    string nombre;
    int MaxEstudiantes;
    string carrera;
    string Profesor;

    cout << "Introduce el nombre del Curso: " ;
    cin >> nombre;
    cout << "Introduce el Maximo de Alumnos: " ;
    MaxEstudiantes = CtrlErrInt(false);
    cout << "Introduce la carrera a la que pertenece el Curso: " ;
    cin >> carrera;
    cout << "Introduce el nombre del Profesor: " ;
    cin >> Profesor;

    CursosList.insertarFinal(new Curso(nombre,MaxEstudiantes,carrera,Profesor));

}
void Sistema::BuscarCurso() {
    cout << "Entraste a Buscar Curso" << endl << endl;

    cout << "Introduzca el ID o nombre de el Curso: ";

    string Busqueda;
    int cont = 0;
    cin >> Busqueda;

    if (CompInt(Busqueda)) {
        for (int i = 0; i < CursosList.size(); i++) {
            if (CursosList.getObject(i)->getCodigo() == stoi(Busqueda)) {
                CursosList.getObject(i)->mostrarInfo();
                cont+=1;
                cout << endl;
            }

        }
    }
    else {
        for (int i = 0; i < CursosList.size(); i++) {
            if (CursosList.getObject(i)->getNombre() == Busqueda) {
                CursosList.getObject(i)->mostrarInfo();
                cont+=1;
                cout << endl;
            }
        }
    }
    if (cont==0) {cout << "No se encontraron coincidencias" << endl << endl;}

}
void Sistema::EliminarCurso() {
    cout << "Entraste a Eliminar Curso" << endl << endl;

    cout << "Introduzca el ID del Curso a Eliminar: ";

    int Busqueda;
    Busqueda = CtrlErrInt(false);

    for (int i = 0; i < CursosList.size(); i++) {
        if (CursosList.getObject(i)->getCodigo() == Busqueda) {
            cout << "Curso a eliminar:" << endl;
            CursosList.getObject(i)->mostrarInfo();
            CursosList.eliminar(CursosList.getObject(i));
            cout << endl;
        }
    }
}

void Sistema::InscribirAlumno() {
    cout << "Entraste a Inscribir Alumno" << endl << endl;
    bool Comprobador = false;
    int AuxAlumno;
    Curso* AuxCurso;

    while (!Comprobador) {
        cout << "Introduzca el ID del Alumno: ";
        int Alumno = CtrlErrInt(false);

        for (int i = 0; i < AlumnosList.size(); i++) {
            if (AlumnosList.getObject(i)->getId() == Alumno) {
                cout << "Alumno Seleccionado: "<< endl;
                AlumnosList.getObject(i)->mostrarInfo();
                AuxAlumno = i;
                Comprobador = true;
            }
        }
        if (Comprobador == false) { "No se encontraron coincidencias"; }
    }

    Comprobador = false;
    while (!Comprobador) {
        cout << "Introduzca el ID del curso a Inscribir: ";
        int Curso = CtrlErrInt(false);

        for (int i = 0; i < CursosList.size(); i++) {
            if (CursosList.getObject(i)->getCodigo() == Curso) {
                if (AlumnosList.getObject(AuxAlumno)->getCarrera() != CursosList.getObject(i)->getCarrera()) {
                    cout << "Este Alumno no pertenece a la carrera de este Curso" << endl;
                }
                else if (CursosList.getObject(i)->getMaxEstudiantes() == 0) {
                    cout<< "Este curso se encuentra lleno" << endl;
                }
                else {
                    cout << "Curso Seleccionado: "<< endl;
                    CursosList.getObject(i)->mostrarInfo();
                    cout << endl;
                    AuxCurso = CursosList.getObject(i);
                    Comprobador = true;
                }

            }
        }
        if (Comprobador == false) { "No se encontraron coincidencias"; }
    }

    AlumnosList.getObject(AuxAlumno)-> InscribirAlumno(AuxCurso);



}
void Sistema::DesInscribirAlumno() {
    cout << "Entraste a DesInscribir Alumno" << endl << endl;

    bool Comprobador = false;
    int AuxAlumno;
    Inscripcion* AuxCurso;

    while (!Comprobador) {
        cout << "Introduzca el ID del Alumno: ";
        int Alumno = CtrlErrInt(false);

        for (int i = 0; i < AlumnosList.size(); i++) {
            if (AlumnosList.getObject(i)->getId() == Alumno) {
                cout << "Alumno Seleccionado: "<< endl;
                AlumnosList.getObject(i)->mostrarInfo();
                AuxAlumno = i;
                Comprobador = true;
            }
        }
        if (Comprobador == false) { "No se encontraron coincidencias"; }
    }

    Comprobador = false;
    while (!Comprobador) {
        cout << "Introduzca el ID del curso a Inscribir: ";
        int Curso = CtrlErrInt(false);

        LinkedList<Inscripcion*> AuxInscripciones = AlumnosList.getObject(AuxAlumno) -> Inscripciones;
        int Tam = AuxInscripciones.size();


        for (int i = 0; i < Tam; i++) {
            if (AuxInscripciones.getObject(i)->getCurso().getCodigo() == Curso) {
                cout << "Curso Seleccionado: "<< endl;
                AuxInscripciones.getObject(i) -> getCurso().mostrarInfo();
                cout << endl;
                AuxCurso = AuxInscripciones.getObject(i);
                Comprobador = true;
            }
        }
        if (Comprobador == false) { "No se encontraron coincidencias"; }
    }

    AlumnosList.getObject(AuxAlumno)-> Inscripciones.saltar(AuxCurso);


}
void Sistema::RegistrarNota() {
    cout << "Entraste a Registrar Nota" << endl << endl;

    bool Comprobador = false;
    int AuxAlumno;
    int AuxCurso;

    while (!Comprobador) {
        cout << "Introduzca el ID del Alumno: ";
        int Alumno = CtrlErrInt(false);

        for (int i = 0; i < AlumnosList.size(); i++) {
            if (AlumnosList.getObject(i)->getId() == Alumno) {
                cout << "Alumno Seleccionado: "<< endl;
                AlumnosList.getObject(i)->mostrarInfo();
                AuxAlumno = i;
                Comprobador = true;
            }
        }
        if (Comprobador == false) { "No se encontraron coincidencias"; }
    }

    Comprobador = false;
    while (!Comprobador) {
        cout << "Introduzca el ID del curso a Inscribir: ";
        int Curso = CtrlErrInt(false);

        LinkedList<Inscripcion*> AuxInscripciones = AlumnosList.getObject(AuxAlumno) -> Inscripciones;
        int Tam = AuxInscripciones.size();


        for (int i = 0; i < Tam; i++) {
            if (AuxInscripciones.getObject(i)->getCurso().getCodigo() == Curso) {
                cout << "Curso Seleccionado: "<< endl;
                AuxInscripciones.getObject(i) -> getCurso().mostrarInfo();
                cout << endl;
                AuxCurso = i;
                Comprobador = true;
            }
        }
        if (Comprobador == false) { "No se encontraron coincidencias"; }
    }

    double Nota;
    cout << "Introduzca la Nota:";
    Nota = CtrlErrDouble(false);

    while (Nota < 1.00 || Nota > 7.00) {
        cout << "Valor ingresado fuera de rango" << endl;
        Nota = CtrlErrDouble(false);
    }

    AlumnosList.getObject(AuxAlumno)-> Inscripciones.getObject(AuxCurso)->AddNota(Nota);


}

void Sistema::ReporteAlumnosxCarrera() {
    cout << "Entraste a Alumnos por Carrera" << endl << endl;


}
void Sistema::ReporteCursosxAlumno() {
    cout << "Entraste a Cursos por Alumno" << endl << endl;
}
void Sistema::ReportePromedioAlumnoxCurso() {
    cout << "Entraste a Promedio Alumno por Curso" << endl << endl;
}
void Sistema::ReportePromedioAlumno() {
    cout << "Entraste a Promedio Alumno" << endl << endl;
}
Sistema::~Sistema() {}