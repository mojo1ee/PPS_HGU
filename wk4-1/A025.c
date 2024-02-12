#include <stdio.h>
#include <stdbool.h>

bool isPowerOfFour(int n){
    bool result = true;
    
    if(n < 1) return false;
    if(n == 1 || n == 4) return true; 
    
    do{
        if(n % 4 != 0) return false;
        n /= 4;
    }
    while(n != 4);

    return result;
}


// bool isPowerOfFour(int n){
//     bool result = true;
    
//     if(n <= 0) return false;
//     if (n == 1) return true;

//     int num = n;
//     do{
//         if(num % 4 != 0) return false; 
//         num /= 4;
//     }while(num != 1);

//     return result;
// }