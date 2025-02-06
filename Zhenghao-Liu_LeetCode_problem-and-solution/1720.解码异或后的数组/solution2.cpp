#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
 * a^b=c b^c=a
 */
class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans{first};
        for (int i:encoded) {
            ans.push_back(i^ans.back());
        }
        return ans;
    }
};
