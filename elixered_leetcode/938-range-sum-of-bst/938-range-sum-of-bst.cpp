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
    int rangeSumBST(TreeNode* root, int L, int H) {
        if(!root) return 0;
        int ans = root -> val >= L && root -> val <= H ? root -> val : 0;
        if(root -> val > L) ans += rangeSumBST(root -> left, L, H);
        if(root -> val < H) ans += rangeSumBST(root -> right, L, H);
        return ans;
    }
};