#include <stdio.h>
#include <stdlib.h>

int main(){

    int N, T, C = 0;
    scanf("%d", &N);
    int* arr = (int*) malloc(sizeof(int) * N);
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &T);
    for(int i = 0; i < N; i++){
        if(arr[i] == T) C++;
    }
    printf("%d\n", C);
    free(arr);

    return 0;
}