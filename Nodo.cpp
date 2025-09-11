#pragma once
#include "Nodo.h"
template <typename T>

Nodo<T>::Nodo(T valor) {
        dato = valor;
        siguiente = nullptr;
    }
};