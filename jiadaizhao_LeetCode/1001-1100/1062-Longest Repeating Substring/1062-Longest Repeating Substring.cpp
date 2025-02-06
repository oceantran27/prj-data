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
    int longestRepeatingSubstring(string S) {
        int low = 0, high = S.size();
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (search(S, mid) != -1) {
                low = mid + 1;
            }
            else {
                high = mid;
            }
        }
        
        return low - 1;
    }
    
private:
    int search(string S, int L) {
        unordered_set<string> visited;
        for (int i = 0; i <= S.size() - L; ++i) {
            string s = S.substr(i, L);
            if (visited.count(s)) {
                return i;
            }
            visited.insert(s);
        }
        return -1;
    }
};
