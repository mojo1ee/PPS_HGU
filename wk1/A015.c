#include <stdio.h>
#include <math.h>

int main(){

    int n, sum = 0;
    for(int i = 0; i < 5; i++){
        scanf("%d", &n);
        sum += (pow(n, 2));
    }
    printf("%d\n", sum % 10);

    return 0;
}