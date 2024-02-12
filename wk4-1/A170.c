#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, int money, int count) {
    long long answer = 0;
    long long total_fee = 0;
    
    for(int i = 0; i < count; i++){
        total_fee += (price * (i + 1));
    }
    
    if(total_fee < money) return 0;

    answer = total_fee - money ;
        
    return answer;
}