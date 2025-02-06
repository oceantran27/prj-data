#include <bits/stdc++.h>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
/// Source : https://leetcode-cn.com/problems/zi-fu-chuan-de-pai-lie-lcof/
/// Author : liuyubobobo
/// Time   : 2021-06-21

#include <iostream>
#include <vector>

using namespace std;


/// Permutation
/// Time Complexity: O(n!)
/// Space Complexity(n)
class Solution {
public:
    vector<string> permutation(string s) {

        sort(s.begin(), s.end());
        vector<string> res;
        do{
            res.push_back(s);
        }while(next_permutation(s.begin(), s.end()));
        return res;
    }

};


int main() {

    return 0;
}
