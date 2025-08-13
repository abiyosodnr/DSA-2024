#include "adt.h"

int parkirmotor(int wkt) {
    int i, hrg;
    i = 1;
    hrg = 0;
    if (wkt >= 1) {
        hrg = 2000;
        wkt = wkt - 1;
    }
    while (i <= wkt) {
        hrg = hrg + 1000;
        i = i + 1;
    }
    return hrg;

}

int parkirmobil(int wkt) {
    int i, hrg;
    i = 1;
    hrg = 0;
    if (wkt >= 1) {
        hrg = 4000;
        wkt = wkt - 1;
    }
    while (i <= wkt) {
        hrg = hrg + 2000;
        i = i + 1;
    }
    return hrg;
}


