#include <stdio.h>


int recursiveFunction(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;

    return recursiveFunction(n - 3) + recursiveFunction(n - 2);
}

int main(){
    int n = 50;

    printf("The %dth number in the sequence is %d\n", n, recursiveFunction(n));
    return 0;
}