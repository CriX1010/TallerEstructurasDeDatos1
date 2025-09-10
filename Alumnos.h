
#pragma once
#include <string>
using namespace std;

class Alumnos {

    private:
        string nombre;
        int edad;
public:
    Alumnos(string);
    string getNombre();
    int getEdad();
};
