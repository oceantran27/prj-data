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
    vector<vector<int> > combinationSum(vector<int> &candidates, int target)
    {
        sort(candidates.begin(), candidates.end(), greater<int>());
        
        vector<vector<int>> result;
        vector<vector<int>> combination({{}});
        for (int n : candidates)
        {
            vector<vector<int>> temp;
            combination.swap(temp);
            
            for (auto x : temp)
            {
                int sum = accumulate(x.begin(), x.end(), 0);
                for (; sum < target; sum += n)
                {
                    combination.push_back(x);
                    x.push_back(n);
                }
                
                if (sum == target)
                {
                    result.push_back(x);
                }
            }
        }
        
        for (auto& x : result)
        {
            sort(x.begin(), x.end());
        }
        
        return result;
    }
};
