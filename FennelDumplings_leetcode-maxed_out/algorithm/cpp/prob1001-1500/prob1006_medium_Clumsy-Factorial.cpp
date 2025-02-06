#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// prob1006: Clumsy Factorial

/*
 * https://leetcode-cn.com/problems/clumsy-factorial/
 */

class Solution {
public:
    int clumsy(int N) {
        int left = N;
        int ans = get(left);
        left -= 3;
        while(left >= 1)
        {
            ans += left;
            --left;
            ans -= get(left);
            left -= 3;
        }
        return ans;
    }

private:
    int get(int N)
    {
        // N * (N - 1) / (N - 2)
        if(N == 1)
            return 1;
        if(N == 2)
            return 2;
        return N * (N - 1) / (N - 2);
    }
};
