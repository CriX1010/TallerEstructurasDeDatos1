//
// Created by CriX on 12-09-2025.
//

#include "Inscripcion.h"


Inscripcion::Inscripcion(Curso *C) : CursoIns(*C){

}
Inscripcion::~Inscripcion() {}

Curso* Inscripcion::getCurso() {
    return &CursoIns;
}

LinkedList<double> Inscripcion::getNotas() {
    return Notas;
}
void Inscripcion::AddNota(double e) {
    Notas.insertarFinal(e);
}
double Inscripcion::Promedio() {
    double Suma = 0;
    for (int i = 0 ; i < Notas.size(); i++) {
        Suma += Notas.getObject(i);
    }
    return Suma/Notas.size();
}



