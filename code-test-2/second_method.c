#include <stdio.h>


int dynamicProgram(int n){
    int memArray[n + 1];
    memArray[0] = 0;
    memArray[1] = 1;
    memArray[2] = 2;

    for (int idx = 3; idx <= n; idx++){
        memArray[idx] = memArray[idx - 3] + memArray[idx - 2];
    }

    return memArray[n];
}

int main(){
    int n = 700;

    printf("The %dth number in the sequence is %d\n", n, dynamicProgram(n));
    return 0;
}