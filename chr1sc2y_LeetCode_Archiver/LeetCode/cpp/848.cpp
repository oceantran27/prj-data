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
    string shiftingLetters(string S, vector<int> &shifts) {
        vector<char> shift;
        int num = 'z' - 'a' + 1;
        for (int i = S.size() - 2; i >= 0; --i) {
            shifts[i] += shifts[i + 1];
            shifts[i] %= num;
        }
        for (int i = 0; i < S.size(); ++i) {
            int temp = S[i] + shifts[i];
            while (temp > 'z')
                temp -= num;
            shift.push_back(temp);
        }
        string ret(shift.begin(), shift.end());
        return ret;
    }
};