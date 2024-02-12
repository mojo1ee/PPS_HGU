#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int n) {
    int answer = 0;
    int curBottles = n;
    int numVoucher ;
        
    while(curBottles >= a) {
        numVoucher = curBottles / a ;
        curBottles %= a;
        answer += (numVoucher * b);
        curBottles += (numVoucher * b);
    }
    
    return answer;
}