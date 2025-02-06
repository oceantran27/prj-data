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
    string convertToTitle(int n) {
        //26进制
        string result;
        while(n)
        {
            //因为下标从1开始，所以n-1
            result = (char)((n-1) % 26 + 'A') + result;
            n = (n-1) / 26;
        }
        return result;
    }
};