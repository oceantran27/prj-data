#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    int game(vector<int>& guess, vector<int>& answer) {
        int ans = 0;
        int n = guess.size();
        for(int i = 0; i < n; ++i)
            if(guess[i] == answer[i])
                ++ans;
        return ans;
    }
};
