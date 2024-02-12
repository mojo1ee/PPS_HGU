#include <stdio.h>
#include <stdbool.h>

bool halvesAreAlike(char* s) {
    int n = strlen(s);
    int ct = 0;
    for(int i = 0; i<n; i++) {
        if(*(s+i) < 97) *(s+i) += 32;
        if(4575140898685201&(1<<(*(s+i)-97))) ct += i<n/2?1:-1;
    }
    return !ct;
}