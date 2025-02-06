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
    vector<int> getRow(int rowIndex)
    {
        vector<int> result;
        for (int i = 0; i <= rowIndex; ++i)
        {
            for (int j = i - 1; j >= 1; --j)
            {
                result[j] += result[j-1];
            }
            result.push_back(1);
        }
        return result;
    }
};
