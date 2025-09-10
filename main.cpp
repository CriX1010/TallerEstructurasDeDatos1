#include <iostream>
using namespace std;
#include "Alumnos.h"
#include <vector>

int main() {


    Alumno* A2 = new Alumno(1,"a","b","c","d");



    vector<Alumno*> Alumnos;
    Alumnos.push_back(A2);

    cout << Alumnos[0] -> getNombre() << endl;

    return 0;
}