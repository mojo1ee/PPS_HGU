#include <stdio.h>
#include <stdbool.h>

bool lemonadeChange(int* bills, int billsSize){
    
    int billCount[3] = {0 ,0 ,0};

    for(int i = 0; i < billsSize; i++){
        if(bills[i] == 5) billCount[0]++;
        else if(bills[i] == 10){
            billCount[1]++;
            if(billCount[0] == 0) return false;
            billCount[0]--;
        }
        else if(bills[i] == 20){
            billCount[2]++;
            if(billCount[0] >= 1 && billCount[1] >= 1){
                billCount[0]--;
                billCount[1]--;
            }
            else if(billCount[0] >= 3){
                billCount[0] -= 3;
            }
            else return false;
        }
        //printf("billcount: %d %d %d\n", billCount[0], billCount[1], billCount[2]);
    }

    return true;
}


// bool lemonadeChange(int* bills, int billsSize){
//     //typedef enum change_ {FIVE, TEN, TWENTY} change;
//     int change[2]= {0, 0};
//     int temp;

//     for(int i = 0; i < billsSize; i++){
//         if(bills[i] == 5){
//             change[0]++;
//         }
//         else if(bills[i] == 10){
//             if(change[0] == 0){
//                 return false; 
//             }
//             change[0]--;
//             change[1]++;
//         }
//         else if(bills[i] == 20){
//             temp = 20;
//             if(change[1] != 0) {
//                 change[1]--;
//                 temp -= 10;
//             }
//             if(((temp - 5) / 5) > change[0]) return false;
//             change[0] -= ((temp - 5) / 5);
//         }
//     }
//     return true;
// }


