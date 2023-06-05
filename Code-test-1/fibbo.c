# include "fibbo.h"


Node *additionFunc(int val1, int val2){
    Node *newNode = malloc(sizeof(Node));

    val1 = val1 == NULL ? 0 : val1;
    val2 =  val2 == NULL ? 0 : val2;

    newNode->type = ADD;
    newNode->result = val1 + val2;
    return newNode;
}

Node *subtractionFunc(void *val1, void *val2){
    Node *newNode = malloc(sizeof(Node));

    if (val2 == NULL){
        val1 = ((Node *)val1)->result;
        val2 = 0;
        newNode->type = FIBO;
        newNode->result = val2 - val1;


        if (newNode->result < 0){
            newNode->result = 0;
            return newNode;
        }

        int n = newNode->result;
        int memoizer[n + 1];
        for (int idx = 0; idx <=n; idx++){
            memoizer[idx] = 0;
        }
        int fibAnswer = fibbonaciFunc(n, memoizer);
        newNode->result = fibAnswer;
        return newNode;        
    }

    val1 = (Node *)val1;
    val2 = (Node *)val2;

    newNode->type = SUB;
    newNode->result = ((Node *)val2)->result - ((Node *)val1)->result;
    return newNode;
}

Node *multiplicationFunc(int val1, int val2){
    Node *newNode = malloc(sizeof(Node));

    val1 = val1 == NULL ? 0 : val1;
    val2 =  val2 == NULL ? 0 : val2;

    newNode->type = MUL;
    newNode->result = val1 * val2;
    return newNode;
}

Node *divisionFunc(int val1, int val2){
    Node *newNode = malloc(sizeof(Node));

    if (val1 == NULL || val2 == NULL){
        newNode->type = DIV;
        newNode->result = 0;
        return newNode;
    }

    newNode->type = DIV;
    newNode->result =  val1 / val2;
    return newNode;
}


int fibbonaciFunc(int number, int memoArray[]){
    if (memoArray[number] != 0){
        return memoArray[number];
    }

    if (number ==2 || number == 3){
        memoArray[number] = 1;
    } else{
        memoArray[number] = fibbonaciFunc((number -1), memoArray) + fibbonaciFunc((number - 2), memoArray);
    }

    return memoArray[number];
}

opFunc makeFunc(TypeTag type){
    switch(type){
        case ADD:
            return additionFunc;
        case SUB:
            return subtractionFunc;
        case MUL:
            return multiplicationFunc;
        case DIV:
            return divisionFunc;
        default:
            return NULL;
    }
}

void calc(Node *calcNode){
    char *operation = calcNode->type == ADD ? "Addition" : calcNode->type == SUB ? "Subtraction" : calcNode->type == MUL ? "Multiplication" : calcNode->type == DIV ? "Division" : "Fibbonaci";

    printf("%s : %d\n", operation, calcNode->result);
}



