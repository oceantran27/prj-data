#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    string decodeString(string s) {
        int i = 0;
        return helper(s, i);
    }
    
private:
    string helper(string& s, int& i) {
        string result = "";
        while (i < s.size() && s[i] != ']') {
            if (isdigit(s[i])) {
                int num = 0;
                while (i < s.size() && isdigit(s[i])) {
                    num = num * 10 + (s[i] - '0');
                    ++i;
                }
                
                ++i;
                string temp = helper(s, i);
                ++i;
                while (num--) {
                    result += temp;
                }
            }
            else {
                result += s[i++];
            }
        }
        
        return result;
    }
};
