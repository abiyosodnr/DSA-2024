#include "bigINT..h"


void createList(DLL &L) {
    L.first = NULL;
    L.last = NULL;
}

bool isEmpty(DLL L) {
    return (L.first == NULL && L.last == NULL);
}
void printList(DLL L) {
    address P;
    if (isEmpty(L) == true) {
        cout << "List Kosong";
    }else {
        P = L.first;
        while (P->next != NULL) {
            cout << P->info << " ";
            P = P->next;
        }
    }
}
void insert(DLL &A, infotype x) {
    address P = new elmList;
    P -> info = x;
    if (isEmpty(A) == true) {
        A.first = P;
        A.last = P;
    }else {
        P -> next = L.first;
        L.first -> prev = P;
        L.first = P;
    }
}
void insertList(DLL &B, int y) {
    int mod, div, bil;
    mod = 10;
    div = 10;
    while (y % 10 != 0 && y / 10 != 0) {
        bil = y % 10;
        insert(B, bil);
        y = y / div;
        div = div * 10
    }
}

void penjumlahan(DLL L1, DLL L2, DLL &L3);
