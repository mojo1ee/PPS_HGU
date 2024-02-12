char* addBinary(char* a, char* b){
    int i, j, k, c = 0;
    char *result;
    
    i = strlen(a);
    j = strlen(b);
    k = i > j ? i : j;
    k += 2;

    result = malloc(k * sizeof(char));
    
    i--;
    j--;
    result[--k] = '\0';
    
    while (--k >= 0) {
        c += i >= 0 ? a[i--] - '0': 0;
        c += j >= 0 ? b[j--] - '0': 0;
        
        result[k] = c % 2 + '0';
        c /= 2;
    }
    
    if (result[0] == '0')
       memmove(result, result + 1, strlen(result) * sizeof(char));
    
    return result;
}