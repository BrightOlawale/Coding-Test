#include <stdio.h>


int memoizerFunction(int n){
    static int memoizer[1000];

    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;

    if (memoizer[n] != 0) return memoizer[n];

    memoizer[n] = memoizerFunction(n - 3) + memoizerFunction(n - 2);

    return memoizer[n];
}

int main(){
    int n = 700;

    printf("The %dth number in the sequence is %d\n", n, memoizerFunction(n));
    return 0;
}