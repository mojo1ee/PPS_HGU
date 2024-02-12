#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
 
int isPresent(char* value, char* skill){
    int skill_len = strlen(skill);
    int answer = -1;
    for(int i = 0; i < skill_len; i++){
        if(value==skill[i]){
            answer = i;
            break;
        }
    }
    return answer;
}


int solution(char* skill, char* skill_trees[], size_t skill_trees_len) {
    int answer = skill_trees_len;
    int correctSkill = 0;
    int ans_flag = 0;
    
    for(int i=0;i<skill_trees_len;i++){
        correctSkill = 0;
        ans_flag = 0;
        for(int k = 0; k < strlen(skill_trees[i]); k++){
            
            if(skill_trees[i][k] == skill[correctSkill]){
                correctSkill++;
            }
            
            else{
                int check = isPresent(skill_trees[i][k], skill);
                
                if (check == -1){
                    continue;
                }
 
                else if (check != -1){
                    ans_flag = 1;
                    break;
                } 
            }
        }
        if(ans_flag==1){
            answer--;
        }
    }
    
    return answer;
}