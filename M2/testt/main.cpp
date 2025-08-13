#include <iostream>
#include "adt.h"

using namespace std;

int main() {
    string jenis;
    int waktu;
    cin >> jenis;
    cin >> waktu;
    if (jenis == "Motor") {
        cout << parkirmotor(waktu) << endl;
    }else if (jenis == "Mobil") {
        cout << parkirmobil(waktu) << endl;
    }
    return 0;
}

