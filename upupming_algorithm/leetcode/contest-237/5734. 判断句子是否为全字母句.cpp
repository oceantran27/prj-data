#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> s;
        for (auto& ch : sentence) {
            s.insert(ch);
        }
        return s.size() == 26;
    }
};
