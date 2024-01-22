#include <stdio.h>

int main(){
    int N, count = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++){
        count++;
        for (int j = 0; j < count; j++){
            printf("*");
        }
        printf("\n");
    }
}