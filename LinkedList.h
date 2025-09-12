#pragma once
#include <iostream>
#include "Cursos.h"
#include "Nodo.h"
using namespace std;

template <typename T>
class LinkedList {
private:
    Nodo<T>* head;

public:
    LinkedList() { head = nullptr; }
    ~LinkedList() { clear(); }
    void Insertar(T valor) {
        head = new Nodo<T>(valor);
    }

    void insertarFinal(T valor) {
        Nodo<T>* nuevo = new Nodo<T>(valor);
        if (head == nullptr) {
            head = nuevo;
            return;
        }
        Nodo<T>* temp = head;
        while (temp->siguiente != nullptr) {
            temp = temp->siguiente;
        }
        temp->siguiente = nuevo;
    }

    void eliminar(T valor) {
        if (!head) return;

        if (head-> dato == valor) {
            Nodo<T>* temp = head;
            head = head->siguiente;
            delete temp;
            return;
        }

        Nodo<T>* actual = head;
        while (actual->siguiente && actual->siguiente->dato != valor) {
            actual = actual->siguiente;
        }

        if (actual->siguiente) {
            Nodo<T>* temp = actual->siguiente;
            actual->siguiente = actual->siguiente->siguiente;
            delete temp;
        }
    }

    void saltar(T valor) {
        if (!head) return;

        if (head-> dato == valor) {
            Nodo<T>* temp = head;
            head = head->siguiente;
            return;
        }

        Nodo<T>* actual = head;
        while (actual->siguiente && actual->siguiente->dato != valor) {
            actual = actual->siguiente;
        }

        if (actual->siguiente) {
            Nodo<T>* temp = actual->siguiente;
            actual->siguiente = actual->siguiente->siguiente;
        }
    }

    void mostrar() {
        Nodo<T>* temp = head;
        while (temp != nullptr) {
            cout << temp->dato << " -> ";
            temp = temp->siguiente;
        }
        cout << "NULL\n";
    }

    void clear() {
        while (head != nullptr) {
            Nodo<T>* temp = head;
            head = head->siguiente;
            delete temp;
        }
    }

    int size() {
        Nodo<T>* temp = head;
        int count = 0;
        while (temp != nullptr) {
            temp = temp->siguiente;
            count++;
        }
        return count;
    }

    T getObject(int n) {
        Nodo<T>* temp = head;
        for (int i = 0; i < n; i++) {
            temp = temp->siguiente;
        }
        return temp -> dato;
    }

    int getIndex(T Obj) {
        Nodo<T>* temp = head;
        for (int i = 0; i < size(); i++) {
            if (temp->dato == Obj) {
                return i;
            }
            temp = temp->siguiente;
        }
    }
};
