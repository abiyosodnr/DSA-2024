#include "stack.h"

using namespace std;

void createStack_103012300006(stack &S) {
    Top(S) = 0;
}

bool isEmpty_103012300006(stack S) {
    bool kosong;
    if (Top(S) == 0) {
        kosong = true;
    }else {
        kosong = false;
    }
    return kosong;
}

bool isFull_103012300006(stack S) {
    bool penuh;
    if (Top(S) == 14) {
        penuh = true;
    }else {
        penuh = false;
    }
    return penuh;
}

void push_103012300006(stack &S, infotype x) {
    if (isFull_103012300006(S) == false) {
        Top(S) = Top(S) + 1;
        info(S)[Top(S)] = x;
    }
}

int pop_103012300006(stack &S) {
    infotype x;
    x = info(S)[Top(S)];
    Top(S) = Top(S) - 1;
    return x;
}

void printInfo_103012300006(stack S) {
    int i;
    for (i=Top(S);i>=0;i--) {
        cout << info(S)[i] << " ";
    }
}
