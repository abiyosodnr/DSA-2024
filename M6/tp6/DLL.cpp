#include "DLL.h"
#include <iostream>

using namespace std;

bool isEmpty_103012300006(List L){
    return (L.first == NULL && L.last == NULL);
}

address createNewElmt_103012300006(infotype x){
    address p = new elmlist;
    p -> info.judul = x.judul;
    p ->info.namaBand = x.namaBand;
    next(p) = NULL;
    prev(p) = NULL;
    return p;
}

void insertLast_103012300006(List &L, address p) {
    if (isEmpty_103012300006(L) == true) {
        first(L) = p;
        last(L) = p;
    } else {
        prev(p) = last(L);
        last(L) -> next = p;
        last(L) = p;
    }
}

void insertAfter_103012300006(List &L, address &prec, address &p) {
    if (prec != NULL) {
        next(p) = next(prec);
        prev(p) = prec;

        if (next(prec) != NULL) {
            prev(next(prec)) = p;
        } else {
            last(L) = p;
        }

        next(prec) = p;
    }
}

void insertFirst_103012300006(List &L, address p) {
    if (isEmpty_103012300006(L) == true) {
        first(L) = p;
        last(L) = p;
    } else {
        next(p) = first(L);
        first(L) -> prev = p;
        first(L) = p;
    }
}

void deleteFirst_103012300006(List &L, address p) {
    if (isEmpty_103012300006(L) == true) {
        p = NULL;
    }else if (first(L) -> next == NULL) {
        p = first(L);
        first(L) = NULL;
        last(L) = NULL;
    }else {
        p = first(L);
        first(L) = next(p);
        next(p) = NULL;
        first(L) -> prev = NULL;
    }
}

void deleteAfter_103012300006(List &L, address &prec, address p) {
    if (prec != NULL && p != NULL) {
        if (next(prec) == p) {
            next(prec) = next(p);

            if (next(p) != NULL) {
                prev(next(p)) = prec;
            } else {
                last(L) = prec;
            }
            p->next = NULL;
            p->prev = NULL;
            p = NULL;
        }
    }
}

void deleteLast_103012300006(List &L, address p) {
    if (p != NULL) {
        if (p == first(L)) {
            first(L) = NULL;
            last(L) = NULL;
        } else {
            last(L) = prev(p);
            next(last(L)) = NULL;
        }
        p->next = NULL;
        p->prev = NULL;
    }
}

void concat_103012300006(List L1, List L2, List L3) {
    if (isEmpty_103012300006(L1) || isEmpty_103012300006(L2)) {
        if (isEmpty_103012300006(L1)) {
            L3 = L2;
        } else {
            L3 = L1;
        }
    } else {
        last(L1) -> next = first(L2);
        first(L2) -> prev = last(L1);
        first(L3) = first(L1);
        last(L3) = last(L2);
    }

}

address findLagu_103012300006(string judul, List L) {
    address cek;
    address ketemu;
    ketemu = NULL;
    cek = first(L);
    while (cek != NULL && ketemu == NULL) {
        if (cek -> info.judul == judul) {
            ketemu = cek;
        }else {
            cek = cek -> next;
        }
    }
    return ketemu;
}
void removeLagu_103012300006(string judul, List &L) {
    address p = findLagu_103012300006(judul, L);
    if (p != NULL) {
        if (p == first(L)) {
            if (next(p) != NULL) {
                first(L) = next(p);
                prev(first(L)) = NULL;
            } else {
                first(L) = NULL;
                last(L) = NULL;
            }
        } else if (p == last(L)) {
            last(L) = prev(p);
            next(last(L)) = NULL;
        } else {
            next(prev(p)) = next(p);
            prev(next(p)) = prev(p);
        }
        p->next = NULL;
        p->prev = NULL;
    }
}
