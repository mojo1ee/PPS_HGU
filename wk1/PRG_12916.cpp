// The Number of p and y in String
// https://school.programmers.co.kr/learn/courses/30/lessons/12916

#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int countP = 0;
    int countY = 0;
    char c;
    
    for(int i = 0; i < s.length(); i++){
        
        c = s[i];
        if(c == 'p' || c == 'P') countP++;
        else if(c == 'y' || c == 'Y') countY++;
    }
    
    if(countP != countY) return false;

    return answer;
}