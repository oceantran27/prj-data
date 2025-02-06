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
    string defangIPaddr(string address) {
        string result;
        for (char c : address) {
            if (c == '.') {
                result += "[.]";
            }
            else {
                result += c;
            }
        }

        return result;
    }
};
