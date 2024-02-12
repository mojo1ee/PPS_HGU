#include <stdio.h>
#include <stdbool.h>

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
  
        // If no two elements were swapped by inner loop,
        // then break
        if (swapped == false)
            break;
    }
}

int findContentChildren(int* g, int gSize, int* s, int sSize){
    //sort cookie size in non decreasing order 
    //traverse through greed factor array 

    bubbleSort(s, sSize);
    int count = 0;
    for(int i = 0; i < gSize; i++){
        for(int j = 0; j < sSize; j++){
            if(g[i] <= s[j]) {
                count++;
                s[j] = -1;
                break;
            }
        }
    }

    return count;       
}