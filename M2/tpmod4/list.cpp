#include "list.h"
#include <iostream>

using namespace std;

void createList(List &L){
    first(L) = NULL;
}

address allocate(infotype x) {
    address P = new elmlist;
    info(P) = x;
    next(P) = NULL;
    return P;
}
void insertFirst(List &L, address P) {
    next(P) = first(L);
    first(L) = P;
}
void printinfo(List L) {
    address p = first(L);
    while (p!= NULL) {
        cout << p -> info << ", ";
        p = p -> next;
    }
    cout << endl;
}
