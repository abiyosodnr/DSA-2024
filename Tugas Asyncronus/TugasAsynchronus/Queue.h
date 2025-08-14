#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <string>

using namespace std;

struct Infotype {
    string nama;
    int time;
};

typedef struct ElmQueue *address;

struct ElmQueue {
    Infotype info;
    address prev;
    address next;
};


struct Queue {
    address head;
    address tail;
};

void createQueue(Queue& Q);
address newElmtQueue(string nama, int time);
void enQueue(Queue& Q, address r);
void deQueue(Queue& Q, address& r);
void process(Queue& Q, int q);
bool isEmpty(Queue Q);
void printQueue(Queue Q);

#endif

