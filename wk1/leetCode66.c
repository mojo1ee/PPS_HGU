/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int actualNum = 0;
    int multiplier =1;

    for(int i = digitsSize - 1; i >= 0 ; i--){
        actualNum += (digits[i] * multiplier); 
        multiplier *= 10; 
    }

    actualNum ++;
    printf("actual Num: %d\n", actualNum);
    int actualNum2 = actualNum;

    printf("actual Num2: %d\n", actualNum2);

    int retSize = 1; 
    int quotient;

    printf("break1\n");

    while(1){
        quotient = actualNum / 10;
        if(quotient == 0) break;
        retSize++;
        actualNum /= 10;
    }

    printf("break2\n");

    int divisor = 1;
    for(int j = 0; j < retSize; j++){
        divisor *= 10;
    }

    printf("break3\n");
    printf("retSize: %d\n", retSize);

    int* returnArr;
    returnArr = (int*) malloc(retSize * sizeof(int));

    printf("break4\n");
    
    for(int j = 0; j < returnSize; j++){
        returnArr[j] = actualNum2 / divisor;
        actualNum2 = actualNum2 % divisor;
        divisor /= 10;
    }

    printf("break5\n");

    *returnSize = retSize;

    printf("break6\n");

    return returnArr;

}