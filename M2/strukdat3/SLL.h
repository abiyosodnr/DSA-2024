#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

#include <iostream>

using namespace std;

typedef int infotype;
typedef struct elmlist* address;

struct elmlist {
    infotype info;
    address next;
};

struct list {
    address first;
};

void createList(list &L);
/*I.S. -
 F.S. terdefinisi suatu list L tanpa elemen list */

bool isEmpty(list L);
/*mengembalikan true apabila list L kosong, atau false apabila sebaliknya}*/

address newElmtList(infotype x);
/* mengembalikan alamat dari suatu elemen list baru dengan info bernilai x} */

address findElmt(list L, infotype x);
/*mengembalikan alamat elemen list dengan info x apabila ditemukan, atau NIL untuk kondisi*/

void printList(list L);
/*I.S. terdefinisi suatu list L, dan mungkin kosong
 F.S. menampilkan info setiap elemen yang ada di dalam list L}*/

void insertFirst(list &L, address p);
/*I.S. terdefinisi suatu list L dan mungkin kosong, serta sebuah pointer p yang berisi alamat elemen baru
 F.S. menambahkan elemen baru yang ditunjuk oleh p sebagai elemen pertama dari list L}*/

void deleteFirst(list &L, address &p);
/*I.S. terdefinisi list L dan mungkin kosong
 F.S. p berisi alamat elemen pertama dari list L, dan elemen tersebut dihapus dari list L}*/




#endif // SLL_H_INCLUDED
