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
    
    int maxDepth(Node* root) {
        if(root == NULL) return 0;
        int depth = 0;
        for(auto child: root->children) depth = max(depth, maxDepth(child));
        return 1 + depth;
    }
};
