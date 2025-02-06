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
    string replaceSpaces(string S, int length) {
        string SS = "";
        for (int i = 0; i < length; i++) {
            char C = S[i];
            if (C == ' ') {
                SS += "%20";
            } else {
                SS += C;
            }
        }

        return SS;
    }
};