#include <stdio.h>

int main(){
    
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    if(a == b && a == c){
        printf("%d\n", 10000 + 1000 * a);
    }
    else if(a == b || a == c || b == c){
        //add conditions
        if(a == b) printf("%d\n", 1000 + 100 * a);
        else if (b == c) printf("%d\n", 1000 + 100 * b);
        else if (a == c) printf("%d\n", 1000 + 100 * c);
    }
    else{
        // largest x 100
        if(a > b && a > c) printf("%d\n", a * 100);
        else if (b > a && b > c) printf("%d\n", b * 100);
        else printf("%d\n", c * 100);
    }

    return 0;
}