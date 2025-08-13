#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <iostream>
#define first(L) L.first
#define next(P) P -> next
#define info(P) P -> info

using namespace std;

typedef int infotype;

typedef struct elmlist *address;

struct elmlist {
    infotype info;
    address next;
};

struct List {
    address first;
};

void createList_103012300006(List &L);

address allocate_103012300006(infotype x);

void createNewElement_103012300006(infotype x, address &p);

void insertLast_103012300006(List &L, address p);

void printList_103012300006(List L);

address findMin_103012300006(List L);

int listLength_103012300006(List L);

void insertMiddle_103012300006(List &L, int value);

#endif // TP5_H_INCLUDED
