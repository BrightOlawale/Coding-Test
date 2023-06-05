#if !defined(__FIBBO_H_)
#define __FIBBO_H_

#include <stdio.h>
#include <stdlib.h>

typedef enum TypeTag
{
    ADD,
    SUB,
    MUL,
    DIV,
    FIBO
} TypeTag;

typedef struct Node
{
    int result;
    TypeTag type;
} Node;

void initMemoizer(int);

typedef Node* (*opFunc)(int, int);
opFunc makeFunc(TypeTag type);
Node *additionFunc(int, int);
Node *subtractionFunc(void *, void *);
Node *multiplicationFunc(int, int);
Node *divisionFunc(int, int);
int fibbonaciFunc(int, int[]);
void calc(Node *calcNode);

#endif // __FIBBO_H_
