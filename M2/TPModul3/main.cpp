#include <iostream>
#include "adt.h"

using namespace std;

int main()
{
    float radius, tinggi;
    float v;
    cout << "Masukkan jari-jari dan tinggi:";
    cin >> radius >> tinggi;
    v = volumeKerucut(radius, tinggi);
    cout << "Volume kerucut: " << v << endl;
}


