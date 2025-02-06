#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    long long minimumSteps(string s)
    {
        int n = s.length();
        long long ans = 0;
        int cnt = 0; // Tracks the number of black balls (1s)

        // Traverse through the string
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                // White ball encountered, add the number of black balls on its left
                ans += cnt;
            }
            else
            {
                // Black ball encountered, increment the black ball count
                cnt++;
            }
        }
        return ans;
    }
};
