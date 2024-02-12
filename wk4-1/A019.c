#include <stdio.h>

int main(){

    int a, b ,c;

    scanf("%d %d %d", &a, &b, &c);

    long long answer = 0;
    answer = a * b * c;

    int digits[10];
    for(int i = 0; i < 10; i++){
        digits[i] = 0;
    }

    while(answer != 0){
        digits[answer % 10]++;
        answer /= 10;
    }

    for(int i = 0; i < 10; i++){
        printf("%d\n", digits[i]);
    }

    return 0;
}