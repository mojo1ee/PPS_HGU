#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b){
    int temp  = *a;
    *a = *b;
    *b = temp;
}

int main(){

    int n, m;
    int* baskets;

    scanf("%d %d", &n, &m);

    baskets = (int*) malloc(sizeof(int) * n);

    for(int i = 0; i < n; i++){
        baskets[i] = i + 1;
    }

    int a, b;

    for(int i = 0; i < m; i++){
        scanf("%d %d", &a, &b);
        swap(&baskets[a - 1], &baskets[b -1]);
    }

    for(int i = 0; i < n; i++){
        printf("%d\n", baskets[i]);
    }


    return 0;
}
