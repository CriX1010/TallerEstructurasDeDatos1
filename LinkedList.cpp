#include "LinkedList.h"
#include <iostream>
#include "Nodo.h"
using namespace std;

template <typename T>
LinkedList<T>::LinkedList() {
        head = nullptr;
}

template <typename T>
void LinkedList<T>::clear() {
    while (head != nullptr) {
        Nodo<T>* temp = head;
        head = head->siguiente;
        delete temp;
    }
}

template <typename T>
LinkedList<T>::~LinkedList() {
        clear();
}

template <typename T>
void LinkedList<T>::insertarFinal(T valor) {
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

template <typename T>
void LinkedList<T>::eliminar(T valor) {
        if (!head) return;

        if (head->dato == valor) {
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

template <typename T>
void LinkedList<T>::mostrar() {
        Nodo<T>* temp = head;
        while (temp != nullptr) {
            cout << temp->dato << " -> ";
            temp = temp->siguiente;
        }
        cout << "NULL\n";
    }

