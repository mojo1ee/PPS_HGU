#include <iostream>
#include <string>

using namespace std;

int solution(string s) {
    int answer = 9999999;
    int count = 1;
    string str;
    string temp = "";
    
    if (s.length() == 1) {
        return 1;
    }
    
    for (int i = 1; i <= s.length() / 2; i++) {
        str = s.substr(0, i);
        for (int j = i; j <= s.length(); j += i) {
            if (s.substr(j, i).compare(str) == 0) {
                count++;
            }
            else {
                if (count > 1) {
                    temp += to_string(count) + str;
                    str = s.substr(j, i);
                }
                else {
                    temp += str;
                    str = s.substr(j, i);
                }
                count = 1;
            }
        }
        temp += str;
        if (answer > temp.length()) answer = temp.length();
        temp.clear();
    }
    
    return answer;
}
