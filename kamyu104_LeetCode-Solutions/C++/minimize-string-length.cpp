#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(n)
// Space: O(1)

// hash table
class Solution {
public:
    int minimizedStringLength(string s) {
        return size(unordered_set<char>(cbegin(s), cend(s)));
    }
};
