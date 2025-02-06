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
    string removeVowels(string S) {
        string result;
        for (char c : S) {
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
                result += c;
            }
        }
        return result;
    }
};
