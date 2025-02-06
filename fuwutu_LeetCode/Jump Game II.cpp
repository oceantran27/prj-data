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
    int jump(int A[], int n)
    {
        int step = 0;
        int from = 0;
        int max_jump = 0;
        while (max_jump < n - 1)
        {
            ++step;
            int new_max_jump = max_jump;
            while (from <= max_jump)
            {
                int to = from + A[from];
                if (to > new_max_jump)
                {
                    new_max_jump = to;
                }
                ++from;
            }
            max_jump = new_max_jump;
        }
        
        return step;
    }
};
