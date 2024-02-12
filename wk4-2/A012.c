#include <stdio.h>
#include <stdbool.h>

int countPrimes(int n){
    int answer = 0;
    int* seen = (int*) malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++){
        seen[i] = 0;
    }

    for(int num = 2; num < n; num++){
        if(seen[num]) continue;
        answer++;
        for(long mult = (long)num * num; mult < n; mult += num){
            seen[mult] = true;
        }
    }
    
    return answer;
}