#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// sizes_rows는 2차원 배열 sizes의 행 길이, sizes_cols는 2차원 배열 sizes의 열 길이입니다.
int solution(int** sizes, size_t sizes_rows, size_t sizes_cols) {
    int answer = 0;
    int biggest = 0; 
    int biggest_side;
    int biggest_multiplier = 0;
    
    for(int i = 0; i < sizes_rows; i++){
        if(sizes[i][0] > biggest){
            biggest = sizes[i][0];    
            biggest_side = 0;
        }
        if(sizes[i][1] > biggest){
            biggest = sizes[i][1];
            biggest_side = 1;
        }
    }
    
    int other_side = (biggest_side == 1) ? (0) : (1);
    
    for(int i = 0; i < sizes_rows; i++){
        if(sizes[i][biggest_side] < sizes[i][other_side]){
            swap(&sizes[i][biggest_side], &sizes[i][other_side]);
            
        }
        
        if(sizes[i][other_side] > biggest_multiplier){
            biggest_multiplier = sizes[i][other_side]; 
        }
    }
    
    answer = biggest * biggest_multiplier;
    
    return answer;
}