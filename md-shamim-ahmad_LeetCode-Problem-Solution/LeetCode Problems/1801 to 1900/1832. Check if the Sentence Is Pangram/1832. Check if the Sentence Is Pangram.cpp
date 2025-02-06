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
    bool checkIfPangram(string sentence) {
        vector<int> alphabet(26);
        for (int i = 0; i < sentence.size(); i++) {
            alphabet[sentence[i] - 'a']++;
        }
        for (auto it: alphabet) {
            if (it == 0)
                return false;
        }
        return true;
    }
};