#include "big_int.h"

using namespace std;

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
        while (P != NULL) {
            cout << P->info;
            P = P->next;
        }
    }
}

void insert(DLL &A, infotype x) {
    address P = new elmList;
    P -> info = x;
    P -> next = NULL;
    P -> prev = NULL;
    if (isEmpty(A) == true) {
        A.first = P;
        A.last = P;
    }else {
        P -> next = A.first;
        A.first -> prev = P;
        A.first = P;
    }
}
void insertList(DLL &B, int y) {
    while (y > 0) {
        insert(B, y%10);
        y = y / 10;
    }
}

void penjumlahan(DLL L1, DLL L2, DLL &L3) {
    address P, Q;
    P = L1.last;
    Q = L2.last;
    int jumlah, sisa;
    jumlah = 0;
    sisa = 0;
    while (P!=NULL || Q!= NULL) {
        jumlah = sisa;
        if (Q != NULL) {
            jumlah = jumlah + Q -> info;
            Q = Q -> prev;
        }
        if (P!= NULL) {
            jumlah = jumlah + P -> info;
            P = P -> prev;
        }
        insert(L3, jumlah%10);
        sisa = jumlah/10;

    }
    if (sisa > 0) {
        insert(L3,sisa);
    }

}
