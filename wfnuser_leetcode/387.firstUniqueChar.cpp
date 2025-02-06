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
    int firstUniqChar(string s) {
        int size = s.size();
        unordered_map<char, int> m;

        for (int i = 0; i < size; i++) {
            m[s[i]]++;
        }

        for (int i = 0; i < size; i++) {
            if (m[s[i]] == 1) return i;
        }

        return -1;

    }
};