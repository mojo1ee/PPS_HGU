#include <iostream>
#include <string>

using namespace std;

class Solution {
    public:
        string removeOuterParentheses(string s) {
            string out;

        for(int d{0}; const auto & c : s)
            if((d += (c=='(') - (c==')')) + c!=')') out.push_back(c);

        return out;       
    }
};