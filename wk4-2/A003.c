#include <stdio.h>

int* plusOne(int* digits, int digitsSize, int* returnSize){
    int carry = 1;
    for(int i = digitsSize - 1; i >= 0; i--){
        if(carry == 0) continue;
        digits[i]++;
        if(digits[i] == 10){
            digits[i] = 0;
            carry = 1;
        }
        else carry = 0;
    }
    
    int start;

    if(carry == 0) {
        *returnSize = digitsSize;
        start = 0;
    }
    else {
        *returnSize = digitsSize + 1;
        start = 1;
    }

    int* retArr = (int*) malloc(sizeof(int) * (*returnSize));

    int idx = 0;
    if(idx != start) retArr[0] = 1;
    for(int i = start; i < *returnSize; i++){
        retArr[i] = digits[idx];
        idx++;
    }

    return retArr;
}