//https://www.acmicpc.net/problem/2920

#include <stdio.h>

int main(){

    int n;
    int prev;
    int determinant = 0;

    for(int i = 0; i < 8; i++){
        scanf("%d", &n);
        if(i != 0){
            if((determinant == 0 | determinant == 1) &&n - prev >= 0){
                determinant = 1;
            }
            else if((determinant == 0 | determinant == -1) &&n - prev <= 0){
                determinant = -1;
            }
            else {
                printf("mixed\n");
                return 0; 
                }
        }
        prev = n;
    }

    if(determinant == -1){
        printf("descending\n");
    }
    else if(determinant == 1){
        printf("ascending\n");
    }

    return 0;
}