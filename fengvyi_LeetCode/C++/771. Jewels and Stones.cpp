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
    int numJewelsInStones(string J, string S) {
        int count = 0;
        unordered_set<char>s;
        for(char c: J) s.insert(c);
        for(char c: S) if(s.count(c)) count++;
        return count;
    }
};
