#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    int input = x;
    int sum = 0;
    
    do{
        sum += (x % 10);
        x /= 10;
    }
    while(x != 0);
    
    if(input % sum != 0) return false;
    
    return true;
}