#include <stdio.h>

int main(){

    long n;
    int method;
    scanf("%ld", &n);
    scanf("%d", &method);
    if(n >= 6) {
        printf("Love is open door\n");
        return 0;
    }
    
    for(int i = 0; i < n - 1; i++){
        if(method == 0) method = 1;
        else method = 0;
        printf("%d\n", method);
    }

    return 0;
}