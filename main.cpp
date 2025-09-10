#include <iostream>
using namespace std;
#include "Alumnos.h"

int main() {

    cout << "hello world" << endl;

    Alumnos A1("Cristian");

    cout << A1.getNombre() << endl;

    cout << A1.getEdad() << endl;

    return 0;
}