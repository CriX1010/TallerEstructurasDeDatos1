//
// Created by CriX on 09-09-2025.
//

#include "Alumnos.h"

Alumnos::Alumnos(string nombre) {
    this -> nombre = nombre;
    edad = 19;
}
string Alumnos::getNombre() {return nombre;}
int Alumnos::getEdad() {return edad;}