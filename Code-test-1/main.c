#include "fibbo.h"

int main()
{
    Node *add = (*makeFunc(ADD))(10, 6); 
    Node *mul = (*makeFunc(MUL))(5, 4); 
    Node *div = (*makeFunc(DIV))(5,20);
    Node *sub = (*makeFunc(SUB))(mul, add);
    Node *fibo = (*makeFunc(SUB))(sub, NULL);

    // New test cases
    Node *addTwo = (*makeFunc(ADD))(30, 18); 
    Node *mulTwo = (*makeFunc(MUL))(5, 4); 
    Node *divTwo = (*makeFunc(DIV))(20,5);
    Node *subTwo = (*makeFunc(SUB))(mulTwo, addTwo);
    Node *fiboTwo = (*makeFunc(SUB))(divTwo, NULL);

    // New test cases
    Node *addThree = (*makeFunc(ADD))(NULL, 13); 
    Node *mulThree = (*makeFunc(MUL))(5, NULL); 
    Node *divThree = (*makeFunc(DIV))(NULL, NULL);
    Node *subThree = (*makeFunc(SUB))(addThree, mulThree);
    Node *fiboThree = (*makeFunc(SUB))(subThree, NULL);

    printf("Test output for first functions\n");
    calc(add); 
    calc(mul);
    calc(div);
    calc(sub);
    calc(fibo);

    printf("\n");

    printf("Test output for second functions\n");
    calc(addTwo);
    calc(mulTwo);
    calc(divTwo);
    calc(subTwo);
    calc(fiboTwo);

    printf("\n");

    printf("Test output for third functions\n");
    calc(addThree);
    calc(mulThree);
    calc(divThree);
    calc(subThree);
    calc(fiboThree);

    free(add);
    free(mul);
    free(div);
    free(sub);
    free(fibo);
    free(addTwo);
    free(subTwo);
    free(mulTwo);
    free(divTwo);
    free(fiboTwo);
    free(addThree);
    free(subThree);
    free(mulThree);
    free(divThree);
    free(fiboThree);

    return 0;
}