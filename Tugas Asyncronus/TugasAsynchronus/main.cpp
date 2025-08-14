#include "Queue.h"

using namespace std;

int main() {
    Queue Q;
    createQueue(Q);

    enQueue(Q, newElmtQueue("Process1", 10));
    enQueue(Q, newElmtQueue("Process2", 15));
    enQueue(Q, newElmtQueue("Process3", 5));
    cout << "Queue sebelum masuk ke process:" << " ";
    cout << endl;
    printQueue(Q);
    cout << endl;

    int quantum = 3;
    cout << "Masuk ke process: ";
    cout << endl;
    process(Q, quantum);

    return 0;
}

