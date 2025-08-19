#include <iostream>
#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#define Top(S) (S).top
#define info(S) (S).info

using namespace std;

typedef char infotype;

struct stack {
    infotype info[14];
    int top;
};

void createStack_103012300006(stack &S);

bool isEmpty_103012300006(stack S);

bool isFull_103012300006(stack S);

void push_103012300006(stack &S, infotype x);

infotype pop_103012300006(stack &S);

void printInfo_103012300006(stack S);

#endif // STACK_H_INCLUDED
