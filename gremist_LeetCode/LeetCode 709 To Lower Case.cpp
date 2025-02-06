#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 709 To Lower Case.cpp

class Solution {
public:
    string toLowerCase(string str) {
        for (char &ch : str) {
            if (isupper(ch)) {
                ch += 'a' - 'A';
            }
        }
        return str;
    }
};