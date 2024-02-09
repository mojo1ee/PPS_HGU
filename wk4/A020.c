#include <stdio.h>
#define NUM_STATION 4

int main(){

    int max = 0;
    int curPPL = 0;
    int out, in;

    for(int i = 0; i < NUM_STATION; i++){
        scanf("%d %d", &out, &in);
        curPPL += (in - out);
        if(curPPL > max) max = curPPL;
    }

    printf("%d\n", max);

    return 0;
}