// https://www.acmicpc.net/problem/4344
#include <stdio.h>

int main(){

    int c, n, score, total, count, len;
    int arr[1000];
    float avg;
    scanf("%d", &c);
    for(int i = 0; i < c; i++){
        scanf("%d", &n);
        total = 0;
        count = 0;
        for(int j = 0; j < n; j++){
            scanf("%d", &score);
            // 
            total += score;
        }
        avg = (float) total / n;
        // printf("%f\n", avg);
        for(int j = 0; j < n; j++){
            scanf("%d", &score);
            total += score;
        }

    }
    return 0;
}