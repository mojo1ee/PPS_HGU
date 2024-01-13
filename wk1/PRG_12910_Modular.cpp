//https://school.programmers.co.kr/learn/courses/30/lessons/12910

#include <string>
#include <vector>
#include <bits/stdc++.h> //might need to manually include depending on the system

using namespace std;


vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    
    for(auto i = arr.begin(); i != arr.end(); i++){
        if(*i % divisor == 0){
            answer.push_back(*i);
        }
    }
    
    if(answer.empty()){
        answer.push_back(-1);
        return answer;
    }
    
    sort(answer.begin(), answer.end());
    
    
    return answer;
}