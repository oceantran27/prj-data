#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include<vector>
#include<cmath>
#include<algorithm>
#include<iostream>
using namespace std;

class Solution {
public:
    int getSum(int a, int b) {
        return log(exp(a)*exp(b));
    }
};

// Test
int main()
{
    Solution sol;
    int a = 10;
    int b = -3;
    auto res = sol.getSum(a, b);
    cout << res << endl;
    
    return 0;
}