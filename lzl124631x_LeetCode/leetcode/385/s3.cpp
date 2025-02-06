#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// OJ: https://leetcode.com/problems/mini-parser/
// Author: github.com/lzl124631x
// Time: O(N)
// Space: O(H) where H is the maximum depth of the output
// Ref: https://discuss.leetcode.com/topic/54258/python-c-solutions
class Solution {
public:
    NestedInteger deserialize(string s) {
        istringstream in(s);
        return deserialize(in);
    }
private:
    NestedInteger deserialize(istringstream &in) {
        int number;
        if (in >> number)
            return NestedInteger(number);
        in.clear();
        in.get();
        NestedInteger list;
        while (in.peek() != ']') {
            list.add(deserialize(in));
            if (in.peek() == ',')
                in.get();
        }
        in.get();
        return list;
    }
};