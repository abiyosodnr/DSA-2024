#ifndef BIGINT__H_INCLUDED
#define BIGINT__H_INCLUDED
#include <iostream>

typedef int infotype;

typedef struct elmList *address;

struct elmList {
    infotype info;
    address next;
    address prev;
};

struct DLL {
    address first;
    address last;
};

void createList(DLL &L);
bool isEmpty(DLL L);
void printQueue(DLL L);
void insert(DLL &A, infotype x);
void insertList(DLL &B, int y);
void penjumlahan(DLL L1, DLL L2, DLL &L3);

#endif // BIGINT__H_INCLUDED
