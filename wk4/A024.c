#include <stdio.h>

bool lemonadeChange(int* bills, int billsSize){
    //typedef enum change_ {FIVE, TEN, TWENTY} change;
    int change[2]= {0, 0};
    int temp;

    for(int i = 0; i < billsSize; i++){
        if(bills[i] == 5){
            change[0]++;
        }
        else if(bills[i] == 10){
            if(change[0] == 0){
                return false; 
            }
            change[0]--;
            change[1]++;
        }
        else if(bills[i] == 20){
            temp = 20;
            if(change[1] != 0) {
                change[1]--;
                temp -= 10;
            }
            if(((temp - 5) / 5) > change[0]) return false;
            change[0] -= ((temp - 5) / 5);
        }
    }
    return true;
}