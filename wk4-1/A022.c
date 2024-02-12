#include <stdio.h>

int main(){

    int n, mins;
    int M = 0, Y = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &mins);
        Y += ((mins / 30) * 10) + 10 ;
        M += ((mins / 60) * 15) + 15 ;
    }

    if(Y > M){
        printf("M %d\n", M);
    }
    else if (M > Y){
        printf("Y %d\n", Y);
    }
    else{
        printf("Y M %d\n", Y);
    }

    return 0;
}