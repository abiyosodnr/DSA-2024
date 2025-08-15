#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED

#include <iostream>
#define first(L) L.first
#define last(L) L.last
#define next(P) P -> next
#define prev(P) P -> prev
#define info(P) P -> info


using namespace std;

struct film {
    string namaBand;
    string judul;
};
typedef film infotype;
typedef struct elmlist* address;

struct elmlist {
    infotype info;
    address next;
    address prev;
};

struct List {
    address first;
    address last;
};

bool isEmpty_103012300006(List L);

address createNewElmt_103012300006(infotype x);

void insertFirst_103012300006(List &L, address p);

void insertAfter_103012300006(List &L, address &prec, address &p);

void insertLast_103012300006(List &L, address p);

void deleteFirst_103012300006(List &L, address p);

void deleteAfter_103012300006(List &L, address &prec, address p);

void deleteLast_103012300006(List &L, address p);

void concat_103012300006(List L1, List L2, List L3);

address findLagu_103012300006(string judul, List L);

void removeLagu_103012300006(string judul, List &L);

#endif // TES_H_INCLUDED

