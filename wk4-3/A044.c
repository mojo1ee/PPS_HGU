#include <stdbool.h>

bool checkRecord(char *s) {
    int absum = 0, lasum = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'A') {
            absum++;
            if (absum >= 2)
                return false;
        }
        if (s[i] == 'L') {
            lasum++;
            if (lasum >= 3)
                return false;
        } else {
            lasum = 0; 
        }
    }
    return true;
}