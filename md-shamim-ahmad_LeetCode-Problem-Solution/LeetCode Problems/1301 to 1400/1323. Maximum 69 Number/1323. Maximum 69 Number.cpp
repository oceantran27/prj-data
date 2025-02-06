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
    int maximum69Number(int num) {
        string str = to_string(num);
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '6') {
                str[i] = '9';
                break;
            }
        }
        return stoi(str);
    }
};