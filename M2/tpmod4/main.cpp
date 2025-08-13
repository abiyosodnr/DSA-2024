#include "list.h"
#include <iostream>

using namespace std;

int main()
{
    List L;
    createList(L);
    int a, b, c;

    cout << "Masukkan digit NIM pertama: ";
    cin >> a;
    address NIM1 = allocate(a);
    insertFirst(L, NIM1);

    cout << "Masukkan digit NIM kedua: ";
    cin >> b;
    address NIM2 = allocate(b);
    insertFirst(L, NIM2);

    cout << "Masukkan digit NIM ketiga: ";
    cin >> c;
    address NIM3 = allocate(c);
    insertFirst(L, NIM3);

    printinfo(L);

    return 0;
}
