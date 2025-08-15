#include "DLL.h"
#include <iostream>

using namespace std;

int main()
{
    List L, L1, L2, L3;
    infotype x;
    bool tes_isEmpty, tes_findLagu;
    address p, prec;
    string judul;

    tes_isEmpty = isEmpty_103012300006(L);

    createNewElmt_103012300006(x);

    insertFirst_103012300006(L, p);

    insertAfter_103012300006(L,prec,p);

    insertLast_103012300006(L, p);

    deleteFirst_103012300006(L, p);

    deleteAfter_103012300006(L, prec, p);

    deleteLast_103012300006(L, p);

    concat_103012300006(L1, L2, L3);

    tes_findLagu = findLagu_103012300006(judul, L);

    removeLagu_103012300006(judul, L);
}
