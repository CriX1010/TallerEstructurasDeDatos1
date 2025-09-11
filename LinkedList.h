#pragma once
#include <iostream>
#include "Nodo.h"
using namespace std;

template <typename T>
class LinkedList {
private:
    Nodo<T>* head;

public:
    LinkedList();
    ~LinkedList();

    void insertarInicio(T valor);
    void insertarFinal(T valor);

    void eliminar(T valor);
    void mostrar();
    void clear();
};
