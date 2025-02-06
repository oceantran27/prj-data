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
        int ans = num % 9;
        if(ans == 0 && num > 0)
            ans = 9;
        return ans;
    }
};