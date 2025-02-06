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
    int addDigits(int num) {
        return helper(to_string(num));
    }
    int helper(string num)
    {
        if (num.size()==1)
            return stoi(num);
        int result=0;
        for (char &i:num)
            result=result+i-'0';
        return helper(to_string(result));
    }
};
