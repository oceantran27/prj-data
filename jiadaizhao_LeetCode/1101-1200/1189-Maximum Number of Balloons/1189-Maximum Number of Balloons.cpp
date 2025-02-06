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
    int maxNumberOfBalloons(string text) {
        vector<int> table(26);
        for (char c : text) {
            ++table[c - 'a'];
        }
        
        table['l' - 'a'] /= 2;
        table['o' - 'a'] /= 2;
        return min({table['b' - 'a'], table['a' - 'a'], table['l' - 'a'], table['o' - 'a'], table['n' - 'a']});
    }
};
