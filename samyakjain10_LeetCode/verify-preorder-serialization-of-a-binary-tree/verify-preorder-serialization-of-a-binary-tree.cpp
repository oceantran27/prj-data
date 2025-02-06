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

        bool isValidSerialization(string preorder){
            if (preorder.empty()) return true;
            istringstream in(preorder);
            string root = isValidSerialization(in);
            return !root.empty() && in.eof();
        }

    private:

        string isValidSerialization(istringstream &in){
            string node;
            getline(in, node, ',');
            if (node == "#" || node.empty()) return node;
            string left = isValidSerialization(in);
            string right = isValidSerialization(in);
            if (left.empty() || right.empty()) return "";
            return node;
        }
};