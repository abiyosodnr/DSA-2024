#include "queue_vaksinasi.h"

void createQueue_103012300006(Queue &Q) {
    head(Q) = nullptr;
    tail(Q) = nullptr;
}

bool isEmpty_103012300006(Queue Q) {
    return head(Q) == nullptr;
}

ElemQ* createElemQueue_103012300006(string nama, int usia, string pekerjaan, int nomor_antrean) {
    ElemQ *P = new ElemQ;
    info(P).nama = nama;
    info(P).usia = usia;
    info(P).pekerjaan = pekerjaan;
    info(P).nomor_antrean = nomor_antrean;
    info(P).kondisi_darurat = false;
    info(P).prioritas = false;
    next(P) = nullptr;
    return P;
}

void enqueue_103012300006(Queue &Q, ElemQ *P) {
    if (isEmpty_103012300006(Q)) {
        head(Q) = P;
        tail(Q) = P;
    } else {
        next(tail(Q)) = P;
        tail(Q) = P;
    }
}

void dequeue_103012300006(Queue &Q, ElemQ &P) {
    if (!isEmpty_103012300006(Q)) {
        ElemQ *temp = head(Q);
        P = *temp;
        head(Q) = next(head(Q));
        delete temp;
        if (head(Q) == nullptr) {
            tail(Q) = nullptr;
        }
    }
}

ElemQ* front_10301230006(Queue Q) {
    return head(Q);
}

ElemQ* back_10301230006(Queue Q) {
    return tail(Q);
}

int size_103012300006(Queue Q) {
    int count = 0;
    ElemQ *P = head(Q);
    while (P != nullptr) {
        count++;
        P = next(P);
    }
    return count;
}

void printInfo_103012300006(Queue Q) {
    ElemQ *P = head(Q);
    while (P != nullptr) {
        cout << "Nama: " << info(P).nama << ", Usia: " << info(P).usia
             << ", Pekerjaan: " << info(P).pekerjaan << ", Nomor Antrean: " << info(P).nomor_antrean
             << ", Kondisi Darurat: " << (info(P).kondisi_darurat ? "Ya" : "Tidak")
             << ", Prioritas: " << (info(P).prioritas ? "Ya" : "Tidak") << endl;
        P = next(P);
    }
}

void serveQueue_103012300006(Queue& Q) {
    ElemQ temp;
    if (!isEmpty_103012300006(Q)) {
        dequeue_103012300006(Q, temp);
        cout << "Melayani " << info(&temp).nama << endl;
    } else {
        cout << "Queue kosong" << endl;
    }
}

void reassigniQueue_103012300006(Queue& Q) {
}

void checkWaitingTime_103012300006(Queue& Q, int waktu_sekarang) {
    ElemQ *P = head(Q);
    while (P != nullptr) {
        int waktu_tunggu = waktu_sekarang - info(P).waktu_daftar;
        cout << "Nama: " << info(P).nama << ", Waktu Tunggu: " << waktu_tunggu << " menit" << endl;
        P = next(P);
    }
}

void emergencyHandle_103012300006(Queue& Q, int nomor_antrean) {
    ElemQ *P = head(Q);
    while (P != nullptr) {
        if (info(P).nomor_antrean == nomor_antrean) {
            info(P).kondisi_darurat = true;
            info(P).prioritas = true;
            cout << "Kondisi darurat ditandai untuk " << info(P).nama << endl;
            break;
        }
        P = next(P);
    }
}

void updatePriority_103012300006(Queue& Q) {
    ElemQ *P = head(Q);
    while (P != nullptr) {
        if (info(P).usia > 60 || info(P).kondisi_darurat) {
            info(P).prioritas = true;
        }
        P = next(P);
    }
}

ElemQ* findAndRemove_103012300006(Queue& Q, int nomor_antrean) {
    ElemQ *P = head(Q), *prev = nullptr;
    while (P != nullptr && info(P).nomor_antrean != nomor_antrean) {
        prev = P;
        P = next(P);
    }
    if (P == nullptr) return nullptr;

    if (P == head(Q)) {
        head(Q) = next(P);
    } else {
        next(prev) = next(P);
    }
    if (P == tail(Q)) {
        tail(Q) = prev;
    }
    next(P) = nullptr;
    return P;
}


