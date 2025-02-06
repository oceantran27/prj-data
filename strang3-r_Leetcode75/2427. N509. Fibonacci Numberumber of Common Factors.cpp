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
    int fib(int n) {
        if(n == 1)
            return 1;
        
        int first = 0;
        int second = 1;
        int ans = 0;
        for(int i = 1; i < n; i++){
            ans = first + second;
            first = second;
            second = ans;
        }
        return ans;
    }
};
