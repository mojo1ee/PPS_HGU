#include<stdio.h>
 
int main(int argc, const char * argv[]) {
    char String[100];

    scanf("%s",String);

    for(int i = 0; i < 101; i++){
        printf("%c", String[i]);
        if(i % 10 == 0 && i != 0)
            printf("\n");
    }

    return 0;
}