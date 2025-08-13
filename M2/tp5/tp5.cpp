#include "tp5.h"
#include <iostream>

using namespace std;

void createList_103012300006(List &L){
    first(L) = NULL;
}

address allocate_103012300006(infotype x) {
    address P = new elmlist;
    info(P) = x;
    next(P) = NULL;
    return P;
}

void createNewElement_103012300006(infotype x, address &p) {
    p = new elmlist;
    info(p) = x;
    next(p) = NULL;
}

void insertLast_103012300006(List &L, address p) {
    if (first(L) == NULL) {

        first(L) = p;
    } else {

        address q = first(L);
        while (next(q) != NULL) {
            q = next(q);
        }
        next(q) = p;
    }
}

address findMin_103012300006(List L) {
    if (first(L) == NULL) {
        return NULL;
    }
    address Min = first(L);
    address P = next(first(L));
    while (P != NULL) {
        if (info(P) < info(Min)) {
            Min = P;
        }
        P = next(P);
    }

    return Min;
}


int listLength_103012300006(List L) {
    address p = first(L);
    int length = 0;
    while (p != NULL) {
        length++;
        p = next(p);
    }
    return length;
}


void insertMiddle_103012300006(List &L, infotype value) {
    address newNode;
    createNewElement_103012300006(value, newNode);

    int length = listLength_103012300006(L);
    int middlePos = length / 2;

    if (first(L) == NULL) {
        first(L) = newNode;
    } else {
        address p = first(L);
        for (int i = 0; i < middlePos - 1 && next(p) != NULL; i++) {
            p = next(p);
        }
        newNode->next = next(p);
        next(p) = newNode;
    }
}


void printList_103012300006(List L) {
    address p = first(L);
    while (p!= NULL) {
        cout << p -> info << ", ";
        p = p -> next;
    }
    cout << endl;
}
