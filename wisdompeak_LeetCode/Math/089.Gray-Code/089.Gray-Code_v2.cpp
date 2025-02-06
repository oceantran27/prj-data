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
    vector<int> grayCode(int n) 
    {
        vector<int>results(1<<n);
        for (int i=0; i<(1<<n); i++)
            results[i] = (i^(i>>1));
        return results;
    }
};
