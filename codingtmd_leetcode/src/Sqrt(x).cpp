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
    int mySqrt(int x) {
        int start = 0, end;
        end = x / 2 < std::sqrt(INT_MAX) ?
              x / 2 + 1 : std::sqrt(INT_MAX);
        while (start <= end)
        {
            int mid = (start + end) / 2;
            int sqr = mid * mid;
            if (sqr == x)
            {
                return mid;
            }
            if (sqr < x)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return (start + end) / 2;
    }
};