#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){

    int n,m;

    scanf("%d %d", &n, &m);

    char** pokemons;

    pokemons = (char**) malloc(sizeof(char*) * n);
    for(int i = 0; i < n; i++){
        pokemons[i] =  malloc (sizeof(char)* 21);
        scanf("%s", pokemons[i]);
    }

    char buffer[22];

    for(int i = 0; i < m; i++){
        scanf("%s", buffer);
        if(isdigit(buffer[0])){
            printf("%s\n", pokemons[atoi(buffer) -1]);
        }
        else{
            for(int i = 0; i < n; i++){
                if(strcmp(buffer, pokemons[i]) == 0){
                    printf("%d\n", i+1);
                    break;
                }
            }
        }
    }

    return 0;
}