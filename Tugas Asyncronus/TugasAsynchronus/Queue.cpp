#include "Queue.h"

using namespace std;

void createQueue(Queue& Q) {
    Q.head = NULL;
    Q.tail = NULL;
}

address newElmtQueue(string nama, int time) {
    address r = new ElmQueue;
    r->info.nama = nama;
    r->info.time = time;
    r->next = NULL;
    r->prev = NULL;
    return r;
}

void enQueue(Queue& Q, address r) {
    if (isEmpty(Q)) {
        Q.head = r;
        Q.tail = r;
    } else {
        r->prev = Q.tail;
        Q.tail->next = r;
        Q.tail = r;
    }
}

void deQueue(Queue& Q, address& r) {
    if (isEmpty(Q)) {
        cout << "Queue kosong!!!!" << endl;
        r = NULL;
    } else if (Q.head == Q.tail && Q.head != NULL) {
        r = Q.head;
        Q.head = NULL;
        Q.tail = NULL;
    } else {
        r = Q.head;
        Q.head = r->next;
        Q.head->prev = NULL;
        r->next = NULL;
    }
}

void process(Queue& Q, int q) {
    address p;
    while (!isEmpty(Q)) {
        deQueue(Q, p);
        p->info.time -= q;
        if (p->info.time > 0) {
            enQueue(Q, p);
        }
        printQueue(Q);
    }
    if (isEmpty(Q)) {
        cout << "Queue kosong!!" << endl;
    }
}

bool isEmpty(Queue Q) {
    return Q.head == NULL;
}

void printQueue(Queue Q) {
    address current = Q.head;
    while (current != NULL) {
        cout << current->info.nama << "(" << current->info.time << ")" << "->" << " ";
        current = current->next;
    }
    cout << endl;
}

