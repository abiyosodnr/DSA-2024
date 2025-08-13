#include "SLL.h"

void createList(list &L) {
/*I.S. -
 F.S. terdefinisi suatu list L tanpa elemen list */
  L.first = NULL;
}

bool isEmpty(list L){
/*mengembalikan true apabila list L kosong, atau false apabila sebaliknya*/
    return L.first == NULL;
}

address newElmtList(infotype x) {
/* mengembalikan alamat dari suatu elemen list baru dengan info bernilai x */
    address p = new elmlist;
    p -> info = x;
    p->next = NULL;
    return p;
}

address findElmt(list L, infotype x){
/*mengembalikan alamat elemen list dengan info x apabila ditemukan, atau NIL untuk kondisi*/
    address p;
    p = L.first;
    while (p != NULL and p->info != x) {
    p = p->next;
    }
    return p;
}

void printList(list L){
/*I.S. terdefinisi suatu list L, dan mungkin kosong
 F.S. menampilkan info setiap elemen yang ada di dalam list L*/
    address p;
    p = L.first;
    while (p!= NULL) {
        cout << p->info << " ";
        p = p->next;
    }
    cout << endl;
 }
void insertFirst(list &L, address p){
/*I.S. terdefinisi suatu list L dan mungkin kosong, serta sebuah pointer p yang berisi alamat elemen baru
 F.S. menambahkan elemen baru yang ditunjuk oleh p sebagai elemen pertama dari list L*/
    if (isEmpty(L)) {
        L.first = p;
    } else {
    p->next = L.first;
    L.first = p;
    }
}
void deleteFirst(list &L, address &p) {
/*I.S. terdefinisi list L dan mungkin kosong
 F.S. p berisi alamat elemen pertama dari list L, dan elemen tersebut dihapus dari list L*/
    if (isEmpty(L)) {
    p = NULL;
    cout <<"Listnya kosong om!";
    } else if (L.first->next == NULL) {
    p = L.first;
    L.first = NULL;
    } else {
    p = L.first ;
    L.first = p->next;
    p->next = NULL;
    }
 }




















 void createList(List &L) {
    L.First = NULL

 }


void createNewElmntList (infotype x, address p) {
    allocate(p);
    p -> next = nullptr;
    p -> info = x;
}

void insertFirst(List &L, address p) {
    if empty(L) {
        L.first = p
    }else {
        p -> next = L.first
        L.first = p
    }
}

void delteFirst(List &L, address p) {
    if empty(L) {
        cout << "kosong bro!" << endl;

    }else {

    }
}

void insertLast(List &L, address p) {
    address q
    if empty(L) {
        L.first = p
    }else {
        while q != null {
            q = q -> next
        }
        q -> next = p
    }
}

void deleteLast(List &L, address p) {
    address q
    if isEmpty(L) {
        print(list kosong)
    }else if L.FIrst -> next == NULL {
        p = L.FIrst
        L.FIrst = NULL
    }else {
        while .
        
    }
}