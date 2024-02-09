#include <stdio.h>
#include <stdlib.h>

int cmpfunc1 (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
int cmpfunc2 (const void * a, const void * b) {
   return ( *(int*)b - *(int*)a );
}

int main(){

    int n;
    int answer = 0;

    scanf("%d", &n);

    int** arrAB = (int**)malloc(sizeof(int*) * 2);

    for(int i = 0; i < 2; i++){
        arrAB[i] = (int*)malloc(sizeof(int) * n);
        for(int j = 0; j < n; j++){
            scanf("%d", &arrAB[i][j]);
        }
    }

    qsort(arrAB[0], n, sizeof(int), cmpfunc1);
    qsort(arrAB[1], n, sizeof(int), cmpfunc2);

    for(int j = 0; j < n; j++){
        answer += (arrAB[0][j] * arrAB[1][j]);
    }

    printf("%d\n", answer);

    return 0;
}


// for(int i = 0; i < 2; i++){
        
    //     for(int j = 0; j < n; j++){
    //         printf("%d ", arrAB[i][j]);
    //     }
    //     printf("\n");
    // }