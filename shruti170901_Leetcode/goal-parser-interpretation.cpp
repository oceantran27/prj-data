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

class Solution {
public:
    string interpret(string command) {
        string result;
        for (int i = 0; i < size(command);) {
            if (command[i] == 'G') {
                result += 'G', ++i;
            } else if (command[i + 1] == ')') {
                result += 'o', i += 2;
            } else {
                result += "al", i += 4;
            }
        }
        return result;
    }
};
