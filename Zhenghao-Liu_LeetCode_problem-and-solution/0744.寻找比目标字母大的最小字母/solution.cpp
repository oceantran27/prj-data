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
    char nextGreatestLetter(vector<char>& letters, char target) {
        vector<char>::iterator it=upper_bound(letters.begin(),letters.end(),target);
        return it==letters.end() ? letters.at(0) : *it;
    }
};
