#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size()-1;
        int cnt = 0;
        
        while(i>=0 && s[i]==' '){
            i--;
        }
        while(i>=0 && s[i]!=' '){
            cnt++;
            i--;
        }
        
        return cnt;
    }
};

int main(){

}
