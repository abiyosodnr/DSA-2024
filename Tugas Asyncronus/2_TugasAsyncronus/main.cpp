#include "big_int.h"

using namespace std;

int main()
{
    int bil1, bil2;
    DLL L1, L2, L3;
    createList(L1);
    createList(L2);
    cin >> bil1;
    insertList(L1,bil1);
    cin >> bil2;
    insertList(L2,bil2);
    penjumlahan(L1,L2,L3);
    printList(L3);
}
