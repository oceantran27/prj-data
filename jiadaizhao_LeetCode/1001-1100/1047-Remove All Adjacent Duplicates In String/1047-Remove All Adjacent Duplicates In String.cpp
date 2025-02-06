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
    string removeDuplicates(string S) {
        string result;
        for (char c : S) {
            if (result.size() && c == result.back()) {
                result.pop_back();
            }
            else {
                result += c;
            }
        }

        return result;
    }
};
