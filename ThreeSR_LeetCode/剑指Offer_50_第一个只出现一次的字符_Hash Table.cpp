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
    char firstUniqChar(string s) {
        unordered_map<char, int> hashmap;
        for (char a : s) {
            hashmap[a]++;
        }
        char result = ' '; // 注意，C++中，char的输出，要用' '单引号！
        for (char b : s) {
            if (hashmap[b] == 1) {
                result = b;
                break;
            }
        }
        return result;
    }
};