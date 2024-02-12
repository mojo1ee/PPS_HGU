#include <stdio.h>

int main(){

    int num;
    int digits[10];

    for(int i = 0; i < 10; i++){
        digits[i] = 0;
    }

    scanf("%d", &num);

    while(num != 0){
        digits[num % 10]++;
        num /= 10;
    }

    int max=0; 
    int count6_9 = digits[6] + digits[9];
    int sets69 = count6_9 / 2 + count6_9 % 2;
    digits[6] = sets69;
    for(int i = 0; i < 9; i++){
        if(digits[i] > max) max = digits[i];
    }

    printf("%d\n", max);

    return 0;
}