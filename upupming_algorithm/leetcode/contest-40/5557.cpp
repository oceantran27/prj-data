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
    int maxRepeating(string sequence, string word) {
        string s = "";
        int i = 0;
        while (true) {
            if (sequence.find(s) != string::npos) {
                s += word;
                i++;
            } else {
                break;
            }
        }
        return i - 1;
    }
};