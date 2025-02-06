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
    int maximum69Number (int num) {
        string s = to_string(num);
        int index = s.find('6');
        if (index != -1) {
            s[index] = '9';
            return stoi(s);
        }
        return num;
    }
};
