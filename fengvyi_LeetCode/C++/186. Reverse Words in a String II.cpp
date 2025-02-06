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
    void reverseWords(vector<char>& str) {
        for(int i = 0; i < str.size(); i++){
            int j = i + 1;
            while(j < str.size() && str[j] != ' ') j++;
            int a = i, b = j - 1;
            while(a < b) swap(str[a++], str[b--]);
            i = j;
        }
        reverse(str.begin(), str.end());
    }
};
