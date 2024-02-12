#include <stdio.h>

int main(){
    
    int n, cpu = 0, holes;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &holes);
        cpu += holes;
    }
    cpu -= (n - 1);

    printf("%d\n",cpu);

    return 0;
}