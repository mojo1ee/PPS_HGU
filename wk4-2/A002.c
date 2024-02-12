#include <stdio.h>

int** generate(int numRows, int* returnSize, int** returnColumnSizes){
    int** returnArr = (int**)malloc(sizeof(int*) * numRows);
    *returnSize = numRows; 
    *returnColumnSizes= (int*) malloc (numRows * sizeof(int));

    for(int i = 1; i <= numRows; i++){
        (*returnColumnSizes)[i - 1] = i;
        returnArr[i - 1] = (int*) malloc (i * sizeof(int));
        
        for(int j = 0; j < i; j++){
            if(j == 0 || j == i - 1) {
                returnArr[i - 1][j] = 1;
                continue;
            }
            returnArr[i - 1][j] = returnArr[i - 2][j - 1] + returnArr[i - 2][j];
        }
    }

    return returnArr;
}