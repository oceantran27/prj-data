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
    string reverseString(string s) {
        //首位交换两字符
        int i = 0, j = s.size() - 1;
        while(i < j){
            swap(s[i], s[j]);
            i ++;
            j --;
        }
        return s;
    }
};