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
    int maxDepth(Node *root) {
        if (!root)
            return 0;
        int maxLen = 1;
        for (auto child : root->children)
            maxLen = max(maxLen, 1 + maxDepth(child));
        return maxLen;
    }
};
