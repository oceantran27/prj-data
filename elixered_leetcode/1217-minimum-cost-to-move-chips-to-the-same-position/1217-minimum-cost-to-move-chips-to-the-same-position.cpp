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
    int minCostToMoveChips(vector<int>& position) {
        int odds = 0, evens = 0;
        for(auto it:position)
        {
            it%2==0?evens++:odds++;
        }
        return min(evens,odds);
    }
};