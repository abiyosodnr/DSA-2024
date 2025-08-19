#ifndef QUEUE_VAKSINASI_H_INCLUDED
#define QUEUE_VAKSINASI_H_INCLUDED
#include <iostream>
#define head(Q) Q.head
#define taial(Q) Q.tail
#define next(P) P -> next
#define info(P) P -> info
using namespace std;
struct infotype {
    string nama, pekerjaan;
    int waktu_daftar, usia, nomor_antrean;
    bool kondisi_darurat, prioritas;
};
struct ElemQ {
    infotype info;
    ElemQ *next;
};
struct Queue {
    ElemQ *head;
    ElemQ *tail;
};
void createQueue_103012300006(Queue &Q);
bool isEmpty_103012300006(Queue Q);
ElemQ* createElemQueue_103012300006(string nama, int usia, string pekerjaan, int nomor_antrean);
void enqueue_103012300006(Queue &Q, ElemQ *P);
void dequeue_103012300006(Queue &Q, ElemQ &P);
ElemQ* front_10301230006(Queue Q):
ElemQ* back_10301230006(Queue Q);
int size_103012300006(Queue Q);
void printInfo_103012300006(Queue Q);
void serveQueue_103012300006(Queue& Q);
void reassigniQueue_103012300006(Queue& Q);
void checkWaitingTime_103012300006(Queue& Q, int waktu_sekarang);
void emergencyHandle_103012300006(Queue& Q, int nomor_antrean);
void updatePriority_103012300006(Queue& Q);
ElemQ* findAndRemove_103012300006(Queue&, int nomor_antrean);
#endif // QUEUE_VAKSINASI_H_INCLUDED
