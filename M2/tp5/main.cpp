#include "tp5.h"
#include <iostream>

using namespace std;

int main()
{
    List L;
    createList_103012300006(L);
    int pilihan;
    int bil;
    pilihan = 8;
    while (pilihan != 0) {
        cout << "======MENU=======" << endl;
        cout << "1. Menambah N data baru" << endl;
        cout << "2. Menampilkan semua data" << endl;
        cout << "3. Alamat list data terkecil" << endl;
        cout << "4. Menambahkan data pada list posisi tengah" << endl;
        cout << "0. Exit" << endl;
        cin >> pilihan;
        if (pilihan == 1) {
            cout << "Masukkan data ke List: ";
            cin >> bil;
            cout << endl;
            address posisi = allocate_103012300006(bil);
            insertLast_103012300006(L,posisi);
        }else if (pilihan == 2) {
            printList_103012300006(L);
        }else if (pilihan == 3) {
            cout << findMin_103012300006(L) << endl;
        }else if (pilihan == 4){
            int tengahInfo;
            cout << "Masukkan data untuk dimasukkandi tengah List: ";
            cin >> tengahInfo;
            cout << endl;
            insertMiddle_103012300006(L,tengahInfo);
        }
    }
}
