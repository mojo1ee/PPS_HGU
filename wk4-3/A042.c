#include <stdio.h>
#include <stdbool.h>

bool backspaceCompare(char* s, char* t) {
    int s_len = strlen(s);
    int t_len = strlen(t);
    int processString(char* str) {
        int i, stackIndex = 0;
        for (i = 0; i < strlen(str); i++) {
            if (str[i] != '#') {
                str[stackIndex++] = str[i];
            } 
            else if (stackIndex > 0) {
                stackIndex--;
            }
        }
        str[stackIndex] = '\0';
        return stackIndex;
    }
    int sIndex = processString(s);
    int tIndex = processString(t);
    if (sIndex != tIndex) {
        return false;
    }
    for (int i = 0; i < sIndex; i++) {
        if (s[i] != t[i]) {
            return false;
        }
    }
    return true;
}