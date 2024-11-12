#ifndef LIST_HPP
#define LIST_HPP

#include <iostream>
#include <sstream>

#include "Exception.hpp"

template <class T, int ARRAYSIZE = 50>
class List {
    public:

        List();
        List(const List&);

        void initialize();

        bool isFull() const;
        bool isEmpty() const;

        void insertData(const int&, const T&);
        void deleteData(const int&);

        int findData(const T&);

        T retrieveData(const int&);

        int linealSearch(const T&, int (const T&, const T&));
        int binarySearch(const T&, int (const T&, const T&));

        void quickSort(int (const T&, const T&));
        void quickSort(const int&, const int&, int (const T&, const T&));

        int getFirstPos() const;
        int getLastPos() const;
        int getPrevPos(const int&) const;
        int getNextPos(const int&) const;

        void deleteAll();

        std::string toString() const;

        List operator = (const List&);

    private:

        T data[ARRAYSIZE];
        int last;

        bool isValidPos(const int&);

        void copyAll(const List&);
};

using namespace std;

template <class T, int ARRAYSIZE>
List<T, ARRAYSIZE>::List() : last(-1) {}

template <class T, int ARRAYSIZE>
List<T, ARRAYSIZE>::List(const List& l) : List() {

    copyAll(l);
}

template <class T, int ARRAYSIZE>
void List<T, ARRAYSIZE>::copyAll(const List<T, ARRAYSIZE>& l) {

    int i = 0;

    last = l.last;

    while(i <= last){
        data[i] = l.data[i];
        i++;
    }
}

template <class T, int ARRAYSIZE>
bool List<T, ARRAYSIZE>::isValidPos(const int& p) {
    return p <= last + 1 and p >= 0;
}

template <class T, int ARRAYSIZE>
void List<T, ARRAYSIZE>::initialize() {

    last = -1;
}

template <class T, int ARRAYSIZE>
bool List<T, ARRAYSIZE>::isFull() const {

    return last == ARRAYSIZE;
}

template <class T, int ARRAYSIZE>
bool List<T, ARRAYSIZE>::isEmpty() const {

    return last == -1;
}

template <class T, int ARRAYSIZE>
void List<T, ARRAYSIZE>::insertData(const int& p, const T& e){

    if (isFull()) {
        throw Exception("Lista llena, insertData");
    }
    if (!isValidPos(p)) {
        throw Exception("Posicion invalida, insertData");
    }

    int i(last + 1);

    while (i > p) {
        data[i] = data[i - 1];
        i--;
    }
    data[p] = e;

    last++;
}

template <class T, int ARRAYSIZE>
void List<T, ARRAYSIZE>::deleteData(const int& p){

    if (!isValidPos(p)) {
        throw Exception("Posicion invalida, deleteData");
    }

    int i(p);
    while (i < last) {
        data[i] = data[i + 1];
        i++;
    }

    last--;
}

template <class T, int ARRAYSIZE>
int List<T, ARRAYSIZE>::findData(const T& e) {

    int i = 0;
    while (i <= last) {

        if (data[i] != e){
            i++;

        } else {

            return i;
        }

    }
    return -1;
}

template <class T, int ARRAYSIZE>
T List<T, ARRAYSIZE>::retrieveData(const int& p){

    if (!isValidPos(p)) {
        throw Exception("Posicion invalida, retrieve");
    }

    return data[p];
}

template <class T, int ARRAYSIZE>
int List<T, ARRAYSIZE>::linealSearch(const T& e, int comp (const T&, const T&)) {

    int i = 0;
    while(i <= last){
        if(comp(e, data[i]) == 0){
            return i;
        }
        i++;
    }
    return -1;
}

template <class T, int ARRAYSIZE>
int List<T, ARRAYSIZE>::binarySearch(const T& e, int comp (const T&, const T&)) {

    int i = 0, j = last, midPos;
    while(i <= j) {
        midPos = (i + j)/2;
        if(comp(data[midPos], e) == 0) {
            return midPos;
        }

        if(comp(e, data[midPos]) == -1) {
            j = midPos -1;
        } else {
            i = midPos + 1;
        }
    }
    return -1;
}

template <class T, int ARRAYSIZE>
void List<T, ARRAYSIZE>::quickSort(int comp (const T&, const T&)){
    quickSort(0, last, comp);
}

template <class T, int ARRAYSIZE>
void List<T, ARRAYSIZE>::quickSort(const int& leftEdge, const int& rightEdge, int comp (const T&, const T&)){

    T aux;

	if (leftEdge >= rightEdge) {
		return;
	}

	int i(leftEdge), j(rightEdge);

	while (i < j) {
		while (i < j and ((comp(data[i], data[rightEdge])) == 0 or (comp(data[i], data[rightEdge]) == -1))) {
			i++;
		}

		while (i < j and (comp(data[i], data[rightEdge]) == 0 or (comp(data[i], data[rightEdge]) == 1))) {
			j--;
		}

		if (i != j) {
			aux = data[j];
			data[j] = data[i];
			data[i] = aux;
		}
	}

	if (i != rightEdge) {
		aux = data[rightEdge];
		data[rightEdge] = data[i];
		data[i] = aux;
	}

	quickSort(leftEdge, i - 1, comp);
	quickSort(i + 1, rightEdge, comp);
}

template <class T, int ARRAYSIZE>
int List<T, ARRAYSIZE>::getFirstPos() const {
    return isEmpty() ? -1 : 0;
}

template <class T, int ARRAYSIZE>
int List<T, ARRAYSIZE>::getLastPos() const {
    return last;
}

template <class T, int ARRAYSIZE>
int List<T, ARRAYSIZE>::getPrevPos(const int& p) const {
    return (p == 0 || !isValidPos(p)) ? -1 : p - 1;
}

template <class T, int ARRAYSIZE>
int List<T, ARRAYSIZE>::getNextPos(const int& p) const {
    return (p == last || !isValidPos(p)) ? -1 : p + 1;
}

template <class T, int ARRAYSIZE>
void List<T, ARRAYSIZE>::deleteAll(){

    last = -1;
}

template <class T, int ARRAYSIZE>
string List<T, ARRAYSIZE>::toString() const {

    stringstream writtenList;
    int i = 0;
    while(i <= last) {
        writtenList << data[i].toString() << endl;
        i++;
    }

    return writtenList.str();

}

template <class T, int ARRAYSIZE>
List<T, ARRAYSIZE> List<T, ARRAYSIZE>::operator = (const List<T, ARRAYSIZE>& l){

    copyAll(l);
    return *this;
}

#endif // LIST_HPP
